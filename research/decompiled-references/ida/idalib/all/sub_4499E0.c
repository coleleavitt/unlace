unsigned __int64 __fastcall sub_4499E0(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const char **a8,
        __int64 a9)
{
  __int64 v10; // r12
  __int64 nlist_ea; // rdi
  int flags; // eax
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // eax
  char *nlist_name; // rbp
  size_t v17; // rax
  __m128 v18; // xmm0
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r13d
  __int64 v22; // rax
  __int64 v23; // rbx
  size_t v24; // r15
  size_t v25; // r15
  void *v26; // rax
  void *v27; // rsi
  void *v28; // rdi
  __int64 v29; // rax
  size_t v30; // rax
  size_t v31; // r15
  size_t v32; // r13
  __int64 v33; // rax
  _QWORD *v34; // rsi
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rdx
  const char *v38; // rax
  __int64 v39; // rax
  void *v40; // rbx
  __m128i v41; // xmm0
  void *v42; // rdi
  __int64 v43; // r14
  __m128i v44; // xmm0
  void *v45; // rdi
  __m128i v47; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v49; // [rsp+18h] [rbp-B0h]
  unsigned __int64 nlist_size; // [rsp+20h] [rbp-A8h]
  __int64 v51; // [rsp+28h] [rbp-A0h]
  const __m128i **v52; // [rsp+30h] [rbp-98h]
  const char **v53; // [rsp+38h] [rbp-90h]
  size_t v54; // [rsp+40h] [rbp-88h]
  __int64 v55; // [rsp+48h] [rbp-80h]
  void *ptr; // [rsp+50h] [rbp-78h] BYREF
  __m128i v57; // [rsp+58h] [rbp-70h] BYREF
  void *src; // [rsp+70h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+78h] [rbp-50h]
  unsigned __int64 v60; // [rsp+88h] [rbp-40h]

  v55 = a6;
  v51 = a7;
  v53 = a8;
  v60 = __readfsqword(0x28u);
  v57 = 0;
  ptr = nullptr;
  nlist_size = get_nlist_size();
  v10 = 0;
  if ( nlist_size )
  {
    do
    {
      nlist_ea = get_nlist_ea(v10);
      flags = get_flags_ex(nlist_ea, 4);
      if ( (~(_WORD)flags & 0x600) != 0 )
        break;
      if ( (flags & 0x10000000) == 0 )
        break;
      ++v10;
    }
    while ( nlist_size != v10 );
  }
  v49 = get_nlist_size();
  v13 = get_nlist_size();
  if ( v49 < v13 )
  {
    do
    {
      v14 = get_nlist_ea(v49);
      v15 = get_flags_ex(v14, 4);
      if ( (~(_WORD)v15 & 0x600) != 0 )
        break;
      if ( (v15 & 0x10000000) == 0 )
        break;
      ++v49;
    }
    while ( v13 != v49 );
  }
  v52 = (const __m128i **)(v51 + 24);
  while ( v49 != v10 )
  {
LABEL_7:
    nlist_name = (char *)get_nlist_name(v10);
    v48 = get_nlist_ea(v10);
    v17 = strlen(nlist_name);
    v18 = 0;
    *(double *)v18.m128_u64 = (double)*(int *)(a9 + 4);
    v21 = (int)sub_4482E0((unsigned __int64 *)(v51 + 48), v52, nlist_name, &nlist_name[v17], v19, v20, v18, a2, a3, a4);
    if ( v21 >= *(_DWORD *)(a9 + 4) )
    {
      v22 = operator new(0x50u);
      src = nullptr;
      v23 = v22;
      *(_OWORD *)n = 0;
      if ( nlist_name )
      {
        v47.m128i_i64[0] = (__int64)&src;
        v24 = strlen(nlist_name);
        v54 = v24 + 1;
        src = (void *)qvector_reserve(&src, 0, v24 + 1, 1);
        n[0] = v24 + 1;
        memmove(src, nlist_name, v24);
        *((_BYTE *)src + v24) = 0;
        v25 = n[0];
        *(_QWORD *)v23 = &off_2B286C8;
        *(_QWORD *)(v23 + 8) = 0;
        *(_OWORD *)(v23 + 16) = 0;
        if ( v25 )
        {
          v26 = (void *)qalloc_or_throw(v25);
          *(_QWORD *)(v23 + 8) = v26;
          v27 = src;
          *(_QWORD *)(v23 + 24) = v25;
          memcpy(v26, v27, v25);
          *(_QWORD *)(v23 + 16) = v25;
        }
      }
      else
      {
        *(_QWORD *)(v22 + 8) = 0;
        *(_OWORD *)(v22 + 16) = 0;
        v47.m128i_i64[0] = (__int64)&src;
      }
      v28 = src;
      *(_QWORD *)(v23 + 32) = 3;
      *(_QWORD *)v23 = &off_2B28758;
      v29 = v48;
      *(_QWORD *)(v23 + 40) = 0;
      *(_QWORD *)(v23 + 72) = v29;
      *(_OWORD *)(v23 + 48) = 0;
      if ( v28 )
      {
        n[0] = 0;
        qfree(v28);
      }
      *(_DWORD *)(v23 + 64) = v21;
      src = nullptr;
      *(_OWORD *)n = 0;
      if ( nlist_name )
      {
        v30 = strlen(nlist_name);
        v31 = v30 + 1;
        v32 = v30;
        src = (void *)qvector_reserve(v47.m128i_i64[0], 0, v30 + 1, 1);
        n[0] = v31;
        memmove(src, nlist_name, v32);
        *((_BYTE *)src + v32) = 0;
      }
      sub_439B80((__int64 *)(v23 + 40), (__int64)v53, v47.m128i_i64[0]);
      if ( src )
      {
        n[0] = 0;
        qfree(src);
      }
      v33 = v57.m128i_i64[0];
      v34 = ptr;
      if ( v57.m128i_i64[1] < (unsigned __int64)(v57.m128i_i64[0] + 1) )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v57.m128i_i64[0] + 1, 8);
        v34 = ptr;
        v33 = v57.m128i_i64[0];
      }
      v34[v33] = v23;
      ++v57.m128i_i64[0];
    }
    while ( ++v10 < nlist_size )
    {
      v35 = get_nlist_ea(v10);
      v36 = get_flags_ex(v35, 4);
      if ( (~(_WORD)v36 & 0x600) != 0 )
        break;
      if ( (v36 & 0x10000000) == 0 )
      {
        if ( v49 != v10 )
          goto LABEL_7;
        goto LABEL_24;
      }
    }
  }
LABEL_24:
  v37 = (__int64)v53[1];
  v38 = haystack;
  if ( v37 )
  {
    --v37;
    v38 = *v53;
  }
  sub_43BE20((__int64)&ptr, v37, (__int64)v38, *(int *)(a9 + 8));
  v39 = v55;
  v40 = ptr;
  ptr = nullptr;
  v41 = _mm_loadu_si128(&v57);
  v57 = 0;
  v42 = *(void **)v55;
  if ( *(_QWORD *)v55 )
  {
    v43 = v55;
    v47 = v41;
    *(_QWORD *)(v55 + 8) = 0;
    qfree(v42);
    v44 = _mm_load_si128(&v47);
    v45 = ptr;
    *(_QWORD *)v43 = v40;
    *(__m128i *)(v43 + 8) = v44;
    if ( v45 )
    {
      v57.m128i_i64[0] = 0;
      qfree(v45);
    }
  }
  else
  {
    *(_QWORD *)v55 = v40;
    *(__m128i *)(v39 + 8) = v41;
  }
  return v60 - __readfsqword(0x28u);
}
