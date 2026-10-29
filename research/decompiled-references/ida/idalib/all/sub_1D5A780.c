void **__fastcall sub_1D5A780(_QWORD *a1, __int64 a2, __m128 a3, __m128 a4)
{
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 20 )
    return sub_1D5A590((__int64 **)a1, (void **)a2, a3);
  else
    return (void **)sub_1D51480(a1, a2, a3, a4);
}
