char **__fastcall sub_5031A0(char **a1, __int64 a2, char **a3, __int64 a4, _BYTE *a5)
{
  char **v5; // rbp
  char **exception; // rbp
  char *v10; // rbp
  __m128i v11; // xmm0
  __int64 v12; // rax
  char *v13; // rsi
  size_t v14; // rdx
  char *v15; // rbx
  unsigned int v16; // ebp
  size_t v17; // rdi
  _QWORD *v18; // rax
  __m128i v19; // xmm0
  char *v20; // rsi
  size_t v21; // rdx
  _DWORD *v22; // rdx
  unsigned int v23; // r14d
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rax
  _DWORD *v27; // rax
  _DWORD *v28; // rdx
  unsigned int v29; // ebp
  unsigned int v30; // edi
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v34; // r14d
  _QWORD *v35; // rax
  unsigned int v36; // eax
  unsigned int v37; // edx
  size_t v38; // rsi
  unsigned int v39; // r15d
  unsigned int *v40; // rax
  __int64 v41; // r15
  __int64 v42; // rdx
  __int64 v43; // r15
  unsigned int v44; // ebx
  size_t v45; // rsi
  unsigned int *v46; // rax
  unsigned int v47; // eax
  unsigned int v48; // edi
  __int64 v49; // r15
  __int64 v50; // rdx
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // [rsp+8h] [rbp-70h]
  __int64 v55[11]; // [rsp+20h] [rbp-58h] BYREF

  v10 = *a3;
  *a5 = 0;
  *a1 = nullptr;
  if ( v10 )
  {
    v11 = _mm_loadl_epi64((const __m128i *)(v10 - 8));
    v54 = v11.m128i_i64[0];
    v12 = sub_186B270(4LL * (unsigned int)_mm_cvtsi128_si32(v11) + 8);
    v10 = (char *)(v12 + 8);
    *a1 = (char *)(v12 + 8);
    v13 = *a3;
    *(_QWORD *)v12 = v11.m128i_i64[0];
    if ( v13 )
    {
      v14 = 4LL * *((unsigned int *)v13 - 1);
      if ( v14 <= 4 )
      {
        if ( v14 == 4 )
          *(_DWORD *)(v12 + 8) = *(_DWORD *)v13;
      }
      else
      {
        memmove((void *)(v12 + 8), v13, v14);
      }
    }
  }
  a1[1] = nullptr;
  v15 = a3[1];
  if ( v15 )
  {
    v16 = *((_DWORD *)v15 - 1);
    v17 = 4LL * *((unsigned int *)v15 - 2) + 8;
    LODWORD(v54) = *((_DWORD *)v15 - 2);
    v18 = (_QWORD *)sub_186B270(v17);
    v19 = _mm_cvtsi32_si128(v54);
    v15 = (char *)(v18 + 1);
    a1[1] = (char *)(v18 + 1);
    v20 = a3[1];
    *v18 = _mm_unpacklo_epi32(v19, _mm_cvtsi32_si128(v16)).m128i_u64[0];
    if ( v20 )
    {
      v21 = 4LL * *((unsigned int *)v20 - 1);
      if ( v21 > 4 )
      {
        memmove(v18 + 1, v20, v21);
        v22 = *(_DWORD **)a4;
        if ( *(_QWORD *)a4 )
        {
          v10 = *a1;
          goto LABEL_10;
        }
LABEL_65:
        v27 = *(_DWORD **)(a4 + 8);
        v28 = v27;
        if ( !v27 )
          return a1;
        v29 = *(v27 - 1);
        goto LABEL_25;
      }
      v10 = *a1;
      if ( v21 == 4 )
        *((_DWORD *)v18 + 2) = *(_DWORD *)v20;
    }
    else
    {
      v10 = *a1;
    }
    v22 = *(_DWORD **)a4;
    if ( !*(_QWORD *)a4 )
      goto LABEL_65;
  }
  else
  {
    v22 = *(_DWORD **)a4;
    if ( !*(_QWORD *)a4 )
    {
      v28 = *(_DWORD **)(a4 + 8);
      if ( !v28 )
        return a1;
      v29 = *(v28 - 1);
LABEL_42:
      if ( !v29 )
        return a1;
      v34 = v29 + 1;
      if ( v29 == -1 )
      {
        v29 = -1;
        v15 = nullptr;
        if ( (unsigned __int64)-(__int64)(v28 + 1) > 8 )
        {
LABEL_31:
          v31 = 0;
          do
          {
            *(__m128i *)&v15[v31 * 4] = _mm_or_si128(
                                          _mm_loadu_si128((const __m128i *)&v15[v31 * 4]),
                                          _mm_loadu_si128((const __m128i *)&v28[v31]));
            v31 += 4;
          }
          while ( v31 != 4LL * (v29 >> 2) );
          if ( (v29 & 3) == 0 )
            return a1;
          v32 = v29 & 0xFFFFFFFC;
          v29 -= v32;
          if ( v29 == 1 )
          {
LABEL_37:
            *(_DWORD *)&v15[4 * v32] |= v28[v32];
            return a1;
          }
          goto LABEL_35;
        }
LABEL_77:
        v53 = 0;
        do
        {
          *(_DWORD *)&v15[4 * v53] |= v28[v53];
          ++v53;
        }
        while ( (unsigned int)v53 < v29 );
        return a1;
      }
      v35 = (_QWORD *)sub_186B270(0x10u);
      v15 = (char *)(v35 + 1);
      *v35 = 2;
      v36 = *(_DWORD *)v35;
      a1[1] = v15;
      LODWORD(v54) = 0;
      if ( v36 < v34 )
        goto LABEL_45;
      goto LABEL_49;
    }
  }
LABEL_10:
  v23 = *(v22 - 1);
  if ( v10 )
  {
    v24 = *((unsigned int *)v10 - 1);
    if ( (unsigned int)v24 >= v23 )
    {
      if ( !v23 )
        goto LABEL_23;
LABEL_13:
      if ( v23 <= 1 )
      {
        *(_DWORD *)v10 |= *v22;
        goto LABEL_23;
      }
      if ( (unsigned __int64)(v10 - (char *)(v22 + 1)) > 8 )
      {
        if ( v23 <= 3 )
        {
          LODWORD(v26) = 0;
          goto LABEL_20;
        }
        goto LABEL_16;
      }
LABEL_73:
      v52 = 0;
      do
      {
        *(_DWORD *)&v10[4 * v52] |= v22[v52];
        ++v52;
      }
      while ( (unsigned int)v52 < v23 );
      goto LABEL_23;
    }
    LODWORD(v54) = v23 + 1;
    if ( (unsigned int)v24 >= v23 + 1 )
    {
      *((_DWORD *)v10 - 1) = v23 + 1;
      goto LABEL_13;
    }
LABEL_59:
    while ( 1 )
    {
      v47 = *((_DWORD *)v10 - 2);
      v48 = v54;
      if ( v47 >= (unsigned int)v54 )
        break;
      v44 = (3 * v47 + 1) >> 1;
      v45 = 4 * v44 + 8;
      if ( 4 * v47 + 8 >= (unsigned int)v45 || v47 >= v44 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v55, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v55);
        sub_233E40((__int64)v55);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v46 = (unsigned int *)sub_186B300(v10 - 8, v45);
      v10 = (char *)(v46 + 2);
      *v46 = v44;
      *a1 = (char *)(v46 + 2);
    }
    v49 = 4 * v24;
    v15 = a1[1];
    *((_DWORD *)v10 - 1) = v54;
    v50 = 4LL * v48;
    if ( v49 != v50 )
      memset(&v10[v49], 0, v50 - v49);
    v22 = *(_DWORD **)a4;
    goto LABEL_13;
  }
  if ( !v23 )
    goto LABEL_23;
  LODWORD(v54) = v23 + 1;
  if ( v23 != -1 )
  {
    v51 = (_QWORD *)sub_186B270(0x10u);
    v10 = (char *)(v51 + 1);
    *v51 = 2;
    v24 = 0;
    *a1 = (char *)(v51 + 1);
    goto LABEL_59;
  }
  v23 = -1;
  if ( (unsigned __int64)-(__int64)(v22 + 1) <= 8 )
    goto LABEL_73;
LABEL_16:
  v25 = 0;
  do
  {
    *(__m128i *)&v10[v25 * 4] = _mm_or_si128(
                                  _mm_loadu_si128((const __m128i *)&v22[v25]),
                                  _mm_loadu_si128((const __m128i *)&v10[v25 * 4]));
    v25 += 4;
  }
  while ( 4LL * (v23 >> 2) != v25 );
  if ( (v23 & 3) != 0 )
  {
    v26 = v23 & 0xFFFFFFFC;
    v23 -= v26;
    if ( v23 == 1 )
    {
LABEL_22:
      *(_DWORD *)&v10[4 * v26] |= v22[v26];
      goto LABEL_23;
    }
LABEL_20:
    *(_QWORD *)&v10[4 * (unsigned int)v26] = _mm_or_si128(
                                               _mm_loadl_epi64((const __m128i *)&v22[(unsigned int)v26]),
                                               _mm_loadl_epi64((const __m128i *)&v10[4 * (unsigned int)v26])).m128i_u64[0];
    if ( (v23 & 1) == 0 )
      goto LABEL_23;
    v26 = (v23 & 0xFFFFFFFE) + (unsigned int)v26;
    goto LABEL_22;
  }
LABEL_23:
  v27 = *(_DWORD **)(a4 + 8);
  v28 = v27;
  if ( !v27 )
    return a1;
  v29 = *(v27 - 1);
  if ( !v15 )
    goto LABEL_42;
LABEL_25:
  v30 = *((_DWORD *)v15 - 1);
  LODWORD(v54) = v30;
  if ( v30 >= v29 )
  {
    if ( !v29 )
      return a1;
    goto LABEL_27;
  }
  v34 = v29 + 1;
  if ( v30 < v29 + 1 )
  {
    while ( 1 )
    {
      v36 = *((_DWORD *)v15 - 2);
      if ( v36 >= v34 )
        break;
LABEL_45:
      v37 = (3 * v36 + 1) >> 1;
      v38 = 4 * v37 + 8;
      v39 = v37;
      if ( 4 * v36 + 8 >= (unsigned int)v38 || v36 >= v37 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v55, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v55);
        sub_233E40((__int64)v55);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v40 = (unsigned int *)sub_186B300(v15 - 8, v38);
      v15 = (char *)(v40 + 2);
      *v40 = v39;
      a1[1] = (char *)(v40 + 2);
    }
LABEL_49:
    v41 = (unsigned int)v54;
    *((_DWORD *)v15 - 1) = v34;
    v42 = 4LL * v34;
    v43 = 4 * v41;
    if ( v43 != v42 )
      memset(&v15[v43], 0, v42 - v43);
    v27 = *(_DWORD **)(a4 + 8);
LABEL_27:
    v28 = v27;
    goto LABEL_28;
  }
  *((_DWORD *)v15 - 1) = v34;
LABEL_28:
  if ( v29 == 1 )
  {
    *(_DWORD *)v15 |= *v27;
    return a1;
  }
  if ( (unsigned __int64)(v15 - (char *)(v27 + 1)) <= 8 )
    goto LABEL_77;
  if ( v29 > 3 )
    goto LABEL_31;
  LODWORD(v32) = 0;
LABEL_35:
  *(_QWORD *)&v15[4 * (unsigned int)v32] = _mm_or_si128(
                                             _mm_loadl_epi64((const __m128i *)&v28[(unsigned int)v32]),
                                             _mm_loadl_epi64((const __m128i *)&v15[4 * (unsigned int)v32])).m128i_u64[0];
  if ( (v29 & 1) != 0 )
  {
    v32 = (v29 & 0xFFFFFFFE) + (unsigned int)v32;
    goto LABEL_37;
  }
  return a1;
}

