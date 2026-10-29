__int64 __fastcall sub_482680(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __m128i v6; // xmm0
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  const __m128i *v9; // rax
  const __m128i *i; // rsi
  __m128i v11; // xmm0
  int v12; // eax
  __int64 v13; // rax
  unsigned int v14; // r12d
  __int64 v15; // rax
  _QWORD *v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rdi
  __int64 v19; // rsi
  unsigned __int64 j; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  unsigned int v24; // r13d
  __int64 v25; // r12
  unsigned int v26; // eax
  __int64 v27; // rsi
  int v28; // eax
  _QWORD *v29; // rsi
  __int64 v30; // rax
  unsigned int v31; // r12d
  __int64 v32; // rax
  __int64 v33; // rax
  __m128i v34; // xmm0
  _DWORD *v35; // rsi
  size_t v36; // rdx
  __int64 v37; // rax
  unsigned int v38; // r12d
  _QWORD *v39; // rax
  __m128i v40; // xmm0
  __int64 v41; // rsi
  __int64 v42; // rcx
  unsigned __int64 k; // rdx
  __int64 v44; // rax
  unsigned int v45; // r12d
  __int64 v46; // rax
  _QWORD *v47; // rax
  __m128i v48; // xmm0
  __m128i v49; // xmm6
  __int64 *v50; // r12
  __int64 *v51; // r14
  _QWORD *v52; // r13
  __int64 v53; // rax
  _QWORD *v54; // rax
  __m128i v55; // xmm0
  __m128i v56; // xmm1
  __int64 v57; // rsi
  __int64 v58; // rcx
  unsigned __int64 m; // rdx
  __int64 v60; // rax
  __int64 v61; // rcx
  _QWORD *v62; // rdx
  unsigned int v63; // r13d
  __int64 v64; // r12
  unsigned int v65; // eax
  __int64 v66; // rsi
  int v67; // eax
  _QWORD *v68; // rsi
  __int64 v69; // rax
  unsigned int v70; // r12d
  __int64 v71; // rax
  _QWORD *v72; // rax
  __m128i v73; // xmm0
  __m128i v74; // xmm7
  __int64 *v75; // r12
  __int64 *v76; // r14
  _QWORD *v77; // r13
  __int64 v78; // rax
  unsigned int v79; // edi
  __int64 v80; // rax
  _QWORD *v81; // rax
  __m128i v82; // xmm0
  __m128i v83; // xmm2
  __int64 v84; // rdi
  __int64 v85; // rsi
  unsigned __int64 n; // rdx
  __int64 result; // rax
  unsigned int v88; // r14d
  size_t v89; // rsi
  unsigned int *v90; // rax
  __int64 v91; // rcx
  unsigned int v92; // r14d
  size_t v93; // rsi
  unsigned int *v94; // rax
  __int64 v95; // rcx
  _QWORD *v96; // rax
  _QWORD *v97; // rax
  char **v98; // r12
  char **exception; // r12
  __int64 v100; // [rsp+0h] [rbp-88h]
  unsigned int v101; // [rsp+Ch] [rbp-7Ch]
  __int64 v102; // [rsp+10h] [rbp-78h]
  __int64 v103; // [rsp+18h] [rbp-70h]
  __int64 v104[11]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = v4;
  v5 = a2[1];
  if ( v5 )
  {
    v6 = _mm_loadl_epi64((const __m128i *)(v5 - 8));
    v100 = v6.m128i_i64[0];
    v7 = (_QWORD *)sub_186B270(24LL * (unsigned int)_mm_cvtsi128_si32(v6) + 8);
    v8 = v7 + 1;
    *v7 = v6.m128i_i64[0];
    v9 = (const __m128i *)a2[1];
    *(_QWORD *)(a1 + 8) = v8;
    if ( v9 )
    {
      for ( i = (const __m128i *)((char *)v9 + 24 * v9[-1].m128i_u32[3]); i != v9; *(v8 - 1) = v9[-1].m128i_i64[1] )
      {
        v11 = _mm_loadu_si128(v9);
        v9 = (const __m128i *)((char *)v9 + 24);
        v8 += 3;
        *(__m128i *)(v8 - 3) = v11;
      }
    }
  }
  *(_QWORD *)(a1 + 16) = a2[2];
  v12 = *((_DWORD *)a2 + 6);
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 24) = v12;
  v13 = a2[4];
  if ( v13 )
  {
    v14 = *(_DWORD *)(v13 - 4);
    v15 = *(unsigned int *)(v13 - 8);
    LODWORD(v100) = v15;
    v16 = (_QWORD *)sub_186B270(8 * v15 + 8);
    v17 = _mm_cvtsi32_si128(v100);
    v18 = a2[4];
    *(_QWORD *)(a1 + 32) = v16 + 1;
    *v16 = _mm_unpacklo_epi32(v17, _mm_cvtsi32_si128(v14)).m128i_u64[0];
    if ( v18 )
    {
      v19 = 8LL * *(unsigned int *)(v18 - 4);
      if ( v19 )
      {
        for ( j = 0; j != v19; j += 8LL )
          v16[j / 8 + 1] = *(_QWORD *)(v18 + j);
      }
    }
  }
  v21 = a2[5];
  *(_QWORD *)(a1 + 48) = 0;
  v22 = a2[6];
  *(_QWORD *)(a1 + 40) = v21;
  v102 = a1 + 40;
  if ( v22 )
  {
    v23 = nullptr;
    v24 = 0;
    do
    {
      if ( v24 >= *(_DWORD *)(v22 - 4) )
        break;
      v25 = *(_QWORD *)(v22 + 8LL * v24);
      if ( v25 )
        ++*(_DWORD *)(v25 + 8);
      if ( v23 )
      {
        v26 = *((_DWORD *)v23 - 1);
        if ( v26 == *((_DWORD *)v23 - 2) )
        {
          v92 = (3 * v26 + 1) >> 1;
          v93 = 8 * v92 + 8;
          if ( 8 * v26 + 8 >= (unsigned int)v93 || v26 >= v92 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v104, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v104);
            sub_233E40((__int64)v104);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v94 = (unsigned int *)sub_186B300(v23 - 1, v93);
          v95 = v94[1];
          v23 = v94 + 2;
          *v94 = v92;
          *(_QWORD *)(a1 + 48) = v94 + 2;
          LODWORD(v94) = v95;
          v29 = &v23[v95];
          v22 = a2[6];
          v28 = (_DWORD)v94 + 1;
        }
        else
        {
          v27 = v26;
          v28 = v26 + 1;
          v29 = &v23[v27];
        }
      }
      else
      {
        v96 = (_QWORD *)sub_186B270(0x18u);
        v23 = v96 + 1;
        *v96 = 2;
        v22 = a2[6];
        v28 = 1;
        *(_QWORD *)(a1 + 48) = v23;
        v29 = v23;
      }
      *v29 = v25;
      ++v24;
      *((_DWORD *)v23 - 1) = v28;
    }
    while ( v22 );
  }
  v30 = a2[7];
  *(_QWORD *)(a1 + 56) = 0;
  if ( v30 )
  {
    v31 = *(_DWORD *)(v30 - 4);
    v32 = *(unsigned int *)(v30 - 8);
    LODWORD(v100) = v32;
    v33 = sub_186B270(4 * v32 + 8);
    v34 = _mm_cvtsi32_si128(v100);
    v35 = (_DWORD *)a2[7];
    *(_QWORD *)(a1 + 56) = v33 + 8;
    *(_QWORD *)v33 = _mm_unpacklo_epi32(v34, _mm_cvtsi32_si128(v31)).m128i_u64[0];
    if ( v35 )
    {
      v36 = 4LL * (unsigned int)*(v35 - 1);
      if ( v36 <= 4 )
      {
        if ( v36 == 4 )
          *(_DWORD *)(v33 + 8) = *v35;
      }
      else
      {
        memmove((void *)(v33 + 8), v35, v36);
      }
    }
  }
  v37 = a2[8];
  *(_QWORD *)(a1 + 64) = 0;
  if ( v37 )
  {
    v38 = *(_DWORD *)(v37 - 4);
    LODWORD(v100) = *(_DWORD *)(v37 - 8);
    v39 = (_QWORD *)sub_186B270(16LL * (unsigned int)v100 + 8);
    v40 = _mm_cvtsi32_si128(v100);
    v41 = a2[8];
    *(_QWORD *)(a1 + 64) = v39 + 1;
    *v39 = _mm_unpacklo_epi32(v40, _mm_cvtsi32_si128(v38)).m128i_u64[0];
    if ( v41 )
    {
      v42 = 16LL * *(unsigned int *)(v41 - 4);
      if ( v42 )
      {
        for ( k = 0; k != v42; k += 16LL )
          *(__m128i *)&v39[k / 8 + 1] = _mm_loadu_si128((const __m128i *)(v41 + k));
      }
    }
  }
  v44 = a2[9];
  *(_QWORD *)(a1 + 72) = 0;
  if ( v44 )
  {
    v45 = *(_DWORD *)(v44 - 4);
    v46 = *(unsigned int *)(v44 - 8);
    LODWORD(v100) = v46;
    v47 = (_QWORD *)sub_186B270(8 * v46 + 8);
    v48 = _mm_cvtsi32_si128(v100);
    v49 = _mm_cvtsi32_si128(v45);
    v50 = (__int64 *)a2[9];
    *(_QWORD *)(a1 + 72) = v47 + 1;
    *v47 = _mm_unpacklo_epi32(v48, v49).m128i_u64[0];
    if ( v50 )
    {
      v51 = &v50[*((unsigned int *)v50 - 1)];
      if ( v50 != v51 )
      {
        v52 = v47 + 1;
        do
        {
          v53 = *v50;
          *v52 = 0;
          if ( v53 )
          {
            v101 = *(_DWORD *)(v53 - 4);
            LODWORD(v100) = *(_DWORD *)(v53 - 8);
            v54 = (_QWORD *)sub_186B270(16LL * (unsigned int)v100 + 8);
            v55 = _mm_cvtsi32_si128(v100);
            v56 = _mm_cvtsi32_si128(v101);
            *v52 = v54 + 1;
            v57 = *v50;
            *v54 = _mm_unpacklo_epi32(v55, v56).m128i_u64[0];
            if ( v57 )
            {
              v58 = 16LL * *(unsigned int *)(v57 - 4);
              if ( v58 )
              {
                for ( m = 0; m != v58; m += 16LL )
                  *(__m128i *)&v54[m / 8 + 1] = _mm_loadu_si128((const __m128i *)(v57 + m));
              }
            }
          }
          ++v50;
          ++v52;
        }
        while ( v51 != v50 );
      }
    }
  }
  *(_DWORD *)(a1 + 80) = *((_DWORD *)a2 + 20);
  v60 = a2[11];
  *(_QWORD *)(a1 + 96) = 0;
  v61 = a2[12];
  *(_QWORD *)(a1 + 88) = v60;
  v103 = a1 + 88;
  if ( v61 )
  {
    v62 = nullptr;
    v63 = 0;
    do
    {
      if ( v63 >= *(_DWORD *)(v61 - 4) )
        break;
      v64 = *(_QWORD *)(v61 + 8LL * v63);
      if ( v64 )
        ++*(_DWORD *)(v64 + 8);
      if ( v62 )
      {
        v65 = *((_DWORD *)v62 - 1);
        if ( v65 == *((_DWORD *)v62 - 2) )
        {
          v88 = (3 * v65 + 1) >> 1;
          v89 = 8 * v88 + 8;
          if ( 8 * v65 + 8 >= (unsigned int)v89 || v65 >= v88 )
          {
            v98 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v104, "Overflow encountered when expanding vector");
            *v98 = (char *)off_1C63128;
            sub_2333C0(v98 + 1, v104);
            sub_233E40((__int64)v104);
            __cxa_throw(v98, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v90 = (unsigned int *)sub_186B300(v62 - 1, v89);
          v91 = v90[1];
          v62 = v90 + 2;
          *v90 = v88;
          *(_QWORD *)(a1 + 96) = v90 + 2;
          LODWORD(v90) = v91;
          v68 = &v62[v91];
          v61 = a2[12];
          v67 = (_DWORD)v90 + 1;
        }
        else
        {
          v66 = v65;
          v67 = v65 + 1;
          v68 = &v62[v66];
        }
      }
      else
      {
        v97 = (_QWORD *)sub_186B270(0x18u);
        v62 = v97 + 1;
        *v97 = 2;
        v61 = a2[12];
        v67 = 1;
        *(_QWORD *)(a1 + 96) = v62;
        v68 = v62;
      }
      *v68 = v64;
      ++v63;
      *((_DWORD *)v62 - 1) = v67;
    }
    while ( v61 );
  }
  v69 = a2[13];
  *(_QWORD *)(a1 + 104) = 0;
  if ( v69 )
  {
    v70 = *(_DWORD *)(v69 - 4);
    v71 = *(unsigned int *)(v69 - 8);
    LODWORD(v100) = v71;
    v72 = (_QWORD *)sub_186B270(8 * v71 + 8);
    v73 = _mm_cvtsi32_si128(v100);
    v74 = _mm_cvtsi32_si128(v70);
    v75 = (__int64 *)a2[13];
    *(_QWORD *)(a1 + 104) = v72 + 1;
    *v72 = _mm_unpacklo_epi32(v73, v74).m128i_u64[0];
    if ( v75 )
    {
      v76 = &v75[*((unsigned int *)v75 - 1)];
      if ( v75 != v76 )
      {
        v77 = v72 + 1;
        do
        {
          v78 = *v75;
          *v77 = 0;
          if ( v78 )
          {
            v79 = *(_DWORD *)(v78 - 4);
            v80 = *(unsigned int *)(v78 - 8);
            v101 = v79;
            LODWORD(v100) = v80;
            v81 = (_QWORD *)sub_186B270(8 * v80 + 8);
            v82 = _mm_cvtsi32_si128(v100);
            v83 = _mm_cvtsi32_si128(v101);
            *v77 = v81 + 1;
            v84 = *v75;
            *v81 = _mm_unpacklo_epi32(v82, v83).m128i_u64[0];
            if ( v84 )
            {
              v85 = 8LL * *(unsigned int *)(v84 - 4);
              if ( v85 )
              {
                for ( n = 0; n != v85; n += 8LL )
                  v81[n / 8 + 1] = *(_QWORD *)(v84 + n);
              }
            }
          }
          ++v75;
          ++v77;
        }
        while ( v76 != v75 );
      }
    }
  }
  *(_DWORD *)(a1 + 112) = *((_DWORD *)a2 + 28);
  result = *((unsigned int *)a2 + 30);
  *(_DWORD *)(a1 + 120) = result;
  return result;
}

