__int64 __fastcall sub_40FB40(
        _QWORD *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  int v10; // eax

  v10 = sub_40FAA0(a1, a3, a4, a5, a6, a7, a8, a9, a10);
  if ( v10 <= 0 )
    return 4294967294LL;
  sub_1D6740(
    (__int64)a1,
    15,
    5 * (unsigned int)((*(_BYTE *)(a2 + 16) & 0xF) != 4) + 2,
    *(_DWORD *)(a1[104] + 492LL) + *(_DWORD *)(a1[104] + 448LL) * (8 - v10),
    8,
    *(_DWORD *)(a2 + 32));
  return 0;
}
