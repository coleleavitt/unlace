void __fastcall sub_7AA240(const __m128i *a1, __int64 *a2, __int64 a3, char **a4)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 *v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  const char *v15; // r15
  const char *v16; // r14
  char *v17; // rsi
  bool v18; // sf
  char *v19; // r9
  char *v20; // rax
  int v21; // eax
  __m128i *v22; // rcx
  char *v23; // rsi
  __int64 v24; // r15
  __int64 *v25; // rax
  __int64 *v26; // rbp
  char *v27; // r14
  __int64 v28; // r15
  const char *v29; // rdi
  const char *v30; // r13
  __int64 v31; // r12
  char *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r15
  const char *v35; // rsi
  char *v36; // rax
  __m128i *v37; // rax
  char *v38; // rsi
  __m128i v39; // xmm0
  int v40; // eax
  char *v41; // xmm0_8
  __m128i *v42; // rax
  __int64 *v43; // rcx
  int v44; // eax
  __m128i v45; // xmm1
  __int64 i; // rbx
  const __m128i *v47; // rdi
  __int64 *v48; // rbx
  char **v49; // r8
  __int64 v50; // rcx
  __int64 v51; // rbx
  __m128i *v52; // rax
  __int64 *v53; // rcx
  char **v54; // rcx
  char *s2; // [rsp+8h] [rbp-70h]
  __m128i *v56; // [rsp+10h] [rbp-68h]
  char **v57; // [rsp+18h] [rbp-60h]
  __int64 *v58; // [rsp+20h] [rbp-58h]
  __int64 v59; // [rsp+28h] [rbp-50h]
  __int8 *v60; // [rsp+30h] [rbp-48h]
  char *v61; // [rsp+38h] [rbp-40h]

  v4 = (char *)a2 - (char *)a1;
  v56 = (__m128i *)a1;
  v58 = a2;
  v59 = a3;
  v57 = a4;
  if ( (char *)a2 - (char *)a1 <= 128 )
    return;
  while ( 2 )
  {
    v5 = v4;
    v6 = v4 >> 4;
    v7 = v5 >> 3;
    if ( !v59 )
    {
      for ( i = v6 - 1; ; --i )
      {
        sub_7A9B60((__int64)v56, i, v7, v56->m128i_i64[i], v57);
        if ( !i )
          break;
      }
      if ( (char *)v58 - (char *)v56 > 8 )
      {
        do
        {
          v47 = v56;
          v48 = --v58;
          v49 = v57;
          v50 = *v58;
          *v58 = v56->m128i_i64[0];
          v51 = (char *)v48 - (char *)v47;
          sub_7A9B60((__int64)v47, 0, v51 >> 3, v50, v49);
        }
        while ( v51 > 8 );
      }
      return;
    }
    --v59;
    v8 = v56->m128i_i64[1];
    v9 = &v56->m128i_i64[1];
    v10 = v56->m128i_i64[v6];
    v60 = &v56->m128i_i8[8 * v6];
    v11 = 4 * v8;
    v12 = (__int64)&(*v57)[40 * v10];
    v13 = (__int64)&(*v57)[40 * v8];
    v14 = *(_QWORD *)(v13 + 8);
    if ( *(_QWORD *)(v12 + 8) )
    {
      v15 = *(const char **)v12;
      v16 = haystack;
      if ( !v14 )
        goto LABEL_6;
      goto LABEL_5;
    }
    v15 = haystack;
    if ( v14 )
    {
LABEL_5:
      v16 = *(const char **)v13;
LABEL_6:
      s2 = *v57;
      v17 = (char *)haystack;
      v18 = strcmp(v16, v15) < 0;
      v19 = (char *)*(v58 - 1);
      v20 = &s2[40 * (_QWORD)v19];
      if ( v18 )
      {
        if ( *((_QWORD *)v20 + 1) )
          v17 = *(char **)v20;
        v61 = (char *)*(v58 - 1);
        s2 = v17;
        v21 = strcmp(v15, v17);
        v22 = v56;
        v23 = s2;
        v24 = v56->m128i_i64[0];
        if ( v21 < 0 )
        {
          v25 = (__int64 *)v60;
          v56->m128i_i64[0] = v10;
          *v25 = v24;
          v8 = v22->m128i_i64[0];
          v11 = 4 * v22->m128i_i64[0];
          goto LABEL_11;
        }
        s2 = v61;
        if ( strcmp(v16, v23) < 0 )
        {
          v52 = v56;
          v53 = v58;
          v56->m128i_i64[0] = (__int64)s2;
          *(v53 - 1) = v24;
          v8 = v52->m128i_i64[0];
          v11 = 4 * v52->m128i_i64[0];
          goto LABEL_11;
        }
        v45 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)(unsigned __int64)v24);
LABEL_36:
        *v56 = v45;
        goto LABEL_11;
      }
      if ( !*((_QWORD *)v20 + 1) )
        goto LABEL_34;
      goto LABEL_33;
    }
    v15 = haystack;
    v16 = haystack;
    v19 = (char *)*(v58 - 1);
    v20 = &(*v57)[40 * (_QWORD)v19];
    if ( !*((_QWORD *)v20 + 1) )
    {
      v38 = (char *)haystack;
      v15 = haystack;
      v39.m128i_i64[0] = v56->m128i_i64[0];
      goto LABEL_29;
    }
