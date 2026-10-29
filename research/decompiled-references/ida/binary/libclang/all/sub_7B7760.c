__int64 __fastcall sub_7B7760(__int64 a1)
{
  const __m128i *v1; // rdx
  __int64 v2; // rbx
  _OWORD v4[2]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(const __m128i **)(a1 + 88);
  if ( !v1 )
    return 0;
  v4[0] = _mm_unpacklo_epi64(_mm_loadl_epi64(v1), (__m128i)(unsigned __int64)&v1->m128i_u64[1]);
  v2 = (unsigned int)sub_B1E800(v4);
  return (v2 << 32) | (unsigned int)sub_B1E2D0(v4);
}

