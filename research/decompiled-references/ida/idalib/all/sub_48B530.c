_QWORD *__fastcall sub_48B530(__int64 *a1)
{
  _QWORD *v1; // rbp
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __m128i v5; // xmm1
  __m128i si128; // xmm2
  __m128i v7; // xmm0

  v1 = (_QWORD *)operator new(0x98u);
  sub_485FD0((__int64)v1, a1, 0);
  v1[9] = 0;
  *v1 = &off_2B2C130;
  if ( *(int *)(v1[1] + 28LL) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = operator new(0x48u);
      v4 = v1[1];
      v5 = _mm_cvtsi32_si128(v2);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
      v7 = _mm_cvtsi32_si128(*(_DWORD *)(v4 + 4LL * (int)v2 + 16));
      v1[v2++ + 7] = v3;
      *(_QWORD *)(v3 + 32) = v4;
      *(_QWORD *)(v3 + 40) = 0;
      *(_QWORD *)v3 = &off_2B2C078;
      *(_BYTE *)(v3 + 64) = 0;
      *(__m128i *)(v3 + 16) = si128;
      *(_OWORD *)(v3 + 48) = 0;
      *(_QWORD *)(v3 + 8) = _mm_unpacklo_epi32(v7, v5).m128i_u64[0];
    }
    while ( *(_DWORD *)(v4 + 28) > (int)v2 );
  }
  return v1;
}
