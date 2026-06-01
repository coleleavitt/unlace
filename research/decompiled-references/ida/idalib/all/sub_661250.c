unsigned __int64 __fastcall sub_661250(__int64 a1, __int64 a2)
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
  size_t v22; // rbp
  _BYTE *v23; // r12
  __int64 v24; // r13
  unsigned __int64 v25; // r14
  char *v26; // rsi
  unsigned __int64 v27; // r14
  __int64 v28; // r13
  char *v29; // rsi
  size_t v30; // r14
  __int64 v31; // rbp
  unsigned __int64 v32; // r13
  char *v33; // rsi
  unsigned __int64 v34; // r13
  __int64 v35; // rbp
  char *v36; // rsi
  void *v38; // rdi
  _BYTE *v39; // rsi
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
  char *v56; // [rsp+8h] [rbp-B0h] BYREF
  __m128i v57; // [rsp+10h] [rbp-A8h] BYREF
  void *v58; // [rsp+20h] [rbp-98h] BYREF
  size_t v59[3]; // [rsp+28h] [rbp-90h]
  void *src; // [rsp+40h] [rbp-78h] BYREF
  size_t n[4]; // [rsp+48h] [rbp-70h]
  __int64 v62; // [rsp+68h] [rbp-50h]
  int v63; // [rsp+70h] [rbp-48h]
  unsigned __int64 v64; // [rsp+78h] [rbp-40h]

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
    sub_35A790((char **)a1);
    return v64 - __readfsqword(0x28u);
  }
  if ( !strcmp(v21, "format") )
  {
    unpack_dd(&v57);
    unpack_dd(&v57);
    unpack_dd(&v57);
    sub_35A790((char **)a1);
    return v64 - __readfsqword(0x28u);
  }
  if ( *v21 != 1 || v21[1] )
  {
LABEL_2:
    src = nullptr;
    *(_OWORD *)n = 0;
    if ( !v3 )
      goto LABEL_3;
    v38 = nullptr;
    if ( v3 != -1 )
    {
      src = (void *)qvector_reserve(&src, 0, v3 + 1, 1);
      v38 = src;
    }
    n[0] = v3 + 1;
    memmove(v38, v2, v3);
    *((_BYTE *)src + v3) = 0;
    v6 = n[0];
    if ( n[0] )
    {
      v7 = (_BYTE *)qalloc_or_throw(n[0]);
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
      if ( !byte_2CCB1E1 )
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
  if ( (unsigned __int8)sub_581390((__int64 *)&src, &v56) )
  {
    value_repr_t__print_(&src, &v58, 0);
  }
  else
  {
    v39 = v58;
    if ( v59[1] <= 1 )
    {
      v58 = (void *)qvector_reserve(&v58, v58, 2, 1);
      v39 = v58;
    }
    v59[0] = 2;
    *v39 = 63;
    *((_BYTE *)v58 + 1) = 0;
  }
  v22 = v59[0];
  if ( v59[0] )
  {
    v23 = (_BYTE *)qalloc_or_throw(v59[0]);
    memcpy(v23, v58, v22);
    if ( !*v23 )
    {
LABEL_56:
      if ( v23 )
        qfree(v23);
      goto LABEL_58;
    }
LABEL_37:
    v24 = *(_QWORD *)(a1 + 8);
    v25 = 2;
    if ( v24 )
      v25 = v24-- + 1;
    v26 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v25 )
    {
      v47 = qvector_reserve(a1, v26, v25, 1);
      *(_QWORD *)a1 = v47;
      v26 = (char *)v47;
    }
    *(_QWORD *)(a1 + 8) = v25;
    v27 = 2;
    v26[v24] = 1;
    *(_BYTE *)(*(_QWORD *)a1 + v24 + 1) = 0;
    v28 = *(_QWORD *)(a1 + 8);
    if ( v28 )
      v27 = v28-- + 1;
    v29 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v27 )
    {
      v46 = qvector_reserve(a1, v29, v27, 1);
      *(_QWORD *)a1 = v46;
      v29 = (char *)v46;
    }
    *(_QWORD *)(a1 + 8) = v27;
    v29[v28] = 23;
    *(_BYTE *)(*(_QWORD *)a1 + v28 + 1) = 0;
    if ( v22 )
    {
      v30 = v22 - 1;
      if ( v22 != 1 )
      {
        v40 = *(_QWORD *)(a1 + 8);
        v41 = v22 - 1;
        if ( v40 )
        {
          --v40;
          v41 = v30 + v40;
          v22 += v40;
        }
        v42 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < v22 )
        {
          v55 = qvector_reserve(a1, v42, v22, 1);
          *(_QWORD *)a1 = v55;
          v42 = (char *)v55;
        }
        *(_QWORD *)(a1 + 8) = v22;
        v42[v41] = 0;
        memcpy((void *)(v40 + *(_QWORD *)a1), v23, v30);
      }
    }
    v31 = *(_QWORD *)(a1 + 8);
    v32 = 2;
    if ( v31 )
      v32 = v31-- + 1;
    v33 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v32 )
    {
      v51 = qvector_reserve(a1, v33, v32, 1);
      *(_QWORD *)a1 = v51;
      v33 = (char *)v51;
    }
    *(_QWORD *)(a1 + 8) = v32;
    v34 = 2;
    v33[v31] = 2;
    *(_BYTE *)(*(_QWORD *)a1 + v31 + 1) = 0;
    v35 = *(_QWORD *)(a1 + 8);
    if ( v35 )
      v34 = v35-- + 1;
    v36 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v34 )
    {
      v50 = qvector_reserve(a1, v36, v34, 1);
      *(_QWORD *)a1 = v50;
      v36 = (char *)v50;
    }
    *(_QWORD *)(a1 + 8) = v34;
    v36[v35] = 23;
    *(_BYTE *)(*(_QWORD *)a1 + v35 + 1) = 0;
    goto LABEL_56;
  }
  if ( byte_2CCB1E1 )
  {
    v23 = nullptr;
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
