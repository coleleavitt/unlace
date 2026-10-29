__int64 __fastcall sub_B30840(
        __int64 a1,
        int a2,
        __int64 a3,
        const void *a4,
        unsigned int a5,
        const void *a6,
        unsigned int a7,
        const void *a8,
        unsigned int a9,
        const void *a10,
        unsigned int a11,
        const void *a12,
        unsigned int a13,
        const void *a14,
        unsigned int a15,
        __int64 a16)
{
  __int64 v19; // r14
  char v20; // al
  __m128i v23; // [rsp+8h] [rbp-68h] BYREF
  __int64 v24; // [rsp+18h] [rbp-58h]
  __int64 v25; // [rsp+20h] [rbp-50h]
  unsigned int v26; // [rsp+28h] [rbp-48h]

  v23 = 0;
  v25 = a16;
  v24 = 0;
  v26 = v26 & 0xFF000000 | 0x701A2;
  HIBYTE(v26) &= 0xFCu;
  v19 = sub_9C3B30((__int64 *)(a1 + 2352), 152, 3u);
  sub_B2F1D0(v19, a1, &v23, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
  v20 = *(_BYTE *)(v19 + 34);
  *(_BYTE *)(v19 + 38) |= 4u;
  if ( (v20 & 0xF0) == 0xF0 && !*(_QWORD *)v19 )
    *(_BYTE *)(v19 + 34) = v20 & 0xF;
  return v19;
}
