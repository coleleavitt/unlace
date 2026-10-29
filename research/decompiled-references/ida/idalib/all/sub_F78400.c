__int64 __fastcall sub_F78400(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  char v4; // si
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __m128i v8; // [rsp+0h] [rbp-388h] BYREF
  _QWORD v9[11]; // [rsp+10h] [rbp-378h] BYREF
  char v10; // [rsp+69h] [rbp-31Fh]

  sub_FEA220(v9);
  v8.m128i_i64[1] = 0;
  v8.m128i_i8[1] = (BYTE1(v9[0]) >> 2) & 2 | v8.m128i_i8[1] & 0xFD;
  v8.m128i_i8[2] = (BYTE3(v9[0]) >> 2 << 7) | v8.m128i_i8[2] & 0x7F;
  v3 = *a2;
  v8.m128i_i8[3] = ((((BYTE1(v9[0]) >> 4) ^ 1) & 1) << 6)
                 | (32 * (((BYTE1(v9[0]) >> 3) ^ 1) & 1)) & 0xBF
                 | (8 * LOBYTE(v9[0])) & 0x10
                 | (8 * ((v9[0] & 0x1000LL) != 0)) & 0x8F
                 | (4 * (v9[0] & 1)) & 0x8F
                 | (BYTE1(v9[0]) >> 2) & 2
                 | ((v9[0] & 0x1008) != 0)
                 | v8.m128i_i8[3] & 0x80;
  v8.m128i_i8[4] = (4 * ((v9[0] & 0x10000080) == 128)) | (BYTE3(v9[0]) >> 2) & 2 | v8.m128i_i8[4] & 0xF9;
  v8.m128i_i8[5] = (v10 << 7) | v8.m128i_i8[5] & 0x7F;
  v8.m128i_i64[0] = v8.m128i_i64[0] & 0xFFFF80067F800200LL | 0x660800442002LL;
  if ( (v3 & 8) != 0 )
  {
    v6 = *(__int64 *)((char *)&qword_18 + (v3 & 0xFFFFFFFFFFFFFFF0LL)) | v3 & 7;
    v5 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL);
  }
  else
  {
    v4 = v3;
    v5 = v3 & 0xFFFFFFFFFFFFFFF0LL;
    v6 = v4 & 7;
  }
  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  sub_F780D0(v5, v6, a1, &v8);
  sub_9985E0(v9);
  return a1;
}
