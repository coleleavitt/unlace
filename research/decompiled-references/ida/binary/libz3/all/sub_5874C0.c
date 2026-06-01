__int64 __fastcall sub_5874C0(__m128i *a1, unsigned __int64 a2)
{
  __m128i v2; // xmm0
  __int64 *v3; // rax
  __int64 result; // rax
  __m128i v5[2]; // [rsp+8h] [rbp-20h] BYREF

  sub_180C5A0(v5, "check_relation");
  v2 = _mm_loadl_epi64(v5);
  a1->m128i_i64[0] = (__int64)off_1C517E8;
  v3 = *(__int64 **)(a2 + 8);
  a1->m128i_i32[2] = -1;
  result = *v3;
  a1[2].m128i_i32[0] = 0;
  a1[3].m128i_i64[0] = 0;
  a1[2].m128i_i64[1] = result;
  a1[1] = _mm_unpacklo_epi64(v2, (__m128i)a2);
  return result;
}

