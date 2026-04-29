__int64 (__fastcall **__fastcall sub_3646E0(_QWORD *a1))()
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v5; // rdi

  *a1 = off_4B9C48;
  v2 = a1[10];
  if ( v2 )
  {
    a1[11] = 0;
    qfree(v2);
  }
  qfree(a1[8]);
  v3 = a1[5];
  result = off_4AF6D8;
  *a1 = off_4AF6D8;
  if ( v3 )
  {
    a1[6] = 0;
    result = (__int64 (__fastcall **)())qfree(v3);
  }
  v5 = a1[2];
  if ( v5 )
  {
    a1[3] = 0;
    return (__int64 (__fastcall **)())qfree(v5);
  }
  return result;
}
