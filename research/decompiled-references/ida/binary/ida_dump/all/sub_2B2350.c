__int64 (__fastcall **__fastcall sub_2B2350(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  _QWORD *v6; // rbx

  result = &off_4E2298;
  *a1 = &off_4E2298;
  v3 = a1[5];
  if ( v3 )
  {
    v4 = a1[6];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + (i << 6));
        *v6 = off_4E14B0;
        clear_tinfo_t();
        if ( v6[2] )
        {
          v6[3] = 0;
          qfree();
        }
        v3 = a1[5];
      }
    }
    a1[6] = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}
