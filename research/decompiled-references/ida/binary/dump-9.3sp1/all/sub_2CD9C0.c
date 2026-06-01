__int64 __fastcall sub_2CD9C0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      do
      {
        v5 = (_QWORD *)(v2 + 192 * v4);
        *v5 = &off_4E1528;
        cleanup_argloc();
        v6 = v5[13];
        if ( v6 )
        {
          v5[14] = 0;
          qfree(v6);
        }
        clear_tinfo_t();
        v7 = v5[9];
        if ( v7 )
        {
          v5[10] = 0;
          qfree(v7);
        }
        ++v4;
        cleanup_argloc();
        cleanup_argloc();
        v2 = *a1;
      }
      while ( v3 != v4 );
    }
    a1[1] = 0;
    return qfree(v2);
  }
  return result;
}
