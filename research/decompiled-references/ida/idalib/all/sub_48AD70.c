__int64 __fastcall sub_48AD70(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __m128i v6; // xmm3
  __m128i si128; // xmm4
  __m128i v8; // xmm1

  v1 = operator new(0xB0u);
  sub_485FD0(v1, a1, 0);
  *(_QWORD *)(v1 + 152) = 0;
  *(_QWORD *)v1 = &off_2B2B720;
  v2 = *(_QWORD *)(v1 + 8);
  *(_QWORD *)(v1 + 72) = 0;
  *(_OWORD *)(v1 + 160) = 0;
  if ( *(int *)(v2 + 28) > 0 )
  {
    v3 = 0;
    do
    {
      v4 = operator new(0xB0u);
      v5 = *(_QWORD *)(v1 + 8);
      v6 = _mm_cvtsi32_si128(v3);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
      v8 = _mm_cvtsi32_si128(*(_DWORD *)(v5 + 4LL * (int)v3 + 16));
      *(_QWORD *)(v1 + 8 * v3++ + 56) = v4;
      *(_QWORD *)v4 = &off_2B2B5D8;
      *(_QWORD *)(v4 + 48) = 0;
      *(_QWORD *)(v4 + 72) = 0;
      *(_DWORD *)(v4 + 80) = -1;
      *(_QWORD *)(v4 + 88) = 0;
      *(_QWORD *)(v4 + 112) = 0;
      *(_DWORD *)(v4 + 120) = -1;
      *(_QWORD *)(v4 + 128) = 0;
      *(_QWORD *)(v4 + 152) = 0;
      *(_DWORD *)(v4 + 160) = -1;
      *(_DWORD *)(v4 + 168) = 18;
      *(__m128i *)(v4 + 16) = si128;
      *(__m128i *)(v4 + 32) = _mm_unpacklo_epi64((__m128i)v5, (__m128i)(unsigned __int64)(v1 + 152));
      *(_OWORD *)(v4 + 56) = 0;
      *(_OWORD *)(v4 + 96) = 0;
      *(_OWORD *)(v4 + 136) = 0;
      *(_QWORD *)(v4 + 8) = _mm_unpacklo_epi32(v8, v6).m128i_u64[0];
    }
    while ( *(_DWORD *)(v5 + 28) > (int)v3 );
  }
  return v1;
}
