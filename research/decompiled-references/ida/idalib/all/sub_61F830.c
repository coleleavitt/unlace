__int64 __fastcall sub_61F830(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // r14
  unsigned __int64 i; // r13
  int v9; // esi
  const __m128i *v10; // rbx
  int v11; // edx
  unsigned __int64 v12; // rax
  int v13; // ecx
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  __m128i v16; // xmm2
  __m128i v17; // xmm0
  unsigned __int64 v18; // rcx
  int j; // edx
  unsigned __int64 k; // rax
  __m128i v21; // xmm2
  __m128i v22; // xmm1
  __m128i v23; // xmm0
  __m128i v24; // xmm2
  __m128i v25; // xmm0
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int128 v29; // xmm2
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __m128i v32; // xmm3
  __m128i v33; // xmm0
  __m128i v34; // xmm1
  __m128i v35; // xmm2
  __m128i v36; // xmm2
  __m128i v37; // xmm0
  __m128i v38; // xmm1
  __m128i v39; // xmm0
  __m128i v40; // xmm2
  __m128i v41; // xmm0
  __m128i v42; // [rsp+30h] [rbp-58h]
  __m128i v43; // [rsp+40h] [rbp-48h] BYREF
  __m128i v44; // [rsp+50h] [rbp-38h]

  result = a2 - a1;
  if ( (__int64)(a2 - a1) > 768 )
  {
    v7 = a3;
    for ( i = a2; v7; i = (unsigned __int64)v10 )
    {
      v9 = *(_DWORD *)(i - 48);
      --v7;
      v10 = (const __m128i *)(a1 + 48);
      v11 = *(_DWORD *)(a1 + 48);
      v12 = a1
          + 16
          * (((__int64)(0xAAAAAAAAAAAAAAABLL * (result >> 4)) >> 1)
           + ((0xAAAAAAAAAAAAAAABLL * (result >> 4)) & 0xFFFFFFFFFFFFFFFELL));
      v13 = *(_DWORD *)v12;
      if ( v11 - *(_DWORD *)v12 < 0 )
      {
        if ( v13 - v9 >= 0 )
        {
          if ( v11 - v9 < 0 )
          {
LABEL_22:
            v38 = _mm_loadu_si128((const __m128i *)a1);
            v39 = _mm_loadu_si128((const __m128i *)(a1 + 16));
            v44 = _mm_loadu_si128((const __m128i *)(a1 + 32));
            v40 = _mm_loadu_si128((const __m128i *)(i - 48));
            v43 = v39;
            *(__m128i *)a1 = v40;
            v42 = v38;
            *(__m128i *)(a1 + 16) = _mm_loadu_si128((const __m128i *)(i - 32));
            *(__m128i *)(a1 + 28) = _mm_loadu_si128((const __m128i *)(i - 20));
            *(__m128i *)(i - 32) = v39;
            v41 = _mm_loadu_si128((const __m128i *)((char *)&v43.m128i_u64[1] + 4));
            *(__m128i *)(i - 48) = v38;
            *(__m128i *)(i - 20) = v41;
            goto LABEL_7;
          }
LABEL_21:
          v33 = _mm_loadu_si128((const __m128i *)(a1 + 16));
          v34 = _mm_loadu_si128((const __m128i *)a1);
          v44 = _mm_loadu_si128((const __m128i *)(a1 + 32));
          v35 = _mm_loadu_si128((const __m128i *)(a1 + 48));
          v43 = v33;
          *(__m128i *)a1 = v35;
          v42 = v34;
          *(__m128i *)(a1 + 16) = _mm_loadu_si128((const __m128i *)(a1 + 64));
          v36 = _mm_loadu_si128((const __m128i *)(a1 + 76));
          *(__m128i *)(a1 + 64) = v33;
          v37 = _mm_loadu_si128((const __m128i *)((char *)&v43.m128i_u64[1] + 4));
          *(__m128i *)(a1 + 28) = v36;
          *(__m128i *)(a1 + 48) = v34;
          *(__m128i *)(a1 + 76) = v37;
          goto LABEL_7;
        }
      }
      else
      {
        if ( v11 - v9 < 0 )
          goto LABEL_21;
        if ( v13 - v9 < 0 )
          goto LABEL_22;
      }
      v14 = _mm_loadu_si128((const __m128i *)a1);
      v15 = _mm_loadu_si128((const __m128i *)(a1 + 16));
      v44 = _mm_loadu_si128((const __m128i *)(a1 + 32));
      v16 = _mm_loadu_si128((const __m128i *)v12);
      v43 = v15;
      *(__m128i *)a1 = v16;
      v42 = v14;
      *(__m128i *)(a1 + 16) = _mm_loadu_si128((const __m128i *)(v12 + 16));
      *(__m128i *)(a1 + 28) = _mm_loadu_si128((const __m128i *)(v12 + 28));
      *(__m128i *)(v12 + 16) = v15;
      v17 = _mm_loadu_si128((const __m128i *)((char *)&v43.m128i_u64[1] + 4));
      *(__m128i *)v12 = v14;
      *(__m128i *)(v12 + 28) = v17;
LABEL_7:
      v18 = i;
      while ( 1 )
      {
        for ( j = *(_DWORD *)a1; v10->m128i_i32[0] - j < 0; v10 += 3 )
          ;
        for ( k = v18 - 48; j - *(_DWORD *)k < 0; k -= 48LL )
          ;
        if ( (unsigned __int64)v10 >= k )
          break;
        v21 = _mm_loadu_si128(v10 + 2);
        v22 = _mm_loadu_si128(v10);
        v18 = k;
        v10 += 3;
        v23 = _mm_loadu_si128(v10 - 2);
        v44 = v21;
        v24 = _mm_loadu_si128((const __m128i *)k);
        v43 = v23;
        v10[-3] = v24;
        v42 = v22;
        v10[-2] = _mm_loadu_si128((const __m128i *)(k + 16));
        *(const __m128i *)((char *)&v10[-2] + 12) = _mm_loadu_si128((const __m128i *)(k + 28));
        *(__m128i *)(k + 16) = v23;
        v25 = _mm_loadu_si128((const __m128i *)((char *)&v43.m128i_u64[1] + 4));
        *(__m128i *)k = v22;
        *(__m128i *)(k + 28) = v25;
      }
      sub_61F830(
        v10,
        i,
        v7,
        v18,
        a5,
        a6,
        v42.m128i_i64[0],
        v42.m128i_i64[1],
        v43.m128i_i64[0],
        v43.m128i_i64[1],
        v44.m128i_i64[0],
        v44.m128i_i64[1]);
      result = (__int64)v10->m128i_i64 - a1;
      if ( (__int64)v10->m128i_i64 - a1 <= 768 )
        return result;
    }
    sub_61F6F0((unsigned int *)a1, (const __m128i *)i, i, a4, a5, a6);
    for ( result = i - a1;
          (__int64)(i - a1) > 48;
          result = sub_61BC50(a1, 0, 0xAAAAAAAAAAAAAAABLL * ((__int64)(i - a1) >> 4), v26, v27, v28, v29, v30, v31) )
    {
      i -= 48LL;
      v29 = (__int128)_mm_loadu_si128((const __m128i *)i);
      v30 = (__int128)_mm_loadu_si128((const __m128i *)(i + 16));
      *(__m128i *)i = _mm_loadu_si128((const __m128i *)a1);
      v31 = (__int128)_mm_loadu_si128((const __m128i *)(i + 32));
      *(__m128i *)(i + 16) = _mm_loadu_si128((const __m128i *)(a1 + 16));
      v32 = _mm_loadu_si128((const __m128i *)(a1 + 28));
      v43.m128i_i32[3] = HIDWORD(v30);
      *(__m128i *)(i + 28) = v32;
      v44 = (__m128i)v31;
    }
  }
  return result;
}
