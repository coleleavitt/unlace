__int64 __fastcall sub_B2E9E0(const __m128i *a1, __int64 a2)
{
  __int64 v2; // rbp
  const void *v3; // r12
  const void *v4; // r13
  __int64 v5; // r14
  char v7; // dl
  char v8; // dl
  const void *v9; // [rsp-10h] [rbp-58h]
  __int64 v10; // [rsp+0h] [rbp-48h]
  __int64 v11; // [rsp+8h] [rbp-40h]

  v2 = a1[2].m128i_u32[2];
  v3 = (const void *)a1[3].m128i_i64[0];
  v4 = (const void *)a1[4].m128i_i64[0];
  v5 = a1[3].m128i_u32[2];
  v11 = a1[4].m128i_u32[3];
  v9 = (const void *)a1[5].m128i_i64[0];
  v10 = sub_9C3B30((__int64 *)(a2 + 2352), 88, 3u);
  sub_B2E8C0(v10, a2, a1, v3, v2, a1[4].m128i_i8[8], v4, v5, v9, v11);
  v7 = a1[2].m128i_i8[6] & 1 | *(_BYTE *)(v10 + 38) & 0xFE;
  *(_BYTE *)(v10 + 38) = v7;
  v8 = a1[2].m128i_i8[6] & 2 | v7 & 0xFD;
  *(_BYTE *)(v10 + 38) = v8;
  *(_BYTE *)(v10 + 38) = a1[2].m128i_i8[6] & 4 | v8 & 0xFB;
  return v10;
}
