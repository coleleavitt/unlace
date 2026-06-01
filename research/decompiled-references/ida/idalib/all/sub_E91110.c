_QWORD *__fastcall sub_E91110(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *result; // rax
  __int64 v7; // rdx

  result = (_QWORD *)a1[133];
  if ( !result )
  {
    v7 = a1[294];
    a1[304] += 24LL;
    result = (_QWORD *)((v7 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( a1[295] >= (unsigned __int64)(result + 3) && v7 )
      a1[294] = result + 3;
    else
      result = (_QWORD *)sub_986170((__int64)(a1 + 294), 24, 24, 3, a5, a6);
    *result = 0;
    result[1] = 0;
    result[2] = 0;
    a1[133] = result;
  }
  return result;
}
