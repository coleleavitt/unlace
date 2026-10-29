_QWORD *__fastcall sub_BAA5B0(__int64 a1)
{
  char v1; // bp
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD *result; // rax
  __int64 v6; // rdx

  v1 = 0;
  sub_BA9DD0(a1);
  result = (_QWORD *)a1;
  do
  {
    v6 = *(_QWORD *)(a1 + 104);
    result[13] = v6;
    if ( (result[11] & 3) != 0 )
    {
      if ( v1 )
        return result;
      v1 = 1;
    }
    result = sub_A79820(result + 11, (__int64)result, v6, v2, v3, v4);
  }
  while ( (_QWORD *)a1 != result && result );
  return result;
}
