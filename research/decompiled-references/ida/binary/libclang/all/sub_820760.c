__int64 __fastcall sub_820760(_QWORD *a1, __int64 a2, const __m128i **a3)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  __m128i v6; // xmm0
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx

  v4 = a2;
  v5 = operator new(0x68u);
  v6 = _mm_loadu_si128(*a3);
  *(_BYTE *)(v5 + 52) &= ~1u;
  *(_DWORD *)(v5 + 48) = 0;
  *(__m128i *)(v5 + 32) = v6;
  if ( a1 + 1 == (_QWORD *)a2 )
  {
    if ( a1[5] )
    {
      v15 = a1[4];
      v16 = *(_QWORD *)(v5 + 32);
      if ( *(_QWORD *)(v15 + 32) < v16 || *(_QWORD *)(v15 + 32) == v16 && *(_DWORD *)(v15 + 40) < *(_DWORD *)(v5 + 40) )
        goto LABEL_5;
    }
    v4 = sub_820460((__int64)a1, *(_QWORD *)(v5 + 32), *(_DWORD *)(v5 + 40));
    goto LABEL_15;
  }
  v7 = *(_QWORD *)(v5 + 32);
  if ( v7 < *(_QWORD *)(a2 + 32) )
    goto LABEL_3;
  if ( v7 == *(_QWORD *)(a2 + 32) )
  {
    v13 = *(_DWORD *)(v5 + 40);
    v14 = *(_DWORD *)(a2 + 40);
    if ( v13 < v14 )
    {
LABEL_3:
      if ( a1[3] == a2 )
        goto LABEL_5;
      v8 = std::_Rb_tree_decrement();
      v9 = *(_QWORD *)(v8 + 32);
      if ( v9 < v7 || v7 == v9 && *(_DWORD *)(v8 + 40) < *(_DWORD *)(v5 + 40) )
        goto LABEL_5;
      goto LABEL_22;
    }
    if ( v14 >= v13 )
      goto LABEL_16;
  }
  if ( a1[4] == a2 )
    goto LABEL_5;
  v11 = std::_Rb_tree_increment();
  if ( v7 < *(_QWORD *)(v11 + 32) || v7 == *(_QWORD *)(v11 + 32) && *(_DWORD *)(v5 + 40) < *(_DWORD *)(v11 + 40) )
    goto LABEL_5;
LABEL_22:
  v4 = sub_820460((__int64)a1, v7, *(_DWORD *)(v5 + 40));
LABEL_15:
  if ( !v12 )
  {
LABEL_16:
    operator delete((void *)v5, 0x68u);
    return v4;
  }
LABEL_5:
  v4 = v5;
  std::_Rb_tree_insert_and_rebalance();
  ++a1[5];
  return v4;
}

