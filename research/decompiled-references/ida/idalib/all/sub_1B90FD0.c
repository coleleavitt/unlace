_QWORD *__fastcall sub_1B90FD0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  _QWORD *result; // rax
  _QWORD *v5; // rax

  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return (_QWORD *)a2;
  v5 = sub_A81910(*(_QWORD **)(*a1 + 248), a2, 0);
  result = sub_1B90E50(a1, (__int64)v5, a3, a4);
  if ( result )
    return (_QWORD *)*result;
  return result;
}
