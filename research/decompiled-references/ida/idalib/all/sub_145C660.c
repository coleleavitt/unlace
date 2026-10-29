__int64 (__fastcall *__fastcall sub_145C660(_QWORD *a1))(__int64 a1)
{
  __int64 v1; // rax
  bool v2; // zf
  __int64 (__fastcall *result)(__int64); // rax

  v1 = a1[139];
  if ( v1 )
  {
    v2 = *(_QWORD *)(v1 + 192) == 0;
    result = (__int64 (__fastcall *)(__int64))sub_1436070;
    if ( v2 )
      result = (__int64 (__fastcall *)(__int64))sub_1436060;
    a1[144] = result;
  }
  else if ( a1[143] )
  {
    a1[144] = sub_1436090;
    return sub_1436090;
  }
  else
  {
    a1[144] = sub_1418450;
    return (__int64 (__fastcall *)(__int64))sub_1418450;
  }
  return result;
}
