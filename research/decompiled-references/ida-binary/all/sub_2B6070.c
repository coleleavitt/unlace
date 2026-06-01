__int64 __fastcall sub_2B6070(
        _QWORD *a1,
        const __m128i *a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v12; // r8
  _BYTE v14[4]; // [rsp+0h] [rbp-28h] BYREF
  __int128 v15; // [rsp+4h] [rbp-24h]
  unsigned __int64 v16; // [rsp+18h] [rbp-10h]

  v12 = a1[55];
  v16 = __readfsqword(0x28u);
  v14[0] = 0;
  v15 = -1;
  if ( v12 )
    v12 = *(_QWORD *)(v12 + 8);
  if ( (unsigned __int8)sub_2B5E00(a1, (__int64)v14, a3, a4, v12, a2, (__m128)-1LL, a6, a7, a8, a9, a10, a11, a12, 1) )
    return (unsigned int)v15;
  else
    return 0xFFFFFFFFLL;
}
