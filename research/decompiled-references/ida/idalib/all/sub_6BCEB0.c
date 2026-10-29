unsigned __int64 __fastcall sub_6BCEB0(__int64 a1, _QWORD *a2, __int64 a3, char a4)
{
  size_t v7; // rbp
  const char *v9; // rsi
  const char *v10; // rsi
  unsigned __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rbp
  __m128i v16; // xmm0
  size_t v17; // rbx
  size_t v18; // rbx
  __m128i v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // rsi
  char v22; // al
  __m128i v23; // xmm0
  __int64 v24; // rdx
  int v25; // eax
  __m128i v26; // xmm0
  __int64 v27; // rbx
  void *v28; // rax
  __m128i v29; // xmm0
  __m128i v30; // xmm1
  __int64 v31; // rax
  __m128i v32; // xmm0
  void *v34; // r8
  void *v35; // rdi
  __int64 v36; // rax
  void *v37; // rax
  const void *v38; // rsi
  __int64 v39; // rax
  void *v40; // rax
  const void *v41; // rsi
  void *v42; // rax
  const void *v43; // rsi
  char *v44; // rdx
  __int64 *v45; // rax
  const char *v46; // rsi
  __int64 v47; // rax
  void *v48; // [rsp+0h] [rbp-100h]
  void *src; // [rsp+8h] [rbp-F8h] BYREF
  __int128 v50; // [rsp+10h] [rbp-F0h]
  __m128i v51; // [rsp+28h] [rbp-D8h] BYREF
  void *v52; // [rsp+38h] [rbp-C8h]
  __m128i v53; // [rsp+40h] [rbp-C0h] BYREF
  void *ptr; // [rsp+50h] [rbp-B0h]
  __m128i v55; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v56; // [rsp+68h] [rbp-98h] BYREF
  __m128i v57; // [rsp+70h] [rbp-90h] BYREF
  __m128i v58; // [rsp+80h] [rbp-80h] BYREF
  __m128i v59; // [rsp+90h] [rbp-70h] BYREF
  __int64 v60; // [rsp+A0h] [rbp-60h]
  __int64 v61; // [rsp+A8h] [rbp-58h]
  char v62; // [rsp+B0h] [rbp-50h]
  int v63; // [rsp+B4h] [rbp-4Ch]
  unsigned __int64 v64; // [rsp+C0h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 8);
  v64 = __readfsqword(0x28u);
  v50 = 0;
  src = nullptr;
  if ( v7 )
  {
    v37 = (void *)qalloc_or_throw(v7);
    v38 = *(const void **)a1;
    *((_QWORD *)&v50 + 1) = v7;
    src = v37;
    memcpy(v37, v38, v7);
    *(_QWORD *)&v50 = v7;
  }
  v9 = haystack;
  if ( *(_QWORD *)(a3 + 24) )
    v9 = *(const char **)(a3 + 16);
  sub_6BCB20((__int64 *)&src, v9);
  if ( !a4 )
    goto LABEL_27;
  v10 = haystack;
  if ( (_QWORD)v50 )
    v10 = (const char *)src;
  v11 = sub_6B9860(a2, v10, 0, 0);
  if ( v11 == -1 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*a2 + 1864LL) + 8LL) )
    {
      v44 = (char *)haystack;
      if ( (_QWORD)v50 )
        v44 = (char *)src;
      v45 = sub_530470(*(_QWORD **)(*a2 + 1872LL), nullptr, v44);
      if ( v45 )
      {
        v11 = *v45;
        v46 = haystack;
        if ( (_QWORD)v50 )
          v46 = (const char *)src;
        sub_6B9D30(a2, v46, *v45);
        goto LABEL_9;
      }
    }
LABEL_27:
    v11 = -1;
  }
