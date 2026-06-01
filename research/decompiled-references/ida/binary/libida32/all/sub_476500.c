__int64 __fastcall sub_476500(const char *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  int v3; // edx
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __m128i v7; // xmm2
  __m128i si128; // xmm3
  __m128i v9; // xmm0

  v1 = operator new(0xC8u);
  sub_4717D0(v1, a1);
  *(_QWORD *)(v1 + 152) = 0;
  *(_QWORD *)v1 = &off_2B018D8;
  v2 = *(_QWORD *)(v1 + 8);
  *(_QWORD *)(v1 + 176) = 0;
  *(_QWORD *)(v1 + 72) = 0;
  *(_OWORD *)(v1 + 160) = 0;
  *(_OWORD *)(v1 + 184) = 0;
  v3 = *(_DWORD *)(v2 + 28);
  if ( v3 > 0 )
  {
    v4 = 0;
    do
    {
      v5 = operator new(0x38u);
      v6 = *(_QWORD *)(v1 + 8);
      v7 = _mm_cvtsi32_si128(v4);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
      v9 = _mm_cvtsi32_si128(*(_DWORD *)(v6 + 4LL * (int)v4 + 16));
      *(_QWORD *)(v1 + 8 * v4++ + 56) = v5;
      *(_QWORD *)v5 = off_2B017B8;
      *(_QWORD *)(v5 + 48) = v1 + 176;
      *(__m128i *)(v5 + 16) = si128;
      *(__m128i *)(v5 + 32) = _mm_unpacklo_epi64((__m128i)v6, (__m128i)(unsigned __int64)(v1 + 152));
      *(_QWORD *)(v5 + 8) = _mm_unpacklo_epi32(v9, v7).m128i_u64[0];
      v3 = *(_DWORD *)(v6 + 28);
    }
    while ( v3 > (int)v4 );
  }
  sub_470AC0((_QWORD *)v1, nullptr, v3);
  return v1;
}

