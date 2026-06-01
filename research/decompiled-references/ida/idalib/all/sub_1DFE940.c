__int64 __fastcall sub_1DFE940(__m128i *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 *v3; // rbp
  __int64 result; // rax
  __m128i v5; // xmm0
  __m128i v6[2]; // [rsp+8h] [rbp-20h] BYREF

  a1->m128i_i64[1] = 8;
  v1 = operator new(0x40u);
  v2 = a1->m128i_i64[1];
  a1->m128i_i64[0] = v1;
  v3 = (__int64 *)(v1 + 8 * ((unsigned __int64)(v2 - 1) >> 1));
  result = operator new(0x200u);
  a1[2].m128i_i64[1] = (__int64)v3;
  v6[0].m128i_i64[0] = result;
  v5 = _mm_loadl_epi64(v6);
  *v3 = result;
  a1[4].m128i_i64[1] = (__int64)v3;
  a1[2].m128i_i64[0] = result + 512;
  a1[3].m128i_i64[1] = result;
  a1[4].m128i_i64[0] = result + 512;
  a1[1] = _mm_unpacklo_epi64(v5, v5);
  a1[3].m128i_i64[0] = result;
  return result;
}
