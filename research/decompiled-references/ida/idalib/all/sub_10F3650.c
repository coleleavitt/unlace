unsigned __int64 *__fastcall sub_10F3650(_QWORD *a1, unsigned __int64 *a2, const double *a3)
{
  const char *v3; // r14
  const char *v4; // r8
  unsigned __int64 v5; // r9
  const char *v6; // rbx
  unsigned __int64 *v10; // rbp
  const char *v11; // rax
  const char *v12; // rdx
  _BOOL8 v13; // rdi
  unsigned __int64 *v14; // rdi

  v3 = (const char *)(a1 + 1);
  v4 = (const char *)a1[2];
  if ( v4 )
  {
    v5 = *a2;
    v6 = (const char *)(a1 + 1);
    do
    {
      while ( *((_QWORD *)v4 + 4) >= v5 )
      {
        v6 = v4;
        v4 = *((const char **)v4 + 2);
        if ( !v4 )
          goto LABEL_6;
      }
      v4 = *((const char **)v4 + 3);
    }
    while ( v4 );
LABEL_6:
    if ( v3 != v6 && *((_QWORD *)v6 + 4) <= v5 )
      return (unsigned __int64 *)v6;
  }
  else
  {
    v6 = (const char *)(a1 + 1);
  }
  v10 = (unsigned __int64 *)operator new(0x30u);
  *((__m128 *)v10 + 2) = _mm_loadh_ps(a3);
  v11 = sub_10F34A0(a1, v6, v10 + 4);
  if ( v12 )
  {
    v13 = v11 || v3 == v12 || v10[4] < *((_QWORD *)v12 + 4);
    std::_Rb_tree_insert_and_rebalance(v13, v10, v12, v3);
    ++a1[5];
  }
  else
  {
    v14 = v10;
    v10 = (unsigned __int64 *)v11;
    operator delete(v14);
  }
  return v10;
}
