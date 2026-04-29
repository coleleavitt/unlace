unsigned __int64 __fastcall sub_8AAC0(__int64 a1, int a2, const char *a3)
{
  _QWORD *v3; // rdi
  _QWORD *exception; // rdi
  unsigned __int8 v5; // al
  size_t v7; // rbp
  _BYTE *v9; // rsi
  size_t v10; // r15
  size_t v11; // r13
  size_t v12; // r14
  size_t v13; // r12
  __int64 v14; // rax
  unsigned __int64 *v15; // r12
  __int64 v16; // rax
  __int64 v17; // rsi
  __m128i v18; // xmm0
  void *v19; // rax
  unsigned __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rax
  void *v23; // rdi
  void *v25; // rax
  size_t v26; // rdx
  size_t v27; // rcx
  unsigned __int64 v28; // rbx
  char v29; // dl
  _BYTE *v30; // rax
  size_t v31; // rax
  __int64 v32; // rax
  char v33; // dl
  char v34; // bp
  size_t v35; // rdx
  _BYTE *v36; // rsi
  size_t v37; // rbp
  size_t v38; // r12
  _QWORD *v39; // rbx
  size_t v40; // rbp
  size_t v41; // r13
  __int64 v42; // r12
  size_t v43; // r14
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rax
  __m128i v47; // xmm1
  __int64 v48; // rax
  const __m128i *v49; // [rsp+8h] [rbp-90h] BYREF
  void *src; // [rsp+10h] [rbp-88h] BYREF
  size_t n[3]; // [rsp+18h] [rbp-80h]
  int v52; // [rsp+30h] [rbp-68h] BYREF
  void *v53; // [rsp+38h] [rbp-60h]
  __m128i v54; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v55; // [rsp+58h] [rbp-40h]

  v5 = *(_BYTE *)(a1 + 52);
  v55 = __readfsqword(0x28u);
  if ( (a3 == nullptr) | v5 ^ 1 )
    return v55 - __readfsqword(0x28u);
  v7 = a2;
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( a2 )
  {
    if ( a2 == -1 )
    {
      v25 = nullptr;
    }
    else
    {
      v25 = (void *)qvector_reserve(&src, 0, a2 + 1LL, 1);
      v26 = n[0];
      src = v25;
      if ( n[0] < a2 + 1LL )
      {
        do
        {
          v27 = v26;
          *((_BYTE *)v25 + v26++) = 32;
          v25 = src;
        }
        while ( a2 != v27 );
      }
      n[0] = a2 + 1LL;
    }
    *((_BYTE *)v25 + a2) = 0;
    v31 = strlen(a3);
    v7 = n[0];
    v9 = src;
    v10 = v31;
    if ( n[0] )
    {
      v7 = n[0] - 1;
      v12 = v31 + n[0] - 1;
    }
    else
    {
      v12 = v31;
    }
    v11 = v12 + 1;
    if ( n[1] >= v12 + 1 )
      goto LABEL_5;
  }
  else
  {
    v9 = nullptr;
    v10 = strlen(a3);
    v11 = v10 + 1;
    v12 = v10;
  }
  src = (void *)qvector_reserve(&src, v9, v11, 1);
  v9 = src;
LABEL_5:
  n[0] = v11;
  v9[v12] = 0;
  memmove((char *)src + v7, a3, v10);
  v13 = n[0];
  if ( n[0] > 1 )
  {
    tag_remove(&src, src, 0);
    v13 = n[0];
  }
  v14 = *(_QWORD *)(a1 + 8);
  v53 = nullptr;
  v54 = 0;
  v52 = v14;
  if ( v13 )
  {
    v53 = (void *)qalloc_or_throw(v13);
    v54.m128i_i64[1] = v13;
    memcpy(v53, src, v13);
    v54.m128i_i64[0] = v13;
  }
  v15 = *(unsigned __int64 **)(a1 + 24);
  v49 = (const __m128i *)&v52;
  if ( !v15 )
  {
    v46 = qalloc(56);
    v47 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v46, (__m128i)(unsigned __int64)v46);
    if ( !v46 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v46 + 48) = 0;
    *(_OWORD *)(v46 + 16) = 0;
    *(_OWORD *)(v46 + 32) = 0;
    *(__m128i *)(v46 + 8) = v47;
    *(_QWORD *)v46 = v46 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_QWORD *)(a1 + 24) = v46;
    *(_QWORD *)v46 = v46 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v46 & 3LL;
    *(__m128i *)(*(_QWORD *)(a1 + 24) + 8LL) = _mm_unpacklo_epi64(
                                                 (__m128i)*(unsigned __int64 *)(a1 + 24),
                                                 (__m128i)*(unsigned __int64 *)(a1 + 24));
    **(_QWORD **)(a1 + 24) &= ~1uLL;
    **(_QWORD **)(a1 + 24) |= 2uLL;
    v15 = *(unsigned __int64 **)(a1 + 24);
    goto LABEL_11;
  }
  if ( !*(_QWORD *)(a1 + 32) )
  {
LABEL_11:
    v16 = qalloc(56);
    v17 = v16;
    if ( !v16 )
    {
      v3 = __cxa_allocate_exception(8u);
      *v3 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)v16 = 0;
    *(_OWORD *)(v16 + 16) = 0;
    *(_DWORD *)(v16 + 24) = v52;
    v18 = _mm_load_si128(&v54);
    v19 = v53;
    v53 = nullptr;
    *(__m128i *)(v17 + 40) = v18;
    v54 = 0;
    *(_QWORD *)(v17 + 32) = v19;
    v20 = (unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v17 & 1LL;
    *(_QWORD *)v17 = v20;
    v21 = _mm_loadl_epi64((const __m128i *)(a1 + 24));
    *(_QWORD *)v17 = v20 | 1;
    *(__m128i *)(v17 + 8) = _mm_unpacklo_epi64(v21, v21);
    if ( *(unsigned __int64 **)(a1 + 24) == v15 )
    {
      *v15 = v17 & 0xFFFFFFFFFFFFFFFCLL | *v15 & 3;
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) = v17;
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) = v17;
      v45 = *(_QWORD *)v17 & 2LL;
      *(_QWORD *)v17 &= ~1uLL;
      *(_QWORD *)v17 = v45 | *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFFCLL;
    }
    else
    {
      v15[1] = v17;
      v22 = *(_QWORD *)(a1 + 24);
      if ( *(unsigned __int64 **)(v22 + 8) == v15 )
        *(_QWORD *)(v22 + 8) = v17;
      sub_8A680((_QWORD *)(a1 + 24), (__int64 *)v17);
    }
    v23 = v53;
    ++*(_QWORD *)(a1 + 32);
    if ( v23 )
    {
      v54.m128i_i64[0] = 0;
      qfree(v23);
    }
    goto LABEL_18;
  }
  v28 = *v15 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v28 & 2) != 0 )
  {
    v29 = 1;
LABEL_37:
    v32 = sub_8A950((__m128i *)(a1 + 24), v15, v29, &v49);
    v34 = v33;
    v28 = v32;
    if ( v53 )
    {
      v54.m128i_i64[0] = 0;
      qfree(v53);
    }
    if ( !v34 )
      goto LABEL_46;
    goto LABEL_18;
  }
  v29 = 1;
  while ( 1 )
  {
    if ( v52 < *(_DWORD *)(v28 + 24) )
    {
      v30 = *(_BYTE **)(v28 + 8);
      v29 = 1;
      goto LABEL_29;
    }
    if ( v52 <= *(_DWORD *)(v28 + 24) )
      break;
    v30 = *(_BYTE **)(v28 + 16);
    v29 = 0;
LABEL_29:
    if ( (*v30 & 2) != 0 )
      goto LABEL_30;
    v28 = (unsigned __int64)v30;
  }
  if ( !v28 )
  {
LABEL_30:
    v15 = (unsigned __int64 *)v28;
    goto LABEL_37;
  }
  if ( v53 )
  {
    v54.m128i_i64[0] = 0;
    qfree(v53);
  }
