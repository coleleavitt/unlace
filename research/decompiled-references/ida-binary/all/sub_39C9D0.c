_QWORD *__fastcall sub_39C9D0(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rax
  __m128 v9; // xmm0
  __int64 v10; // rdx
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax
  _QWORD *v14; // rbp
  unsigned __int64 v15; // r15
  _QWORD *v16; // rdx
  __int64 v17; // rax
  _BOOL8 v18; // rdi
  _QWORD *v19; // r12
  __int64 v20; // rax
  __int64 v21; // rbp
  void *v22; // rdi

  v5 = operator new(0x70u);
  v6 = *(_QWORD *)a3;
  v7 = v5;
  *(_QWORD *)(v5 + 32) = *(_QWORD *)a3;
  v8 = *(_QWORD *)(a3 + 24);
  if ( v8 )
  {
    v9 = _mm_loadh_ps((const double *)(a3 + 32));
    *(_DWORD *)(v7 + 48) = *(_DWORD *)(a3 + 16);
    v10 = *(_QWORD *)(a3 + 40);
    *(__m128 *)(v7 + 56) = v9;
    *(_QWORD *)(v7 + 72) = v10;
    *(_QWORD *)(v8 + 8) = v7 + 48;
    v11 = *(_QWORD *)(a3 + 48);
    *(_QWORD *)(a3 + 24) = 0;
    v6 = *(_QWORD *)(v7 + 32);
    *(_QWORD *)(v7 + 80) = v11;
    *(_QWORD *)(a3 + 32) = a3 + 16;
    *(_QWORD *)(a3 + 40) = a3 + 16;
    *(_QWORD *)(a3 + 48) = 0;
  }
  else
  {
    *(_DWORD *)(v7 + 48) = 0;
    *(_QWORD *)(v7 + 56) = 0;
    *(_QWORD *)(v7 + 64) = v7 + 48;
    *(_QWORD *)(v7 + 72) = v7 + 48;
    *(_QWORD *)(v7 + 80) = 0;
  }
  v12 = _mm_loadu_si128((const __m128i *)(a3 + 56));
  v13 = *(_QWORD *)(a3 + 72);
  v14 = a2;
  *(_QWORD *)(v7 + 104) = v13;
  *(__m128i *)(v7 + 88) = v12;
  if ( a1 + 1 == a2 )
  {
    if ( a1[5] )
    {
      v16 = (_QWORD *)a1[4];
      v14 = nullptr;
      if ( v16[4] < v6 )
        goto LABEL_8;
    }
LABEL_7:
    v14 = sub_3984C0((__int64)a1, v6);
    goto LABEL_8;
  }
  v15 = a2[4];
  if ( v6 < v15 )
  {
    v16 = a2;
    if ( (_QWORD *)a1[3] == a2 )
      goto LABEL_8;
    v17 = std::_Rb_tree_decrement(a2);
    v16 = (_QWORD *)v17;
    if ( *(_QWORD *)(v17 + 32) >= v6 )
      goto LABEL_7;
    if ( *(_QWORD *)(v17 + 24) )
      v16 = a2;
    else
      v14 = nullptr;
LABEL_8:
    if ( v16 )
    {
      if ( a1 + 1 == v16 || v14 )
      {
        v18 = 1;
LABEL_12:
        v19 = (_QWORD *)v7;
        std::_Rb_tree_insert_and_rebalance(v18, v7, v16, a1 + 1);
        ++a1[5];
        return v19;
      }
      goto LABEL_30;
    }
    goto LABEL_19;
  }
  if ( v15 >= v6 )
    goto LABEL_19;
  if ( (_QWORD *)a1[4] != a2 )
  {
    v20 = std::_Rb_tree_increment(a2);
    v16 = (_QWORD *)v20;
    if ( v6 < *(_QWORD *)(v20 + 32) )
    {
      if ( !a2[3] )
      {
        v16 = a2;
        if ( a2 )
          goto LABEL_31;
        goto LABEL_19;
      }
      v14 = (_QWORD *)v20;
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  v16 = a2;
  if ( a2 )
  {
LABEL_30:
    v15 = v16[4];
LABEL_31:
    v18 = v6 < v15;
    goto LABEL_12;
  }
LABEL_19:
  v19 = v14;
  if ( v7 )
  {
    v21 = *(_QWORD *)(v7 + 56);
    while ( v21 )
    {
      sub_398830(*(_QWORD **)(v21 + 24));
      v22 = (void *)v21;
      v21 = *(_QWORD *)(v21 + 16);
      operator delete(v22, 0x30u);
    }
    operator delete((void *)v7, 0x70u);
  }
  return v19;
}
