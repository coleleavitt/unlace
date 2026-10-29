unsigned __int64 __fastcall sub_F76CF0(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r13
  _QWORD *v3; // r12
  int v4; // r11d
  __int64 v5; // r9
  __int64 v6; // rcx
  __m128i v8; // [rsp+0h] [rbp-3A8h] BYREF
  int v9; // [rsp+10h] [rbp-398h]
  __int16 v10; // [rsp+14h] [rbp-394h]
  _QWORD v11[11]; // [rsp+20h] [rbp-388h] BYREF
  char v12; // [rsp+79h] [rbp-32Fh]

  v2 = a2 & 7;
  v3 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (a2 & 8) != 0 )
  {
    v2 |= *(__int64 *)((char *)&qword_18 + (a2 & 0xFFFFFFFFFFFFFFF0LL));
    v3 = (_QWORD *)*v3;
  }
  sub_FEA220(v11);
  v8.m128i_i64[1] = 0;
  v9 = 0;
  v4 = (BYTE1(v11[0]) >> 2) & 2;
  v5 = v4 | v8.m128i_i8[1] & 0xFDu;
  v8.m128i_i8[1] = v4 | v8.m128i_i8[1] & 0xFD;
  v8.m128i_i8[2] = (BYTE3(v11[0]) >> 2 << 7) | v8.m128i_i8[2] & 0x7F;
  v8.m128i_i8[3] = ((((BYTE1(v11[0]) >> 4) ^ 1) & 1) << 6)
                 | (32 * (((BYTE1(v11[0]) >> 3) ^ 1) & 1)) & 0xBF
                 | (8 * LOBYTE(v11[0])) & 0x10
                 | (BYTE1(v11[0]) >> 1) & 8
                 | (4 * (v11[0] & 1)) & 0x8F
                 | (BYTE1(v11[0]) >> 2) & 2
                 | ((v11[0] & 0x1008) != 0)
                 | v8.m128i_i8[3] & 0x80;
  v8.m128i_i8[4] = (4 * ((v11[0] & 0x10000080) == 128)) | (BYTE3(v11[0]) >> 2) & 2 | v8.m128i_i8[4] & 0xF9;
  v8.m128i_i8[5] = (v12 << 7) | v8.m128i_i8[5] & 0x7F;
  v8.m128i_i64[0] = v8.m128i_i64[0] & 0xFFFF80067F800200LL | 0x660800442002LL;
  v10 = 0;
  if ( v3 )
  {
    LOBYTE(v10) = 1;
    sub_F71FE0(&v8, (__int64)v3, v2, a1, (8 * LOBYTE(v11[0])) & 0x10, v5);
    sub_F75F20(&v8, (__int64)v3, a1, v6);
  }
  else
  {
    sub_995540(a1, "NULL TYPE");
  }
  sub_9985E0(v11);
  return a1;
}
