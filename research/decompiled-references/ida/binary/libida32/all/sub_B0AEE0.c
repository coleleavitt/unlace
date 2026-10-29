__int64 __fastcall sub_B0AEE0(__int64 a1, const void *a2, __int64 a3, void *a4, __int64 a5, const __m128i *a6)
{
  __int64 v9; // rbx

  v9 = sub_99FDF0((__int64 *)(a1 + 2352), 96, 3u);
  sub_B0AD60(v9, a1, a6, a2, a3, (__int64)a6, a4, a5);
  if ( (*(_BYTE *)(v9 + 34) & 0xF0) == 0xF0 && !*(_QWORD *)v9 )
    *(_BYTE *)(v9 + 34) &= 0xFu;
  return v9;
}

