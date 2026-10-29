__int64 (__fastcall **__fastcall sub_1419D50(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // rdi

  result = &off_2BB2860;
  *a1 = &off_2BB2860;
  v3 = a1[2];
  if ( v3 )
    result = (__int64 (__fastcall **)())(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = a1[1];
  if ( v4 )
    return (__int64 (__fastcall **)())(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return result;
}
