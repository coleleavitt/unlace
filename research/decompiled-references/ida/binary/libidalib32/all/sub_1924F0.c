__int64 __fastcall sub_1924F0(__m128i *a1, const __m128i *a2)
{
  signed int v3; // edx
  signed int v4; // eax
  __m128i v5; // xmm1
  __m128i v6; // xmm2
  TView *v7; // rdi
  __int64 Extent; // rax
  __int64 v9; // rdx
  unsigned int v10; // esi
  int v11; // ecx
  __int64 result; // rax
  __m128i v13; // xmm0
  unsigned int v14; // esi
  __m128i v15; // xmm5
  __int64 v16; // rdx
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  int v19; // edx

  *a1 = _mm_loadu_si128(a2 + 1);
  v3 = a2[1].m128i_i32[0];
  if ( v3 < 0 )
  {
    v4 = (*(__int64 (__fastcall **)(const __m128i *))(a2->m128i_i64[0] + 40))(a2) + 3;
    if ( v4 > *((_DWORD *)TProgram::deskTop + 5) )
      v4 = *((_DWORD *)TProgram::deskTop + 5);
    if ( v4 < 6 )
      v4 = 6;
    v19 = a2[2].m128i_i32[0];
    if ( v19 <= 0 )
      v5 = _mm_cvtsi32_si128(*((_DWORD *)TProgram::deskTop + 4));
    else
      v5 = _mm_cvtsi32_si128(v19 + 2);
    v3 = 0;
    v6 = 0;
  }
  else
  {
    v4 = a2[1].m128i_i32[3];
    v5 = _mm_cvtsi32_si128(a2[1].m128i_u32[2]);
    v6 = _mm_cvtsi32_si128(a2[1].m128i_u32[1]);
  }
  v7 = TProgram::deskTop;
  *a1 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v3), v6), _mm_unpacklo_epi32(v5, _mm_cvtsi32_si128(v4)));
  Extent = TView::getExtent(v7);
  v10 = Extent;
  if ( a1->m128i_i32[0] >= (int)Extent )
    v10 = a1->m128i_i32[0];
  v11 = a1->m128i_i32[1];
  result = Extent >> 32;
  v13 = _mm_cvtsi32_si128(v10);
  v14 = v9;
  if ( (int)result < v11 )
    result = (unsigned int)v11;
  v15 = _mm_cvtsi32_si128(result);
  if ( a1->m128i_i32[2] <= (int)v9 )
    v14 = a1->m128i_u32[2];
  v16 = v9 >> 32;
  v17 = _mm_unpacklo_epi32(v13, v15);
  v18 = _mm_cvtsi32_si128(v14);
  if ( (int)v16 > a1->m128i_i32[3] )
    LODWORD(v16) = a1->m128i_i32[3];
  *a1 = _mm_unpacklo_epi64(v17, _mm_unpacklo_epi32(v18, _mm_cvtsi32_si128(v16)));
  return result;
}

