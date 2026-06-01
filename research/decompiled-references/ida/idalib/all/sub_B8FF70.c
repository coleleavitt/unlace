_QWORD *__fastcall sub_B8FF70(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rax
  _QWORD *result; // rax
  _QWORD *v11; // rax

  v7 = a2[294];
  v8 = a1 + a4 + 8;
  a2[304] += v8;
  v9 = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[295] >= v8 + v9 && v7 )
  {
    a2[294] = v8 + v9;
    result = (_QWORD *)(v9 + 8);
    *(result - 1) = a3;
  }
  else
  {
    v11 = (_QWORD *)sub_986170((__int64)(a2 + 294), v8, v8, 3, v8, a6);
    *v11 = a3;
    return v11 + 1;
  }
  return result;
}
