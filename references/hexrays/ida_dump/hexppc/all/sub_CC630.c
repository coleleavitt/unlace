__int64 __fastcall sub_CC630(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 i; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi

  v2 = a1[8];
  if ( v2 )
  {
    a1[9] = 0;
    qfree(v2);
  }
  cleanup_argloc(a1 + 5);
  result = clear_tinfo_t(a1 + 4);
  v4 = *a1;
  if ( *a1 )
  {
    v5 = a1[1];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (_QWORD *)(v4 + 80 * i);
        clear_tinfo_t(v7 + 8);
        v8 = v7[5];
        if ( v8 )
        {
          v7[6] = 0;
          qfree(v8);
        }
        v9 = v7[2];
        if ( v9 )
        {
          v7[3] = 0;
          qfree(v9);
        }
        cleanup_argloc(v7);
        v4 = *a1;
      }
    }
    a1[1] = 0;
    return qfree(v4);
  }
  return result;
}
