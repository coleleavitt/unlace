__int64 __fastcall sub_7793A0(__int64 a1)
{
  __int64 v1; // rbp
  const __m128i *v2; // rdx
  __int64 v3; // rax
  unsigned int v4; // ebx
  _OWORD v6[2]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(unsigned int *)(a1 + 56);
  v2 = (const __m128i *)(*(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 80) & 4) != 0 )
    v2 = (const __m128i *)v2->m128i_i64[0];
  v3 = (unsigned int)v1;
  if ( v2 )
  {
    v6[0] = _mm_unpacklo_epi64(_mm_loadl_epi64(v2), (__m128i)(unsigned __int64)&v2->m128i_u64[1]);
    v4 = sub_B1E800(v6);
    sub_B1E2D0(v6);
    v3 = v4;
  }
  return v1 | (v3 << 32);
}

