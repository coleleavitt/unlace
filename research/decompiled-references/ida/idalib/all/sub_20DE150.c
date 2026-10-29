__int64 __fastcall sub_20DE150(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  char *v3; // rbp
  size_t v4; // r13
  size_t v5; // r12
  size_t v6; // r13
  size_t v7; // r13
  size_t v8; // r13
  size_t v9; // r13
  __int64 v10; // rsi
  __int64 v11; // r12
  __int64 v12; // rbp
  char v13; // al
  char *v14; // rbp
  char v15; // r13
  __int64 v16; // r12
  __int64 v17; // r14
  char v18; // al
  __int64 v19; // r12
  char v20; // al
  char *v22; // rdx
  _BYTE *v23; // r8
  __int64 v24; // r15
  __int64 v25; // r13
  __m128i v26; // xmm0
  _BYTE *v27; // rax
  _BYTE *v28; // rdx
  __int8 v29; // dl
  __int64 v30; // r14
  _BYTE *v31; // rax
  _OWORD *v32; // rdi
  __int64 v33; // r12
  __int64 v34; // r13
  char v35; // al
  void *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r13
  void *v39; // r15
  __int64 v40; // rax
  char v41; // cl
  __int64 v42; // r14
  void *v43; // rax
  size_t v44; // rcx
  __int64 v45; // r9
  __m128i v46; // xmm0
  __m128i v47; // xmm1
  void *v48; // rax
  const void *v49; // rsi
  void *v50; // rax
  __m128i src; // [rsp+0h] [rbp-E8h] BYREF
  size_t n; // [rsp+10h] [rbp-D8h]
  __int64 v53; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v54; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v55; // [rsp+30h] [rbp-B8h] BYREF
  __int64 ***v56; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v57; // [rsp+40h] [rbp-A8h]
  __int64 v58; // [rsp+48h] [rbp-A0h]
  void *ptr[2]; // [rsp+50h] [rbp-98h] BYREF
  __int64 *v60; // [rsp+60h] [rbp-88h]
  _OWORD v61[4]; // [rsp+68h] [rbp-80h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-40h] BYREF

  v55 = a1;
  v53 = a2;
  v56 = (__int64 ***)&v53;
  v2 = j__strlen("Ty");
  v3 = *(char **)a1;
  v4 = v2;
  v5 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  if ( sub_20D1BF0(v5, *(const void **)a1, v2, "Ty") )
  {
    *(_QWORD *)a1 = &v3[v4];
    v19 = sub_20CFC20(&v55, &v56, 0);
    if ( v19 )
    {
      v12 = sub_20CF970(a1 + 816, 24);
      *(_WORD *)(v12 + 8) = 35;
      v20 = *(_BYTE *)(v12 + 10);
      *(_QWORD *)(v12 + 16) = v19;
      *(_BYTE *)(v12 + 10) = v20 & 0xF0 | 5;
      *(_QWORD *)v12 = off_2BE73E0;
      return v12;
    }
    return 0;
  }
  v6 = j__strlen("Tk");
  if ( sub_20D1BF0(v5, v3, v6, "Tk") )
  {
    v14 = &v3[v6];
    v15 = *(_BYTE *)(a1 + 778);
    *(_QWORD *)a1 = v14;
    *(_BYTE *)(a1 + 778) = 1;
    v16 = sub_20DD4B0(a1, 0);
    if ( v16 && (v17 = sub_20CFC20(&v55, &v56, 0)) != 0 )
    {
      v12 = sub_20CF970(a1 + 816, 32);
      *(_WORD *)(v12 + 8) = 36;
      v18 = *(_BYTE *)(v12 + 10);
      *(_QWORD *)(v12 + 16) = v16;
      *(_QWORD *)(v12 + 24) = v17;
      *(_BYTE *)(v12 + 10) = v18 & 0xF0 | 5;
      *(_QWORD *)v12 = off_2BE7440;
    }
    else
    {
      v12 = 0;
    }
    *(_BYTE *)(a1 + 778) = v15;
    return v12;
  }
  v7 = j__strlen("Tn");
  if ( sub_20D1BF0(v5, v3, v7, "Tn") )
  {
    *(_QWORD *)a1 = &v3[v7];
    v33 = sub_20CFC20(&v55, &v56, 1);
    if ( v33 )
    {
      v34 = sub_20D8F30(a1);
      if ( v34 )
      {
        v12 = sub_20CF970(a1 + 816, 32);
        *(_WORD *)(v12 + 8) = 37;
        v35 = *(_BYTE *)(v12 + 10);
        *(_QWORD *)(v12 + 16) = v33;
        *(_QWORD *)(v12 + 24) = v34;
        *(_BYTE *)(v12 + 10) = v35 & 0xF0 | 5;
        *(_QWORD *)v12 = off_2BE74A0;
        return v12;
      }
    }
    return 0;
  }
  v8 = j__strlen("Tt");
  if ( !sub_20D1BF0(v5, v3, v8, "Tt") )
  {
    v9 = j__strlen("Tp");
    if ( sub_20D1BF0(v5, v3, v9, "Tp") )
    {
      v10 = v53;
      *(_QWORD *)a1 = &v3[v9];
      v11 = sub_20DE150(a1, v10);
      if ( v11 )
      {
        v12 = sub_20CF970(a1 + 816, 24);
        *(_WORD *)(v12 + 8) = 39;
        v13 = *(_BYTE *)(v12 + 10);
        *(_QWORD *)(v12 + 16) = v11;
        *(_BYTE *)(v12 + 10) = v13 & 0xF0 | 5;
        *(_QWORD *)v12 = off_2BE7560;
        return v12;
      }
    }
    return 0;
  }
  *(_QWORD *)a1 = &v3[v8];
  v12 = sub_20CFC20(&v55, &v56, 2);
  if ( !v12 )
    return v12;
  v22 = *(char **)(a1 + 672);
  v23 = *(_BYTE **)(a1 + 664);
  v57 = a1;
  v24 = *(_QWORD *)(a1 + 16);
  v25 = *(_QWORD *)(a1 + 24);
  src.m128i_i64[0] = (__int64)v61;
  v26 = _mm_loadl_epi64(&src);
  v60 = &v62;
  *(__m128i *)ptr = _mm_unpacklo_epi64(v26, v26);
  v58 = (v22 - v23) >> 3;
  memset(v61, 0, sizeof(v61));
  if ( v22 == *(char **)(a1 + 680) )
  {
    v42 = 16 * ((v22 - v23) >> 3);
    if ( v23 == (_BYTE *)(a1 + 688) )
    {
      n = v22 - v23;
      src.m128i_i64[1] = (__int64)v22;
      src.m128i_i64[0] = (__int64)v23;
      v48 = malloc(16 * ((v22 - v23) >> 3));
      v45 = (__int64)v48;
      if ( v48 )
      {
        v44 = n;
        if ( src.m128i_i64[0] != src.m128i_i64[1] )
        {
          v49 = (const void *)src.m128i_i64[0];
          src.m128i_i64[0] = n;
          v50 = memmove(v48, v49, n);
          v44 = src.m128i_i64[0];
          v45 = (__int64)v50;
        }
        *(_QWORD *)(a1 + 664) = v45;
        goto LABEL_39;
      }
    }
    else
    {
      src.m128i_i64[0] = v22 - v23;
      v43 = realloc(v23, 16 * ((v22 - v23) >> 3));
      v44 = src.m128i_i64[0];
      v45 = (__int64)v43;
      *(_QWORD *)(a1 + 664) = v43;
      if ( v43 )
      {
LABEL_39:
        v22 = (char *)(v45 + v44);
        src.m128i_i64[0] = v42;
        v46 = (__m128i)_mm_loadh_ps((const double *)src.m128i_i64);
        src.m128i_i64[0] = v45;
        v47 = _mm_loadl_epi64(&src);
        *(__m128i *)(a1 + 672) = _mm_add_epi64(v46, _mm_unpacklo_epi64(v47, v47));
        goto LABEL_18;
      }
    }
    abort();
  }
LABEL_18:
  *(_QWORD *)(a1 + 672) = v22 + 8;
  *(_QWORD *)v22 = ptr;
  v27 = *(_BYTE **)a1;
  v28 = *(_BYTE **)(a1 + 8);
  do
  {
    if ( v27 != v28 && *v27 == 69 )
    {
      v30 = 0;
      *(_QWORD *)a1 = v27 + 1;
      goto LABEL_35;
    }
    v54 = sub_20DE150(a1, ptr);
    if ( !v54 )
      goto LABEL_27;
    sub_20D8690((char **)(a1 + 16), &v54);
    v27 = *(_BYTE **)a1;
    v28 = *(_BYTE **)(a1 + 8);
  }
  while ( *(_BYTE **)a1 == v28 || *v27 != 81 );
  v29 = *(_BYTE *)(a1 + 778);
  *(_BYTE *)(a1 + 778) = 1;
  *(_QWORD *)a1 = v27 + 1;
  src.m128i_i8[0] = v29;
  v30 = sub_20DA8A0(a1);
  *(_BYTE *)(a1 + 778) = src.m128i_i8[0];
  if ( !v30 || (v31 = *(_BYTE **)a1, *(_QWORD *)a1 == *(_QWORD *)(a1 + 8)) || *v31 != 69 )
  {
LABEL_27:
    v12 = 0;
    goto LABEL_28;
  }
  *(_QWORD *)a1 = v31 + 1;
LABEL_35:
  v36 = sub_20CFAD0(a1, (v25 - v24) >> 3);
  v38 = v37;
  v39 = v36;
  v40 = sub_20CF970(a1 + 816, 48);
  v41 = *(_BYTE *)(v40 + 10);
  *(_WORD *)(v40 + 8) = 38;
  *(_QWORD *)(v40 + 16) = v12;
  v12 = v40;
  *(_QWORD *)(v40 + 24) = v39;
  *(_QWORD *)(v40 + 32) = v38;
  *(_BYTE *)(v40 + 10) = v41 & 0xF0 | 5;
  *(_QWORD *)v40 = off_2BE7500;
  *(_QWORD *)(v40 + 40) = v30;
LABEL_28:
  v32 = ptr[0];
  *(_QWORD *)(v57 + 672) = *(_QWORD *)(v57 + 664) + 8 * v58;
  if ( v32 != v61 )
    free(v32);
  return v12;
}
