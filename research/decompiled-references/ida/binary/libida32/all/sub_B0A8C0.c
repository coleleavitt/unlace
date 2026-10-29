__int64 __fastcall sub_B0A8C0(const __m128i *a1, __int64 a2)
{
  __int64 v2; // r15
  const void *v3; // r13
  __int64 v4; // r14
  __int64 v5; // rbp
  char v6; // dl
  char v7; // dl
  const void *v9; // [rsp+8h] [rbp-40h]

  v2 = a1[3].m128i_u32[0];
  v3 = (const void *)a1[4].m128i_i64[1];
  v4 = a1[4].m128i_u32[1];
  v9 = (const void *)a1[3].m128i_i64[1];
  v5 = sub_99FDF0((__int64 *)(a2 + 2352), 96, 3u);
  sub_B0A7B0(v5, a2, a1, a1[2].m128i_i64[1], v9, v2, a1[4].m128i_i32[0], v3, v4, a1[5].m128i_i8[0], a1[5].m128i_i64[1]);
  v6 = a1[2].m128i_i8[6] & 1 | *(_BYTE *)(v5 + 38) & 0xFE;
  *(_BYTE *)(v5 + 38) = v6;
  v7 = a1[2].m128i_i8[6] & 2 | v6 & 0xFD;
  *(_BYTE *)(v5 + 38) = v7;
  *(_BYTE *)(v5 + 38) = a1[2].m128i_i8[6] & 4 | v7 & 0xFB;
  return v5;
}

