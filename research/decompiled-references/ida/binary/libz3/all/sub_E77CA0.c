void __fastcall sub_E77CA0(__m128i *a1, __m128i *a2, __m128i *a3, char **a4)
{
  __int64 v4; // rsi
  char *v5; // r15
  unsigned int v6; // ebx
  __int64 v7; // rax
  _BYTE *v8; // r12
  size_t v9; // rdx
  unsigned int *v10; // rbx
  unsigned int *v11; // r15
  unsigned int v12; // r9d
  unsigned int v13; // esi
  unsigned int *v14; // r14
  __int64 v15; // rax
  unsigned int v16; // edx
  unsigned int v17; // ebp
  __int64 v18; // rax
  __m128i v19; // xmm5
  signed __int64 v20; // rdx
  __int64 v21; // r13
  char *v22; // rbp
  __int64 v23; // rax
  signed __int64 v24; // rdx
  char *v25; // rdi
  char *v26; // rax
  unsigned int *v27; // rax
  __m128i v28; // xmm1
  __m128i v29; // xmm0
  char v30; // di
  bool v31; // al
  unsigned __int64 v32; // xmm1_8
  unsigned __int64 v33; // rcx
  unsigned int *v34; // rax
  __m128d v35; // xmm0
  unsigned __int64 v36; // rcx
  unsigned int *i; // rax
  __m128i v38; // xmm0
  unsigned int v39; // edx
  char v40; // cl
  bool v41; // r8
  char *v42; // rbp
  __int64 v43; // rbx
  char *v44; // rbp
  char **v45; // rax
  __int64 v46; // r14
  char *v47; // rbp
  unsigned int sizea; // [rsp+8h] [rbp-B0h]
  __int64 size; // [rsp+8h] [rbp-B0h]
  unsigned int v50; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v51; // [rsp+10h] [rbp-A8h]
  __m128i *v52; // [rsp+18h] [rbp-A0h]
  char *src; // [rsp+40h] [rbp-78h]
  __int64 v58; // [rsp+48h] [rbp-70h]
  const __m128i *v59; // [rsp+50h] [rbp-68h]
  __int64 v60; // [rsp+58h] [rbp-60h]
  char *v61; // [rsp+60h] [rbp-58h] BYREF
  char *v62; // [rsp+68h] [rbp-50h] BYREF
  char *v63; // [rsp+70h] [rbp-48h] BYREF
  char *v64[8]; // [rsp+78h] [rbp-40h] BYREF

  v4 = (char *)a2 - (char *)a1;
  v58 = v4 >> 3;
  v60 = v4;
  v59 = (__m128i *)((char *)a3 + v4);
  src = *a4;
  if ( *a4 )
  {
    v61 = nullptr;
    sub_C7B020(&v61, a4);
    src = v61;
    if ( v4 <= 48 )
    {
      v10 = (unsigned int *)a1;
      if ( v61 )
        goto LABEL_61;
      v64[0] = nullptr;
      sub_E73C80((unsigned int *)a1, (unsigned int *)a2, v64);
      return;
    }
  }
  else if ( v4 <= 48 )
  {
    v64[0] = nullptr;
    sub_E73C80((unsigned int *)a1, (unsigned int *)a2, v64);
    return;
  }
  v5 = src;
  v52 = a1;
  if ( src )
  {
LABEL_4:
    v6 = *((_DWORD *)v5 - 1);
    sizea = *((_DWORD *)v5 - 2);
    v7 = sub_186B270(sizea + 8LL);
    v8 = (_BYTE *)(v7 + 8);
    *(_QWORD *)v7 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(sizea), _mm_cvtsi32_si128(v6)).m128i_u64[0];
    v9 = *((unsigned int *)v5 - 1);
    if ( v9 <= 1 )
    {
      if ( v9 == 1 )
        *(_BYTE *)(v7 + 8) = *src;
    }
    else
    {
      memmove((void *)(v7 + 8), v5, v9);
    }
  }
  else
  {
LABEL_29:
    v8 = nullptr;
  }
  v10 = &v52[3].m128i_u32[2];
  v11 = &v52->m128i_u32[2];
  do
  {
    v12 = v11[1];
    v13 = *v11;
    v14 = v11;
    v15 = v52->m128i_u32[0];
    v16 = v52->m128i_u32[1];
    if ( !v12 )
    {
      if ( v13 < __PAIR64__(v16, v15) )
        goto LABEL_33;
      if ( !v8 )
      {
        v27 = v11 - 2;
        v22 = nullptr;
        v25 = nullptr;
LABEL_15:
        v28 = _mm_loadl_epi64((const __m128i *)(v11 - 2));
        v29.m128i_i64[0] = v28.m128i_i64[0];
        if ( v13 < _mm_cvtsi128_si32(v28) || _mm_cvtsi128_si32(_mm_shuffle_epi32(v28, 229)) )
        {
          do
          {
            do
            {
              v14 = v27;
              *((_QWORD *)v27 + 1) = v29.m128i_i64[0];
              v27 -= 2;
              v29 = _mm_loadl_epi64((const __m128i *)(v14 - 2));
            }
            while ( _mm_cvtsi128_si32(_mm_shuffle_epi32(v29, 229)) );
          }
          while ( v13 < _mm_cvtsi128_si32(v29) );
        }
        v12 = 0;
        goto LABEL_20;
      }
      goto LABEL_10;
    }
    if ( v16 )
    {
      if ( (v30 = v8[v13], v31 = v8[v15] != 0, !v30) && v31 || (v30 != 0) == v31 && v12 < v16 )
      {
LABEL_33:
        v32 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v13), _mm_cvtsi32_si128(v12)).m128i_u64[0];
        v33 = ((char *)v11 - (char *)v52) >> 3;
        if ( (char *)v11 - (char *)v52 > 0 )
        {
          if ( (char *)v11 - (char *)v52 <= 8 )
          {
            v36 = 0;
          }
          else
          {
            v34 = v11;
            do
            {
              v34 -= 4;
              v35 = (__m128d)_mm_loadh_ps((const double *)v34);
              *(__m128d *)(v34 + 2) = _mm_shuffle_pd(v35, v35, 1);
            }
            while ( v34 != &v11[-4 * (v33 >> 1)] );
            if ( (v33 & 1) == 0 )
              goto LABEL_40;
            v36 = v33 & 0xFFFFFFFFFFFFFFFELL;
          }
          *(_QWORD *)&v11[2 * ~v36 + 2] = *(_QWORD *)&v11[2 * ~v36];
        }
LABEL_40:
        v52->m128i_i64[0] = v32;
        goto LABEL_24;
      }
    }
    if ( !v8 )
    {
      v22 = nullptr;
      v25 = nullptr;
      goto LABEL_45;
    }
