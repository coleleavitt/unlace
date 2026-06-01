void **__fastcall sub_176A2F0(_QWORD *a1, __int64 a2, __m128 a3)
{
  void **result; // rax
  void **v4; // rax

  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return (void **)a2;
  v4 = (void **)sub_A81910(*(_QWORD **)(*a1 + 248LL), a2, 0);
  result = sub_176A140(a1, v4, a3);
  if ( result )
    return (void **)*result;
  return result;
}
