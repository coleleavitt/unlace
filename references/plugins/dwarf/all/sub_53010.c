__int64 (__fastcall **__fastcall sub_53010(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // rdi

  result = off_C8488;
  *a1 = off_C8488;
  a1[2] = 0;
  a1[9] = 0;
  v3 = a1[6];
  if ( v3 )
  {
    a1[7] = 0;
    result = (__int64 (__fastcall **)())qfree(v3);
  }
  v4 = a1[3];
  if ( v4 )
  {
    a1[4] = 0;
    return (__int64 (__fastcall **)())qfree(v4);
  }
  return result;
}
