__m128 *__fastcall sub_CC4A40(__m128 *a1, char *a2, _QWORD *a3)
{
  char *v3; // rcx
  char *v5; // r13
  char *v6; // rbp
  signed __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  char *v13; // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  __m128i v17; // xmm0
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rsi
  char *v20; // rax
  _QWORD *v21; // rsi
  __int64 v22; // rdx
  unsigned __int64 v23; // rsi
  __int64 v24; // rax
  __m128i v25; // xmm2
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  _QWORD *v29; // rdx
  __int64 v30; // rax
  char *i; // rbx
  __int64 v32; // r15
  void *v33; // rdi
  void *v34; // rdi
  void **v35; // r12
  __int64 v36; // rax
  void **v37; // r14
  void *v38; // rdi
  void *v39; // rdi
  __m128 *result; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  __int64 v43; // rsi
  char *v44; // [rsp+0h] [rbp-78h]
  __int64 v45; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v46; // [rsp+18h] [rbp-60h]
  __m128 *v47; // [rsp+20h] [rbp-58h]
  unsigned __int64 v48; // [rsp+28h] [rbp-50h]
  signed __int64 v49; // [rsp+30h] [rbp-48h]
  _QWORD *v50; // [rsp+38h] [rbp-40h]

  v3 = a2;
  v5 = (char *)a1->m128_u64[1];
  v6 = (char *)a1->m128_u64[0];
  v47 = a1;
  v7 = a2 - v6;
  v8 = (v5 - v6) >> 3;
  if ( !v8 )
  {
    v9 = 1;
    goto LABEL_46;
  }
  v9 = 2 * v8;
  v10 = -8;
  if ( v8 > 2 * v8 || v9 > 0x1FFFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v9 )
  {
LABEL_46:
    v10 = 8 * v9;
LABEL_3:
    v50 = a3;
    v49 = v7;
    v44 = v3;
    v11 = operator new(v10);
    v3 = v44;
    v46 = v11;
    a3 = v50;
    v48 = v11 + v10;
    v45 = v11 + 8;
    goto LABEL_4;
  }
  v45 = 8;
  v48 = 0;
  v46 = 0;
LABEL_4:
  v12 = v46;
  *(_QWORD *)(v46 + v7) = *a3;
  if ( a2 != v6 )
  {
    v13 = v6;
    v14 = (unsigned __int64)(a2 - 8 - v6) >> 3;
    if ( (v12 >= (unsigned __int64)(v6 + 16) || (unsigned __int64)v6 >= v12 + 16)
      && (unsigned __int64)(a2 - 8 - v6) > 0x10 )
    {
      v15 = v14 + 1;
      v16 = 0;
      do
      {
        v17 = _mm_loadu_si128((const __m128i *)&v6[v16]);
        v18 = v46;
        *(_OWORD *)&v6[v16] = 0;
        *(__m128i *)(v18 + v16) = v17;
        v16 += 16;
      }
      while ( 16 * ((v14 + 1) >> 1) != v16 );
      v19 = 8 * (v15 & 0xFFFFFFFFFFFFFFFELL);
      v20 = &v6[v19];
      v21 = (_QWORD *)(v46 + v19);
      if ( v15 != (v15 & 0xFFFFFFFFFFFFFFFELL) )
      {
        v22 = *(_QWORD *)v20;
        *(_QWORD *)v20 = 0;
        *v21 = v22;
      }
    }
    else
    {
      v42 = v46;
      do
      {
        v43 = *(_QWORD *)v13;
        *(_QWORD *)v13 = 0;
        v13 += 8;
        v42 += 8LL;
        *(_QWORD *)(v42 - 8) = v43;
      }
      while ( a2 != v13 );
    }
    v45 = v46 + 8 * v14 + 16;
  }
  if ( a2 != v5 )
  {
    v23 = ((unsigned __int64)(v5 - a2 - 8) >> 3) + 1;
    if ( v5 - a2 == 8 )
    {
      v29 = (_QWORD *)v45;
    }
    else
    {
      v24 = 0;
      do
      {
        v25 = _mm_loadu_si128((const __m128i *)&a2[v24]);
        v26 = v45;
        *(_OWORD *)&a2[v24] = 0;
        *(__m128i *)(v26 + v24) = v25;
        v24 += 16;
      }
      while ( v24 != 16 * (v23 >> 1) );
      v27 = v26;
      v28 = 8 * (v23 & 0xFFFFFFFFFFFFFFFELL);
      v29 = (_QWORD *)(v28 + v27);
      v3 = &a2[v28];
      if ( v23 == (v23 & 0xFFFFFFFFFFFFFFFELL) )
        goto LABEL_18;
    }
    v30 = *(_QWORD *)v3;
    *(_QWORD *)v3 = 0;
    *v29 = v30;
LABEL_18:
    v45 += 8 * v23;
  }
  for ( i = v6; i != v5; i += 8 )
  {
    v32 = *(_QWORD *)i;
    if ( *(_QWORD *)i )
    {
      v33 = *(void **)(v32 + 456);
      if ( v33 != (void *)(v32 + 472) )
        free(v33);
      operator delete();
      v34 = *(void **)(v32 + 384);
      if ( v34 != (void *)(v32 + 400) )
        free(v34);
      v35 = *(void ***)(v32 + 80);
      v36 = 18LL * *(unsigned int *)(v32 + 88);
      v37 = &v35[v36];
      if ( v35 != &v35[v36] )
      {
        do
        {
          while ( 1 )
          {
            v37 -= 18;
            if ( *v37 == v37 + 2 )
              break;
            free(*v37);
            if ( v35 == v37 )
              goto LABEL_28;
          }
        }
        while ( v35 != v37 );
LABEL_28:
        v37 = *(void ***)(v32 + 80);
      }
      if ( v37 != (void **)(v32 + 96) )
        free(v37);
      v38 = *(void **)(v32 + 56);
      if ( v38 )
        operator delete(v38);
      v39 = *(void **)(v32 + 32);
      if ( v39 )
        operator delete(v39);
      operator delete((void *)v32, 0x200u);
    }
  }
  if ( v6 )
    operator delete(v6);
  result = v47;
  v41 = v48;
  *v47 = _mm_loadh_ps((const double *)&v45);
  result[1].m128_u64[0] = v41;
  return result;
}

