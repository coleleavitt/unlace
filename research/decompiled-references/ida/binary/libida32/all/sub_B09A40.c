__int64 __fastcall sub_B09A40(
        __int64 a1,
        const void *a2,
        __int64 a3,
        const void *a4,
        unsigned int a5,
        const __m128i *a6)
{
  __int64 v9; // rbx

  v9 = sub_99FDF0((__int64 *)(a1 + 2352), 88, 3u);
  sub_B098B0(v9, a1, a6, a2, a3, a4, a5);
  if ( (*(_BYTE *)(v9 + 34) & 0xF0) == 0xF0 && !*(_QWORD *)v9 )
    *(_BYTE *)(v9 + 34) &= 0xFu;
  return v9;
}

