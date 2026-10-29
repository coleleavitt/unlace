__m128i *__fastcall sub_B9A060(unsigned __int64 a1, __int64 a2, __int32 a3, __int64 a4, __int64 a5, char a6)
{
  __m128i *v9; // rbx
  unsigned __int8 v10; // al
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // rax
  __int8 v16; // al
  __m128i v17; // xmm0
  __int8 v18; // r12
  __int64 v19; // rax
  __int8 v21; // al
  __m128i v22; // [rsp+8h] [rbp-50h] BYREF
  __int64 v23; // [rsp+18h] [rbp-40h]

  v22.m128i_i32[0] = a3;
  v9 = (__m128i *)sub_B902D0(104, (_QWORD *)a1, a2, 0);
  v10 = *(_BYTE *)(a5 + 28) & 0x7F;
  if ( ((v10 + 52) & 0x7Fu) <= 1 || (v11 = v10 - 53, v12 = a5, v11 <= 1) )
    v12 = sub_B72ED0(a5);
  v13 = *(_QWORD *)(a4 + 40);
  v23 = v12;
  v22.m128i_i64[1] = v13;
  sub_B725B0((__int64)v9, 0x36u, a2, v22.m128i_i32[0]);
  v14 = v22.m128i_i64[1];
  v9[3].m128i_i64[0] = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  v15 = v23;
  v9[3].m128i_i64[1] = (__int64)v9;
  v9[2].m128i_i64[1] = v14;
  v9->m128i_i64[0] = (__int64)&off_2C03168;
  v9[4].m128i_i64[0] = 0;
  v9[4].m128i_i64[1] = a4;
  if ( v15 )
  {
    v9[4].m128i_i64[0] = v15;
    v9[1].m128i_i16[7] = *(_WORD *)(v15 + 30) & 0x367F | v9[1].m128i_i16[7] & 0xC000;
  }
  v9[1].m128i_i8[13] |= 2u;
  v9->m128i_i64[0] = (__int64)&off_2C031E0;
  if ( (*(_BYTE *)(a5 + 28) & 0x7F) == 0x36 )
  {
    v16 = v9[6].m128i_i8[0];
    v22.m128i_i64[0] = a5;
    v17 = _mm_loadl_epi64(&v22);
    v18 = v16 & 0xFE | a6 & 1;
    v9[5] = _mm_unpacklo_epi64(v17, v17);
    v9[6].m128i_i8[0] = v18;
    if ( (*(_BYTE *)(a5 + 96) & 1) != 0 )
    {
      v19 = *(_QWORD *)(a5 + 88);
      v9[6].m128i_i8[0] = v18 | 1;
      v9[5].m128i_i64[1] = v19;
    }
  }
  else
  {
    v21 = v9[6].m128i_i8[0];
    v9[5] = 0;
    v9[6].m128i_i8[0] = v21 & 0xFE | a6 & 1;
  }
  return v9;
}
