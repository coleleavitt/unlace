_QWORD *__fastcall sub_C724F0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  _QWORD *result; // rax

  v6 = a1[294];
  a1[304] += 8LL;
  result = (_QWORD *)((v6 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[295] >= (unsigned __int64)(result + 1) && v6 )
  {
    a1[294] = result + 1;
    *result = a2;
  }
  else
  {
    result = (_QWORD *)sub_962430((__int64)(a1 + 294), 8, 8, 3, a5, a6);
    *result = a2;
  }
  return result;
}

