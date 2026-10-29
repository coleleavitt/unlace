__int64 __fastcall sub_145430(__int64 a1, __int64 a2, char *a3, char *a4)
{
  __int64 v5; // r12
  __int64 i; // r13
  const char *v7; // rsi
  const char *v8; // rdi
  __int64 v9; // r15
  __int64 v10; // rbp
  __int64 v11; // rsi
  __m128i v12; // xmm0
  __int64 v13; // r13
  __int64 v14; // r14
  __m128i v15; // xmm0
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r14
  const __m128i *v19; // rax
  __m128i v20; // xmm4
  char *v21; // rcx
  __int64 v22; // rdx
  __m128i v23; // xmm5
  __int64 v24; // r12
  __int64 v25; // r14
  const char *v26; // rax
  char *v27; // rsi
  const char *v28; // rdi
  __int64 v29; // r15
  __int64 v30; // rcx
  __m128i v31; // xmm0
  __int64 v32; // r13
  __m128i v33; // xmm0
  __int64 v34; // r13
  __m128i si128; // xmm6
  __int64 v36; // rdi
  __m128i v37; // xmm7
  __int64 result; // rax
  __int64 v39; // r13
  __int64 v40; // r12
  __int64 v41; // r15
  __m128i v42; // xmm0
  __int64 v43; // r15
  __m128i v44; // xmm0
  __m128i v46; // [rsp+10h] [rbp-98h] BYREF
  __m128i v47; // [rsp+20h] [rbp-88h] BYREF
  char *s2; // [rsp+30h] [rbp-78h]
  char *v49; // [rsp+38h] [rbp-70h]
  __m128i v50; // [rsp+40h] [rbp-68h] BYREF
  __int64 v51; // [rsp+50h] [rbp-58h]
  unsigned int v52; // [rsp+5Ch] [rbp-4Ch]
  __m128i v53[4]; // [rsp+60h] [rbp-48h] BYREF

  v5 = (__int64)(a3 - 1) / 2;
  s2 = a3;
  v49 = a4;
  if ( a2 < v5 )
  {
    for ( i = a2; ; i = v9 )
    {
      v9 = 2 * (i + 1);
      v16 = 112 * (i + 1);
      v17 = a1 + v16 - 56;
      v10 = a1 + v16;
      v18 = *(_QWORD *)(a1 + v16 + 8);
      if ( *(_QWORD *)(v17 + 8) )
      {
        v7 = *(const char **)v17;
        v8 = s1;
        if ( !v18 )
          goto LABEL_5;
      }
      else
      {
        v7 = s1;
        if ( !v18 )
          goto LABEL_7;
      }
      v8 = *(const char **)v10;
LABEL_5:
      if ( strcmp(v8, v7) < 0 )
      {
        --v9;
        v10 = a1 + 56 * v9;
      }
LABEL_7:
      v11 = *(_QWORD *)v10;
      *(_QWORD *)v10 = 0;
      v12 = (__m128i)_mm_loadh_ps((const double *)(v10 + 16));
      v13 = a1 + 56 * i;
      *(_OWORD *)(v10 + 8) = 0;
      if ( *(_QWORD *)v13 )
      {
        *(_QWORD *)(v13 + 8) = 0;
        v46.m128i_i64[0] = v11;
        v47 = v12;
        qfree();
        v12 = _mm_load_si128(&v47);
        v11 = v46.m128i_i64[0];
      }
      *(_QWORD *)v13 = v11;
      *(__m128i *)(v13 + 8) = v12;
      v14 = *(_QWORD *)(v10 + 24);
      v15 = _mm_loadu_si128((const __m128i *)(v10 + 32));
      *(_QWORD *)(v10 + 24) = 0;
      *(_OWORD *)(v10 + 32) = 0;
      if ( *(_QWORD *)(v13 + 24) )
      {
        *(_QWORD *)(v13 + 32) = 0;
        v46 = v15;
        qfree();
        v15 = _mm_load_si128(&v46);
      }
      *(_QWORD *)(v13 + 24) = v14;
      *(__m128i *)(v13 + 32) = v15;
      *(_DWORD *)(v13 + 48) = *(_DWORD *)(v10 + 48);
      if ( v9 >= v5 )
        goto LABEL_17;
    }
  }
  v9 = a2;
  v10 = a1 + 56 * a2;
LABEL_17:
  if ( ((unsigned __int8)s2 & 1) == 0 && (__int64)(s2 - 2) / 2 == v9 )
  {
    v39 = 2 * (v9 + 1);
    v40 = a1 + 112 * (v9 + 1) - 56;
    v41 = *(_QWORD *)v40;
    v42 = _mm_loadu_si128((const __m128i *)(v40 + 8));
    *(_QWORD *)v40 = 0;
    *(_OWORD *)(v40 + 8) = 0;
    if ( *(_QWORD *)v10 )
    {
      *(_QWORD *)(v10 + 8) = 0;
      v46 = v42;
      qfree();
      v42 = _mm_load_si128(&v46);
    }
    *(_QWORD *)v10 = v41;
    *(__m128i *)(v10 + 8) = v42;
    v43 = *(_QWORD *)(v40 + 24);
    v44 = _mm_loadu_si128((const __m128i *)(v40 + 32));
    *(_QWORD *)(v40 + 24) = 0;
    *(_OWORD *)(v40 + 32) = 0;
    if ( *(_QWORD *)(v10 + 24) )
    {
      *(_QWORD *)(v10 + 32) = 0;
      v46 = v44;
      qfree();
      v44 = _mm_load_si128(&v46);
    }
    *(_QWORD *)(v10 + 24) = v43;
    v9 = v39 - 1;
    *(__m128i *)(v10 + 32) = v44;
    *(_DWORD *)(v10 + 48) = *(_DWORD *)(v40 + 48);
    v10 = a1 + 56 * (v39 - 1);
  }
  v19 = (const __m128i *)v49;
  v20 = _mm_loadu_si128((const __m128i *)(v49 + 8));
  v21 = *(char **)v49;
  *(_OWORD *)(v49 + 8) = 0;
  v22 = v19[1].m128i_i64[1];
  v23 = _mm_loadu_si128(v19 + 2);
  v19[2] = 0;
  v19->m128i_i64[0] = 0;
  v24 = v20.m128i_i64[0];
  v19[1].m128i_i64[1] = 0;
  LODWORD(v19) = v19[3].m128i_i32[0];
  s2 = v21;
  v52 = (unsigned int)v19;
  v51 = v22;
  v53[0] = v20;
  v50 = v23;
  v25 = (v9 - 1) / 2;
  if ( v9 > a2 )
  {
    v26 = s1;
    if ( v20.m128i_i64[0] )
      v26 = v21;
    v49 = (char *)v26;
    while ( 1 )
    {
      v10 = a1 + 56 * v25;
      v34 = *(_QWORD *)(v10 + 8);
      if ( v24 )
      {
        v27 = s2;
        v28 = s1;
        if ( !v34 )
          goto LABEL_24;
      }
      else if ( !v34 )
      {
        v10 = a1 + 56 * v9;
        break;
      }
      v28 = *(const char **)v10;
      v27 = v49;
LABEL_24:
      v29 = a1 + 56 * v9;
      if ( strcmp(v28, v27) >= 0 )
      {
        v10 = v29;
        break;
      }
      v30 = *(_QWORD *)v10;
      *(_QWORD *)v10 = 0;
      v31 = (__m128i)_mm_loadh_ps((const double *)(v10 + 16));
      *(_OWORD *)(v10 + 8) = 0;
      if ( *(_QWORD *)v29 )
      {
        *(_QWORD *)(v29 + 8) = 0;
        v47.m128i_i64[0] = v30;
        v46 = v31;
        qfree();
        v30 = v47.m128i_i64[0];
        v31 = _mm_load_si128(&v46);
      }
      *(_QWORD *)v29 = v30;
      *(__m128i *)(v29 + 8) = v31;
      v32 = *(_QWORD *)(v10 + 24);
      v33 = _mm_loadu_si128((const __m128i *)(v10 + 32));
      *(_QWORD *)(v10 + 24) = 0;
      *(_OWORD *)(v10 + 32) = 0;
      if ( *(_QWORD *)(v29 + 24) )
      {
        *(_QWORD *)(v29 + 32) = 0;
        v46 = v33;
        qfree();
        v33 = _mm_load_si128(&v46);
      }
      *(_QWORD *)(v29 + 24) = v32;
      *(__m128i *)(v29 + 32) = v33;
      *(_DWORD *)(v29 + 48) = *(_DWORD *)(v10 + 48);
      v9 = v25;
      if ( a2 >= v25 )
        break;
      v25 = (v25 - 1) / 2;
    }
  }
  if ( *(_QWORD *)v10 )
  {
    *(_QWORD *)(v10 + 8) = 0;
    qfree();
  }
  si128 = _mm_load_si128(v53);
  v36 = *(_QWORD *)(v10 + 24);
  *(_QWORD *)v10 = s2;
  *(__m128i *)(v10 + 8) = si128;
  if ( v36 )
  {
    *(_QWORD *)(v10 + 32) = 0;
    qfree();
  }
  v37 = _mm_load_si128(&v50);
  *(_QWORD *)(v10 + 24) = v51;
  result = v52;
  *(__m128i *)(v10 + 32) = v37;
  *(_DWORD *)(v10 + 48) = result;
  return result;
}

