__int64 __fastcall sub_20C9AC0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 result; // rax
  unsigned int v5; // esi
  unsigned __int64 v6; // rbx
  __m128i *v7; // rdx
  unsigned __int64 v8; // rdi
  __m128i v9; // xmm2
  __m128i v10; // xmm2
  __m128i v11; // xmm1
  __m128i v12; // xmm4
  __m128i v13; // xmm3
  __m128i v14; // xmm2
  __m128i v15; // xmm1
  __m128i v16; // xmm0
  __m128i v17[2]; // [rsp+8h] [rbp-20h] BYREF

  v2 = 32LL * a2;
  v3 = operator new(v2 + a1);
  result = v2 + v3;
  v5 = a2 & 0x7FFFFFF | *(_DWORD *)(v2 + v3 + 4) & 0xF8000000;
  *(_DWORD *)(result + 4) = v5;
  *(_BYTE *)(result + 7) = HIBYTE(v5) & 0x3F;
  if ( v3 != v2 + v3 )
  {
    v6 = v2 - 32;
    v7 = (__m128i *)v3;
    v8 = (v6 >> 5) + 1;
    if ( v6 <= 0x40 )
      goto LABEL_6;
    v17[0].m128i_i64[0] = result;
    v9 = _mm_loadl_epi64(v17);
    v10 = _mm_unpacklo_epi64(v9, v9);
    v11 = _mm_unpacklo_epi64((__m128i)0LL, v10);
    v12 = _mm_unpackhi_epi64((__m128i)0LL, v10);
    v13 = _mm_unpacklo_epi64((__m128i)0LL, v11);
    v14 = _mm_unpackhi_epi64((__m128i)0LL, v11);
    v15 = _mm_unpacklo_epi64((__m128i)0LL, v12);
    v16 = _mm_unpackhi_epi64((__m128i)0LL, v12);
    do
    {
      *v7 = v13;
      v7 += 4;
      v7[-3] = v14;
      v7[-2] = v15;
      v7[-1] = v16;
    }
    while ( v7 != (__m128i *)(v3 + (v8 >> 1 << 6)) );
    v3 += 32 * (v8 & 0xFFFFFFFFFFFFFFFELL);
    if ( v8 != (v8 & 0xFFFFFFFFFFFFFFFELL) )
    {
LABEL_6:
      *(_QWORD *)(v3 + 16) = 0;
      *(_OWORD *)v3 = 0;
      *(_QWORD *)(v3 + 24) = result;
      if ( result != v3 + 32 )
      {
        *(_OWORD *)(v3 + 32) = 0;
        *(_QWORD *)(v3 + 48) = 0;
        *(_QWORD *)(v3 + 56) = result;
        if ( result != v3 + 64 )
        {
          *(_QWORD *)(v3 + 80) = 0;
          *(_QWORD *)(v3 + 88) = result;
          *(_OWORD *)(v3 + 64) = 0;
        }
      }
    }
  }
  return result;
}
