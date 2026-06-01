/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8069FC0
// Address: 0x08069FC0

//----- (08069FC0) --------------------------------------------------------
int __cdecl sub_8069FC0(int a1)
{
  unsigned int v1; // eax
  unsigned int v2; // edx
  __m128i v3; // xmm1
  __m128i v4; // xmm4
  int v5; // eax
  int v6; // edx
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  unsigned int v9; // eax
  unsigned int v10; // edx
  __m128i v11; // xmm2
  __m128i v12; // xmm1
  __m128i v13; // xmm1
  size_t v14; // eax
  int v15; // ebx
  __m128i v17; // [esp+4h] [ebp-48h] BYREF
  __m128i v18; // [esp+14h] [ebp-38h] BYREF
  __m128i v19; // [esp+24h] [ebp-28h]

  v1 = sub_80CD730(*(_DWORD *)(a1 + 360), 0, 1);
  v3 = _mm_loadl_epi64((const __m128i *)(a1 + 364));
  v4 = _mm_sub_epi64(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v1), _mm_cvtsi32_si128(v2)), v3);
  v19 = v3;
  v18.m128i_i64[0] = v4.m128i_i64[0];
  v17.m128i_i32[2] = _mm_cvtsi128_si32(v4);
  v5 = sub_80CD730(*(_DWORD *)(a1 + 360), v3.m128i_i64[0], 0);
  v7 = _mm_loadl_epi64((const __m128i *)(a1 + 364));
  if ( (v6 & v5) == 0xFFFFFFFF
    || (v8 = _mm_sub_epi64(_mm_loadl_epi64((const __m128i *)(a1 + 372)), v7),
        v17.m128i_i64[0] = v8.m128i_i64[0],
        v19.m128i_i32[0] = _mm_cvtsi128_si32(v8),
        v17.m128i_i32[3] = _mm_cvtsi128_si32(_mm_srli_epi64(v8, 0x20u)),
        v9 = sub_80CD730(*(_DWORD *)(a1 + 360), 0, 1),
        v7 = _mm_loadl_epi64((const __m128i *)(a1 + 364)),
        v11 = _mm_sub_epi64(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v9), _mm_cvtsi32_si128(v10)), v7),
        __PAIR64__(_mm_cvtsi128_si32(_mm_srli_epi64(v11, 0x20u)), _mm_cvtsi128_si32(v11)) >= __PAIR64__(
                                                                                               v17.m128i_u32[3],
                                                                                               v19.m128i_u32[0])) )
  {
    v19.m128i_i8[0] = 0;
  }
  else
  {
    v12 = _mm_loadl_epi64(&v17);
    v19.m128i_i8[0] = 0;
    v13 = _mm_sub_epi64(v12, v11);
    v17.m128i_i32[0] = _mm_cvtsi128_si32(v13);
    v17.m128i_i32[3] = _mm_cvtsi128_si32(_mm_srli_epi64(v13, 0x20u));
    if ( __PAIR64__(v17.m128i_u32[3], v17.m128i_u32[0]) > 0xF )
    {
      *(_OWORD *)(a1 + 384) = 0;
      *(_OWORD *)(a1 + 432) = 0;
      *(_OWORD *)(a1 + 400) = 0;
      *(_OWORD *)(a1 + 416) = 0;
      *(_OWORD *)(a1 + 440) = 0;
      v14 = sub_80CD690(*(_DWORD *)(a1 + 360), (void *)(a1 + 384), 16);
      v7 = _mm_loadl_epi64((const __m128i *)(a1 + 364));
      v19.m128i_i8[0] = 0;
      if ( v14 == 16 && *(_DWORD *)(a1 + 384) == 1179403647 )
      {
        if ( *(_BYTE *)(a1 + 477) )
          v15 = 64;
        else
          v15 = 52;
        v19.m128i_i8[0] = __PAIR64__(v17.m128i_u32[3], v17.m128i_u32[0]) >= (unsigned int)v15;
      }
    }
  }
  v18 = _mm_add_epi64(_mm_load_si128(&v18), v7);
  sub_80CD730(*(_DWORD *)(a1 + 360), v18.m128i_i64[0], 0);
  return v19.m128i_u8[0];
}
// 8069FED: variable 'v2' is possibly undefined
// 806A038: variable 'v6' is possibly undefined
// 806A083: variable 'v10' is possibly undefined
