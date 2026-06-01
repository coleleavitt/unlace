_QWORD *__fastcall sub_6281E0(_QWORD *a1, _QWORD *a2, unsigned __int64 *a3, __int64 a4)
{
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // r15
  void *v11; // r14
  __int64 v12; // r12
  unsigned __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rax
  _BOOL8 v16; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // [rsp+8h] [rbp-40h]

  v7 = a2;
  v8 = operator new(0x50u);
  v10 = *a3;
  v11 = *(void **)(a4 + 8);
  *(_QWORD *)(a4 + 8) = 0;
  v12 = v8;
  *(_QWORD *)(v8 + 48) = v11;
  *(__m128 *)(v8 + 32) = _mm_loadh_ps((const double *)a4);
  *(__m128i *)(v8 + 56) = _mm_loadu_si128((const __m128i *)(a4 + 16));
  LODWORD(v8) = *(_DWORD *)(a4 + 32);
  *(_OWORD *)(a4 + 16) = 0;
  *(_DWORD *)(v12 + 72) = v8;
  if ( a1 + 1 == a2 )
  {
    if ( a1[5] )
    {
      v14 = (_QWORD *)a1[4];
      v7 = nullptr;
      if ( v14[4] < v10 )
        goto LABEL_6;
    }
LABEL_5:
    v7 = sub_622440((__int64)a1, v10);
    goto LABEL_6;
  }
  v13 = a2[4];
  if ( v10 < v13 )
  {
    v14 = a2;
    if ( (_QWORD *)a1[3] == a2 )
      goto LABEL_6;
    v15 = std::_Rb_tree_decrement(a2);
    v14 = (_QWORD *)v15;
    if ( *(_QWORD *)(v15 + 32) >= v10 )
      goto LABEL_5;
    if ( *(_QWORD *)(v15 + 24) )
      v14 = a2;
    else
      v7 = nullptr;
LABEL_6:
    if ( v14 )
    {
      if ( a1 + 1 == v14 || v7 )
      {
        v16 = 1;
LABEL_10:
        v7 = (_QWORD *)v12;
        std::_Rb_tree_insert_and_rebalance(v16, v12, v14, a1 + 1);
        ++a1[5];
        return v7;
      }
      goto LABEL_27;
    }
    goto LABEL_12;
  }
  v20 = a2[4];
  if ( v13 >= v10 )
    goto LABEL_12;
  if ( (_QWORD *)a1[4] != a2 )
  {
    v18 = std::_Rb_tree_increment(a2, a2, v9, v13);
    v14 = (_QWORD *)v18;
    if ( v10 < *(_QWORD *)(v18 + 32) )
    {
      v19 = v20;
      if ( !a2[3] )
      {
        v14 = a2;
        if ( a2 )
          goto LABEL_28;
        goto LABEL_12;
      }
      v7 = (_QWORD *)v18;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v14 = a2;
  if ( a2 )
  {
LABEL_27:
    v19 = v14[4];
LABEL_28:
    v16 = v10 < v19;
    goto LABEL_10;
  }
LABEL_12:
  if ( v12 )
  {
    if ( v11 )
    {
      *(_QWORD *)(v12 + 56) = 0;
      qfree(v11);
    }
    operator delete((void *)v12, 0x50u);
  }
  return v7;
}
