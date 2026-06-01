bool __fastcall sub_8C9680(__int64 a1, const __m128i **a2, __int64 a3)
{
  __int8 *v3; // rbx
  bool result; // al
  _QWORD *v6; // r13
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  char *v11; // rsi
  __m128i v12; // xmm0
  size_t v13; // r8
  size_t v14; // r9
  __int128 v15; // xmm1
  __int64 v16; // rax
  __int64 v17; // r14
  void *v18; // rax
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rbx
  __int64 v21; // r12
  void *v22; // rdi
  void *v23; // rdi
  void *v24; // rdi
  void *v25; // rdi
  __int64 v26; // r13
  __int64 v27; // r14
  __int64 v28; // r14
  __int64 v29; // rcx
  __int64 v30; // rax
  size_t v31; // rdx
  __int64 v32; // rax
  char *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  char *v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  char *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  size_t n; // [rsp+0h] [rbp-118h]
  size_t nh; // [rsp+0h] [rbp-118h]
  size_t na; // [rsp+0h] [rbp-118h]
  size_t ni; // [rsp+0h] [rbp-118h]
  size_t nj; // [rsp+0h] [rbp-118h]
  size_t nb; // [rsp+0h] [rbp-118h]
  size_t nc; // [rsp+0h] [rbp-118h]
  size_t nd; // [rsp+0h] [rbp-118h]
  size_t ne; // [rsp+0h] [rbp-118h]
  size_t nl; // [rsp+0h] [rbp-118h]
  size_t nk; // [rsp+0h] [rbp-118h]
  size_t ng; // [rsp+0h] [rbp-118h]
  size_t nf; // [rsp+0h] [rbp-118h]
  size_t v62; // [rsp+8h] [rbp-110h]
  __int8 *v63; // [rsp+8h] [rbp-110h]
  unsigned __int64 v64; // [rsp+8h] [rbp-110h]
  size_t v65; // [rsp+8h] [rbp-110h]
  size_t v66; // [rsp+8h] [rbp-110h]
  unsigned int v67; // [rsp+1Ch] [rbp-FCh]
  size_t v68; // [rsp+20h] [rbp-F8h]
  size_t v69; // [rsp+20h] [rbp-F8h]
  size_t v70; // [rsp+20h] [rbp-F8h]
  unsigned int v71; // [rsp+34h] [rbp-E4h] BYREF
  const __m128i *v72; // [rsp+38h] [rbp-E0h] BYREF
  void *v73; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v74; // [rsp+48h] [rbp-D0h]
  __int64 v75; // [rsp+58h] [rbp-C0h]
  __m128i v76; // [rsp+60h] [rbp-B8h] BYREF
  void *ptr; // [rsp+70h] [rbp-A8h]
  __int128 v78; // [rsp+78h] [rbp-A0h]
  void *src; // [rsp+90h] [rbp-88h] BYREF
  __int128 v80; // [rsp+98h] [rbp-80h]
  __int64 v81; // [rsp+A8h] [rbp-70h]
  __m128i v82; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v83; // [rsp+C0h] [rbp-58h]
  __int128 v84; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v85; // [rsp+D8h] [rbp-40h]

  v85 = __readfsqword(0x28u);
  v72 = *a2;
  v3 = &v72->m128i_i8[a3];
  if ( __CFADD__(a3, v72) )
    return 0;
  v6 = a2;
  if ( !sub_7BFDB0(&v71, (unsigned __int64 *)&v72) )
    return 0;
  v7 = v71;
  v8 = *(_QWORD *)(a1 + 24);
  v67 = v71;
  if ( v71 == v8 )
    goto LABEL_28;
  v75 = 0;
  v73 = nullptr;
  ptr = nullptr;
  v74 = 0;
  v76 = 0;
  v78 = 0;
  if ( v71 < v8 )
  {
    na = v71;
    v19 = v8;
    v63 = v3;
    v20 = v71;
    do
    {
      v21 = *(_QWORD *)(a1 + 16) + 72 * v20;
      v22 = *(void **)(v21 + 48);
      if ( v22 )
      {
        *(_QWORD *)(v21 + 56) = 0;
        qfree(v22);
      }
      v23 = *(void **)v21;
      if ( *(_QWORD *)v21 )
      {
        *(_QWORD *)(v21 + 8) = 0;
        qfree(v23);
      }
      ++v20;
    }
    while ( v20 < v19 );
    v7 = na;
    v3 = v63;
    *(_QWORD *)(a1 + 24) = na;
LABEL_24:
    v24 = ptr;
    if ( !ptr )
      goto LABEL_26;
    goto LABEL_25;
  }
  v9 = *(_QWORD *)(a1 + 16);
  v10 = *(_QWORD *)(a1 + 32);
  if ( (unsigned __int64)&v73 >= v9 && (unsigned __int64)&v73 < v9 + 72 * v10 )
  {
    v11 = (char *)&v73;
    n = v71;
    src = nullptr;
    v80 = 0;
    sub_8B2290(&src, (__int64)&v73);
    v12 = _mm_load_si128(&v76);
    v13 = n;
    v83 = 0;
    v82 = v12;
    v81 = v75;
    v84 = 0;
    if ( (_QWORD)v78 )
    {
      v66 = n;
      nf = v78;
      v44 = qalloc_or_throw(24 * v78, (const char *)&v73);
      v45 = (char *)ptr;
      v83 = v44;
      v13 = v66;
      *((_QWORD *)&v84 + 1) = nf;
      *(_QWORD *)v44 = *(_QWORD *)ptr;
      *(__m128i *)(v44 + 8) = _mm_loadu_si128((const __m128i *)(v45 + 8));
      if ( nf != 1 )
      {
        v46 = 24;
        v47 = 1;
        do
        {
          ++v47;
          v11 = (char *)ptr + v46;
          v48 = v46 + v83;
          v46 += 24;
          *(_QWORD *)v48 = *(_QWORD *)v11;
          *(__m128i *)(v48 + 8) = _mm_loadu_si128((const __m128i *)(v11 + 8));
        }
        while ( nf != v47 );
      }
      *(_QWORD *)&v84 = nf;
    }
    if ( *(_QWORD *)(a1 + 32) < v13 )
    {
      v11 = *(char **)(a1 + 16);
      ng = v13;
      *(_QWORD *)(a1 + 16) = qvector_reserve(a1 + 16, v11, v13, 72);
      v13 = ng;
    }
    v14 = *(_QWORD *)(a1 + 24);
    if ( v14 < v13 )
    {
      v15 = 0;
      do
      {
        v17 = *(_QWORD *)(a1 + 16) + 72 * v14;
        *(_QWORD *)v17 = 0;
        *(_OWORD *)(v17 + 8) = v15;
        if ( (_QWORD)v80 )
        {
          v68 = v14;
          v62 = v13;
          nh = v80;
          v18 = (void *)qalloc_or_throw(v80, v11);
          *(_QWORD *)v17 = v18;
          v11 = (char *)src;
          *(_QWORD *)(v17 + 16) = nh;
          memcpy(v18, v11, nh);
          v14 = v68;
          v15 = 0;
          v13 = v62;
          *(_QWORD *)(v17 + 8) = nh;
        }
        v16 = v81;
        *(_QWORD *)(v17 + 48) = 0;
        *(_OWORD *)(v17 + 56) = v15;
        *(_QWORD *)(v17 + 24) = v16;
        *(__m128i *)(v17 + 32) = _mm_load_si128(&v82);
        if ( (_QWORD)v84 )
        {
          v70 = v14;
          v65 = v13;
          ne = v84;
          v38 = qalloc_or_throw(24 * v84, v11);
          *(_QWORD *)(v17 + 48) = v38;
          v15 = 0;
          v39 = v83;
          v13 = v65;
          *(_QWORD *)(v17 + 64) = ne;
          v14 = v70;
          *(_QWORD *)v38 = *(_QWORD *)v39;
          *(__m128i *)(v38 + 8) = _mm_loadu_si128((const __m128i *)(v39 + 8));
          if ( ne != 1 )
          {
            v40 = 24;
            v41 = 1;
            do
            {
              ++v41;
              v11 = (char *)(v40 + v83);
              v42 = v40 + *(_QWORD *)(v17 + 48);
              v40 += 24;
              *(_QWORD *)v42 = *(_QWORD *)v11;
              *(__m128i *)(v42 + 8) = _mm_loadu_si128((const __m128i *)(v11 + 8));
            }
            while ( ne != v41 );
          }
          *(_QWORD *)(v17 + 56) = ne;
        }
        ++v14;
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)(a1 + 24) = v13;
    nl = v13;
    sub_8C9610((__int64)&src);
    v7 = nl;
    goto LABEL_24;
  }
  if ( v10 < v71 )
  {
    nk = v71;
    v43 = qvector_reserve(a1 + 16, v9, v71, 72);
    v8 = *(_QWORD *)(a1 + 24);
    v7 = nk;
    *(_QWORD *)(a1 + 16) = v43;
  }
  if ( v8 >= v7 )
  {
    *(_QWORD *)(a1 + 24) = v7;
    goto LABEL_24;
  }
  do
  {
    nc = v8;
    v64 = v7;
    v28 = *(_QWORD *)(a1 + 16) + 72 * v8;
    *(_QWORD *)v28 = 0;
    *(_OWORD *)(v28 + 8) = 0;
    sub_8B2290((_QWORD *)v28, (__int64)&v73);
    v30 = v75;
    v31 = nc;
    *(_QWORD *)(v28 + 48) = 0;
    *(_OWORD *)(v28 + 56) = 0;
    v7 = v64;
    *(_QWORD *)(v28 + 24) = v30;
    *(__m128i *)(v28 + 32) = _mm_load_si128(&v76);
    if ( (_QWORD)v78 )
    {
      v69 = nc;
      nd = v78;
      v32 = qalloc_or_throw(24 * v78, (const char *)&v73, v31, v29, v64);
      v7 = v64;
      *(_QWORD *)(v28 + 48) = v32;
      v33 = (char *)ptr;
      v31 = v69;
      *(_QWORD *)(v28 + 64) = nd;
      *(_QWORD *)v32 = *(_QWORD *)v33;
      *(__m128i *)(v32 + 8) = _mm_loadu_si128((const __m128i *)(v33 + 8));
      if ( nd != 1 )
      {
        v34 = 24;
        v35 = 1;
        do
        {
          ++v35;
          v36 = (char *)ptr + v34;
          v37 = v34 + *(_QWORD *)(v28 + 48);
          v34 += 24;
          *(_QWORD *)v37 = *(_QWORD *)v36;
          *(__m128i *)(v37 + 8) = _mm_loadu_si128((const __m128i *)(v36 + 8));
        }
        while ( nd != v35 );
      }
      *(_QWORD *)(v28 + 56) = nd;
    }
    v8 = v31 + 1;
  }
  while ( v8 < v7 );
  v24 = ptr;
  *(_QWORD *)(a1 + 24) = v7;
  if ( v24 )
  {
LABEL_25:
    ni = v7;
    *(_QWORD *)&v78 = 0;
    qfree(v24);
    v7 = ni;
LABEL_26:
    v25 = v73;
    if ( !v73 )
      goto LABEL_28;
    goto LABEL_27;
  }
  v25 = v73;
  if ( !v73 )
  {
LABEL_29:
    nb = (size_t)v6;
    v26 = 0;
    v27 = 72 * v7;
    while ( (unsigned __int8)sub_8C3600((__m128i *)(v26 + *(_QWORD *)(a1 + 16)), &v72, v3 - (__int8 *)v72) )
    {
      v26 += 72;
      if ( v27 == v26 )
      {
        v6 = (_QWORD *)nb;
        goto LABEL_34;
      }
    }
    return 0;
  }
LABEL_27:
  nj = v7;
  *(_QWORD *)&v74 = 0;
  qfree(v25);
  v7 = nj;
LABEL_28:
  if ( v67 )
    goto LABEL_29;
LABEL_34:
  result = sub_7BFDB0((_DWORD *)(a1 + 40), (unsigned __int64 *)&v72);
  if ( !result )
    return 0;
  *v6 = v72;
  return result;
}

