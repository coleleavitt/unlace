__m128i **__fastcall sub_5682B0(__m128i **a1, __int64 a2)
{
  __m128i *v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  __m128i v5; // xmm0

  v2 = (__m128i *)sub_186B270(0x48u);
  v3 = *(_QWORD *)(a2 + 152);
  v2->m128i_i64[0] = (__int64)off_1C51278;
  if ( v3 == 0xFFFFFFFFLL )
    v3 = *(_QWORD *)(a2 + 80);
  v4 = *(_QWORD *)(a2 + 88) + v3;
  v2[3].m128i_i64[0] = a2;
  v5 = (__m128i)v4;
  LODWORD(v4) = *(_DWORD *)(a2 + 64);
  v2[2].m128i_i64[1] = (__int64)off_1C67A68;
  v2[3].m128i_i64[1] = (__int64)v2;
  v2[2].m128i_i32[0] = v4;
  v2[4].m128i_i64[0] = a2 + 40;
  *a1 = v2;
  v2->m128i_i32[2] = 1;
  v2[1] = _mm_unpacklo_epi64(v5, v5);
  return a1;
}

