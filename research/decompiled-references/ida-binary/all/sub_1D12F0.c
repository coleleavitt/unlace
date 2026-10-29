_QWORD *__fastcall sub_1D12F0(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  _QWORD *result; // rax
  __int64 v4; // rax

  v1 = a1[1];
  v2 = *a1;
  if ( a1[2] < (unsigned __int64)(v1 + 1) )
  {
    v4 = qvector_reserve(a1, v2, v1 + 1, 16);
    *a1 = v4;
    v2 = v4;
    v1 = a1[1];
  }
  result = (_QWORD *)(v2 + 16 * v1);
  *result = 0;
  result[1] = 0;
  ++a1[1];
  return result;
}
