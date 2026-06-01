__m128 *__fastcall sub_211CA30(__m128 *a1, char *a2, __int64 *a3)
{
  char *v4; // rbp
  char *v6; // r13
  char *v7; // rax
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // r9
  char *v15; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  __int64 v18; // rax
  __m128i v19; // xmm0
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  char *v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  __m128i v27; // xmm2
  __int64 v28; // rsi
  unsigned __int64 v29; // rbp
  _QWORD *v30; // rdx
  __int64 v31; // rax
  char *i; // rbp
  __int64 v33; // rbx
  void *v34; // r12
  __int64 v35; // r14
  void *v36; // r15
  _QWORD *v37; // r14
  _QWORD *v38; // r12
  void *v39; // rdi
  void *v40; // rdi
  __m128 *result; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rdi
  unsigned __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned __int64 v47; // [rsp+0h] [rbp-78h]
  void *v48; // [rsp+0h] [rbp-78h]
  char *v49; // [rsp+10h] [rbp-68h]
  __int64 v50; // [rsp+18h] [rbp-60h] BYREF
  unsigned __int64 v51; // [rsp+20h] [rbp-58h]
  _QWORD *v52; // [rsp+28h] [rbp-50h]
  __m128 *v53; // [rsp+30h] [rbp-48h]
  unsigned __int64 v54; // [rsp+38h] [rbp-40h]

  v4 = a2;
  v6 = (char *)a1->m128_u64[0];
  v7 = (char *)a1->m128_u64[1];
  v53 = a1;
  v49 = v7;
  v8 = (_QWORD *)(a2 - v6);
  v9 = (v7 - v6) >> 3;
  if ( !v9 )
  {
    v10 = 1;
    goto LABEL_48;
  }
  v10 = 2 * v9;
  v11 = -8;
  if ( v9 > 2 * v9 || v10 > 0x1FFFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v10 )
  {
LABEL_48:
    v11 = 8 * v10;
LABEL_3:
    v52 = v8;
    v47 = v11;
    v12 = operator new(v11);
    v8 = v52;
    v51 = v12;
    v54 = v12 + v47;
    v50 = v12 + 8;
    goto LABEL_4;
  }
  v50 = 8;
  v54 = 0;
  v51 = 0;
LABEL_4:
  v13 = *a3;
  v14 = v51;
  *a3 = 0;
  *(_QWORD *)((char *)v8 + v14) = v13;
  if ( a2 != v6 )
  {
    v15 = v6;
    v16 = (unsigned __int64)(a2 - 8 - v6) >> 3;
    if ( (v14 >= (unsigned __int64)(v6 + 16) || (unsigned __int64)v6 >= v14 + 16)
      && (unsigned __int64)(a2 - 8 - v6) > 0x10 )
    {
      v17 = v16 + 1;
      v18 = 0;
      do
      {
        v19 = _mm_loadu_si128((const __m128i *)&v6[v18]);
        v20 = v51;
        *(_OWORD *)&v6[v18] = 0;
        *(__m128i *)(v20 + v18) = v19;
        v18 += 16;
      }
      while ( 16 * ((v16 + 1) >> 1) != v18 );
      v21 = 8 * (v17 & 0xFFFFFFFFFFFFFFFELL);
      v22 = &v6[v21];
      v23 = (_QWORD *)(v51 + v21);
      if ( v17 != (v17 & 0xFFFFFFFFFFFFFFFELL) )
      {
        v24 = *(_QWORD *)v22;
        *(_QWORD *)v22 = 0;
        *v23 = v24;
      }
    }
    else
    {
      v45 = v51;
      do
      {
        v46 = *(_QWORD *)v15;
        *(_QWORD *)v15 = 0;
        v15 += 8;
        v45 += 8LL;
        *(_QWORD *)(v45 - 8) = v46;
      }
      while ( a2 != v15 );
    }
    v50 = v51 + 8 * v16 + 16;
  }
  if ( a2 != v49 )
  {
    v25 = ((unsigned __int64)(v49 - a2 - 8) >> 3) + 1;
    if ( v49 - a2 == 8 )
    {
      v30 = (_QWORD *)v50;
    }
    else
    {
      v26 = 0;
      do
      {
        v27 = _mm_loadu_si128((const __m128i *)&a2[v26]);
        v28 = v50;
        *(_OWORD *)&a2[v26] = 0;
        *(__m128i *)(v28 + v26) = v27;
        v26 += 16;
      }
      while ( v26 != 16 * (v25 >> 1) );
      v29 = 8 * (v25 & 0xFFFFFFFFFFFFFFFELL);
      v30 = (_QWORD *)(v29 + v28);
      v4 = &a2[v29];
      if ( (v25 & 0xFFFFFFFFFFFFFFFELL) == v25 )
        goto LABEL_18;
    }
    v31 = *(_QWORD *)v4;
    *(_QWORD *)v4 = 0;
    *v30 = v31;
LABEL_18:
    v50 += 8 * v25;
  }
  for ( i = v6; i != v49; i += 8 )
  {
    v33 = *(_QWORD *)i;
    if ( *(_QWORD *)i )
    {
      v34 = *(void **)(v33 + 176);
      v35 = *(_QWORD *)(v33 + 168);
      v52 = (_QWORD *)(v33 + 168);
      if ( v34 != (void *)v35 )
      {
        do
        {
          while ( 1 )
          {
            v36 = *(void **)(v35 + 56);
            v48 = (void *)(v35 + 72);
            if ( v36 == (void *)(v35 + 72) )
              break;
            free(v36);
            operator delete(*(_QWORD *)(v35 + 32), 16LL * *(unsigned int *)(v35 + 48), 8);
            v35 += 72;
            if ( v34 == v48 )
              goto LABEL_24;
          }
          v43 = *(unsigned int *)(v35 + 48);
          v44 = *(_QWORD *)(v35 + 32);
          v35 = *(_QWORD *)(v35 + 56);
          operator delete(v44, 16 * v43, 8);
        }
        while ( v34 != v36 );
LABEL_24:
        v35 = *(_QWORD *)(v33 + 168);
      }
      if ( v35 )
        operator delete((void *)v35);
      v37 = *(_QWORD **)(v33 + 152);
      v38 = &v37[9 * *(unsigned int *)(v33 + 160)];
      if ( v37 != v38 )
      {
        do
        {
          while ( 1 )
          {
            v38 -= 9;
            v39 = (void *)v38[1];
            if ( !v39 )
              break;
            operator delete(v39);
            if ( v37 == v38 )
              goto LABEL_30;
          }
        }
        while ( v37 != v38 );
LABEL_30:
        v38 = *(_QWORD **)(v33 + 152);
      }
      if ( v52 != v38 )
        free(v38);
      operator delete(*(_QWORD *)(v33 + 128), 16LL * *(unsigned int *)(v33 + 144), 8);
      v40 = *(void **)(v33 + 104);
      if ( v40 )
        operator delete(v40);
      operator delete((void *)v33, 0xC0u);
    }
  }
  if ( v6 )
    operator delete(v6);
  result = v53;
  v42 = v54;
  *v53 = _mm_loadh_ps((const double *)&v50);
  result[1].m128_u64[0] = v42;
  return result;
}
