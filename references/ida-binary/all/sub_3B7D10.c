double __fastcall sub_3B7D10(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  double result; // xmm0_8
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 i; // rbp
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi

  v3 = a1[8];
  if ( v3 )
  {
    a1[9] = 0;
    result = qfree(v3, a2);
  }
  cleanup_argloc(a1 + 5);
  clear_tinfo_t(a1 + 4);
  v5 = *a1;
  if ( *a1 )
  {
    v6 = a1[1];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = (_QWORD *)(v5 + 80 * i);
        clear_tinfo_t(v8 + 8);
        v9 = v8[5];
        if ( v9 )
        {
          v8[6] = 0;
          qfree(v9, a2);
        }
        v10 = v8[2];
        if ( v10 )
        {
          v8[3] = 0;
          qfree(v10, a2);
        }
        cleanup_argloc(v8);
        v5 = *a1;
      }
    }
    a1[1] = 0;
    return qfree(v5, a2);
  }
  return result;
}
