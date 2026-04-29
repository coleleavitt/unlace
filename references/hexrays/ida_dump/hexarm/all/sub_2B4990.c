__int64 (__fastcall **__fastcall sub_2B4990(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi

  result = &off_4DCB18;
  *a1 = &off_4DCB18;
  v3 = a1[5];
  if ( v3 )
  {
    v4 = a1[6];
    if ( v4 )
    {
      v5 = 0;
      do
      {
        v6 = (_QWORD *)(v3 + 192 * v5);
        *v6 = &off_4DBBE8;
        cleanup_argloc(v6 + 18);
        v7 = v6[13];
        if ( v7 )
        {
          v6[14] = 0;
          qfree(v7);
        }
        clear_tinfo_t(v6 + 12);
        v8 = v6[9];
        if ( v8 )
        {
          v6[10] = 0;
          qfree(v8);
        }
        ++v5;
        cleanup_argloc(v6 + 6);
        cleanup_argloc(v6 + 1);
        v3 = a1[5];
      }
      while ( v4 != v5 );
    }
    a1[6] = 0;
    return (__int64 (__fastcall **)())qfree(v3);
  }
  return result;
}
