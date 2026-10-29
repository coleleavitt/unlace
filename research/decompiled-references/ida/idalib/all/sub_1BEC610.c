bool __fastcall sub_1BEC610(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, __m128 a6, __m128 a7)
{
  unsigned __int8 v9; // al
  bool result; // al
  char v11; // [rsp+Ch] [rbp-ECh]
  __int16 v12; // [rsp+10h] [rbp-E8h] BYREF
  char v13; // [rsp+12h] [rbp-E6h]
  int v14; // [rsp+14h] [rbp-E4h]
  __int64 v15; // [rsp+18h] [rbp-E0h]
  __int64 v16; // [rsp+20h] [rbp-D8h]
  __m128i v17[2]; // [rsp+30h] [rbp-C8h] BYREF
  void *ptr; // [rsp+50h] [rbp-A8h]
  __int64 v19; // [rsp+60h] [rbp-98h] BYREF

  v12 = v12 & 0xFE00 | 0x1A;
  if ( unk_2CD7484 )
  {
    v11 = a5;
    sub_EE9B50(26);
    a5 = v11;
  }
  v15 = a1;
  v14 = a4;
  v16 = 0;
  HIBYTE(v12) = (2 * (a5 & 3)) & 7 | HIBYTE(v12) & 1;
  v13 &= 0xF0u;
  v9 = sub_B62360((__int64)&v12);
  HIBYTE(v12) = (v9 << 6) | HIBYTE(v12) & 0x3F;
  v13 = v13 & 0xF8 | (v9 >> 2) & 7;
  sub_1BEC520(v17, a3, &v12, a2, 1u, 1u, a6, a7, 0, 0);
  result = (v17[0].m128i_i32[0] & 0x7FFFFFFF) != 5;
  if ( (v17[0].m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr != &v19 )
  {
    free(ptr);
    return 1;
  }
  return result;
}
