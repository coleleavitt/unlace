unsigned __int64 __fastcall sub_1BAA5F0(
        __int64 *a1,
        unsigned int *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  _DWORD *v8; // rsi
  __int64 v9; // rax

  v8 = *((_DWORD **)a2 + 2);
  if ( !v8 )
    return sub_1B20F10(*(__int64 **)(*a1 + 760), v8, *a2, a2[3], a2[1], *(double *)a6.m128_u64, *(double *)a7.m128_u64);
  v9 = sub_1B73BE0(a1, (unsigned __int64)v8, a3, a6, a7, a4, a5);
  if ( v9 != 1 )
  {
    v8 = (_DWORD *)(v9 & 0xFFFFFFFFFFFFFFFELL);
    return sub_1B20F10(*(__int64 **)(*a1 + 760), v8, *a2, a2[3], a2[1], *(double *)a6.m128_u64, *(double *)a7.m128_u64);
  }
  return 0;
}
