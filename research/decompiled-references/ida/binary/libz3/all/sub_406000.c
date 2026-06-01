void __fastcall sub_406000(__m128 *a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  __int64 v5; // rax
  __m128 v6; // xmm0
  unsigned __int64 v7; // rax

  a1->m128_u64[0] = a2;
  v5 = *(_QWORD *)(a2 + 16);
  a1->m128_u64[1] = a3;
  v6 = _mm_loadh_ps((const double *)(v5 + 8));
  a1[1].m128_u64[0] = 0;
  a1[1].m128_i32[2] = 0;
  a1[2] = v6;
  if ( a4 )
    ++*(_DWORD *)(a4 + 8);
  v7 = *a5;
  a1[3].m128_u64[1] = 0;
  a1[3].m128_u64[0] = v7;
  sub_3EE030((__int64)&a1[3], (__int64)a5);
}

