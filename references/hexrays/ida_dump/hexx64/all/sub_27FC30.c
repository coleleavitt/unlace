__int64 (__fastcall **__fastcall sub_27FC30(_QWORD *a1))()
{
  _QWORD *v2; // rdi
  __int64 v3; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v5; // rdi

  v2 = a1 + 10;
  *(v2 - 10) = off_4E09B8;
  clear_tinfo_t(v2);
  v3 = a1[5];
  result = off_4DBCF8;
  *a1 = off_4DBCF8;
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
