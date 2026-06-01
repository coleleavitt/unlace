__int64 __fastcall sub_3B6440(__int64 a1, __int64 a2, char *a3, char *a4)
{
  __int64 v5; // r12
  __int64 i; // r13
  const char *v7; // rsi
  const char *v8; // rdi
  __int64 v9; // r15
  __int64 *v10; // rbp
  const char *v11; // rsi
  __m128i v12; // xmm0
  const char **v13; // r13
  const char *v14; // rdi
  const char *v15; // r14
  __m128i v16; // xmm0
  const char *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r14
  const __m128i *v21; // rax
  __m128i v22; // xmm4
  char *v23; // rcx
  __int64 v24; // rdx
  __m128i v25; // xmm5
  __int64 v26; // r12
  __int64 v27; // r14
  const char *v28; // rax
  char *v29; // rsi
  const char *v30; // rdi
  __int64 *v31; // r15
  __int64 v32; // rcx
  __m128i v33; // xmm0
  __int64 v34; // rdi
  __int64 v35; // r13
  __m128i v36; // xmm0
  __int64 v37; // rdi
  __int64 v38; // r13
  const char *v39; // rdi
  __m128i si128; // xmm6
  __int64 v41; // rdi
  __m128i v42; // xmm7
  __int64 result; // rax
  __int64 v44; // r13
  __int64 v45; // r12
  __int64 v46; // r15
  __m128i v47; // xmm0
  const char *v48; // rdi
  __int64 v49; // r15
  __m128i v50; // xmm0
  __int64 v51; // rdi
  const char *v52; // [rsp+8h] [rbp-A0h]
  __m128i v53; // [rsp+10h] [rbp-98h] BYREF
  __m128i v54; // [rsp+20h] [rbp-88h] BYREF
  char *s2; // [rsp+30h] [rbp-78h]
  char *v56; // [rsp+38h] [rbp-70h]
  __m128i v57; // [rsp+40h] [rbp-68h] BYREF
  __int64 v58; // [rsp+50h] [rbp-58h]
  unsigned __int8 v59; // [rsp+5Fh] [rbp-49h]
  __m128i v60[4]; // [rsp+60h] [rbp-48h] BYREF

  v5 = (__int64)(a3 - 1) / 2;
  v52 = (const char *)a2;
  s2 = a3;
  v56 = a4;
  if ( a2 < v5 )
  {
    for ( i = a2; ; i = v9 )
    {
      v9 = 2 * (i + 1);
      v18 = 112 * (i + 1);
      v19 = a1 + v18 - 56;
      v10 = (__int64 *)(a1 + v18);
      v20 = *(_QWORD *)(a1 + v18 + 8);
      if ( *(_QWORD *)(v19 + 8) )
      {
        v7 = *(const char **)v19;
        v8 = &s1;
        if ( !v20 )
          goto LABEL_5;
      }
      else
      {
        v7 = &s1;
        if ( !v20 )
          goto LABEL_7;
      }
      v8 = (const char *)*v10;
LABEL_5:
      if ( strcmp(v8, v7) < 0 )
      {
        --v9;
        v10 = (__int64 *)(a1 + 56 * v9);
      }
LABEL_7:
      v11 = (const char *)*v10;
      *v10 = 0;
      v12 = (__m128i)_mm_loadh_ps((const double *)v10 + 2);
      v13 = (const char **)(a1 + 56 * i);
      *(_OWORD *)(v10 + 1) = 0;
      v14 = *v13;
      if ( *v13 )
      {
        v13[1] = nullptr;
        v53.m128i_i64[0] = (__int64)v11;
        v54 = v12;
        qfree(v14, v11);
        v12 = _mm_load_si128(&v54);
        v11 = (const char *)v53.m128i_i64[0];
      }
      *v13 = v11;
      *(__m128i *)(v13 + 1) = v12;
      v15 = (const char *)v10[3];
      v16 = _mm_loadu_si128((const __m128i *)v10 + 2);
      v10[3] = 0;
      *((_OWORD *)v10 + 2) = 0;
      v17 = v13[3];
      if ( v17 )
      {
        v13[4] = nullptr;
        v53 = v16;
        qfree(v17, v11);
        v16 = _mm_load_si128(&v53);
      }
      v13[3] = v15;
      *((__m128i *)v13 + 2) = v16;
      a2 = *((unsigned __int8 *)v10 + 48);
      *((_BYTE *)v13 + 48) = a2;
      if ( v9 >= v5 )
        goto LABEL_17;
    }
  }
  v9 = a2;
  v10 = (__int64 *)(a1 + 56 * a2);
LABEL_17:
  if ( ((unsigned __int8)s2 & 1) == 0 && (__int64)(s2 - 2) / 2 == v9 )
  {
    v44 = 2 * (v9 + 1);
    v45 = a1 + 112 * (v9 + 1) - 56;
    v46 = *(_QWORD *)v45;
    v47 = _mm_loadu_si128((const __m128i *)(v45 + 8));
    *(_QWORD *)v45 = 0;
    *(_OWORD *)(v45 + 8) = 0;
    v48 = (const char *)*v10;
    if ( *v10 )
    {
      v10[1] = 0;
      v53 = v47;
      qfree(v48, (const char *)a2);
      v47 = _mm_load_si128(&v53);
    }
    *v10 = v46;
    *(__m128i *)(v10 + 1) = v47;
    v49 = *(_QWORD *)(v45 + 24);
    v50 = _mm_loadu_si128((const __m128i *)(v45 + 32));
    *(_QWORD *)(v45 + 24) = 0;
    *(_OWORD *)(v45 + 32) = 0;
    v51 = v10[3];
    if ( v51 )
    {
      v10[4] = 0;
      v53 = v50;
      qfree(v51, (const char *)a2);
      v50 = _mm_load_si128(&v53);
    }
    v10[3] = v49;
    v9 = v44 - 1;
    *((__m128i *)v10 + 2) = v50;
    *((_BYTE *)v10 + 48) = *(_BYTE *)(v45 + 48);
    v10 = (__int64 *)(a1 + 56 * (v44 - 1));
  }
  v21 = (const __m128i *)v56;
  v22 = _mm_loadu_si128((const __m128i *)(v56 + 8));
  v23 = *(char **)v56;
  *(_OWORD *)(v56 + 8) = 0;
  v24 = v21[1].m128i_i64[1];
  v25 = _mm_loadu_si128(v21 + 2);
  v21[2] = 0;
  v21->m128i_i64[0] = 0;
  v26 = v22.m128i_i64[0];
  v21[1].m128i_i64[1] = 0;
  LOBYTE(v21) = v21[3].m128i_i8[0];
  s2 = v23;
  v59 = (unsigned __int8)v21;
  v58 = v24;
  v60[0] = v22;
  v57 = v25;
  v27 = (v9 - 1) / 2;
  if ( v9 > (__int64)v52 )
  {
    v28 = &s1;
    if ( v22.m128i_i64[0] )
      v28 = v23;
    v56 = (char *)v28;
    while ( 1 )
    {
      v10 = (__int64 *)(a1 + 56 * v27);
      v38 = v10[1];
      if ( v26 )
      {
        v29 = s2;
        v30 = &s1;
        if ( !v38 )
          goto LABEL_24;
      }
      else if ( !v38 )
      {
        v10 = (__int64 *)(a1 + 56 * v9);
        break;
      }
      v30 = (const char *)*v10;
      v29 = v56;
LABEL_24:
      a2 = (unsigned int)strcmp(v30, v29);
      v31 = (__int64 *)(a1 + 56 * v9);
      if ( (int)a2 >= 0 )
      {
        v10 = v31;
        break;
      }
      v32 = *v10;
      *v10 = 0;
      v33 = (__m128i)_mm_loadh_ps((const double *)v10 + 2);
      *(_OWORD *)(v10 + 1) = 0;
      v34 = *v31;
      if ( *v31 )
      {
        v31[1] = 0;
        v54.m128i_i64[0] = v32;
        v53 = v33;
        qfree(v34, (const char *)a2);
        v32 = v54.m128i_i64[0];
        v33 = _mm_load_si128(&v53);
      }
      *v31 = v32;
      *(__m128i *)(v31 + 1) = v33;
      v35 = v10[3];
      v36 = _mm_loadu_si128((const __m128i *)v10 + 2);
      v10[3] = 0;
      *((_OWORD *)v10 + 2) = 0;
      v37 = v31[3];
      if ( v37 )
      {
        v31[4] = 0;
        v53 = v36;
        qfree(v37, (const char *)a2);
        v36 = _mm_load_si128(&v53);
      }
      v31[3] = v35;
      *((__m128i *)v31 + 2) = v36;
      *((_BYTE *)v31 + 48) = *((_BYTE *)v10 + 48);
      v9 = v27;
      if ( (__int64)v52 >= v27 )
        break;
      v27 = (v27 - 1) / 2;
    }
  }
  v39 = (const char *)*v10;
  if ( *v10 )
  {
    v10[1] = 0;
    qfree(v39, (const char *)a2);
  }
  si128 = _mm_load_si128(v60);
  v41 = v10[3];
  *v10 = (__int64)s2;
  *(__m128i *)(v10 + 1) = si128;
  if ( v41 )
  {
    v10[4] = 0;
    qfree(v41, (const char *)a2);
  }
  v42 = _mm_load_si128(&v57);
  v10[3] = v58;
  result = v59;
  *((__m128i *)v10 + 2) = v42;
  *((_BYTE *)v10 + 48) = result;
  return result;
}