LABEL_10:
    v17 = *((_DWORD *)v8 - 1);
    v50 = *((_DWORD *)v8 - 2);
    size = v50 + 8LL;
    v18 = sub_186B270(size);
    v19 = _mm_cvtsi32_si128(v17);
    v20 = *((unsigned int *)v8 - 1);
    v21 = v18;
    v22 = (char *)(v18 + 8);
    v51 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v50), v19).m128i_u64[0];
    *(_QWORD *)v18 = v51;
    if ( v20 <= 1 )
    {
      if ( v20 == 1 )
        *(_BYTE *)(v18 + 8) = *v8;
    }
    else
    {
      memcpy((void *)(v18 + 8), v8, v20);
    }
    v23 = sub_186B270(size);
    v24 = *(unsigned int *)(v21 + 4);
    v25 = (char *)(v23 + 8);
    *(_QWORD *)v23 = v51;
    if ( v24 <= 1 )
    {
      if ( v24 == 1 )
        *(_BYTE *)(v23 + 8) = *(_BYTE *)(v21 + 8);
      v12 = v11[1];
      v13 = *v11;
    }
    else
    {
      v26 = (char *)memcpy(v25, v22, v24);
      v12 = v11[1];
      v13 = *v11;
      v25 = v26;
    }
    v27 = v11 - 2;
    if ( !v12 )
      goto LABEL_15;
LABEL_45:
    for ( i = v11; ; i -= 2 )
    {
      v38 = _mm_loadl_epi64((const __m128i *)(i - 2));
      v14 = i;
      v39 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v38, 229));
      if ( !v39 )
        break;
      v40 = v25[v13];
      v41 = v25[_mm_cvtsi128_si32(v38)] != 0;
      if ( (v40 || !v41) && ((v40 != 0) != v41 || v12 >= v39) )
        break;
      *(_QWORD *)i = v38.m128i_i64[0];
    }
LABEL_20:
    *v14 = v13;
    v14[1] = v12;
    if ( v25 )
      sub_186B220(v25 - 8);
    if ( v22 )
      sub_186B220(v22 - 8);
LABEL_24:
    v11 += 2;
  }
  while ( v11 != v10 );
  if ( v8 )
    sub_186B220(v8 - 8);
  if ( (char *)a2 - (char *)v10 > 48 )
  {
    v5 = src;
    v52 = (__m128i *)((char *)v52 + 56);
    if ( src )
      goto LABEL_4;
    goto LABEL_29;
  }
  if ( src )
  {
LABEL_61:
    v64[0] = nullptr;
    v61 = src;
    sub_C7B020(v64, &v61);
    v42 = v64[0];
    sub_E73C80(v10, (unsigned int *)a2, v64);
    if ( v42 )
      sub_186B220(v42 - 8);
    sub_186B220(src - 8);
  }
  else
  {
    v64[0] = nullptr;
    sub_E73C80(v10, (unsigned int *)a2, v64);
  }
  v43 = 7;
  if ( v60 > 56 )
  {
    do
    {
      while ( *a4 )
      {
        v62 = nullptr;
        sub_C7B020(&v62, a4);
        v44 = v62;
        sub_E779D0(a1, a2, a3->m128i_i8, v43, &v62);
        if ( v44 )
          sub_186B220(v44 - 8);
        v45 = a4;
        v46 = 2 * v43;
        if ( !*a4 )
          goto LABEL_74;
LABEL_69:
        v63 = nullptr;
        sub_C7B020(&v63, v45);
        v47 = v63;
        sub_E779D0(a3, v59, a1->m128i_i8, v46, &v63);
        if ( v47 )
          sub_186B220(v47 - 8);
        v43 *= 4;
        if ( v58 <= v43 )
          return;
      }
      v46 = 2 * v43;
      v62 = nullptr;
      sub_E779D0(a1, a2, a3->m128i_i8, v43, &v62);
      v45 = a4;
      if ( *a4 )
        goto LABEL_69;
LABEL_74:
      v43 *= 4;
      v63 = nullptr;
      sub_E779D0(a3, v59, a1->m128i_i8, v46, &v63);
    }
    while ( v58 > v43 );
  }
}

