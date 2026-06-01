unsigned __int64 __fastcall sub_69C460(__int64 a1, char *a2, __int64 a3, char a4)
{
  size_t v7; // rbp
  const char *v9; // rsi
  const char *v10; // rsi
  int v11; // r15d
  __int64 v12; // rdx
  const char *v13; // rsi
  char *v14; // rbx
  __int64 v15; // rbp
  __m128i v16; // xmm0
  size_t v17; // rbx
  size_t v18; // rbx
  __m128i v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // rsi
  char v22; // al
  __int64 v23; // rdx
  int v24; // eax
  __m128i v25; // xmm0
  __int64 v26; // rbx
  void *v27; // rax
  __m128i v28; // xmm0
  __m128i v29; // xmm1
  __int64 v30; // rax
  __m128i v31; // xmm0
  const char *v33; // r8
  void *v34; // rdi
  __int64 v35; // rax
  void *v36; // rax
  const void *v37; // rsi
  __int64 v38; // rax
  void *v39; // rax
  const void *v40; // rsi
  void *v41; // rax
  char *v42; // rdx
  int *v43; // rax
  const char *v44; // rsi
  __int64 v45; // rax
  const char *v46; // [rsp+0h] [rbp-F0h]
  void *src; // [rsp+8h] [rbp-E8h] BYREF
  __int128 v48; // [rsp+10h] [rbp-E0h]
  __m128i v49; // [rsp+28h] [rbp-C8h] BYREF
  void *v50; // [rsp+38h] [rbp-B8h]
  __m128i v51; // [rsp+40h] [rbp-B0h] BYREF
  void *ptr; // [rsp+50h] [rbp-A0h]
  __m128i v53; // [rsp+58h] [rbp-98h] BYREF
  __int64 v54; // [rsp+68h] [rbp-88h] BYREF
  __m128i v55; // [rsp+70h] [rbp-80h] BYREF
  __m128i v56; // [rsp+80h] [rbp-70h] BYREF
  __int64 v57; // [rsp+90h] [rbp-60h]
  __int64 v58; // [rsp+98h] [rbp-58h]
  char v59; // [rsp+A0h] [rbp-50h]
  int v60; // [rsp+A4h] [rbp-4Ch]
  unsigned __int64 v61; // [rsp+B0h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 8);
  v61 = __readfsqword(0x28u);
  v48 = 0;
  src = nullptr;
  if ( v7 )
  {
    v36 = (void *)qalloc_or_throw(v7, a2);
    v37 = *(const void **)a1;
    *((_QWORD *)&v48 + 1) = v7;
    src = v36;
    memcpy(v36, v37, v7);
    *(_QWORD *)&v48 = v7;
  }
  v9 = haystack;
  if ( *(_QWORD *)(a3 + 24) )
    v9 = *(const char **)(a3 + 16);
  sub_69C0D0((__int64 *)&src, v9);
  if ( !a4 )
    goto LABEL_27;
  v10 = haystack;
  if ( (_QWORD)v48 )
    v10 = (const char *)src;
  v11 = sub_698F20(a2, v10, 0, 0);
  if ( v11 == -1 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a2 + 1672LL) + 8LL) )
    {
      v42 = (char *)haystack;
      if ( (_QWORD)v48 )
        v42 = (char *)src;
      v43 = sub_518080(*(_QWORD **)(*(_QWORD *)a2 + 1680LL), nullptr, v42);
      if ( v43 )
      {
        v11 = *v43;
        v44 = haystack;
        if ( (_QWORD)v48 )
          v44 = (const char *)src;
        sub_6993D0(a2, v44, v11);
        goto LABEL_9;
      }
    }
LABEL_27:
    v11 = -1;
  }
