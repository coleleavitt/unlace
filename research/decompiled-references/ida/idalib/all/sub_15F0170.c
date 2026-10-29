__m128i *__fastcall sub_15F0170(__m128i *a1, __int64 **a2, __int64 **a3, const __m128i *a4)
{
  __m128i si128; // xmm1
  __m128i v5; // xmm0
  __m128i *result; // rax
  __int64 *v7; // rcx
  __int64 *v8; // rdi
  __int64 *v9; // r8
  __int64 *v10; // rsi
  __int64 v11; // r10
  __int64 v12; // r11
  int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __m128i v18; // xmm0
  __m128i v19; // [rsp+0h] [rbp-10h] BYREF

  si128 = _mm_load_si128(a4);
  v5 = _mm_load_si128(a4 + 1);
  result = a1;
  v7 = *a2;
  v8 = a2[2];
  v9 = *a3;
  v10 = a2[3];
  *result = si128;
  result[1] = v5;
LABEL_2:
  if ( v9 != v7 )
  {
    v11 = result[1].m128i_i64[0];
    do
    {
      v12 = *v7;
      v13 = *((_DWORD *)v7 + 2);
      v7 += 2;
      v14 = result->m128i_i64[0];
      *(_QWORD *)v14 = v12;
      *(_DWORD *)(v14 + 8) = v13;
      if ( v8 == v7 )
      {
        v7 = (__int64 *)v10[1];
        v16 = v14 + 16;
        result->m128i_i64[0] = v16;
        ++v10;
        v8 = v7 + 64;
        if ( v11 == v16 )
        {
LABEL_9:
          v17 = result[1].m128i_i64[1];
          v19.m128i_i64[0] = *(_QWORD *)(v17 + 8);
          v18 = _mm_loadl_epi64(&v19);
          *result = _mm_unpacklo_epi64(v18, v18);
          v19.m128i_i64[0] = v17 + 8;
          result[1] = (__m128i)_mm_loadh_ps((const double *)v19.m128i_i64);
          goto LABEL_2;
        }
      }
      else
      {
        v15 = v14 + 16;
        result->m128i_i64[0] = v15;
        if ( v15 == v11 )
          goto LABEL_9;
      }
    }
    while ( v9 != v7 );
  }
  return result;
}
