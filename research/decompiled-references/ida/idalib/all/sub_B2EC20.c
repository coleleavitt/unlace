__int64 __fastcall sub_B2EC20(__int64 a1, const void *a2, __int64 a3, void *a4, __int64 a5, const __m128i *a6)
{
  __int64 v9; // rbx

  v9 = sub_9C3B30((__int64 *)(a1 + 2352), 96, 3u);
  sub_B2EAA0(v9, a1, a6, a2, a3, (__int64)a6, a4, a5);
  if ( (*(_BYTE *)(v9 + 34) & 0xF0) == 0xF0 && !*(_QWORD *)v9 )
    *(_BYTE *)(v9 + 34) &= 0xFu;
  return v9;
}