LABEL_46:
  v35 = n[0];
  v36 = src;
  if ( !n[0] )
  {
    if ( n[1] > 1 )
    {
      n[0] = 2;
      *((_BYTE *)src + 1) = 0;
      goto LABEL_50;
    }
    v38 = 0;
    v37 = 2;
LABEL_64:
    src = (void *)qvector_reserve(&src, src, v37, 1);
    v36 = src;
    v35 = v38 + 1;
    goto LABEL_48;
  }
  v37 = n[0] + 1;
  v38 = n[0] - 1;
  if ( n[1] < n[0] + 1 )
    goto LABEL_64;
LABEL_48:
  n[0] = v37;
  v36[v35] = 0;
  if ( v38 )
    memmove((char *)src + 1, src, v38);
LABEL_50:
  v39 = (_QWORD *)(v28 + 24);
  *(_BYTE *)src = 10;
  v40 = n[0];
  if ( n[0] )
  {
    v41 = n[0] - 1;
    if ( n[0] != 1 )
    {
      v42 = v39[2];
      v43 = n[0] - 1;
      if ( v42 )
      {
        --v42;
        v43 = v41 + v42;
        v40 = n[0] + v42;
      }
      v44 = v39[1];
      if ( v39[3] < v40 )
      {
        v48 = qvector_reserve(v39 + 1, v44, v40, 1);
        v39[1] = v48;
        v44 = v48;
      }
      v39[2] = v40;
      *(_BYTE *)(v44 + v43) = 0;
      memcpy((void *)(v42 + v39[1]), src, v41);
    }
  }
LABEL_18:
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return v55 - __readfsqword(0x28u);
}
