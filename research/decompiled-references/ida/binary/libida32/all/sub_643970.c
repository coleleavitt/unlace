unsigned __int64 __fastcall sub_643970(__int64 a1, __int64 a2)
{
  const void *v2; // rbp
  size_t v3; // r13
  bool v5; // zf
  size_t v6; // r12
  _BYTE *v7; // rbp
  __int64 v8; // r13
  unsigned __int64 v9; // r14
  char *v10; // rsi
  unsigned __int64 v11; // r14
  __int64 v12; // r13
  char *v13; // rsi
  size_t v14; // r14
  __int64 v15; // r12
  unsigned __int64 v16; // r13
  char *v17; // rsi
  unsigned __int64 v18; // r13
  __int64 v19; // r12
  char *v20; // rsi
  const char *v21; // r14
  char *v22; // rsi
  size_t v23; // rbp
  _BYTE *v24; // r12
  __int64 v25; // r13
  unsigned __int64 v26; // r14
  char *v27; // rsi
  unsigned __int64 v28; // r14
  __int64 v29; // r13
  char *v30; // rsi
  size_t v31; // r14
  __int64 v32; // rbp
  unsigned __int64 v33; // r13
  char *v34; // rsi
  unsigned __int64 v35; // r13
  __int64 v36; // rbp
  char *v37; // rsi
  void *v39; // rdi
  __int64 v40; // r13
  size_t v41; // r15
  char *v42; // rsi
  __int64 v43; // r13
  size_t v44; // r15
  char *v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  char *v56; // [rsp+8h] [rbp-A0h] BYREF
  __m128i v57; // [rsp+10h] [rbp-98h] BYREF
  void *v58; // [rsp+20h] [rbp-88h] BYREF
  size_t v59[3]; // [rsp+28h] [rbp-80h]
  void *src; // [rsp+40h] [rbp-68h] BYREF
  size_t n[2]; // [rsp+48h] [rbp-60h]
  __int64 v62; // [rsp+58h] [rbp-50h]
  int v63; // [rsp+60h] [rbp-48h]
  unsigned __int64 v64; // [rsp+68h] [rbp-40h]

  v2 = *(const void **)(a2 + 24);
  v3 = *(_QWORD *)(a2 + 32);
  v64 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a2 + 8) == 0;
  v57 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v2, (__m128i)((unsigned __int64)v2 + v3));
  if ( v5 )
    goto LABEL_2;
  v21 = *(const char **)a2;
  if ( !strcmp(*(const char **)a2, "__org_arrdim") )
  {
    unpack_dd(&v57);
    unpack_dd(&v57);
    sub_3573A0((char **)a1);
    return v64 - __readfsqword(0x28u);
  }
  if ( !strcmp(v21, "format") )
  {
    unpack_dd(&v57);
    unpack_dd(&v57);
    unpack_dd(&v57);
    sub_3573A0((char **)a1);
    return v64 - __readfsqword(0x28u);
  }
  if ( *v21 != 1 || v21[1] )
  {
LABEL_2:
    src = nullptr;
    *(_OWORD *)n = 0;
    if ( !v3 )
      goto LABEL_3;
    v39 = nullptr;
    if ( v3 != -1 )
    {
      src = (void *)qvector_reserve(&src, 0, v3 + 1, 1);
      v39 = src;
    }
    n[0] = v3 + 1;
    memmove(v39, v2, v3);
    *((_BYTE *)src + v3) = 0;
    v6 = n[0];
    if ( n[0] )
    {
      v7 = (_BYTE *)qalloc_or_throw(n[0], (const char *)v2);
      memcpy(v7, src, v6);
      if ( !*v7 )
      {
LABEL_24:
        if ( v7 )
          qfree(v7);
        goto LABEL_26;
      }
    }
    else
    {
LABEL_3:
      if ( !byte_2CA12E1 )
      {
LABEL_26:
        if ( src )
        {
          n[0] = 0;
          qfree(src);
        }
        return v64 - __readfsqword(0x28u);
      }
      v6 = 0;
      v7 = nullptr;
    }
    v8 = *(_QWORD *)(a1 + 8);
    v9 = 2;
    if ( v8 )
      v9 = v8-- + 1;
    v10 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v9 )
    {
      v49 = qvector_reserve(a1, v10, v9, 1);
      *(_QWORD *)a1 = v49;
      v10 = (char *)v49;
    }
    *(_QWORD *)(a1 + 8) = v9;
    v11 = 2;
    v10[v8] = 1;
    *(_BYTE *)(*(_QWORD *)a1 + v8 + 1) = 0;
    v12 = *(_QWORD *)(a1 + 8);
    if ( v12 )
      v11 = v12-- + 1;
    v13 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v11 )
    {
      v48 = qvector_reserve(a1, v13, v11, 1);
      *(_QWORD *)a1 = v48;
      v13 = (char *)v48;
    }
    *(_QWORD *)(a1 + 8) = v11;
    v13[v12] = 23;
    *(_BYTE *)(*(_QWORD *)a1 + v12 + 1) = 0;
    if ( v6 )
    {
      v14 = v6 - 1;
      if ( v6 != 1 )
      {
        v43 = *(_QWORD *)(a1 + 8);
        v44 = v6 - 1;
        if ( v43 )
        {
          --v43;
          v44 = v14 + v43;
          v6 += v43;
        }
        v45 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < v6 )
        {
          v54 = qvector_reserve(a1, v45, v6, 1);
          *(_QWORD *)a1 = v54;
          v45 = (char *)v54;
        }
        *(_QWORD *)(a1 + 8) = v6;
        v45[v44] = 0;
        memcpy((void *)(v43 + *(_QWORD *)a1), v7, v14);
      }
    }
    v15 = *(_QWORD *)(a1 + 8);
    v16 = 2;
    if ( v15 )
      v16 = v15-- + 1;
    v17 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v16 )
    {
      v53 = qvector_reserve(a1, v17, v16, 1);
      *(_QWORD *)a1 = v53;
      v17 = (char *)v53;
    }
    *(_QWORD *)(a1 + 8) = v16;
    v18 = 2;
    v17[v15] = 2;
    *(_BYTE *)(*(_QWORD *)a1 + v15 + 1) = 0;
    v19 = *(_QWORD *)(a1 + 8);
    if ( v19 )
      v18 = v19-- + 1;
    v20 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v18 )
    {
      v52 = qvector_reserve(a1, v20, v18, 1);
      *(_QWORD *)a1 = v52;
      v20 = (char *)v52;
    }
    *(_QWORD *)(a1 + 8) = v18;
    v20[v19] = 23;
    *(_BYTE *)(*(_QWORD *)a1 + v19 + 1) = 0;
    goto LABEL_24;
  }
  v56 = (char *)v2;
  *(_OWORD *)v59 = 0;
  v58 = nullptr;
  src = nullptr;
  v62 = 1;
  v63 = -1;
  if ( (unsigned __int8)sub_567A90((__int64 *)&src, &v56) )
  {
    v22 = (char *)&v58;
    value_repr_t__print_(&src, &v58, 0);
  }
  else
  {
    v22 = (char *)v58;
    if ( v59[1] <= 1 )
    {
      v58 = (void *)qvector_reserve(&v58, v58, 2, 1);
      v22 = (char *)v58;
    }
    v59[0] = 2;
    *v22 = 63;
    *((_BYTE *)v58 + 1) = 0;
  }
  v23 = v59[0];
  if ( v59[0] )
  {
    v24 = (_BYTE *)qalloc_or_throw(v59[0], v22);
    memcpy(v24, v58, v23);
    if ( !*v24 )
    {
LABEL_56:
      if ( v24 )
        qfree(v24);
      goto LABEL_58;
    }
LABEL_37:
    v25 = *(_QWORD *)(a1 + 8);
    v26 = 2;
    if ( v25 )
      v26 = v25-- + 1;
    v27 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v26 )
    {
      v47 = qvector_reserve(a1, v27, v26, 1);
      *(_QWORD *)a1 = v47;
      v27 = (char *)v47;
    }
    *(_QWORD *)(a1 + 8) = v26;
    v28 = 2;
    v27[v25] = 1;
    *(_BYTE *)(*(_QWORD *)a1 + v25 + 1) = 0;
    v29 = *(_QWORD *)(a1 + 8);
    if ( v29 )
      v28 = v29-- + 1;
    v30 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v28 )
    {
      v46 = qvector_reserve(a1, v30, v28, 1);
      *(_QWORD *)a1 = v46;
      v30 = (char *)v46;
    }
    *(_QWORD *)(a1 + 8) = v28;
    v30[v29] = 23;
    *(_BYTE *)(*(_QWORD *)a1 + v29 + 1) = 0;
    if ( v23 )
    {
      v31 = v23 - 1;
      if ( v23 != 1 )
      {
        v40 = *(_QWORD *)(a1 + 8);
        v41 = v23 - 1;
        if ( v40 )
        {
          --v40;
          v41 = v31 + v40;
          v23 += v40;
        }
        v42 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < v23 )
        {
          v55 = qvector_reserve(a1, v42, v23, 1);
          *(_QWORD *)a1 = v55;
          v42 = (char *)v55;
        }
        *(_QWORD *)(a1 + 8) = v23;
        v42[v41] = 0;
        memcpy((void *)(v40 + *(_QWORD *)a1), v24, v31);
      }
    }
    v32 = *(_QWORD *)(a1 + 8);
    v33 = 2;
    if ( v32 )
      v33 = v32-- + 1;
    v34 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v33 )
    {
      v51 = qvector_reserve(a1, v34, v33, 1);
      *(_QWORD *)a1 = v51;
      v34 = (char *)v51;
    }
    *(_QWORD *)(a1 + 8) = v33;
    v35 = 2;
    v34[v32] = 2;
    *(_BYTE *)(*(_QWORD *)a1 + v32 + 1) = 0;
    v36 = *(_QWORD *)(a1 + 8);
    if ( v36 )
      v35 = v36-- + 1;
    v37 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v35 )
    {
      v50 = qvector_reserve(a1, v37, v35, 1);
      *(_QWORD *)a1 = v50;
      v37 = (char *)v50;
    }
    *(_QWORD *)(a1 + 8) = v35;
    v37[v36] = 23;
    *(_BYTE *)(*(_QWORD *)a1 + v36 + 1) = 0;
    goto LABEL_56;
  }
  if ( byte_2CA12E1 )
  {
    v24 = nullptr;
    goto LABEL_37;
  }
LABEL_58:
  if ( v58 )
  {
    v59[0] = 0;
    qfree(v58);
  }
  return v64 - __readfsqword(0x28u);
}

