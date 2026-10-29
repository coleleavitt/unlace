void __fastcall sub_4D8140(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const char *v5; // r13
  const char *v9; // r14
  char *v10; // rsi
  int v11; // edx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // r13
  int v15; // eax
  void *v16; // rbp
  __m128i v17; // xmm1
  void *v18; // rdi
  __int64 v19; // rbp
  __m128i v20; // xmm0
  void *v21; // rdi
  void *v22; // rdi
  __m128i v23; // xmm6
  void *v24; // rdi
  __m128i v25; // xmm7
  int v26; // eax
  __int64 v27; // r14
  int v28; // eax
  void *v29; // r12
  __m128i v30; // xmm1
  void *v31; // rdi
  __int64 v32; // r12
  __m128i v33; // xmm0
  void *v34; // rdi
  void *v35; // rdi
  __m128i v36; // xmm6
  void *v37; // rdi
  __m128i v38; // xmm7
  void *v39; // r12
  __m128i v40; // xmm1
  void *v41; // rdi
  __int64 v42; // r12
  __m128i v43; // xmm0
  void *v44; // rdi
  void *v45; // rdi
  __m128i v46; // xmm6
  void *v47; // rdi
  __m128i v48; // xmm7
  void *v49; // rbp
  __m128i v50; // xmm1
  void *v51; // rdi
  __int64 v52; // rbp
  __m128i v53; // xmm0
  void *v54; // rdi
  void *v55; // rdi
  __m128i v56; // xmm2
  void *v57; // rdi
  __m128i v58; // xmm3
  void *v59; // rbp
  __m128i v60; // xmm1
  void *v61; // rdi
  __int64 v62; // rbp
  __m128i v63; // xmm0
  void *v64; // rdi
  void *v65; // rdi
  __m128i v66; // xmm4
  void *v67; // rdi
  __m128i v68; // xmm5
  void *v69; // rbp
  __m128i si128; // xmm1
  void *v71; // rdi
  __int64 v72; // rbp
  __m128i v73; // xmm0
  void *v74; // rdi
  void *v75; // rdi
  __m128i v76; // xmm6
  void *v77; // rdi
  __m128i v78; // xmm7
  char *s2[2]; // [rsp+0h] [rbp-78h] BYREF
  __m128i v80; // [rsp+10h] [rbp-68h] BYREF
  __m128i v81; // [rsp+20h] [rbp-58h] BYREF
  __m128i v82[4]; // [rsp+30h] [rbp-48h] BYREF

  v5 = haystack;
  if ( *(_QWORD *)(a3 + 32) )
    v5 = *(const char **)(a3 + 24);
  v9 = haystack;
  if ( *(_QWORD *)(a2 + 32) )
    v9 = *(const char **)(a2 + 24);
  v10 = (char *)haystack;
  v11 = strcasecmp(v9, v5);
  v12 = *(_QWORD *)(a4 + 32);
  if ( v11 >= 0 )
  {
    if ( v12 )
      v10 = *(char **)(a4 + 24);
    s2[0] = v10;
    v26 = strcasecmp(v9, v10);
    v27 = *(_QWORD *)(a1 + 24);
    v82[0].m128i_i64[0] = *(_QWORD *)a1;
    v80 = _mm_loadu_si128((const __m128i *)(a1 + 8));
    v81 = _mm_loadu_si128((const __m128i *)(a1 + 32));
    if ( v26 < 0 )
    {
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 24) = 0;
      *(_OWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 32) = 0;
      v69 = *(void **)a2;
      si128 = _mm_loadu_si128((const __m128i *)(a2 + 8));
      *(_QWORD *)a2 = 0;
      *(_OWORD *)(a2 + 8) = 0;
      v71 = *(void **)a1;
      if ( *(_QWORD *)a1 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        *(__m128i *)s2 = si128;
        qfree(v71);
        si128 = _mm_load_si128((const __m128i *)s2);
      }
      *(__m128i *)(a1 + 8) = si128;
      *(_QWORD *)a1 = v69;
      v72 = *(_QWORD *)(a2 + 24);
      v73 = _mm_loadu_si128((const __m128i *)(a2 + 32));
      *(_QWORD *)(a2 + 24) = 0;
      *(_OWORD *)(a2 + 32) = 0;
      v74 = *(void **)(a1 + 24);
      if ( v74 )
      {
        *(_QWORD *)(a1 + 32) = 0;
        *(__m128i *)s2 = v73;
        qfree(v74);
        v73 = _mm_load_si128((const __m128i *)s2);
      }
      *(_QWORD *)(a1 + 24) = v72;
      *(__m128i *)(a1 + 32) = v73;
      v75 = *(void **)a2;
      if ( *(_QWORD *)a2 )
      {
        *(_QWORD *)(a2 + 8) = 0;
        qfree(v75);
      }
      v76 = _mm_load_si128(&v80);
      v77 = *(void **)(a2 + 24);
      *(_QWORD *)a2 = v82[0].m128i_i64[0];
      *(__m128i *)(a2 + 8) = v76;
      if ( v77 )
      {
        *(_QWORD *)(a2 + 32) = 0;
        qfree(v77);
      }
      v78 = _mm_load_si128(&v81);
      *(_QWORD *)(a2 + 24) = v27;
      *(__m128i *)(a2 + 32) = v78;
    }
    else
    {
      v28 = strcasecmp(v5, v10);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 24) = 0;
      *(_OWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 32) = 0;
      if ( v28 >= 0 )
      {
        v49 = *(void **)a3;
        v50 = _mm_loadu_si128((const __m128i *)(a3 + 8));
        *(_QWORD *)a3 = 0;
        *(_OWORD *)(a3 + 8) = 0;
        v51 = *(void **)a1;
        if ( *(_QWORD *)a1 )
        {
          *(_QWORD *)(a1 + 8) = 0;
          *(__m128i *)s2 = v50;
          qfree(v51);
          v50 = _mm_load_si128((const __m128i *)s2);
        }
        *(__m128i *)(a1 + 8) = v50;
        *(_QWORD *)a1 = v49;
        v52 = *(_QWORD *)(a3 + 24);
        *(_QWORD *)(a3 + 24) = 0;
        v53 = _mm_loadu_si128((const __m128i *)(a3 + 32));
        *(_OWORD *)(a3 + 32) = 0;
        v54 = *(void **)(a1 + 24);
        if ( v54 )
        {
          *(_QWORD *)(a1 + 32) = 0;
          *(__m128i *)s2 = v53;
          qfree(v54);
          v53 = _mm_load_si128((const __m128i *)s2);
        }
        *(_QWORD *)(a1 + 24) = v52;
        *(__m128i *)(a1 + 32) = v53;
        v55 = *(void **)a3;
        if ( *(_QWORD *)a3 )
        {
          *(_QWORD *)(a3 + 8) = 0;
          qfree(v55);
        }
        v56 = _mm_load_si128(&v80);
        v57 = *(void **)(a3 + 24);
        *(_QWORD *)a3 = v82[0].m128i_i64[0];
        *(__m128i *)(a3 + 8) = v56;
        if ( v57 )
        {
          *(_QWORD *)(a3 + 32) = 0;
          qfree(v57);
        }
        v58 = _mm_load_si128(&v81);
        *(_QWORD *)(a3 + 24) = v27;
        *(__m128i *)(a3 + 32) = v58;
      }
      else
      {
        v29 = *(void **)a4;
        v30 = _mm_loadu_si128((const __m128i *)(a4 + 8));
        *(_OWORD *)(a4 + 8) = 0;
        *(_QWORD *)a4 = 0;
        v31 = *(void **)a1;
        if ( *(_QWORD *)a1 )
        {
          *(_QWORD *)(a1 + 8) = 0;
          *(__m128i *)s2 = v30;
          qfree(v31);
          v30 = _mm_load_si128((const __m128i *)s2);
        }
        *(__m128i *)(a1 + 8) = v30;
        *(_QWORD *)a1 = v29;
        v32 = *(_QWORD *)(a4 + 24);
        v33 = _mm_loadu_si128((const __m128i *)(a4 + 32));
        *(_QWORD *)(a4 + 24) = 0;
        *(_OWORD *)(a4 + 32) = 0;
        v34 = *(void **)(a1 + 24);
        if ( v34 )
        {
          *(_QWORD *)(a1 + 32) = 0;
          *(__m128i *)s2 = v33;
          qfree(v34);
          v33 = _mm_load_si128((const __m128i *)s2);
        }
        *(_QWORD *)(a1 + 24) = v32;
        *(__m128i *)(a1 + 32) = v33;
        v35 = *(void **)a4;
        if ( *(_QWORD *)a4 )
        {
          *(_QWORD *)(a4 + 8) = 0;
          qfree(v35);
        }
        v36 = _mm_load_si128(&v80);
        v37 = *(void **)(a4 + 24);
        *(_QWORD *)a4 = v82[0].m128i_i64[0];
        *(__m128i *)(a4 + 8) = v36;
        if ( v37 )
        {
          *(_QWORD *)(a4 + 32) = 0;
          qfree(v37);
        }
        v38 = _mm_load_si128(&v81);
        *(_QWORD *)(a4 + 24) = v27;
        *(__m128i *)(a4 + 32) = v38;
      }
    }
  }
  else
  {
    if ( v12 )
      v10 = *(char **)(a4 + 24);
    s2[0] = v10;
    v13 = strcasecmp(v5, v10);
    v14 = *(_QWORD *)(a1 + 24);
    v81.m128i_i64[0] = *(_QWORD *)a1;
    v82[0] = _mm_loadu_si128((const __m128i *)(a1 + 8));
    v80 = _mm_loadu_si128((const __m128i *)(a1 + 32));
    if ( v13 < 0 )
    {
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 24) = 0;
      *(_OWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 32) = 0;
      v59 = *(void **)a3;
      v60 = _mm_loadu_si128((const __m128i *)(a3 + 8));
      *(_QWORD *)a3 = 0;
      *(_OWORD *)(a3 + 8) = 0;
      v61 = *(void **)a1;
      if ( *(_QWORD *)a1 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        *(__m128i *)s2 = v60;
        qfree(v61);
        v60 = _mm_load_si128((const __m128i *)s2);
      }
      *(__m128i *)(a1 + 8) = v60;
      *(_QWORD *)a1 = v59;
      v62 = *(_QWORD *)(a3 + 24);
      *(_QWORD *)(a3 + 24) = 0;
      v63 = _mm_loadu_si128((const __m128i *)(a3 + 32));
      *(_OWORD *)(a3 + 32) = 0;
      v64 = *(void **)(a1 + 24);
      if ( v64 )
      {
        *(_QWORD *)(a1 + 32) = 0;
        *(__m128i *)s2 = v63;
        qfree(v64);
        v63 = _mm_load_si128((const __m128i *)s2);
      }
      *(_QWORD *)(a1 + 24) = v62;
      *(__m128i *)(a1 + 32) = v63;
      v65 = *(void **)a3;
      if ( *(_QWORD *)a3 )
      {
        *(_QWORD *)(a3 + 8) = 0;
        qfree(v65);
      }
      v66 = _mm_load_si128(v82);
      v67 = *(void **)(a3 + 24);
      *(_QWORD *)a3 = v81.m128i_i64[0];
      *(__m128i *)(a3 + 8) = v66;
      if ( v67 )
      {
        *(_QWORD *)(a3 + 32) = 0;
        qfree(v67);
      }
      v68 = _mm_load_si128(&v80);
      *(_QWORD *)(a3 + 24) = v14;
      *(__m128i *)(a3 + 32) = v68;
    }
    else
    {
      v15 = strcasecmp(v9, v10);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 24) = 0;
      *(_OWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 32) = 0;
      if ( v15 < 0 )
      {
        v39 = *(void **)a4;
        v40 = _mm_loadu_si128((const __m128i *)(a4 + 8));
        *(_OWORD *)(a4 + 8) = 0;
        *(_QWORD *)a4 = 0;
        v41 = *(void **)a1;
        if ( *(_QWORD *)a1 )
        {
          *(_QWORD *)(a1 + 8) = 0;
          *(__m128i *)s2 = v40;
          qfree(v41);
          v40 = _mm_load_si128((const __m128i *)s2);
        }
        *(__m128i *)(a1 + 8) = v40;
        *(_QWORD *)a1 = v39;
        v42 = *(_QWORD *)(a4 + 24);
        v43 = _mm_loadu_si128((const __m128i *)(a4 + 32));
        *(_QWORD *)(a4 + 24) = 0;
        *(_OWORD *)(a4 + 32) = 0;
        v44 = *(void **)(a1 + 24);
        if ( v44 )
        {
          *(_QWORD *)(a1 + 32) = 0;
          *(__m128i *)s2 = v43;
          qfree(v44);
          v43 = _mm_load_si128((const __m128i *)s2);
        }
        *(_QWORD *)(a1 + 24) = v42;
        *(__m128i *)(a1 + 32) = v43;
        v45 = *(void **)a4;
        if ( *(_QWORD *)a4 )
        {
          *(_QWORD *)(a4 + 8) = 0;
          qfree(v45);
        }
        v46 = _mm_load_si128(v82);
        v47 = *(void **)(a4 + 24);
        *(_QWORD *)a4 = v81.m128i_i64[0];
        *(__m128i *)(a4 + 8) = v46;
        if ( v47 )
        {
          *(_QWORD *)(a4 + 32) = 0;
          qfree(v47);
        }
        v48 = _mm_load_si128(&v80);
        *(_QWORD *)(a4 + 24) = v14;
        *(__m128i *)(a4 + 32) = v48;
      }
      else
      {
        v16 = *(void **)a2;
        v17 = _mm_loadu_si128((const __m128i *)(a2 + 8));
        *(_QWORD *)a2 = 0;
        *(_OWORD *)(a2 + 8) = 0;
        v18 = *(void **)a1;
        if ( *(_QWORD *)a1 )
        {
          *(_QWORD *)(a1 + 8) = 0;
          *(__m128i *)s2 = v17;
          qfree(v18);
          v17 = _mm_load_si128((const __m128i *)s2);
        }
        *(__m128i *)(a1 + 8) = v17;
        *(_QWORD *)a1 = v16;
        v19 = *(_QWORD *)(a2 + 24);
        v20 = _mm_loadu_si128((const __m128i *)(a2 + 32));
        *(_QWORD *)(a2 + 24) = 0;
        *(_OWORD *)(a2 + 32) = 0;
        v21 = *(void **)(a1 + 24);
        if ( v21 )
        {
          *(_QWORD *)(a1 + 32) = 0;
          *(__m128i *)s2 = v20;
          qfree(v21);
          v20 = _mm_load_si128((const __m128i *)s2);
        }
        *(_QWORD *)(a1 + 24) = v19;
        *(__m128i *)(a1 + 32) = v20;
        v22 = *(void **)a2;
        if ( *(_QWORD *)a2 )
        {
          *(_QWORD *)(a2 + 8) = 0;
          qfree(v22);
        }
        v23 = _mm_load_si128(v82);
        v24 = *(void **)(a2 + 24);
        *(_QWORD *)a2 = v81.m128i_i64[0];
        *(__m128i *)(a2 + 8) = v23;
        if ( v24 )
        {
          *(_QWORD *)(a2 + 32) = 0;
          qfree(v24);
        }
        v25 = _mm_load_si128(&v80);
        *(_QWORD *)(a2 + 24) = v14;
        *(__m128i *)(a2 + 32) = v25;
      }
    }
  }
}

