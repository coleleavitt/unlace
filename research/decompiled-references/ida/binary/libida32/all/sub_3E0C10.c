__int64 __fastcall sub_3E0C10(_QWORD *a1, __int64 a2, unsigned int *a3, _BYTE *a4)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // r13d
  void *v9; // r12
  unsigned int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax

  v6 = a2;
  v7 = operator new(0x28u);
  v8 = *a3;
  v9 = (void *)v7;
  *(_DWORD *)(v7 + 32) = v8;
  *(_BYTE *)(v7 + 36) = *a4;
  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] )
    {
      v11 = a1[4];
      v6 = 0;
      if ( *(_DWORD *)(v11 + 32) < v8 )
        goto LABEL_6;
    }
LABEL_5:
    v6 = sub_3DAC80((__int64)a1, v8);
    goto LABEL_6;
  }
  v10 = *(_DWORD *)(a2 + 32);
  if ( v8 < v10 )
  {
    v11 = a1[3];
    if ( a2 == v11 )
      goto LABEL_6;
    v12 = std::_Rb_tree_decrement();
    v11 = v12;
    if ( *(_DWORD *)(v12 + 32) >= v8 )
      goto LABEL_5;
    if ( *(_QWORD *)(v12 + 24) )
    {
      v11 = a2;
      goto LABEL_6;
    }
    goto LABEL_23;
  }
  if ( v10 >= v8 )
    goto LABEL_14;
  v11 = a1[4];
  if ( a2 == v11 )
  {
LABEL_23:
    v6 = 0;
    goto LABEL_6;
  }
  v13 = std::_Rb_tree_increment();
  v11 = v13;
  if ( v8 >= *(_DWORD *)(v13 + 32) )
    goto LABEL_5;
  if ( !*(_QWORD *)(a2 + 24) )
  {
    if ( a2 )
      goto LABEL_7;
    goto LABEL_14;
  }
  v6 = v13;
LABEL_6:
  if ( v11 )
  {
LABEL_7:
    v6 = (__int64)v9;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v6;
  }
LABEL_14:
  if ( v9 )
    operator delete(v9, 0x28u);
  return v6;
}

