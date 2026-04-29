__int64 (__fastcall **__fastcall sub_2ADAD0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rdi

  result = &off_4C29D8;
  *a1 = &off_4C29D8;
  v3 = a1[5];
  if ( v3 )
  {
    v4 = a1[6];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + (i << 6));
        *v6 = off_4C1BF0;
        clear_tinfo_t(v6 + 5);
        v7 = v6[2];
        if ( v7 )
        {
          v6[3] = 0;
          qfree(v7);
        }
        v3 = a1[5];
      }
    }
    a1[6] = 0;
    return (__int64 (__fastcall **)())qfree(v3);
  }
  return result;
}
