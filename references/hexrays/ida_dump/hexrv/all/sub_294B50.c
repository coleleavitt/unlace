__int64 (__fastcall **__fastcall sub_294B50(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // rdi

  result = off_4AE778;
  *a1 = off_4AE778;
  v3 = a1[5];
  if ( v3 )
  {
    a1[6] = 0;
    result = (__int64 (__fastcall **)())qfree(v3);
  }
  v4 = a1[2];
  if ( v4 )
  {
    a1[3] = 0;
    return (__int64 (__fastcall **)())qfree(v4);
  }
  return result;
}
