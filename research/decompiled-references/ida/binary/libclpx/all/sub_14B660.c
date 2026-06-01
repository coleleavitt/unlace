unsigned __int64 __fastcall sub_14B660(
        int a1,
        int a2,
        int a3,
        int a4,
        _DWORD *a5,
        unsigned __int64 a6,
        int *a7,
        int *a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v13; // rbp
  int *v14; // r8
  int v15; // edi
  int v16; // r14d
  int v17; // eax
  int *v18; // r14
  __int64 v19; // r11
  int *v20; // rbx
  int v21; // r13d
  __int64 v22; // rbp
  __int64 v23; // r15
  int v24; // r8d
  __int64 v25; // r9
  int *v26; // rbp
  int *v27; // r13
  int v28; // r14d
  __int64 v29; // r10
  __int64 v30; // r15
  _DWORD *v31; // rsi
  __int64 v32; // rax
  unsigned int v33; // edi
  __m128i si128; // xmm4
  unsigned int v35; // r8d
  __m128i v36; // xmm1
  __int64 v37; // rdx
  unsigned int v38; // eax
  __m128i v39; // xmm3
  __m128i v40; // xmm0
  __m128i v41; // xmm2
  int v42; // eax
  int v43; // edi
  __int64 v44; // rax
  unsigned int v45; // edx
  unsigned int v46; // ecx
  unsigned int v47; // edi
  __m128i *v48; // rdx
  unsigned int v49; // eax
  __m128i v50; // xmm0
  __m128i v51; // xmm2
  unsigned int v52; // eax
  signed int v53; // edx
  signed int v54; // ecx
  signed int v55; // edx
  signed int v56; // ecx
  int v57; // eax
  __int64 v59; // r10
  __int64 v60; // rbx
  int *v61; // rdx
  int *v62; // rbp
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 v65; // [rsp+8h] [rbp-A0h]
  __int64 v66; // [rsp+8h] [rbp-A0h]
  __int64 v67; // [rsp+8h] [rbp-A0h]
  __int64 v68; // [rsp+10h] [rbp-98h]
  int *v69; // [rsp+18h] [rbp-90h]
  int v70; // [rsp+20h] [rbp-88h]
  int v73; // [rsp+40h] [rbp-68h]
  int v74; // [rsp+44h] [rbp-64h]
  int *v75; // [rsp+48h] [rbp-60h]
  __int64 v76; // [rsp+50h] [rbp-58h]

  v10 = a1;
  v11 = 4LL * a1;
  v13 = a3;
  v73 = v10;
  v14 = (int *)(v11 + a6);
  v76 = v11;
  v15 = a7[v10];
  v16 = *v14;
  v75 = &a8[v13];
  v74 = a8[v13];
  if ( *v14 == a3 || (v17 = a7[v16] + a8[v16] + 3, v17 + a4 > v15) )
  {
    puts("compacting");
    if ( v73 <= 0 )
    {
      v31 = (_DWORD *)((char *)a5 + v76);
      *v75 = v74;
      if ( v73 < 0 )
      {
        *v31 = -1;
LABEL_40:
        *(_DWORD *)(a6 - 4) = -1;
        return a6;
      }
    }
    else
    {
      v18 = a8;
      v19 = a10;
      v20 = a7;
      v21 = v15;
      do
      {
        v22 = *v20;
        *v20 = v21;
        v23 = *v18;
        v65 = v19;
        ++v20;
        ++v18;
        memcpy((void *)(v19 + 8LL * v21), (const void *)(v19 + 8 * v22), 8 * v23);
        memcpy((void *)(a9 + 4LL * v21), (const void *)(a9 + 4 * v22), 4 * v23);
        v19 = v65;
        v21 += v23;
      }
      while ( v20 != &a7[v73 - 1 + 1] );
      v24 = v21;
      v25 = v65;
      v26 = a7;
      *v75 = a4;
      v27 = a8;
      v28 = 0;
      v70 = (2 * v15 - v24 - (a4 - v74) - a2) / v73;
      do
      {
        v29 = *v26;
        *v26 = v28;
        v30 = *v27;
        v68 = v25;
        ++v26;
        ++v27;
        v66 = v29;
        memcpy((void *)(v25 + 8LL * v28), (const void *)(v25 + 8 * v29), 8 * v30);
        memcpy((void *)(a9 + 4LL * v28), (const void *)(a9 + 4 * v66), 4 * v30);
        v25 = v68;
        v28 += v30 + v70;
      }
      while ( v26 != v20 );
      v31 = (_DWORD *)((char *)a5 + v76);
      *v75 = v74;
    }
    v32 = -(int)((unsigned __int64)(a5 - 1) >> 2) & 3;
    if ( v73 <= 5 )
    {
      v42 = -1;
    }
    else
    {
      v33 = -1;
      if ( (_DWORD)v32 )
      {
        v33 = 0;
        *(a5 - 1) = 0;
        if ( (_DWORD)v32 != 1 )
        {
          *a5 = 1;
          v33 = 1;
          if ( (_DWORD)v32 != 2 )
          {
            a5[1] = 2;
            v33 = 2;
          }
        }
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_289BB0);
      v35 = v73 - v32 + 1;
      v36 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
      v37 = (__int64)&a5[v32 - 1];
      v38 = 0;
      v39 = _mm_load_si128((const __m128i *)&xmmword_289C00);
      v40 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v33), 0), si128);
      do
      {
        v41 = v40;
        ++v38;
        v37 += 16;
        v40 = _mm_add_epi32(v40, v36);
        *(__m128i *)(v37 - 16) = _mm_add_epi32(v41, v39);
      }
      while ( v35 >> 2 > v38 );
      v42 = (v35 & 0xFFFFFFFC) + v33;
      if ( v35 == (v35 & 0xFFFFFFFC) )
      {
        *v31 = -1;
        v43 = v73 + 1;
        v44 = -(int)(a6 >> 2) & 3;
        goto LABEL_27;
      }
    }
    a5[v42] = v42 + 1;
    if ( v73 > v42 + 1 )
    {
      a5[v42 + 1] = v42 + 2;
      if ( v73 > v42 + 2 )
      {
        a5[v42 + 2] = v42 + 3;
        if ( v73 > v42 + 3 )
        {
          a5[v42 + 3] = v42 + 4;
          if ( v73 > v42 + 4 )
          {
            a5[v42 + 4] = v42 + 5;
            if ( v73 > v42 + 5 )
              a5[v42 + 5] = v42 + 6;
          }
        }
      }
    }
    *v31 = -1;
    v43 = v73 + 1;
    v44 = -(int)(a6 >> 2) & 3;
    v45 = v44 + 3;
    if ( (unsigned int)(v44 + 3) < 5 )
      v45 = 5;
    if ( v45 > v73 )
    {
      v52 = 0;
LABEL_34:
      *(_DWORD *)(a6 + 4LL * (int)v52) = v52 - 1;
      v53 = v52 + 1;
      if ( (int)(v52 + 1) <= v73 )
      {
        *(_DWORD *)(a6 + 4LL * v53) = v52;
        v54 = v52 + 2;
        if ( v73 >= (int)(v52 + 2) )
        {
          *(_DWORD *)(a6 + 4LL * v54) = v53;
          v55 = v52 + 3;
          if ( v73 >= (int)(v52 + 3) )
          {
            *(_DWORD *)(a6 + 4LL * v55) = v54;
            v56 = v52 + 4;
            if ( v73 >= (int)(v52 + 4) )
            {
              v57 = v52 + 5;
              *(_DWORD *)(a6 + 4LL * v56) = v55;
              if ( v73 >= v57 )
                *(_DWORD *)(a6 + 4LL * v57) = v56;
            }
          }
        }
      }
      goto LABEL_40;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_289BB0);
    v36 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
