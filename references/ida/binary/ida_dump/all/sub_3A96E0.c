__int64 (__fastcall **__fastcall sub_3A96E0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v2; // r12
  __int64 i; // rbx

  result = &off_4E7328;
  *a1 = &off_4E7328;
  if ( a1[6] )
  {
    v2 = a1[7];
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
        clear_tinfo_t();
    }
    a1[7] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( a1[3] )
  {
    a1[4] = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}
