unsigned __int64 __fastcall sub_1EB1600(__int64 a1)
{
  _QWORD *v1; // rax
  __m128i v2; // xmm0
  __m128i v4; // [rsp+0h] [rbp-18h] BYREF

  v1 = *(_QWORD **)a1;
  if ( *(_DWORD *)(a1 + 8) )
  {
    while ( v1 != (_QWORD *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 16)) && (*v1 == -4096 || *v1 == -8192) )
      ++v1;
    v4.m128i_i64[0] = *(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 16);
    return _mm_loadh_ps((const double *)v4.m128i_i64).m128_u64[0];
  }
  else
  {
    v4.m128i_i64[0] = *(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 16);
    v2 = _mm_loadl_epi64(&v4);
    return _mm_unpacklo_epi64(v2, v2).m128i_u64[0];
  }
}
