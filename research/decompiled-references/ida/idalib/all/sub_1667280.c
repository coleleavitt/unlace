void __fastcall sub_1667280(__int64 a1, unsigned int a2, int a3, const void *a4, size_t a5, __int64 a6)
{
  char v6; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rcx
  __m128i v15; // xmm0
  __m128i v16; // xmm2
  __m128i v17; // xmm1
  __m128i *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rbx
  unsigned __int64 v27; // rdx
  const __m128i *v28; // rbx
  size_t v29; // rdx
  const void *v30; // rdi
  size_t v31; // rdx
  __int64 v32; // rcx
  const void *v33; // rdi
  int v34; // eax
  __int64 v35; // rsi
  __int64 v38; // [rsp+Ch] [rbp-68h]
  __int64 v39; // [rsp+Ch] [rbp-68h]
  unsigned __int64 v40; // [rsp+14h] [rbp-60h]
  _QWORD v41[2]; // [rsp+1Ch] [rbp-58h] BYREF
  __m128i v42; // [rsp+2Ch] [rbp-48h]

  if ( !a3 )
  {
    v19 = *(_QWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 96) = a2;
    *(_QWORD *)(a1 + 88) = v19;
    return;
  }
  v6 = a3;
  if ( (a3 & 2) != 0 )
  {
    v12 = *(unsigned int *)(a1 + 8);
    v13 = *(_QWORD *)a1;
    v14 = *(unsigned int *)(a1 + 12);
    v15 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 88));
    v16 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 92));
    v17 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 96));
    v18 = (__m128i *)(*(_QWORD *)a1 + 32 * v12);
    if ( v12 >= v14 )
    {
      v27 = v12 + 1;
      v41[0] = a4;
      v41[1] = a5;
      v28 = (const __m128i *)v41;
      v42 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v15, v16), _mm_unpacklo_epi32(v17, _mm_cvtsi32_si128(a2)));
      if ( v14 < v27 )
      {
        v35 = a1 + 16;
        if ( v13 > (unsigned __int64)v41 || v18 <= (__m128i *)v41 )
        {
          sub_2237220(a1, v35, v27, 32);
          v18 = (__m128i *)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
        }
        else
        {
          sub_2237220(a1, v35, v27, 32);
          v28 = (const __m128i *)((char *)v41 + *(_QWORD *)a1 - v13);
          v18 = (__m128i *)(32LL * *(unsigned int *)(a1 + 8) + *(_QWORD *)a1);
        }
      }
      *v18 = _mm_loadu_si128(v28);
      v18[1] = _mm_loadu_si128(v28 + 1);
      ++*(_DWORD *)(a1 + 8);
    }
    else
    {
      v18->m128i_i64[0] = (__int64)a4;
      v18->m128i_i64[1] = a5;
      v18[1] = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v15, v16), _mm_unpacklo_epi32(v17, _mm_cvtsi32_si128(a2)));
      ++*(_DWORD *)(a1 + 8);
    }
    goto LABEL_7;
  }
  if ( (a3 & 4) == 0 )
    goto LABEL_7;
  v10 = *(unsigned int *)(a1 + 8);
  if ( !a5 )
  {
    if ( (_DWORD)v10 )
    {
      v11 = *(_QWORD *)a1 + 32LL * (unsigned int)v10 - 32;
      *(_QWORD *)(a1 + 88) = *(_QWORD *)(v11 + 16);
      LODWORD(v11) = *(_DWORD *)(v11 + 24);
      *(_DWORD *)(a1 + 8) = v10 - 1;
      *(_DWORD *)(a1 + 96) = v11;
    }
    goto LABEL_7;
  }
  v20 = 32 * v10;
  v21 = *(_QWORD *)a1 + v20;
  v22 = v20 >> 5;
  v23 = v20 >> 7;
  v40 = *(_QWORD *)a1;
  if ( v23 )
  {
    v38 = v21 - (v23 << 7);
    while ( a5 != *(_QWORD *)(v21 - 24) || memcmp(*(const void **)(v21 - 32), a4, a5) )
    {
      if ( a5 == *(_QWORD *)(v21 - 56) && !memcmp(*(const void **)(v21 - 64), a4, a5) )
      {
        v21 -= 32;
        goto LABEL_23;
      }
      if ( a5 == *(_QWORD *)(v21 - 88) && !memcmp(*(const void **)(v21 - 96), a4, a5) )
      {
        v21 -= 64;
        goto LABEL_23;
      }
      v24 = v21 - 128;
      if ( a5 == *(_QWORD *)(v21 - 120) && !memcmp(*(const void **)(v21 - 128), a4, a5) )
      {
        v21 -= 96;
        goto LABEL_23;
      }
      v21 -= 128;
      if ( v38 == v24 )
      {
        v22 = (__int64)(v24 - v40) >> 5;
        goto LABEL_32;
      }
    }
    goto LABEL_23;
  }
  v24 = v21;
LABEL_32:
  if ( v22 == 2 )
  {
    v31 = *(_QWORD *)(v24 - 24);
    v32 = v24 - 32;
    v33 = *(const void **)(v24 - 32);
    if ( a5 != v31 )
      goto LABEL_40;
    goto LABEL_39;
  }
  if ( v22 == 3 )
  {
    if ( a5 == *(_QWORD *)(v24 - 24) )
    {
      v21 = v24;
      if ( !memcmp(*(const void **)(v24 - 32), a4, a5) )
        goto LABEL_23;
    }
    v31 = *(_QWORD *)(v24 - 56);
    v32 = v24 - 64;
    v33 = *(const void **)(v24 - 64);
    v24 -= 32;
    if ( a5 != v31 )
    {
LABEL_40:
      v29 = *(_QWORD *)(v32 - 24);
      v30 = *(const void **)(v32 - 32);
      v24 = v32;
      if ( a5 != v29 )
        goto LABEL_7;
      goto LABEL_36;
    }
LABEL_39:
    v39 = v32;
    v21 = v24;
    v34 = memcmp(v33, a4, v31);
    v32 = v39;
    if ( v34 )
      goto LABEL_40;
LABEL_23:
    if ( v40 != v21 )
    {
      v25 = *(_QWORD *)(v21 - 16);
      v26 = v21 - 32;
      *(_QWORD *)(a1 + 88) = v25;
      *(_DWORD *)(a1 + 96) = *(_DWORD *)(v26 + 24);
      *(_DWORD *)(a1 + 8) = (__int64)(v26 - v40) >> 5;
    }
    goto LABEL_7;
  }
  if ( v22 != 1 )
    goto LABEL_7;
  v29 = *(_QWORD *)(v24 - 24);
  v30 = *(const void **)(v24 - 32);
  if ( a5 != v29 )
    goto LABEL_7;
LABEL_36:
  if ( !memcmp(v30, a4, v29) )
  {
    v21 = v24;
    goto LABEL_23;
  }
LABEL_7:
  if ( (v6 & 1) != 0 )
  {
    *(_QWORD *)(a1 + 88) = a6;
    *(_DWORD *)(a1 + 96) = a2;
  }
}
