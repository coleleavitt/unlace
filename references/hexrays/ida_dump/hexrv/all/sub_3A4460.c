__int64 (__fastcall **__fastcall sub_3A4460(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi

  result = &off_4B9D48;
  *a1 = &off_4B9D48;
  v3 = a1[6];
  if ( v3 )
  {
    v4 = a1[7];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = v3 + 8 * i;
        clear_tinfo_t(v6);
        v3 = a1[6];
      }
    }
    a1[7] = 0;
    result = (__int64 (__fastcall **)())qfree(v3);
  }
  v7 = a1[3];
  if ( v7 )
  {
    a1[4] = 0;
    return (__int64 (__fastcall **)())qfree(v7);
  }
  return result;
}
