__int64 __fastcall sub_A49C0(unsigned int a1, __int64 *a2)
{
  __int64 v3; // r15
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned __int64 v7; // r12
  __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  __m128i v10; // xmm1
  __m128i v11; // xmm1
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // r14
  _QWORD *v15; // rbp
  const __m128i *v16; // r14
  size_t v17; // r12
  __int16 v18; // ax
  __int64 v19; // r13
  __m128i v20; // xmm0
  __int64 v21; // rsi
  __int16 v22; // ax
  __int16 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  __m128i v26; // xmm0
  size_t v27; // rbp
  void *v28; // rax
  const void *v29; // rsi
  void *v30; // rax
  const void *v31; // rsi
  __int16 v32; // ax
  __m128i v33; // xmm0
  __int64 v34; // rax
  __m128i v35; // xmm1
  __int64 v36; // rdx
  __int64 v37; // rax
  void *src; // [rsp+8h] [rbp-110h]
  void *v39; // [rsp+10h] [rbp-108h]
  void *v40; // [rsp+18h] [rbp-100h]
  void *v41; // [rsp+20h] [rbp-F8h]
  char v42; // [rsp+2Ch] [rbp-ECh]
  __int16 v43; // [rsp+2Ch] [rbp-ECh]
  char v44; // [rsp+2Fh] [rbp-E9h]
  __m128i v45; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v46; // [rsp+40h] [rbp-D8h]
  __int128 v47; // [rsp+48h] [rbp-D0h]
  __int64 v48; // [rsp+58h] [rbp-C0h]
  __int128 v49; // [rsp+60h] [rbp-B8h]
  __int128 v50; // [rsp+70h] [rbp-A8h]
  __m128i v51; // [rsp+80h] [rbp-98h] BYREF
  __int64 v52; // [rsp+90h] [rbp-88h]
  __int128 v53; // [rsp+98h] [rbp-80h]
  __int64 v54; // [rsp+A8h] [rbp-70h]
  __int128 v55; // [rsp+B0h] [rbp-68h]
  __int64 v56; // [rsp+C0h] [rbp-58h]
  __int16 v57; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v58; // [rsp+D8h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  v3 = sub_A0A20((__int64)xmmword_251F20, a1);
  v4 = *(_QWORD *)(v3 + 24);
  if ( !v4 )
    return 0;
  v5 = *(_QWORD *)(v4 + 8);
  if ( !v5 )
    return 0;
  v7 = a2[1];
  if ( v5 != v7 )
  {
    v46 = 0;
    v50 = 0;
    v48 = 0;
    v45 = 0;
    v47 = 0;
    v49 = 0;
    if ( v5 < v7 )
    {
      v14 = v5;
      do
      {
        v15 = (_QWORD *)(*a2 + 80 * v14);
        if ( v15[5] )
        {
          v15[6] = 0;
          qfree();
        }
        if ( v15[2] )
        {
          v15[3] = 0;
          qfree();
        }
        ++v14;
      }
      while ( v14 < v7 );
    }
    else
    {
      v8 = *a2;
      v9 = a2[2];
      if ( (unsigned __int64)&v45 >= *a2 && (unsigned __int64)&v45 < v8 + 80 * v9 )
      {
        v10 = _mm_load_si128(&v45);
        v52 = 0;
        v54 = 0;
        v56 = 0;
        v57 = 0;
        v51 = v10;
        v53 = 0;
        v55 = 0;
        if ( v9 < v5 )
        {
          *a2 = qvector_reserve();
          v7 = a2[1];
        }
        if ( v7 < v5 )
        {
          v11 = _mm_load_si128(&v51);
          v12 = 80 * v7;
          do
          {
            ++v7;
            v13 = v12 + *a2;
            v12 += 80;
            *(_QWORD *)(v13 + 16) = 0;
            *(_QWORD *)(v13 + 40) = 0;
            *(_QWORD *)(v13 + 64) = 0;
            *(_WORD *)(v13 + 72) = 0;
            *(__m128i *)v13 = v11;
            *(_OWORD *)(v13 + 24) = 0;
            *(_OWORD *)(v13 + 48) = 0;
          }
          while ( v5 != v7 );
        }
        a2[1] = v5;
        sub_9FC50(&v51);
        goto LABEL_21;
      }
      if ( v9 < v5 )
      {
        *a2 = qvector_reserve();
        v7 = a2[1];
      }
      if ( v7 < v5 )
      {
        v35 = _mm_load_si128(&v45);
        v36 = 80 * v7;
        do
        {
          ++v7;
          v37 = v36 + *a2;
          v36 += 80;
          *(_QWORD *)(v37 + 16) = 0;
          *(_QWORD *)(v37 + 40) = 0;
          *(_QWORD *)(v37 + 64) = 0;
          *(_WORD *)(v37 + 72) = 0;
          *(__m128i *)v37 = v35;
          *(_OWORD *)(v37 + 24) = 0;
          *(_OWORD *)(v37 + 48) = 0;
        }
        while ( v5 != v7 );
      }
    }
    a2[1] = v5;
LABEL_21:
    v4 = *(_QWORD *)(v3 + 24);
    v7 = *(_QWORD *)(v4 + 8);
  }
  v16 = *(const __m128i **)v4;
  if ( 80 * v7 )
  {
    do
    {
      v26 = _mm_loadu_si128(v16);
      v27 = v16[1].m128i_u64[1];
      *((_QWORD *)&v47 + 1) = 0;
      v39 = nullptr;
      v45 = v26;
      if ( v27 )
      {
        v28 = (void *)qalloc_or_throw();
        v29 = (const void *)v16[1].m128i_i64[0];
        *((_QWORD *)&v47 + 1) = v27;
        v39 = v28;
        memcpy(v28, v29, v27);
      }
      *((_QWORD *)&v49 + 1) = 0;
      v17 = v16[3].m128i_u64[0];
      if ( v17 )
      {
        v30 = (void *)qalloc_or_throw();
        v31 = (const void *)v16[2].m128i_i64[1];
        src = v30;
        *((_QWORD *)&v49 + 1) = v17;
        memcpy(v30, v31, v17);
        v32 = v16[4].m128i_i16[4];
        v19 = v16[4].m128i_i64[0];
        v33 = _mm_load_si128(&v45);
        *(_QWORD *)&v50 = v19;
        v42 = HIBYTE(v32);
        v44 = v32;
        WORD4(v50) = v32;
        v51 = v33;
        if ( v27 )
        {
          v40 = (void *)qalloc_or_throw();
          memcpy(v40, v39, v27);
        }
        else
        {
          v40 = nullptr;
        }
        v41 = (void *)qalloc_or_throw();
        memcpy(v41, src, v17);
      }
      else
      {
        v18 = v16[4].m128i_i16[4];
        v19 = v16[4].m128i_i64[0];
        v20 = _mm_load_si128(&v45);
        *(_QWORD *)&v50 = v19;
        v42 = HIBYTE(v18);
        v44 = v18;
        WORD4(v50) = v18;
        v51 = v20;
        if ( v27 )
        {
          v40 = (void *)qalloc_or_throw();
          memcpy(v40, v39, v27);
          src = nullptr;
        }
        else
        {
          src = nullptr;
          v40 = nullptr;
        }
        v41 = nullptr;
      }
      v21 = *a2;
      v56 = v19;
      LOBYTE(v22) = v44;
      HIBYTE(v22) = v42;
      v57 = v22;
      v23 = v22;
      v24 = a2[1];
      if ( a2[2] < (unsigned __int64)(v24 + 1) )
      {
        v43 = v23;
        v34 = qvector_reserve();
        *a2 = v34;
        v21 = v34;
        v23 = v43;
        v24 = a2[1];
      }
      v25 = v21 + 80 * v24;
      *(__m128i *)v25 = _mm_load_si128(&v51);
      *(_QWORD *)(v25 + 16) = v40;
      *(__m128i *)(v25 + 24) = _mm_unpacklo_epi64((__m128i)v27, (__m128i)v27);
      *(_QWORD *)(v25 + 40) = v41;
      *(_QWORD *)(v25 + 64) = v19;
      *(_WORD *)(v25 + 72) = v23;
      *(__m128i *)(v25 + 48) = _mm_unpacklo_epi64((__m128i)v17, (__m128i)v17);
      ++a2[1];
      if ( src )
        qfree();
      if ( v39 )
        qfree();
      v16 += 5;
    }
    while ( v16 != (const __m128i *)(**(_QWORD **)(v3 + 24) + 80LL * *(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL)) );
  }
  return 0;
}

