__int64 __fastcall sub_7794E0(__int64 a1)
{
  __int64 v1; // rbp
  const __m128i *v2; // r12
  _OWORD v4[2]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(unsigned int *)(a1 + 24);
  v2 = (const __m128i *)(*(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 80) & 4) != 0 )
    v2 = (const __m128i *)v2->m128i_i64[0];
  if ( v2 && (unsigned __int8)sub_777FD0(v2->m128i_i64[0]) )
  {
    v4[0] = _mm_unpacklo_epi64(_mm_loadl_epi64(v2), (__m128i)(unsigned __int64)&v2->m128i_u64[1]);
    v1 = (unsigned int)sub_B1E800(v4);
    sub_B1E2D0(v4);
  }
  return (v1 << 32) | *(unsigned int *)(a1 + 56);
}

