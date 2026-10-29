_QWORD *__fastcall sub_1EA7C00(_QWORD *a1, __int64 *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rsi
  _QWORD *result; // rax
  unsigned __int64 v6; // rsi

  v4 = *a2;
  *a1 = a3;
  result = a1;
  v6 = *(unsigned __int16 *)(v4 + 56);
  if ( v6 > a4 )
    v6 = a4;
  a1[1] = v6;
  a1[2] = v6 + a3;
  a1[3] = a4 - v6;
  return result;
}
