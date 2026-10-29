void __fastcall sub_A06F90(const __m128i *a1)
{
  __int8 *v1; // rbx
  __m128i v2; // xmm0
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int8 v5; // al
  __m128i *v6; // r12
  __m128i v7; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v8[7]; // [rsp+10h] [rbp-A8h] BYREF
  char v9; // [rsp+80h] [rbp-38h]

  v1 = &a1[-9].m128i_i8[8];
  v7 = _mm_loadu_si128(a1);
  sub_9E6480(v8, a1 + 1);
  v9 = a1[8].m128i_i8[0] & 3 | v9 & 0xFC;
  while ( 1 )
  {
    v6 = (__m128i *)(v1 + 136);
    if ( !(unsigned __int8)sub_9E60E0((unsigned int *)&v7, (unsigned int *)v1) )
      break;
    v2 = _mm_loadu_si128((const __m128i *)v1);
    v3 = (__int64)(v1 + 16);
    v4 = (__int64)(v1 + 152);
    v1 -= 136;
    *((__m128i *)v1 + 17) = v2;
    sub_9E7350(v4, v3);
    v5 = v1[264] & 1 | v6[8].m128i_i8[0] & 0xFE;
    v6[8].m128i_i8[0] = v5;
    v6[8].m128i_i8[0] = v1[264] & 2 | v5 & 0xFD;
  }
  *v6 = _mm_load_si128(&v7);
  sub_9E7350((__int64)(v1 + 152), (__int64)v8);
  v1[264] = v9 & 3 | v1[264] & 0xFC;
  sub_9E5FA0((__int64)v8);
}

