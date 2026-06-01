char *__fastcall sub_828880(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r13d
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  void *v11; // r15
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v17; // [rsp+8h] [rbp-B0h]
  __int64 v18[21]; // [rsp+10h] [rbp-A8h] BYREF

  v4 = *(_DWORD *)(a1 + 944);
  if ( v4 > 0x1FFFFFFE )
  {
    sub_A2E130(a1, a2, 2212, 0);
    return nullptr;
  }
  *(_DWORD *)(a1 + 944) = v4 + 1;
  v6 = sub_69F210(v4 + 1);
  *(_BYTE *)(a4 + 128) &= ~2u;
  *(_QWORD *)(a4 + 8) = v7;
  *(_QWORD *)a4 = v6;
  *(_QWORD *)(a4 + 16) = 0;
  v18[1] = v7;
  v18[0] = v6;
  v8 = sub_69F240(v18);
  *(_DWORD *)(a4 + 24) = 0;
  *(_WORD *)(a4 + 128) &= 0xFEu;
  *(_QWORD *)(a4 + 32) = 0;
  *(_QWORD *)(a4 + 40) = v8;
  *(_DWORD *)(a4 + 56) = 0;
  v18[2] = v8;
  v9 = operator new(0x68u);
  v10 = *(_QWORD *)(a1 + 912);
  *(_DWORD *)(v9 + 32) = v4 + 1;
  v11 = (void *)v9;
  *(_OWORD *)(v9 + 40) = 0;
  *(_OWORD *)(v9 + 56) = 0;
  *(_OWORD *)(v9 + 72) = 0;
  *(_OWORD *)(v9 + 88) = 0;
  if ( !v10 )
  {
    if ( a1 + 904 == *(_QWORD *)(a1 + 920) )
      goto LABEL_10;
    v14 = std::_Rb_tree_decrement();
    if ( *(_DWORD *)(v14 + 32) - 1 < v4 )
      goto LABEL_10;
LABEL_14:
    v17 = v14;
    operator delete(v11, 0x68u);
    v15 = (_QWORD *)v17;
    goto LABEL_11;
  }
  while ( 1 )
  {
    v13 = *(_DWORD *)(v10 + 32) - 1;
    if ( v4 < v13 )
      break;
    v12 = *(_QWORD *)(v10 + 24);
    if ( !v12 )
    {
      v14 = v10;
      goto LABEL_9;
    }
LABEL_5:
    v10 = v12;
  }
  v12 = *(_QWORD *)(v10 + 16);
  if ( v12 )
    goto LABEL_5;
  if ( *(_QWORD *)(a1 + 920) == v10 )
    goto LABEL_10;
  v14 = std::_Rb_tree_decrement();
  v13 = *(_DWORD *)(v14 + 32) - 1;
LABEL_9:
  if ( v13 >= v4 )
    goto LABEL_14;
LABEL_10:
  std::_Rb_tree_insert_and_rebalance();
  ++*(_QWORD *)(a1 + 936);
  v15 = v11;
LABEL_11:
  v15[12] = a2;
  return (char *)(v15 + 5);
}

