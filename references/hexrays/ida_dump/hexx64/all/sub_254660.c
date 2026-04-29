__int64 (__fastcall **__fastcall sub_254660(_QWORD *a1))()
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v6; // rdi

  *a1 = off_4DFED8;
  v2 = a1[11];
  if ( v2 )
  {
    a1[12] = 0;
    qfree(v2);
  }
  v3 = a1[8];
  if ( v3 )
  {
    a1[9] = 0;
    qfree(v3);
  }
  v4 = a1[5];
  result = off_4DBCF8;
  *a1 = off_4DBCF8;
  if ( v4 )
  {
    a1[6] = 0;
    result = (__int64 (__fastcall **)())qfree(v4);
  }
  v6 = a1[2];
  if ( v6 )
  {
    a1[3] = 0;
    return (__int64 (__fastcall **)())qfree(v6);
  }
  return result;
}