LABEL_27:
    v46 = 0;
    if ( (_DWORD)v44 )
    {
      v46 = 1;
      *(_DWORD *)a6 = -1;
      if ( (_DWORD)v44 != 1 )
      {
        *(_DWORD *)(a6 + 4) = 0;
        v46 = 2;
        if ( (_DWORD)v44 != 2 )
        {
          *(_DWORD *)(a6 + 8) = 1;
          v46 = 3;
        }
      }
    }
    v47 = v43 - v44;
    v48 = (__m128i *)(a6 + 4 * v44);
    v49 = 0;
    v50 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v46), 0), si128);
    do
    {
      v51 = v50;
      ++v49;
      v50 = _mm_add_epi32(v50, v36);
      ++v48;
      v48[-1] = _mm_add_epi32(v51, (__m128i)-1LL);
    }
    while ( v47 >> 2 > v49 );
    v52 = (v47 & 0xFFFFFFFC) + v46;
    if ( (v47 & 0xFFFFFFFC) == v47 )
      goto LABEL_40;
    goto LABEL_34;
  }
  v69 = v14;
  v59 = a7[a3];
  a7[a3] = v17;
  v60 = v17;
  v67 = v59;
  memcpy((void *)(a10 + 8LL * v17), (const void *)(a10 + 8 * v59), 8LL * v74);
  memcpy((void *)(a9 + 4 * v60), (const void *)(a9 + 4 * v67), 4LL * v74);
  v61 = (int *)(a6 + v13 * 4);
  v62 = &a5[v13];
  v63 = *v62;
  v64 = *v61;
  a5[v64] = v63;
  *(_DWORD *)(a6 + 4 * v63) = v64;
  a5[v16] = a3;
  *v61 = v16;
  *v62 = v73;
  *v69 = a3;
  return (unsigned int)v73;
}