LABEL_9:
  v12 = *(_QWORD *)(a1 + 40);
  v13 = *(const char **)(a1 + 32);
  if ( *(_QWORD *)(a1 + 48) < (unsigned __int64)(v12 + 1) )
  {
    v35 = qvector_reserve(a1 + 32, v13, v12 + 1, 32);
    *(_QWORD *)(a1 + 32) = v35;
    v12 = *(_QWORD *)(a1 + 40);
    v13 = (const char *)v35;
  }
  v14 = (char *)&v13[32 * v12];
  *(_QWORD *)v14 = 0;
  *((_DWORD *)v14 + 6) = -1;
  *(_OWORD *)(v14 + 8) = 0;
  ++*(_QWORD *)(a1 + 40);
  if ( v14 != (char *)&src )
  {
    v15 = v48;
    if ( (unsigned __int64)v48 > 1 )
    {
      v33 = (const char *)src;
      v34 = *(void **)v14;
      if ( *((_QWORD *)v14 + 2) < (unsigned __int64)v48 )
      {
        v46 = (const char *)src;
        v45 = qvector_reserve(v14, *(_QWORD *)v14, v48, 1);
        *(_QWORD *)v14 = v45;
        v33 = v46;
        v34 = (void *)v45;
      }
      *((_QWORD *)v14 + 1) = v15;
      v13 = v33;
      memmove(v34, v33, v15 - 1);
      *(_BYTE *)(*(_QWORD *)v14 + v15 - 1) = 0;
    }
    else
    {
      *((_QWORD *)v14 + 1) = 0;
    }
  }
  *((_DWORD *)v14 + 6) = v11;
  v16 = _mm_loadu_si128((const __m128i *)a3);
  v50 = nullptr;
  v17 = *(_QWORD *)(a3 + 24);
  v49 = v16;
  v51 = 0;
  if ( v17 )
  {
    v41 = (void *)qalloc_or_throw(v17, v13);
    v13 = *(const char **)(a3 + 16);
    v50 = v41;
    v51.m128i_i64[1] = v17;
    memcpy(v41, v13, v17);
    v51.m128i_i64[0] = v17;
  }
  v18 = *(_QWORD *)(a3 + 48);
  ptr = nullptr;
  v53 = 0;
  if ( v18 )
  {
    v39 = (void *)qalloc_or_throw(v18, v13);
    v40 = *(const void **)(a3 + 40);
    ptr = v39;
    v53.m128i_i64[1] = v18;
    memcpy(v39, v40, v18);
    v53.m128i_i64[0] = v18;
  }
  v54 = 0;
  copy_tinfo_t(&v54);
  v19 = _mm_loadu_si128((const __m128i *)(a3 + 72));
  v20 = *(_QWORD *)(a3 + 112);
  v21 = *(_QWORD *)(a1 + 136);
  v57 = *(_QWORD *)(a3 + 104);
  v22 = *(_BYTE *)(a3 + 120);
  v58 = v20;
  v23 = *(_QWORD *)(a1 + 144);
  v59 = v22;
  v24 = *(_DWORD *)(a3 + 124);
  v55 = v19;
  v25 = _mm_loadu_si128((const __m128i *)(a3 + 88));
  v60 = v24;
  v56 = v25;
  if ( *(_QWORD *)(a1 + 152) < (unsigned __int64)(v23 + 1) )
  {
    v38 = qvector_reserve(a1 + 136, v21, v23 + 1, 128);
    *(_QWORD *)(a1 + 136) = v38;
    v23 = *(_QWORD *)(a1 + 144);
    v21 = v38;
  }
  v26 = v21 + (v23 << 7);
  *(__m128i *)v26 = _mm_load_si128(&v49);
  v27 = v50;
  v28 = _mm_loadu_si128(&v51);
  *(_QWORD *)(v26 + 64) = 0;
  *(__m128i *)(v26 + 24) = v28;
  *(_QWORD *)(v26 + 16) = v27;
  v29 = _mm_load_si128(&v53);
  v51 = 0;
  *(_QWORD *)(v26 + 40) = ptr;
  *(__m128i *)(v26 + 48) = v29;
  v50 = nullptr;
  ptr = nullptr;
  v53 = 0;
  copy_tinfo_t(v26 + 64);
  v30 = v57;
  *(__m128i *)(v26 + 72) = _mm_loadu_si128(&v55);
  v31 = _mm_loadu_si128(&v56);
  *(_QWORD *)(v26 + 104) = v30;
  *(__m128i *)(v26 + 88) = v31;
  *(_QWORD *)(v26 + 112) = v58;
  *(_BYTE *)(v26 + 120) = v59;
  *(_DWORD *)(v26 + 124) = v60;
  ++*(_QWORD *)(a1 + 144);
  clear_tinfo_t(&v54);
  if ( ptr )
  {
    v53.m128i_i64[0] = 0;
    qfree(ptr);
  }
  if ( v50 )
  {
    v51.m128i_i64[0] = 0;
    qfree(v50);
  }
  if ( src )
  {
    *(_QWORD *)&v48 = 0;
    qfree(src);
  }
  return v61 - __readfsqword(0x28u);
}

