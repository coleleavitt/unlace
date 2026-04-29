_QWORD *__fastcall sub_3A0CE0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  _QWORD *result; // rax
  __int64 v12; // rax

  v8 = a1[172];
  v9 = a1[171];
  v10 = v8 + 1;
  if ( a1[173] < (unsigned __int64)(v8 + 1) )
  {
    v12 = qvector_reserve(a1 + 171, v9, v8 + 1, 24);
    v8 = a1[172];
    a1[171] = v12;
    v9 = v12;
    v10 = v8 + 1;
  }
  a1[172] = v10;
  result = (_QWORD *)(v9 + 24 * v8);
  *result = a2;
  result[1] = a3;
  result[2] = a4;
  return result;
}
