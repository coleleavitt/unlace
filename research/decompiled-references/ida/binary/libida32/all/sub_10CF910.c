_QWORD *__fastcall sub_10CF910(_QWORD *a1, unsigned __int64 *a2, const double *a3)
{
  _QWORD *v3; // r8
  unsigned __int64 v4; // r9
  _QWORD *v5; // rbx
  __int64 v8; // rbp
  _QWORD *v9; // rax
  __int64 v10; // rdx
  void *v11; // rdi

  v3 = (_QWORD *)a1[2];
  if ( v3 )
  {
    v4 = *a2;
    v5 = a1 + 1;
    do
    {
      while ( v3[4] >= v4 )
      {
        v5 = v3;
        v3 = (_QWORD *)v3[2];
        if ( !v3 )
          goto LABEL_6;
      }
      v3 = (_QWORD *)v3[3];
    }
    while ( v3 );
LABEL_6:
    if ( a1 + 1 != v5 && v5[4] <= v4 )
      return v5;
  }
  else
  {
    v5 = a1 + 1;
  }
  v8 = operator new(0x30u);
  *(__m128 *)(v8 + 32) = _mm_loadh_ps(a3);
  v9 = sub_10CF760(a1, v5, (unsigned __int64 *)(v8 + 32));
  if ( v10 )
  {
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
  }
  else
  {
    v11 = (void *)v8;
    v8 = (__int64)v9;
    operator delete(v11);
  }
  return (_QWORD *)v8;
}

