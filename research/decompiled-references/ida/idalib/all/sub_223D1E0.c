__m128 *__fastcall sub_223D1E0(__m128 *a1, char *a2, __int64 *a3)
{
  char *v4; // rbp
  char *v6; // r13
  char *v7; // rax
  signed __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // r8
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
  char *v34; // r12
  char *v35; // r14
  char *v36; // rdi
  char *v37; // r15
  __int64 v38; // rax
  void *v39; // rdi
  __m128 *result; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned __int64 v44; // [rsp+0h] [rbp-78h]
  char *v45; // [rsp+0h] [rbp-78h]
  char *v46; // [rsp+10h] [rbp-68h]
  __int64 v47; // [rsp+18h] [rbp-60h] BYREF
  unsigned __int64 v48; // [rsp+20h] [rbp-58h]
  __m128 *v49; // [rsp+28h] [rbp-50h]
  unsigned __int64 v50; // [rsp+30h] [rbp-48h]
  signed __int64 v51; // [rsp+38h] [rbp-40h]

  v4 = a2;
  v6 = (char *)a1->m128_u64[0];
  v7 = (char *)a1->m128_u64[1];
  v49 = a1;
  v46 = v7;
  v8 = a2 - v6;
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
    v51 = v8;
    v44 = v11;
    v12 = operator new(v11);
    v8 = v51;
    v48 = v12;
    v50 = v12 + v44;
    v47 = v12 + 8;
    goto LABEL_4;
  }
  v47 = 8;
  v50 = 0;
  v48 = 0;
LABEL_4:
  v13 = *a3;
  v14 = v48;
  *a3 = 0;
  *(_QWORD *)(v14 + v8) = v13;
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
        v20 = v48;
        *(_OWORD *)&v6[v18] = 0;
        *(__m128i *)(v20 + v18) = v19;
        v18 += 16;
      }
      while ( v18 != 16 * ((v16 + 1) >> 1) );
      v21 = 8 * (v17 & 0xFFFFFFFFFFFFFFFELL);
      v22 = &v6[v21];
      v23 = (_QWORD *)(v48 + v21);
      if ( v17 != (v17 & 0xFFFFFFFFFFFFFFFELL) )
      {
        v24 = *(_QWORD *)v22;
        *(_QWORD *)v22 = 0;
        *v23 = v24;
      }
    }
    else
    {
      v42 = v48;
      do
      {
        v43 = *(_QWORD *)v15;
        *(_QWORD *)v15 = 0;
        v15 += 8;
        v42 += 8LL;
        *(_QWORD *)(v42 - 8) = v43;
      }
      while ( a2 != v15 );
    }
    v47 = v48 + 8 * v16 + 16;
  }
  if ( a2 != v46 )
  {
    v25 = ((unsigned __int64)(v46 - a2 - 8) >> 3) + 1;
    if ( v46 - a2 == 8 )
    {
      v30 = (_QWORD *)v47;
    }
    else
    {
      v26 = 0;
      do
      {
        v27 = _mm_loadu_si128((const __m128i *)&a2[v26]);
        v28 = v47;
        *(_OWORD *)&a2[v26] = 0;
        *(__m128i *)(v28 + v26) = v27;
        v26 += 16;
      }
      while ( v26 != 16 * (v25 >> 1) );
      v29 = 8 * (v25 & 0xFFFFFFFFFFFFFFFELL);
      v30 = (_QWORD *)(v28 + v29);
      v4 = &a2[v29];
      if ( v25 == (v25 & 0xFFFFFFFFFFFFFFFELL) )
        goto LABEL_18;
    }
    v31 = *(_QWORD *)v4;
    *(_QWORD *)v4 = 0;
    *v30 = v31;
LABEL_18:
    v47 += 8 * v25;
  }
  for ( i = v6; i != v46; i += 8 )
  {
    v33 = *(_QWORD *)i;
    if ( *(_QWORD *)i )
    {
      v34 = *(char **)(v33 + 56);
      v35 = &v34[40 * *(unsigned int *)(v33 + 64)];
      if ( v34 != v35 )
      {
        do
        {
          while ( 1 )
          {
            v35 -= 40;
            v36 = *((char **)v35 + 2);
            if ( v36 != v35 + 40 )
              free(v36);
            v37 = *(char **)v35;
            v38 = *(_QWORD *)v35 + 80LL * *((unsigned int *)v35 + 2);
            if ( *(_QWORD *)v35 != v38 )
            {
              do
              {
                while ( 1 )
                {
                  v38 -= 80;
                  v39 = *(void **)(v38 + 8);
                  if ( v39 == (void *)(v38 + 24) )
                    break;
                  v45 = (char *)v38;
                  free(v39);
                  v38 = (__int64)v45;
                  if ( v37 == v45 )
                    goto LABEL_27;
                }
              }
              while ( v37 != (char *)v38 );
LABEL_27:
              v37 = *(char **)v35;
            }
            if ( v37 == v35 + 16 )
              break;
            free(v37);
            if ( v34 == v35 )
              goto LABEL_30;
          }
        }
        while ( v34 != v35 );
LABEL_30:
        v35 = *(char **)(v33 + 56);
      }
      if ( v35 != (char *)(v33 + 72) )
        free(v35);
      if ( *(_QWORD *)v33 != v33 + 16 )
        operator delete(*(void **)v33);
      operator delete((void *)v33, 0x70u);
    }
  }
  if ( v6 )
    operator delete(v6);
  result = v49;
  v41 = v50;
  *v49 = _mm_loadh_ps((const double *)&v47);
  result[1].m128_u64[0] = v41;
  return result;
}
