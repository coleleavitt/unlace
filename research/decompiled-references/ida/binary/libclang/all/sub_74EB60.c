__int64 __fastcall sub_74EB60(
        __m128i *a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        unsigned int *a5,
        unsigned __int32 a6)
{
  __int64 result; // rax
  unsigned __int64 v8; // rbp
  __int64 v10; // rsi
  char v11; // r13
  __m128i v12; // xmm0
  __int64 v13; // rdx
  __m128i *v14; // rdi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  const __m128i *v17; // rax
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  unsigned __int64 v20; // rdx
  __int32 *v21; // rax
  const __m128i *v22; // rax
  __m128i v23; // xmm1
  __m128i v24; // xmm0
  __int8 *v25; // rax
  __int8 *v26; // rax
  const __m128i *v27; // rax
  __m128i v28; // xmm1
  __m128i v29; // xmm0
  __int64 v30; // rbp
  __int8 *v31; // rdx
  __int64 v32; // rdx
  size_t v33; // rdx
  __int64 v34; // rax

  result = a2;
  v8 = a6;
  v10 = 4LL * a6;
  v11 = a6;
  *a1 = _mm_loadu_si128(a3);
  v12 = _mm_loadu_si128(a3 + 1);
  a1[2].m128i_i8[2] &= 0xE0u;
  a1[2].m128i_i16[0] = 315;
  a1[1] = v12;
  v13 = *(_QWORD *)(result + 2192);
  a1[2].m128i_i64[1] = a4;
  a1[3].m128i_i32[0] = a6;
  v14 = (__m128i *)((v13 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  *(_QWORD *)(result + 2272) += v10;
  if ( *(_QWORD *)(result + 2200) >= (unsigned __int64)v14->m128i_u64 + v10 && v13 )
  {
    *(_QWORD *)(result + 2192) = (char *)v14 + v10;
  }
  else
  {
    result = sub_722150(result + 2192, v10, 4);
    v14 = (__m128i *)result;
  }
  v15 = v8 - 1;
  v16 = v8 - 1;
  if ( v8 )
  {
    if ( v15 <= 2 )
    {
      v14->m128i_i32[0] &= 0xC0000000;
      if ( v8 == 1 )
      {
        v14->m128i_i8[3] &= 0x3Fu;
        goto LABEL_26;
      }
      v14->m128i_i32[1] &= 0xC0000000;
      if ( v8 == 2 )
      {
        v14->m128i_i8[3] &= ~0x40u;
        v31 = &v14->m128i_i8[4];
        v34 = 1;
      }
      else
      {
        v14->m128i_i32[2] &= 0xC0000000;
        v31 = &v14->m128i_i8[4];
        v34 = 2;
        v14->m128i_i8[3] &= ~0x40u;
      }
      v31[3] &= ~0x40u;
      if ( v34 == 1 )
      {
        v14->m128i_i8[3] &= ~0x80u;
        result = (__int64)v14;
        goto LABEL_24;
      }
      v26 = &v14->m128i_i8[8];
    }
    else
    {
      v17 = v14;
      v18 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0xC0000000), 0);
      do
      {
        v19 = _mm_loadu_si128(v17++);
        v17[-1] = _mm_and_si128(v19, v18);
      }
      while ( &v14[v8 >> 2] != v17 );
      v20 = v15 - (v8 & 0xFFFFFFFFFFFFFFFCLL);
      v21 = &v14->m128i_i32[v8 & 0xFFFFFFFFFFFFFFFCLL];
      if ( (v11 & 3) != 0 )
      {
        *v21 &= 0xC0000000;
        if ( v20 )
        {
          v21[1] &= 0xC0000000;
          if ( v20 != 1 )
            v21[2] &= 0xC0000000;
        }
      }
      v22 = v14;
      v23 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0xBFFFFFFF), 0);
      do
      {
        v24 = _mm_loadu_si128(v22++);
        v22[-1] = _mm_and_si128(v24, v23);
      }
      while ( &v14[v8 >> 2] != v22 );
      if ( (v11 & 3) == 0 )
        goto LABEL_19;
      v25 = &v14->m128i_i8[4 * (v8 & 0xFFFFFFFFFFFFFFFCLL)];
      v25[3] &= ~0x40u;
      if ( v15 == (v8 & 0xFFFFFFFFFFFFFFFCLL) )
        goto LABEL_19;
      v25[7] &= ~0x40u;
      if ( v15 - (v8 & 0xFFFFFFFFFFFFFFFCLL) == 1 )
        goto LABEL_19;
      v26 = v25 + 8;
    }
    v26[3] &= ~0x40u;
    if ( v15 > 2 )
    {
LABEL_19:
      v27 = v14;
      v28 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0x7FFFFFFFu), 0);
      do
      {
        v29 = _mm_loadu_si128(v27++);
        v27[-1] = _mm_and_si128(v29, v28);
      }
      while ( &v14[v8 >> 2] != v27 );
      v30 = (unsigned int)v8 & 0xFFFFFFFC;
      v16 = v15 - v30;
      result = (__int64)v14->m128i_i64 + 4 * v30;
      if ( (v11 & 3) == 0 )
        goto LABEL_26;
      *(_BYTE *)(result + 3) &= ~0x80u;
      if ( !v16 )
        goto LABEL_26;
      v31 = (__int8 *)(result + 4);
      goto LABEL_24;
    }
    v14->m128i_i8[3] &= ~0x80u;
    v31 = &v14->m128i_i8[4];
    result = (__int64)v14;
LABEL_24:
    v31[3] &= ~0x80u;
    if ( v16 != 1 )
      *(_BYTE *)(result + 11) &= ~0x80u;
  }
LABEL_26:
  v32 = a1[3].m128i_u32[0];
  a1[3].m128i_i64[1] = (__int64)v14;
  v33 = 4 * v32;
  if ( v33 > 4 )
    return (__int64)memmove(v14, a5, v33);
  if ( v33 == 4 )
  {
    result = *a5;
    v14->m128i_i32[0] = result;
  }
  return result;
}

