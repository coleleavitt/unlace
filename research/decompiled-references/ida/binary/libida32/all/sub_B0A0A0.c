__int64 __fastcall sub_B0A0A0(const __m128i *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r14
  __int64 v4; // r15
  char v5; // al
  char v6; // al
  __int128 v8; // [rsp+0h] [rbp-78h]
  __int128 v9; // [rsp+10h] [rbp-68h]
  __int64 v10; // [rsp+20h] [rbp-58h]
  __int64 v11; // [rsp+28h] [rbp-50h]
  __int64 v12; // [rsp+30h] [rbp-48h]
  __int64 v13; // [rsp+38h] [rbp-40h]

  v12 = a1[3].m128i_i64[0];
  v2 = a1[6].m128i_i64[1];
  v3 = a1[6].m128i_u32[1];
  v13 = a1[3].m128i_i64[1];
  v8 = (__int128)_mm_loadu_si128(a1 + 4);
  v9 = (__int128)_mm_loadu_si128(a1 + 5);
  v10 = a1[7].m128i_i64[1];
  v11 = a1[7].m128i_u32[1];
  v4 = sub_99FDF0((__int64 *)(a2 + 2352), 144, 3u);
  sub_B09F50(
    v4,
    a2,
    a1,
    a1[2].m128i_i64[1],
    v12,
    v13,
    v8,
    v9,
    a1[6].m128i_i8[0],
    v2,
    v3,
    a1[7].m128i_i8[0],
    v10,
    v11,
    a1[8].m128i_i32[0],
    a1[8].m128i_i64[1]);
  v5 = a1[2].m128i_i8[6] & 1 | *(_BYTE *)(v4 + 38) & 0xFE;
  *(_BYTE *)(v4 + 38) = v5;
  v6 = a1[2].m128i_i8[6] & 2 | v5 & 0xFD;
  *(_BYTE *)(v4 + 38) = v6;
  *(_BYTE *)(v4 + 38) = a1[2].m128i_i8[6] & 4 | v6 & 0xFB;
  return v4;
}

