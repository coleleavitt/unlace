__int64 __fastcall sub_781CD0(__int64 a1)
{
  __int64 v1; // rax
  const __m128i *v3; // rax
  __int64 v4; // rbx
  _OWORD v5[2]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 128);
  if ( !v1 )
    return 0;
  if ( (v1 & 4) == 0 )
    return 0;
  v3 = (const __m128i *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
  if ( !v3 )
    return 0;
  v5[0] = _mm_unpacklo_epi64(_mm_loadl_epi64(v3), (__m128i)(unsigned __int64)&v3->m128i_u64[1]);
  v4 = (unsigned int)sub_B1E800(v5);
  return (v4 << 32) | (unsigned int)sub_B1E2D0(v5);
}

