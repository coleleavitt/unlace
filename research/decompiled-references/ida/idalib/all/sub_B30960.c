__int64 __fastcall sub_B30960(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        void *a8,
        unsigned int a9,
        __int64 a10,
        unsigned int a11,
        __int64 a12)
{
  __int64 v15; // r14
  char v16; // al
  __m128i v19; // [rsp+8h] [rbp-68h] BYREF
  __int64 v20; // [rsp+18h] [rbp-58h]
  __int64 v21; // [rsp+20h] [rbp-50h]
  unsigned int v22; // [rsp+28h] [rbp-48h]

  v19 = 0;
  v21 = a12;
  v20 = 0;
  v22 = v22 & 0xFF000000 | 0x701A2;
  HIBYTE(v22) &= 0xFCu;
  v15 = sub_9C3B30((__int64 *)(a1 + 2352), 120, 3u);
  sub_B2F4A0(v15, a1, &v19, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  v16 = *(_BYTE *)(v15 + 34);
  *(_BYTE *)(v15 + 38) |= 4u;
  if ( (v16 & 0xF0) == 0xF0 && !*(_QWORD *)v15 )
    *(_BYTE *)(v15 + 34) = v16 & 0xF;
  return v15;
}
