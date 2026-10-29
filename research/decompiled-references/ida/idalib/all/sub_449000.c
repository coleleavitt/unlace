unsigned __int64 __fastcall sub_449000(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char **a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int v10; // r15d
  int v12; // eax
  __m128 v13; // xmm0
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rbp
  __int64 v18; // r12
  char *v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rbx
  void *v22; // rdi
  __int16 v23; // ax
  int v24; // eax
  __int64 v25; // rax
  _QWORD *v26; // rsi
  unsigned int v27; // edx
  _QWORD *v28; // rax
  __int64 v29; // rdx
  const char *v30; // rax
  __int64 v31; // rax
  void *v32; // rbx
  __m128i v33; // xmm0
  void *v34; // rdi
  __int64 v35; // r14
  __m128i v36; // xmm0
  void *v37; // rdi
  void *v39; // rdi
  void *v40; // rdi
  size_t v41; // rdx
  void *v42; // rax
  size_t v43; // rdx
  void *v44; // rsi
  __m128i v45; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v46; // [rsp+18h] [rbp-C0h]
  __int64 v47; // [rsp+20h] [rbp-B8h]
  __int16 v48; // [rsp+2Ah] [rbp-AEh]
  int v49; // [rsp+2Ch] [rbp-ACh]
  unsigned __int64 *v50; // [rsp+30h] [rbp-A8h]
  const __m128i **v51; // [rsp+38h] [rbp-A0h]
  const char **v52; // [rsp+40h] [rbp-98h]
  size_t n; // [rsp+48h] [rbp-90h]
  void **p_ptr; // [rsp+50h] [rbp-88h]
  __int64 v55; // [rsp+58h] [rbp-80h]
  void *ptr; // [rsp+60h] [rbp-78h] BYREF
  __m128i v57; // [rsp+68h] [rbp-70h] BYREF
  void *src; // [rsp+80h] [rbp-58h] BYREF
  __int128 v59; // [rsp+88h] [rbp-50h]
  unsigned __int64 v60; // [rsp+98h] [rbp-40h]

  v10 = 0;
  v55 = a2;
  v52 = a4;
  v47 = a5;
  v60 = __readfsqword(0x28u);
  v51 = (const __m128i **)(a3 + 24);
  v12 = *(_DWORD *)(a1 + 48);
  v50 = (unsigned __int64 *)(a3 + 48);
  ptr = nullptr;
  v49 = v12;
  p_ptr = &ptr;
  v57 = 0;
  if ( v12 )
  {
    do
    {
      v13 = 0;
      v14 = *(_QWORD *)(a1 + 240);
      *(double *)v13.m128_u64 = (double)*(int *)(v47 + 4);
      v46 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 8LL * v10);
      v15 = *(unsigned int *)(v14 + 4LL * v10);
      v16 = *(_QWORD *)(a1 + 208);
      v17 = *(_QWORD *)(v16 + 8 * v15);
      v18 = *(_QWORD *)(v16 + 8LL * (unsigned int)(v15 + 1)) - v17;
      v19 = (char *)(*(_QWORD *)(a1 + 160) + v17);
      v48 = *(_WORD *)(*(_QWORD *)(a1 + 136) + 2LL * v10);
      v45.m128i_i32[0] = (int)sub_4482E0(v50, v51, v19, &v19[v18 - 1], a5, a6, v13, a8, a9, a10);
      if ( v45.m128i_i32[0] >= *(_DWORD *)(v47 + 4) )
      {
        v20 = operator new(0x58u);
        a9 = 0;
        v21 = v20;
        src = nullptr;
        v59 = 0;
        if ( v18 == 1 )
        {
          *(_QWORD *)(v20 + 8) = 0;
          *(_OWORD *)(v20 + 16) = 0;
        }
        else
        {
          v40 = nullptr;
          if ( v18 )
          {
            src = (void *)qvector_reserve(&src, 0, v18, 1);
            v40 = src;
          }
          *(_QWORD *)&v59 = v18;
          memmove(v40, v19, v18 - 1);
          *((char *)src + v18 - 1) = 0;
          v41 = v59;
          *(_QWORD *)v21 = &off_2B286C8;
          *(_QWORD *)(v21 + 8) = 0;
          *(_OWORD *)(v21 + 16) = 0;
          if ( v41 )
          {
            n = v41;
            v42 = (void *)qalloc_or_throw(v41);
            v43 = n;
            *(_QWORD *)(v21 + 8) = v42;
            v44 = src;
            *(_QWORD *)(v21 + 24) = v43;
            memcpy(v42, v44, v43);
            *(_QWORD *)(v21 + 16) = n;
          }
        }
        a10 = 0;
        v22 = src;
        *(_QWORD *)(v21 + 32) = 2;
        *(_QWORD *)v21 = &off_2B28728;
        v23 = v48;
        *(_QWORD *)(v21 + 40) = 0;
        *(_WORD *)(v21 + 68) = v23;
        v24 = v46;
        *(_BYTE *)(v21 + 76) = 0;
        *(_DWORD *)(v21 + 72) = v24;
        *(_QWORD *)(v21 + 80) = 0;
        *(_OWORD *)(v21 + 48) = 0;
        if ( v22 )
        {
          *(_QWORD *)&v59 = 0;
          qfree(v22);
        }
        src = nullptr;
        v59 = 0;
        *(_DWORD *)(v21 + 64) = v45.m128i_i32[0];
        if ( v18 != 1 )
        {
          v39 = nullptr;
          if ( v18 )
          {
            src = (void *)qvector_reserve(&src, 0, v18, 1);
            v39 = src;
          }
          v45.m128i_i64[0] = (__int64)&src;
          *(_QWORD *)&v59 = v18;
          memmove(v39, v19, v18 - 1);
          *((char *)src + v18 - 1) = 0;
        }
        sub_439B80((__int64 *)(v21 + 40), (__int64)v52, &src);
        if ( src )
        {
          *(_QWORD *)&v59 = 0;
          qfree(src);
        }
        v25 = v57.m128i_i64[0];
        v26 = ptr;
        if ( v57.m128i_i64[1] < (unsigned __int64)(v57.m128i_i64[0] + 1) )
        {
          ptr = (void *)qvector_reserve(p_ptr, ptr, v57.m128i_i64[0] + 1, 8);
          v26 = ptr;
          v25 = v57.m128i_i64[0];
        }
        v26[v25] = v21;
        ++v57.m128i_i64[0];
      }
      v27 = *(_DWORD *)(a1 + 48);
      if ( ++v10 < v27 )
      {
        v28 = (_QWORD *)(*(_QWORD *)(a1 + 112) + 8LL * v10);
        do
        {
          if ( *v28 != -1 )
            break;
          ++v10;
          ++v28;
        }
        while ( v10 < v27 );
      }
    }
    while ( v49 != v10 );
  }
  v29 = (__int64)v52[1];
  v30 = haystack;
  if ( v29 )
  {
    --v29;
    v30 = *v52;
  }
  sub_43BE20((__int64)&ptr, v29, (__int64)v30, *(int *)(v47 + 8));
  v31 = v55;
  v32 = ptr;
  ptr = nullptr;
  v33 = _mm_loadu_si128(&v57);
  v57 = 0;
  v34 = *(void **)v55;
  if ( *(_QWORD *)v55 )
  {
    v35 = v55;
    v45 = v33;
    *(_QWORD *)(v55 + 8) = 0;
    qfree(v34);
    v36 = _mm_load_si128(&v45);
    v37 = ptr;
    *(_QWORD *)v35 = v32;
    *(__m128i *)(v35 + 8) = v36;
    if ( v37 )
    {
      v57.m128i_i64[0] = 0;
      qfree(v37);
    }
  }
  else
  {
    *(_QWORD *)v55 = v32;
    *(__m128i *)(v31 + 8) = v33;
  }
  return v60 - __readfsqword(0x28u);
}
