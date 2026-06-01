__m128i *__fastcall sub_4DCBB0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v7; // r13
  __int64 v8; // r9
  __int64 i; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r14
  __m128i *result; // rax
  unsigned __int32 v15; // esi
  unsigned __int32 v16; // r15d
  __int64 v17; // rsi
  unsigned int v18; // ecx
  __int64 v19; // rcx

  v7 = a3 & 1;
  v8 = (a3 - 1) / 2;
  if ( a2 >= v8 )
  {
    result = (__m128i *)(a1 + 16 * a2);
    if ( (a3 & 1) != 0 || a2 != (a3 - 2) / 2 )
      goto LABEL_17;
    v11 = a2;
    goto LABEL_19;
  }
  for ( i = a2; ; i = v11 )
  {
    v11 = 2 * (i + 1);
    v12 = 32 * (i + 1);
    v13 = a1 + v12 - 16;
    result = (__m128i *)(a1 + v12);
    v15 = result->m128i_u32[2];
    v16 = *(_DWORD *)(v13 + 8);
    if ( v15 < v16 || v16 >= v15 && result->m128i_i64[0] < *(_QWORD *)v13 )
    {
      --v11;
      result = (__m128i *)(a1 + 16 * v11);
    }
    *(__m128i *)(a1 + 16 * i) = _mm_loadu_si128(result);
    if ( v8 <= v11 )
      break;
  }
  if ( !v7 && (a3 - 2) / 2 == v11 )
  {
LABEL_19:
    v19 = v11 + 1;
    v11 = 2 * (v11 + 1) - 1;
    *result = _mm_loadu_si128((const __m128i *)(a1 + 32 * v19 - 16));
    result = (__m128i *)(a1 + 16 * v11);
  }
  v17 = (v11 - 1) / 2;
  if ( v11 > a2 )
  {
    while ( 1 )
    {
      result = (__m128i *)(a1 + 16 * v17);
      v18 = result->m128i_u32[2];
      if ( v18 >= (unsigned int)a5 && ((unsigned int)a5 < v18 || result->m128i_i64[0] >= a4) )
        break;
      *(__m128i *)(a1 + 16 * v11) = _mm_loadu_si128(result);
      v11 = v17;
      if ( a2 >= v17 )
        goto LABEL_17;
      v17 = (v17 - 1) / 2;
    }
    result = (__m128i *)(a1 + 16 * v11);
  }
LABEL_17:
  result->m128i_i64[0] = a4;
  result->m128i_i64[1] = a5;
  return result;
}

