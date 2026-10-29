_QWORD *__fastcall sub_1E1180(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rsi
  _QWORD *result; // rax
  __int64 v5; // rax

  v3 = (_QWORD *)*a2;
  if ( (unsigned __int64)a2[2] <= 8 )
  {
    v5 = qvector_reserve(a2, v3, 9, 1);
    *a2 = v5;
    v3 = (_QWORD *)v5;
  }
  a2[1] = 9;
  *v3 = 0x7367655275704354LL;
  result = (_QWORD *)*a2;
  *(_BYTE *)(*a2 + 8) = 0;
  return result;
}
