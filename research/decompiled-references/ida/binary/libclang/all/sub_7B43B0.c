__int64 __fastcall sub_7B43B0(__int64 a1)
{
  __int64 v1; // rbx
  const __m128i *v2; // rax
  __m128i v4; // [rsp+0h] [rbp-18h] BYREF

  v1 = *(unsigned int *)(a1 + 92);
  if ( !(_DWORD)v1 )
    v1 = *(unsigned int *)(a1 + 24);
  if ( !*(_DWORD *)(a1 + 96) )
    return (v1 << 32) | (unsigned int)v1;
  v2 = (const __m128i *)(*(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 80) & 4) != 0 )
    v2 = (const __m128i *)v2->m128i_i64[0];
  v4 = _mm_unpacklo_epi64(_mm_loadl_epi64(v2), (__m128i)(unsigned __int64)&v2->m128i_u64[1]);
  return (sub_B1E800(&v4) << 32) | (unsigned int)v1;
}

