void **__fastcall sub_1946CC0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  void **result; // rax
  void **v5; // rax

  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return (void **)a2;
  v5 = (void **)sub_A81910(*(_QWORD **)(*a1 + 248), a2, 0);
  result = sub_1946B40(a1, v5, a3, a4);
  if ( result )
    return (void **)*result;
  return result;
}
