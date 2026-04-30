__int64 __fastcall sub_414BD0(__int64 a1, const char *a2, __int64 a3, __int64 a4)
{
  __int64 i; // r14
  const char *v6; // rdi
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // r12
  int v10; // eax
  const char *v11; // rdi
  __int64 v12; // rax
  const char *v13; // r14
  __m128i v14; // xmm0
  const char **v15; // rbp
  const char *v16; // rdi
  char *v17; // rax
  _QWORD *v18; // rax
  __m128i v19; // xmm2
  char *v20; // rcx
  __int64 v21; // r12
  char *v22; // rax
  const char *v23; // rbp
  __m128i v24; // xmm0
  const char *v25; // rdi
  const char *v26; // rdi
  __int64 v27; // r14
  int v28; // ebp
  int v29; // eax
  const char *v30; // rdi
  __int64 result; // rax
  __m128i v32; // xmm3
  __int64 v33; // rax
  __int64 v34; // r15
  __int64 v35; // rax
  __int64 v36; // r12
  __m128i si128; // xmm0
  const char *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rbx
  __m128i v41; // xmm4
  const char *v42; // [rsp+8h] [rbp-80h]
  char *nptr[2]; // [rsp+10h] [rbp-78h] BYREF
  __m128i v44; // [rsp+20h] [rbp-68h] BYREF
  __m128i v45; // [rsp+30h] [rbp-58h] BYREF
  __int64 v46; // [rsp+40h] [rbp-48h]
  __int64 v47; // [rsp+48h] [rbp-40h]

  v45.m128i_i64[0] = a4;
  v42 = a2;
  v47 = a3;
  nptr[0] = (char *)((a3 - 1) / 2);
  v46 = a3 & 1;
  if ( (__int64)a2 >= (__int64)nptr[0] )
  {
    v8 = a1 + 24LL * (_QWORD)a2;
    if ( v46 )
    {
      v39 = v45.m128i_i64[0];
      v40 = *(_QWORD *)v45.m128i_i64[0];
      v41 = _mm_loadu_si128((const __m128i *)(v45.m128i_i64[0] + 8));
      *(_QWORD *)v45.m128i_i64[0] = 0;
      *(_OWORD *)(v39 + 8) = 0;
      v46 = v40;
      v45 = v41;
      goto LABEL_25;
    }
    v7 = (__int64)a2;
    goto LABEL_30;
  }
  for ( i = (__int64)a2; ; i = v7 )
  {
    v6 = &s1;
    v7 = 2 * (i + 1);
    v8 = a1 + 48 * (i + 1);
    v9 = v8 - 24;
    if ( *(_QWORD *)(v8 + 8) )
      v6 = *(const char **)v8;
    v10 = strtol(v6, nullptr, 10);
    v11 = &s1;
    if ( *(_QWORD *)(v9 + 8) )
      v11 = *(const char **)v9;
    a2 = nullptr;
    if ( v10 < (int)strtol(v11, nullptr, 10) )
    {
      --v7;
      v8 = a1 + 24 * v7;
    }
    v12 = 3 * i;
    v13 = *(const char **)v8;
    v14 = _mm_loadu_si128((const __m128i *)(v8 + 8));
    v15 = (const char **)(a1 + 8 * v12);
    *(_QWORD *)v8 = 0;
    *(_OWORD *)(v8 + 8) = 0;
    v16 = *v15;
    if ( *v15 )
    {
      v15[1] = nullptr;
      v44 = v14;
      qfree(v16, nullptr);
      v14 = _mm_load_si128(&v44);
    }
    v17 = nptr[0];
    *v15 = v13;
    *(__m128i *)(v15 + 1) = v14;
    if ( v7 >= (__int64)v17 )
      break;
  }
  if ( !v46 )
  {
LABEL_30:
    if ( (v47 - 2) / 2 == v7 )
    {
      v33 = v7 + 1;
      v34 = 2 * (v7 + 1);
      v35 = a1 + 8 * (v34 + 4 * v33) - 24;
      v36 = *(_QWORD *)v35;
      si128 = _mm_loadu_si128((const __m128i *)(v35 + 8));
      *(_QWORD *)v35 = 0;
      *(_OWORD *)(v35 + 8) = 0;
      v38 = *(const char **)v8;
      if ( *(_QWORD *)v8 )
      {
        *(_QWORD *)(v8 + 8) = 0;
        *(__m128i *)nptr = si128;
        qfree(v38, a2);
        si128 = _mm_load_si128((const __m128i *)nptr);
      }
      v7 = v34 - 1;
      *(_QWORD *)v8 = v36;
      *(__m128i *)(v8 + 8) = si128;
      v8 = a1 + 24 * v7;
    }
  }
  v18 = (_QWORD *)v45.m128i_i64[0];
  v19 = _mm_loadu_si128((const __m128i *)(v45.m128i_i64[0] + 8));
  v20 = *(char **)v45.m128i_i64[0];
  *(_OWORD *)(v45.m128i_i64[0] + 8) = 0;
  *v18 = 0;
  v46 = (__int64)v20;
  a3 = v19.m128i_i64[0];
  v45 = v19;
  v21 = (v7 - 1) / 2;
  if ( v7 > (__int64)v42 )
  {
    v22 = (char *)&s1;
    if ( v19.m128i_i64[0] )
      v22 = v20;
    nptr[0] = v22;
    while ( 1 )
    {
      v26 = &s1;
      v27 = a1 + 24 * v21;
      if ( *(_QWORD *)(v27 + 8) )
        v26 = *(const char **)v27;
      a2 = nullptr;
      v28 = strtol(v26, nullptr, 10);
      v29 = strtol(nptr[0], nullptr, 10);
      a3 = 3 * v7;
      v8 = a1 + 24 * v7;
      if ( v28 >= v29 )
        break;
      v23 = *(const char **)v27;
      v24 = _mm_loadu_si128((const __m128i *)(v27 + 8));
      *(_QWORD *)v27 = 0;
      *(_OWORD *)(v27 + 8) = 0;
      v25 = *(const char **)v8;
      if ( *(_QWORD *)v8 )
      {
        *(_QWORD *)(v8 + 8) = 0;
        v44 = v24;
        qfree(v25, nullptr);
        v24 = _mm_load_si128(&v44);
      }
      a3 = v21 - 1;
      *(_QWORD *)v8 = v23;
      v7 = v21;
      *(__m128i *)(v8 + 8) = v24;
      if ( (__int64)v42 >= v21 )
      {
        v8 = a1 + 24 * v21;
        break;
      }
      v21 = (v21 - 1) / 2;
    }
  }
LABEL_25:
  v30 = *(const char **)v8;
  if ( *(_QWORD *)v8 )
  {
    *(_QWORD *)(v8 + 8) = 0;
    qfree(v30, a2, a3);
  }
  result = v46;
  v32 = _mm_load_si128(&v45);
  *(_QWORD *)v8 = v46;
  *(__m128i *)(v8 + 8) = v32;
  return result;
}
