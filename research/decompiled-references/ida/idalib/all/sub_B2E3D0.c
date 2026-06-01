__int64 __fastcall sub_B2E3D0(const __m128i *a1, __int64 a2)
{
  void *v2; // r13
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rbp
  __int64 v6; // r9
  char v7; // dl
  char v8; // dl
  const void *v10; // [rsp+8h] [rbp-40h]

  v2 = (void *)a1[4].m128i_i64[0];
  v3 = a1[3].m128i_u32[2];
  v4 = a1[2].m128i_u32[2];
  v10 = (const void *)a1[3].m128i_i64[0];
  v5 = sub_9C3B30((__int64 *)(a2 + 2352), 72, 3u);
  sub_B2E300(v5, a2, a1, v10, v4, v6, v2, v3);
  v7 = a1[2].m128i_i8[6] & 1 | *(_BYTE *)(v5 + 38) & 0xFE;
  *(_BYTE *)(v5 + 38) = v7;
  v8 = a1[2].m128i_i8[6] & 2 | v7 & 0xFD;
  *(_BYTE *)(v5 + 38) = v8;
  *(_BYTE *)(v5 + 38) = a1[2].m128i_i8[6] & 4 | v8 & 0xFB;
  return v5;
}
