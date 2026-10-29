unsigned __int64 __fastcall sub_4494C0(
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
  __int64 v10; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // rax
  size_t *v17; // rdx
  char *v18; // rcx
  char *v19; // rbp
  size_t v20; // rax
  __m128 v21; // xmm0
  int v22; // r12d
  __int64 v23; // rax
  __int64 v24; // rbx
  size_t v25; // rdx
  void *v26; // rax
  size_t v27; // rdx
  void *v28; // rsi
  void *v29; // rdi
  size_t v30; // rax
  size_t v31; // r12
  __int64 v32; // rax
  _QWORD *v33; // rsi
  _QWORD *v34; // rdx
  __int64 v35; // rbp
  __int64 v36; // rax
  const char *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  void *v40; // rbx
  __m128i v41; // xmm0
  void *v42; // rdi
  __int64 v43; // r14
  __m128i v44; // xmm0
  void *v45; // rdi
  __m128i v47; // [rsp+0h] [rbp-E8h] BYREF
  size_t v48; // [rsp+18h] [rbp-D0h]
  size_t n; // [rsp+20h] [rbp-C8h]
  const char **v50; // [rsp+28h] [rbp-C0h]
  size_t v51; // [rsp+30h] [rbp-B8h]
  __int64 v52; // [rsp+38h] [rbp-B0h]
  void *ptr; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v54; // [rsp+48h] [rbp-A0h] BYREF
  void *src; // [rsp+60h] [rbp-88h] BYREF
  __int128 v56; // [rsp+68h] [rbp-80h]
  _QWORD *v57; // [rsp+80h] [rbp-68h]
  char *s; // [rsp+88h] [rbp-60h] BYREF
  __int128 v59; // [rsp+90h] [rbp-58h]
  unsigned __int64 v60; // [rsp+A8h] [rbp-40h]

  v52 = a6;
  v50 = a8;
  v10 = *(_QWORD *)(qword_2CCB598 + 1672);
  v60 = __readfsqword(0x28u);
  v54 = 0;
  ptr = nullptr;
  v57 = (_QWORD *)sub_506150(v10 + 1624);
  v14 = v57;
  s = nullptr;
  v15 = *(_QWORD *)(qword_2CCB598 + 1672);
  v59 = 0;
  if ( v57 )
  {
    while ( 1 )
    {
      v16 = sub_510BD0(v15, &s, v14, 0);
      v17 = v57;
      if ( v16 > 0 )
        break;
      v57 = (_QWORD *)sub_505EB0(v15 + 1624, *v57);
      v14 = v57;
      if ( !v57 )
        goto LABEL_34;
    }
  }
  else
  {
LABEL_34:
    v17 = nullptr;
  }
  while ( v17 )
  {
    v18 = (char *)haystack;
    v19 = (char *)haystack;
    if ( (_QWORD)v59 )
    {
      v19 = s;
      v47.m128i_i64[0] = (__int64)v17;
      v20 = strlen(s);
      v17 = (size_t *)v47.m128i_i64[0];
      v18 = &v19[v20];
    }
    v21 = 0;
    *(double *)v21.m128_u64 = (double)*(int *)(a9 + 4);
    v48 = *v17;
    v22 = (int)sub_4482E0(
                 (unsigned __int64 *)(a7 + 48),
                 (const __m128i **)(a7 + 24),
                 v19,
                 v18,
                 v12,
                 v13,
                 v21,
                 a2,
                 a3,
                 a4);
    if ( v22 >= *(_DWORD *)(a9 + 4) )
    {
      v23 = operator new(0x50u);
      src = nullptr;
      v24 = v23;
      v56 = 0;
      if ( v19 )
      {
        n = strlen(v19);
        v47.m128i_i64[0] = (__int64)&src;
        v51 = n + 1;
        src = (void *)qvector_reserve(&src, 0, n + 1, 1);
        *(_QWORD *)&v56 = n + 1;
        memmove(src, v19, n);
        *((_BYTE *)src + n) = 0;
        v25 = v56;
        *(_QWORD *)v24 = &off_2B286C8;
        *(_QWORD *)(v24 + 8) = 0;
        *(_OWORD *)(v24 + 16) = 0;
        if ( v25 )
        {
          n = v25;
          v26 = (void *)qalloc_or_throw(v25);
          v27 = n;
          v28 = src;
          *(_QWORD *)(v24 + 8) = v26;
          *(_QWORD *)(v24 + 24) = v27;
          memcpy(v26, v28, v27);
          *(_QWORD *)(v24 + 16) = n;
        }
      }
      else
      {
        *(_QWORD *)(v23 + 8) = 0;
        *(_OWORD *)(v23 + 16) = 0;
        v47.m128i_i64[0] = (__int64)&src;
      }
      v29 = src;
      *(_QWORD *)(v24 + 32) = 4;
      *(_QWORD *)v24 = &off_2B28788;
      v30 = v48;
      *(_QWORD *)(v24 + 40) = 0;
      *(_QWORD *)(v24 + 72) = v30;
      *(_OWORD *)(v24 + 48) = 0;
      if ( v29 )
      {
        *(_QWORD *)&v56 = 0;
        qfree(v29);
      }
      *(_DWORD *)(v24 + 64) = v22;
      src = nullptr;
      v56 = 0;
      if ( v19 )
      {
        v31 = strlen(v19);
        v48 = v31 + 1;
        src = (void *)qvector_reserve(v47.m128i_i64[0], 0, v31 + 1, 1);
        *(_QWORD *)&v56 = v31 + 1;
        memmove(src, v19, v31);
        *((_BYTE *)src + v31) = 0;
      }
      sub_439B80((__int64 *)(v24 + 40), (__int64)v50, v47.m128i_i64[0]);
      if ( src )
      {
        *(_QWORD *)&v56 = 0;
        qfree(src);
      }
      v32 = v54.m128i_i64[0];
      v33 = ptr;
      if ( v54.m128i_i64[1] < (unsigned __int64)(v54.m128i_i64[0] + 1) )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v54.m128i_i64[0] + 1, 8);
        v33 = ptr;
        v32 = v54.m128i_i64[0];
      }
      v33[v32] = v24;
      ++v54.m128i_i64[0];
    }
    v57 = (_QWORD *)sub_505EB0(*(_QWORD *)(qword_2CCB598 + 1672) + 1624LL, *v57);
    v34 = v57;
    v35 = *(_QWORD *)(qword_2CCB598 + 1672);
    if ( !v57 )
      break;
    while ( 1 )
    {
      v36 = sub_510BD0(v35, &s, v34, 0);
      v17 = v57;
      if ( v36 > 0 )
        break;
      v57 = (_QWORD *)sub_505EB0(v35 + 1624, *v57);
      v34 = v57;
      if ( !v57 )
        goto LABEL_24;
    }
  }
LABEL_24:
  if ( s )
  {
    *(_QWORD *)&v59 = 0;
    qfree(s);
  }
  v37 = haystack;
  v38 = (__int64)v50[1];
  if ( v38 )
  {
    v37 = *v50;
    --v38;
  }
  sub_43BE20((__int64)&ptr, v38, (__int64)v37, *(int *)(a9 + 8));
  v39 = v52;
  v40 = ptr;
  ptr = nullptr;
  v41 = _mm_loadu_si128(&v54);
  v54 = 0;
  v42 = *(void **)v52;
  if ( *(_QWORD *)v52 )
  {
    v43 = v52;
    v47 = v41;
    *(_QWORD *)(v52 + 8) = 0;
    qfree(v42);
    v44 = _mm_load_si128(&v47);
    v45 = ptr;
    *(_QWORD *)v43 = v40;
    *(__m128i *)(v43 + 8) = v44;
    if ( v45 )
    {
      v54.m128i_i64[0] = 0;
      qfree(v45);
    }
  }
  else
  {
    *(_QWORD *)v52 = v40;
    *(__m128i *)(v39 + 8) = v41;
  }
  return v60 - __readfsqword(0x28u);
}
