__int64 __fastcall sub_568C60(
        __int64 a1,
        const char *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        int a8,
        __int64 a9)
{
  unsigned __int16 v9; // ax
  __int128 v10; // xmm0
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9

  v9 = sub_563C80(*(_QWORD *)(a9 + 8), a2, a3);
  v10 = (__int128)_mm_loadu_si128((const __m128i *)&a7);
  sub_5687C0(a1, v9, v11, v12, v13, v14, v10, (__m128i)v10);
  return a1;
}