LABEL_33:
    v17 = *(char **)v20;
LABEL_34:
    v61 = v19;
    s2 = v17;
    v44 = strcmp(v16, v17);
    v38 = s2;
    v19 = v61;
    v39 = _mm_loadl_epi64(v56);
    if ( v44 < 0 )
    {
      v45 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, v39);
      goto LABEL_36;
    }
LABEL_29:
    s2 = (char *)v39.m128i_i64[0];
    v61 = v19;
    v40 = strcmp(v15, v38);
    v41 = s2;
    v18 = v40 < 0;
    v42 = v56;
    if ( v18 )
    {
      v43 = v58;
      v56->m128i_i64[0] = (__int64)v61;
      *(v43 - 1) = (__int64)v41;
    }
    else
    {
      v54 = (char **)v60;
      v56->m128i_i64[0] = v10;
      *v54 = v41;
    }
    v8 = v42->m128i_i64[0];
    v11 = 4 * v42->m128i_i64[0];
LABEL_11:
    v26 = v58;
    while ( 2 )
    {
      v27 = *v57;
      s2 = &(*v57)[8 * v11 + 8 * v8];
      v28 = *((_QWORD *)s2 + 1);
      while ( 1 )
      {
        v31 = *v9;
        v32 = &v27[40 * *v9];
        v33 = *((_QWORD *)v32 + 1);
        if ( v28 )
        {
          v29 = haystack;
          v30 = *(const char **)s2;
          if ( !v33 )
            goto LABEL_14;
          goto LABEL_18;
        }
        v30 = haystack;
        if ( !v33 )
          break;
LABEL_18:
        v29 = *(const char **)v32;
LABEL_14:
        if ( strcmp(v29, v30) >= 0 )
          goto LABEL_19;
        ++v9;
      }
      do
      {
LABEL_19:
        v34 = *--v26;
        v35 = haystack;
        v36 = &v27[40 * v34];
        if ( *((_QWORD *)v36 + 1) )
          v35 = *(const char **)v36;
      }
      while ( strcmp(v30, v35) < 0 );
      if ( v9 < v26 )
      {
        v37 = v56;
        *v9++ = v34;
        *v26 = v31;
        v8 = v37->m128i_i64[0];
        v11 = 4 * v37->m128i_i64[0];
        continue;
      }
      break;
    }
    sub_7AA240(v9, v58, v59, v57);
    v4 = (char *)v9 - (char *)v56;
    if ( (char *)v9 - (char *)v56 > 128 )
    {
      v58 = v9;
      continue;
    }
    break;
  }
}
