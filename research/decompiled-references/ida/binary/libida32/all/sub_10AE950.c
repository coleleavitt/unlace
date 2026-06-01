__int64 __fastcall sub_10AE950(__m128 *a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __m128 v5; // xmm0
  char *v6; // rdx
  __int64 result; // rax
  char *v8; // rsi
  const __m128i *v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  __m128i v12; // xmm0
  __m128i v13; // xmm2
  __m128i v14; // xmm0
  double v15[3]; // [rsp+0h] [rbp-18h] BYREF

  *(_QWORD *)&v15[0] = a3;
  *(_QWORD *)&v15[1] = a2;
  a1[1].m128_u64[0] = a4;
  v5 = _mm_loadh_ps(v15);
  a1[1].m128_i32[2] = 0;
  *a1 = v5;
  v6 = *(char **)(a5 + 120);
  result = *(unsigned int *)(a5 + 128);
  v8 = &v6[4 * result];
  if ( v6 != v8 )
  {
    v9 = *(const __m128i **)(a5 + 120);
    v10 = (unsigned __int64)(v8 - v6 - 4) >> 2;
    v11 = v10 + 1;
    if ( (v10 & 0x3FFFFFFFFFFFFFFCLL) != 0 )
    {
      v12 = 0;
      do
      {
        v13 = _mm_loadu_si128(v9++);
        v12 = _mm_or_si128(v12, v13);
      }
      while ( v9 != (const __m128i *)&v6[16 * (v11 >> 2)] );
      v14 = _mm_or_si128(v12, _mm_srli_si128(v12, 8));
      v6 += 4 * (v11 & 0xFFFFFFFFFFFFFFFCLL);
      result = (unsigned int)_mm_cvtsi128_si32(_mm_or_si128(v14, _mm_srli_si128(v14, 4)));
      if ( v11 == (v11 & 0xFFFFFFFFFFFFFFFCLL) )
      {
LABEL_10:
        a1[1].m128_i32[2] = result;
        return result;
      }
    }
    else
    {
      LODWORD(result) = 0;
    }
    result = *(_DWORD *)v6 | (unsigned int)result;
    if ( v8 != v6 + 4 )
    {
      result = *((_DWORD *)v6 + 1) | (unsigned int)result;
      if ( v8 != v6 + 8 )
      {
        result = *((_DWORD *)v6 + 2) | (unsigned int)result;
        if ( v8 != v6 + 12 )
          result = *((_DWORD *)v6 + 3) | (unsigned int)result;
      }
    }
    goto LABEL_10;
  }
  return result;
}

