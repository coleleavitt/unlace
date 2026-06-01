_DWORD *__fastcall sub_E9B650(_QWORD *a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  _DWORD *result; // rax

  v7 = a1[294];
  a1[304] += 12LL;
  result = (_DWORD *)((v7 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[295] >= (unsigned __int64)(result + 3) && v7 )
    a1[294] = result + 3;
  else
    result = (_DWORD *)sub_962430((__int64)(a1 + 294), 12, 12, 3, a5, a6);
  result[2] = 39;
  *result = a2;
  result[1] = a3;
  return result;
}

