__m128i *__fastcall sub_1CB4D90(
        __m128i *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        __m128 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int a11,
        _BYTE *a12)
{
  unsigned int v12; // r15d
  int v13; // r14d
  char v16; // al
  __m128i v18; // xmm5
  __m128i si128; // xmm2
  unsigned int v20; // r13d
  __int64 *v21; // rax
  __int64 *v22; // rax
  __int64 v23; // rax
  __m128 v24; // xmm3
  _QWORD *v25; // rsi
  __m128 v26; // [rsp+0h] [rbp-78h] BYREF
  __int64 v27; // [rsp+18h] [rbp-60h] BYREF
  __m128i v28; // [rsp+20h] [rbp-58h] BYREF
  __m128i v29[4]; // [rsp+30h] [rbp-48h] BYREF

  v12 = a5;
  v13 = a4;
  *a12 = 0;
  v16 = *(_BYTE *)(a6 + 28) & 0x7F;
  if ( v16 == 67 )
  {
    if ( sub_1A434E0(a2, a6, 0, a4, a5, a6) )
    {
      v28.m128i_i64[1] = 0;
      v29[0].m128i_i64[1] = 0;
      *a12 = 1;
      v28.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      if ( !sub_1CB1710(a2, a3, v13, v12, a6, &v28, a8, a9) )
      {
        si128 = _mm_load_si128(v29);
        *a1 = _mm_load_si128(&v28);
        a1[1] = si128;
        return a1;
      }
    }
    goto LABEL_3;
  }
  if ( v16 == 47 )
  {
    if ( sub_1A434E0(a2, a6, 0, a4, a5, a6) )
    {
      v28.m128i_i64[1] = 0;
      v29[0].m128i_i64[1] = 0;
      *a12 = 1;
      v28.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      if ( !(unsigned __int8)sub_1CB0E30(a2, a3, v13, a7, v12, a6, (__int64)&v28, a8, a9) )
      {
        v18 = _mm_load_si128(v29);
        *a1 = _mm_load_si128(&v28);
        a1[1] = v18;
        return a1;
      }
    }
    goto LABEL_3;
  }
  if ( !sub_1A434E0(a2, a6, 0, a4, a5, a6)
    || (v28 = 0, *a12 = 1, v27 = sub_1CB2FE0(a2, a3, v13, v12, a6, v28.m128i_i64, a8, a9), sub_F22B30(&v27)) )
  {
LABEL_3:
    a1->m128i_i64[0] &= 0xFFFFFFFE00000000LL;
    a1->m128i_i64[1] = 0;
    a1[1].m128i_i64[1] = 0;
    return a1;
  }
  v20 = 0;
  v21 = sub_A5EFB0(a6);
  if ( (*(_DWORD *)v21 & 0x7FFFFFFFu) - 6 <= 1 )
    v20 = *(_DWORD *)((v21[3] & 0xFFFFFFFFFFFFFFFCLL) + 16);
  v22 = sub_A5EFB0(a6);
  if ( (*(_DWORD *)v22 & 0x7FFFFFFFu) - 6 > 1 )
    v26.m128_u64[0] = 0;
  else
    v26.m128_u64[0] = *(_QWORD *)((v22[3] & 0xFFFFFFFFFFFFFFFCLL) + 8);
  v23 = v27;
  v24 = _mm_loadh_ps((const double *)v26.m128_u64);
  a1->m128i_i64[0] = 6;
  v25 = *(_QWORD **)(a2 + 248);
  a1->m128i_i64[1] = v23;
  v26 = v24;
  sub_F1ECA0(&a1[1].m128i_u64[1], v25, v24.m128_u64[0], v24.m128_u64[1], v20, 0);
  return a1;
}