LABEL_9:
  v12 = *(_QWORD *)(a1 + 48);
  v13 = *(_QWORD *)(a1 + 40);
  if ( *(_QWORD *)(a1 + 56) < (unsigned __int64)(v12 + 1) )
  {
    v36 = qvector_reserve(a1 + 40, v13, v12 + 1, 32);
    *(_QWORD *)(a1 + 40) = v36;
    v12 = *(_QWORD *)(a1 + 48);
    v13 = v36;
  }
  v14 = v13 + 32 * v12;
  *(_QWORD *)v14 = 0;
  *(_QWORD *)(v14 + 24) = -1;
  *(_OWORD *)(v14 + 8) = 0;
  ++*(_QWORD *)(a1 + 48);
  if ( (void **)v14 != &src )
  {
    v15 = v50;
    if ( (unsigned __int64)v50 > 1 )
    {
      v34 = src;
      v35 = *(void **)v14;
      if ( *(_QWORD *)(v14 + 16) < (unsigned __int64)v50 )
      {
        v48 = src;
        v47 = qvector_reserve(v14, *(_QWORD *)v14, v50, 1);
        *(_QWORD *)v14 = v47;
        v34 = v48;
        v35 = (void *)v47;
      }
      *(_QWORD *)(v14 + 8) = v15;
      memmove(v35, v34, v15 - 1);
      *(_BYTE *)(*(_QWORD *)v14 + v15 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v14 + 8) = 0;
    }
  }
  *(_QWORD *)(v14 + 24) = v11;
  v16 = _mm_loadu_si128((const __m128i *)a3);
  v52 = nullptr;
  v17 = *(_QWORD *)(a3 + 24);
  v51 = v16;
  v53 = 0;
  if ( v17 )
  {
    v42 = (void *)qalloc_or_throw(v17);
    v43 = *(const void **)(a3 + 16);
    v52 = v42;
    v53.m128i_i64[1] = v17;
    memcpy(v42, v43, v17);
    v53.m128i_i64[0] = v17;
  }
  v18 = *(_QWORD *)(a3 + 48);
  ptr = nullptr;
  v55 = 0;
  if ( v18 )
  {
    v40 = (void *)qalloc_or_throw(v18);
    v41 = *(const void **)(a3 + 40);
    ptr = v40;
    v55.m128i_i64[1] = v18;
    memcpy(v40, v41, v18);
    v55.m128i_i64[0] = v18;
  }
  v56 = 0;
  copy_tinfo_t(&v56);
  v19 = _mm_loadu_si128((const __m128i *)(a3 + 72));
  v20 = *(_QWORD *)(a3 + 128);
  v21 = *(_QWORD *)(a1 + 144);
  v60 = *(_QWORD *)(a3 + 120);
  v22 = *(_BYTE *)(a3 + 136);
  v57 = v19;
  v23 = _mm_loadu_si128((const __m128i *)(a3 + 88));
  v61 = v20;
  v24 = *(_QWORD *)(a1 + 152);
  v62 = v22;
  v25 = *(_DWORD *)(a3 + 140);
  v58 = v23;
  v26 = _mm_loadu_si128((const __m128i *)(a3 + 104));
  v63 = v25;
  v59 = v26;
  if ( *(_QWORD *)(a1 + 160) < (unsigned __int64)(v24 + 1) )
  {
    v39 = qvector_reserve(a1 + 144, v21, v24 + 1, 144);
    *(_QWORD *)(a1 + 144) = v39;
    v24 = *(_QWORD *)(a1 + 152);
    v21 = v39;
  }
  v27 = v21 + 144 * v24;
  *(__m128i *)v27 = _mm_load_si128(&v51);
  v28 = v52;
  v29 = _mm_loadu_si128(&v53);
  *(_QWORD *)(v27 + 64) = 0;
  *(__m128i *)(v27 + 24) = v29;
  *(_QWORD *)(v27 + 16) = v28;
  v30 = _mm_load_si128(&v55);
  v53 = 0;
  *(_QWORD *)(v27 + 40) = ptr;
  *(__m128i *)(v27 + 48) = v30;
  v52 = nullptr;
  ptr = nullptr;
  v55 = 0;
  copy_tinfo_t(v27 + 64);
  v31 = v60;
  *(__m128i *)(v27 + 72) = _mm_loadu_si128(&v57);
  v32 = _mm_loadu_si128(&v58);
  *(_QWORD *)(v27 + 120) = v31;
  *(__m128i *)(v27 + 88) = v32;
  *(__m128i *)(v27 + 104) = _mm_loadu_si128(&v59);
  *(_QWORD *)(v27 + 128) = v61;
  *(_BYTE *)(v27 + 136) = v62;
  *(_DWORD *)(v27 + 140) = v63;
  ++*(_QWORD *)(a1 + 152);
  clear_tinfo_t(&v56);
  if ( ptr )
  {
    v55.m128i_i64[0] = 0;
    qfree(ptr);
  }
  if ( v52 )
  {
    v53.m128i_i64[0] = 0;
    qfree(v52);
  }
  if ( src )
  {
    *(_QWORD *)&v50 = 0;
    qfree(src);
  }
  return v64 - __readfsqword(0x28u);
}
