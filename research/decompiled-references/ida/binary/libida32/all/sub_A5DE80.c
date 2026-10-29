_QWORD *__fastcall sub_A5DE80(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  size_t v8; // r12
  __int64 v9; // rsi
  _QWORD *v10; // rbx

  if ( !a3 )
    a3 = sub_F48820(a2);
  v7 = a1[294];
  v8 = a3;
  v9 = a3 + 8LL;
  a1[304] += v9;
  v10 = (_QWORD *)((v7 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[295] >= (unsigned __int64)v10 + v9 && v7 )
    a1[294] = (char *)v10 + v9;
  else
    v10 = (_QWORD *)sub_962430((__int64)(a1 + 294), v9, a3 + 8LL, 3, a5, a6);
  *v10 = a2;
  memset(v10 + 1, 0, v8);
  return v10;
}

