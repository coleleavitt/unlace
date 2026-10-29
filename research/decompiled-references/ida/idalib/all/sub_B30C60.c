__int64 __fastcall sub_B30C60(
        __int64 a1,
        const void *a2,
        __int64 a3,
        const void *a4,
        unsigned int a5,
        __int64 a6,
        int a7)
{
  char v10; // dl
  char v11; // al
  __int64 v12; // r15
  char v13; // al
  __m128i v15; // [rsp+0h] [rbp-68h] BYREF
  __int64 v16; // [rsp+10h] [rbp-58h]
  __int64 v17; // [rsp+18h] [rbp-50h]
  __int16 v18; // [rsp+20h] [rbp-48h]
  char v19; // [rsp+22h] [rbp-46h]
  char v20; // [rsp+23h] [rbp-45h]

  if ( a7 == 1 )
  {
    v10 = 1;
    v11 = 2;
  }
  else
  {
    v10 = a7 != 0 ? 2 : 0;
    v11 = a7 == 0 ? 1 : 3;
  }
  v17 = a6;
  v18 = 418;
  v15 = 0;
  v16 = 0;
  v19 = (16 * v10) | v11 & 0xF;
  v20 &= 0xFCu;
  v12 = sub_9C3B30((__int64 *)(a1 + 2352), 88, 3u);
  sub_B2D5F0(v12, a1, &v15, a2, a3, a4, a5);
  v13 = *(_BYTE *)(v12 + 34);
  *(_BYTE *)(v12 + 38) |= 4u;
  if ( (v13 & 0xF0) == 0xF0 && !*(_QWORD *)v12 )
    *(_BYTE *)(v12 + 34) = v13 & 0xF;
  return v12;
}
