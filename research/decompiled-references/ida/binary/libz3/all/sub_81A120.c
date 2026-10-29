__int64 __fastcall sub_81A120(_DWORD *a1)
{
  unsigned int v2; // esi
  unsigned int v3; // r15d
  int v4; // r13d
  int i; // r14d
  _DWORD *v6; // rbx
  __int64 result; // rax
  unsigned int v8; // edx
  unsigned int v9; // r10d
  _DWORD *v10; // rax
  __m128i v11; // xmm4
  __m128i v12; // xmm3
  __m128i v13; // xmm5
  _DWORD *v14; // rdi
  __m128 v15; // xmm1
  __m128 v16; // xmm6
  __m128i v17; // xmm1
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __int64 v20; // rdi
  unsigned int v21; // r10d
  __int64 v22; // rdi
  __int64 v23; // rdi
  unsigned int v24; // r10d
  __int64 v25; // rdi
  __int64 v26; // rdi
  unsigned int v27; // r10d
  unsigned int v28; // esi
  unsigned int v29; // r9d
  unsigned int v30; // r8d

  v2 = a1[8];
  a1[4] ^= 1u;
  if ( !v2 )
  {
    a1[15] = 1 - a1[15];
    goto LABEL_26;
  }
  v3 = 0;
  v4 = 0;
  for ( i = 0; ; i += result )
  {
    v6 = &a1[2 * v4];
    result = (unsigned int)v6[19];
    v6[20] ^= 1u;
    v8 = i + result;
    if ( __CFADD__(i, (_DWORD)result) )
    {
      sub_1872CE0("");
      sub_1873130(114, 63);
    }
    if ( v3 < (unsigned int)result )
      v3 = result;
    if ( ++v4 >= v2 )
      break;
  }
  v29 = v8 - a1[15];
  v30 = v29 + 1;
  a1[15] = v29 + 1;
  if ( v29 + 1 >= v3 )
  {
    if ( v29 < v8 )
      return result;
LABEL_26:
    sub_1872CE0("");
    sub_1873130(114, 72);
  }
  v9 = v2 - 1;
  if ( v2 - 1 <= 3 )
  {
    result = 0;
  }
  else
  {
    v10 = a1;
    v11 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v30), 0);
    v12 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0x80000000), 0);
    v13 = _mm_sub_epi32(v11, v12);
    v14 = &a1[8 * (v9 >> 2)];
    do
    {
      v15 = (__m128)_mm_loadu_si128((const __m128i *)(v10 + 19));
      v16 = (__m128)_mm_loadu_si128((const __m128i *)(v10 + 23));
      v10 += 8;
      v17 = (__m128i)_mm_shuffle_ps(v15, v16, 136);
      v18 = _mm_cmpgt_epi32(_mm_sub_epi32(v17, v12), v13);
      v19 = _mm_or_si128(_mm_andnot_si128(v18, v17), _mm_and_si128(v11, v18));
      v10[11] = _mm_cvtsi128_si32(v19);
      v10[13] = _mm_cvtsi128_si32(_mm_shuffle_epi32(v19, 85));
      v10[15] = _mm_cvtsi128_si32(_mm_unpackhi_epi32(v19, v19));
      v10[17] = _mm_cvtsi128_si32(_mm_shuffle_epi32(v19, 255));
    }
    while ( v10 != v14 );
    result = v9 & 0xFFFFFFFC;
  }
  v20 = (unsigned int)result + 8LL;
  v21 = a1[2 * v20 + 3];
  if ( v21 > v30 )
    v21 = v29 + 1;
  a1[2 * v20 + 3] = v21;
  v22 = (unsigned int)(result + 1);
  if ( (unsigned int)v22 < v2 )
  {
    v23 = v22 + 8;
    v24 = a1[2 * v23 + 3];
    if ( v24 > v30 )
      v24 = v29 + 1;
    a1[2 * v23 + 3] = v24;
    v25 = (unsigned int)(result + 2);
    if ( (unsigned int)v25 < v2 )
    {
      v26 = v25 + 8;
      v27 = a1[2 * v26 + 3];
      if ( v27 > v30 )
        v27 = v29 + 1;
      result = (unsigned int)(result + 3);
      a1[2 * v26 + 3] = v27;
      if ( (unsigned int)result < v2 )
      {
        result += 8;
        v28 = a1[2 * result + 3];
        if ( v28 > v30 )
          v28 = v29 + 1;
        a1[2 * result + 3] = v28;
      }
    }
  }
  if ( v29 >= v8 )
    goto LABEL_26;
  return result;
}

