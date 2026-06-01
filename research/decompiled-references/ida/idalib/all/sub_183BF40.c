__int64 __fastcall sub_183BF40(__int64 a1, char a2, __int32 a3, __int32 a4, __int64 a5, __m128 a6, __m128i a7)
{
  __int64 v9; // r13
  __m128i *v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int16 v14; // ax
  char v16; // al
  __int64 v18; // [rsp+8h] [rbp-40h]

  v9 = *(_QWORD *)(a1 + 544);
  v10 = (__m128i *)sub_B902D0(40, *(_QWORD **)(a1 + 248), v9, 0);
  v10->m128i_i64[0] = (__int64)off_2C02B30;
  if ( v9
    && (v11 = sub_B8C1B0(v9), v12 = *(_QWORD *)(v11 + 8) & 7LL, (*(_QWORD *)(v11 + 8) & 7) != 0)
    && (*(char *)(v11 + 29) >= 0 || (v18 = *(_QWORD *)(v11 + 8) & 7LL, v16 = sub_B8C610(v11), v12 = v18, v16)) )
  {
    v13 = v12;
  }
  else
  {
    v13 = 0;
  }
  v10->m128i_i64[1] = v13;
  v10[1].m128i_i32[2] = a3;
  v10[1].m128i_i64[0] = v9 & 0xFFFFFFFFFFFFFFFBLL;
  v10[1].m128i_i16[6] = 24665;
  v14 = sub_B8C0C0(89);
  v10[2].m128i_i8[0] &= 0xF8u;
  v10[1].m128i_i16[7] = v14 & 0x3FFF | v10[1].m128i_i16[7] & 0xC000;
  if ( byte_2CD7310[0] )
    sub_B8B8D0(89);
  v10[2].m128i_i32[1] = a4;
  v10->m128i_i64[0] = (__int64)&off_2C02BF0;
  v10[1].m128i_i8[13] = (32 * (a2 & 3)) | v10[1].m128i_i8[13] & 0x9F;
  sub_B8EA00(*(__m128i **)(a1 + 544), (__int64)v10);
  return sub_1836BF0(a1, v10, a5, a6, a7);
}
