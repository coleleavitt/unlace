_QWORD *__fastcall sub_EBF310(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  _QWORD *result; // rax

  v6 = a1[294];
  a1[304] += 24LL;
  result = (_QWORD *)((v6 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[295] >= (unsigned __int64)(result + 3) && v6 )
  {
    a1[294] = result + 3;
    *result = 0;
    result[1] = 79;
  }
  else
  {
    result = (_QWORD *)sub_986170((__int64)(a1 + 294), 24, 24, 3, a5, a6);
    *result = 0;
    result[1] = 79;
  }
  return result;
}
