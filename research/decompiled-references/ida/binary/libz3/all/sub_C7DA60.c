void __fastcall sub_C7DA60(__m128i *a1, __m128i *a2, __m128i *a3, char **a4)
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
  __m128i v44; // xmm0
  char *v45; // rbp
  void *v46; // rcx
  char *v47; // rsi
  size_t v48; // rdx
  __m128i v49; // xmm0
  char *v50; // rbp
  void *v51; // rcx
  char *v52; // rsi
  size_t v53; // rdx
  __int64 v54; // rcx
  unsigned int sizea; // [rsp+8h] [rbp-B0h]
  __int64 size; // [rsp+8h] [rbp-B0h]
  unsigned int v57; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v58; // [rsp+10h] [rbp-A8h]
  __m128i *v59; // [rsp+18h] [rbp-A0h]
  char *src; // [rsp+40h] [rbp-78h]
  __int64 v65; // [rsp+48h] [rbp-70h]
  const __m128i *v66; // [rsp+50h] [rbp-68h]
  __int64 v67; // [rsp+58h] [rbp-60h]
  char *v68; // [rsp+60h] [rbp-58h] BYREF
  char *v69; // [rsp+68h] [rbp-50h] BYREF
  char *v70; // [rsp+70h] [rbp-48h] BYREF
  void *v71[8]; // [rsp+78h] [rbp-40h] BYREF

  v4 = (char *)a2 - (char *)a1;
  v65 = v4 >> 3;
  v67 = v4;
  v66 = (__m128i *)((char *)a3 + v4);
  src = *a4;
  if ( *a4 )
  {
    v68 = nullptr;
    sub_C7B020(&v68, a4);
    src = v68;
    if ( v4 <= 48 )
    {
      v10 = (unsigned int *)a1;
      if ( v68 )
        goto LABEL_61;
      v71[0] = nullptr;
      sub_C7B800((unsigned int *)a1, (unsigned int *)a2, v71);
      return;
    }
  }
  else if ( v4 <= 48 )
  {
    v71[0] = nullptr;
    sub_C7B800((unsigned int *)a1, (unsigned int *)a2, v71);
    return;
  }
  v5 = src;
  v59 = a1;
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
  v10 = &v59[3].m128i_u32[2];
  v11 = &v59->m128i_u32[2];
  do
  {
    v12 = v11[1];
    v13 = *v11;
    v14 = v11;
    v15 = v59->m128i_u32[0];
    v16 = v59->m128i_u32[1];
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
        v33 = ((char *)v11 - (char *)v59) >> 3;
        if ( (char *)v11 - (char *)v59 > 0 )
        {
          if ( (char *)v11 - (char *)v59 <= 8 )
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
            while ( &v11[-4 * (v33 >> 1)] != v34 );
            if ( (v33 & 1) == 0 )
              goto LABEL_40;
            v36 = v33 & 0xFFFFFFFFFFFFFFFELL;
          }
          *(_QWORD *)&v11[2 * ~v36 + 2] = *(_QWORD *)&v11[2 * ~v36];
        }
LABEL_40:
        v59->m128i_i64[0] = v32;
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
    v57 = *((_DWORD *)v8 - 2);
    size = v57 + 8LL;
    v18 = sub_186B270(size);
    v19 = _mm_cvtsi32_si128(v17);
    v20 = *((unsigned int *)v8 - 1);
    v21 = v18;
    v22 = (char *)(v18 + 8);
    v58 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v57), v19).m128i_u64[0];
    *(_QWORD *)v18 = v58;
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
    *(_QWORD *)v23 = v58;
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
    v59 = (__m128i *)((char *)v59 + 56);
    if ( src )
      goto LABEL_4;
    goto LABEL_29;
  }
  if ( src )
  {
LABEL_61:
    v71[0] = nullptr;
    v68 = src;
    sub_C7B020(v71, &v68);
    v42 = (char *)v71[0];
    sub_C7B800(v10, (unsigned int *)a2, v71);
    if ( v42 )
      sub_186B220(v42 - 8);
    sub_186B220(src - 8);
  }
  else
  {
    v71[0] = nullptr;
    sub_C7B800(v10, (unsigned int *)a2, v71);
  }
  v43 = 7;
  if ( v67 > 56 )
  {
    do
    {
      while ( 1 )
      {
        if ( *a4 )
        {
          v44 = _mm_loadl_epi64((const __m128i *)(*a4 - 8));
          v45 = (char *)sub_186B270((unsigned int)_mm_cvtsi128_si32(v44) + 8LL);
          v46 = v45 + 8;
          *(_QWORD *)v45 = v44.m128i_i64[0];
          v47 = *a4;
          if ( *a4 )
          {
            v48 = *((unsigned int *)v47 - 1);
            if ( v48 <= 1 )
            {
              if ( v48 == 1 )
                v45[8] = *v47;
            }
            else
            {
              v46 = memmove(v46, v47, v48);
            }
          }
          v69 = (char *)v46;
          sub_C7D790(a1, a2, a3->m128i_i8, v43, &v69);
          sub_186B220(v45);
        }
        else
        {
          v69 = nullptr;
          sub_C7D790(a1, a2, a3->m128i_i8, v43, &v69);
        }
        if ( *a4 )
          break;
        v54 = 2 * v43;
        v43 *= 4;
        v70 = nullptr;
        sub_C7D790(a3, v66, a1->m128i_i8, v54, &v70);
        if ( v65 <= v43 )
          return;
      }
      v49 = _mm_loadl_epi64((const __m128i *)(*a4 - 8));
      v50 = (char *)sub_186B270((unsigned int)_mm_cvtsi128_si32(v49) + 8LL);
      v51 = v50 + 8;
      *(_QWORD *)v50 = v49.m128i_i64[0];
      v52 = *a4;
      if ( *a4 )
      {
        v53 = *((unsigned int *)v52 - 1);
        if ( v53 <= 1 )
        {
          if ( v53 == 1 )
            v50[8] = *v52;
        }
        else
        {
          v51 = memmove(v51, v52, v53);
        }
        v70 = (char *)v51;
      }
      else
      {
        v70 = v50 + 8;
      }
      sub_C7D790(a3, v66, a1->m128i_i8, 2 * v43, &v70);
      v43 *= 4;
      sub_186B220(v50);
    }
    while ( v65 > v43 );
  }
}

