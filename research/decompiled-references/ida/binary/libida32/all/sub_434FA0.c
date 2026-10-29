unsigned __int64 __fastcall sub_434FA0(
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
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // r12
  char *v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rbx
  int v21; // eax
  void *v22; // rdi
  __int64 v23; // rax
  _QWORD *v24; // rsi
  unsigned int v25; // edx
  _DWORD *v26; // rax
  __int64 v27; // rdx
  const char *v28; // rax
  __int64 v29; // rax
  void *v30; // rbx
  __m128i v31; // xmm0
  void *v32; // rdi
  __int64 v33; // r14
  __m128i v34; // xmm0
  void *v35; // rdi
  void *v37; // rdi
  void *v38; // rdi
  size_t v39; // rdx
  void *v40; // rax
  size_t v41; // rdx
  void *v42; // rsi
  __m128i v43; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+10h] [rbp-B8h]
  int v45; // [rsp+18h] [rbp-B0h]
  int v46; // [rsp+1Ch] [rbp-ACh]
  unsigned __int64 *v47; // [rsp+20h] [rbp-A8h]
  const __m128i **v48; // [rsp+28h] [rbp-A0h]
  const char **v49; // [rsp+30h] [rbp-98h]
  size_t n; // [rsp+38h] [rbp-90h]
  void **p_ptr; // [rsp+40h] [rbp-88h]
  __int64 v52; // [rsp+48h] [rbp-80h]
  void *ptr; // [rsp+50h] [rbp-78h] BYREF
  __m128i v54; // [rsp+58h] [rbp-70h] BYREF
  void *src; // [rsp+70h] [rbp-58h] BYREF
  __int128 v56; // [rsp+78h] [rbp-50h]
  unsigned __int64 v57; // [rsp+88h] [rbp-40h]

  v10 = 0;
  v52 = a2;
  v49 = a4;
  v44 = a5;
  v57 = __readfsqword(0x28u);
  v48 = (const __m128i **)(a3 + 24);
  v12 = *(_DWORD *)(a1 + 48);
  v47 = (unsigned __int64 *)(a3 + 48);
  ptr = nullptr;
  v46 = v12;
  p_ptr = &ptr;
  v54 = 0;
  if ( v12 )
  {
    do
    {
      v13 = 0;
      *(double *)v13.m128_u64 = (double)*(int *)(v44 + 4);
      v14 = *(unsigned int *)(*(_QWORD *)(a1 + 224) + 4LL * v10);
      v15 = *(_QWORD *)(a1 + 192);
      v45 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL * v10);
      v16 = *(_QWORD *)(v15 + 8 * v14);
      v17 = *(_QWORD *)(v15 + 8LL * (unsigned int)(v14 + 1)) - v16;
      v18 = (char *)(*(_QWORD *)(a1 + 144) + v16);
      v43.m128i_i32[0] = (int)sub_434720(v47, v48, v18, &v18[v17 - 1], a5, a6, v13, a8, a9, a10);
      if ( v43.m128i_i32[0] >= *(_DWORD *)(v44 + 4) )
      {
        v19 = operator new(0x48u);
        src = nullptr;
        a9 = 0;
        v20 = v19;
        v56 = 0;
        if ( v17 == 1 )
        {
          *(_QWORD *)(v19 + 8) = 0;
          *(_OWORD *)(v19 + 16) = 0;
        }
        else
        {
          v38 = nullptr;
          if ( v17 )
          {
            src = (void *)qvector_reserve(&src, 0, v17, 1);
            v38 = src;
          }
          *(_QWORD *)&v56 = v17;
          memmove(v38, v18, v17 - 1);
          *((char *)src + v17 - 1) = 0;
          v39 = v56;
          *(_QWORD *)v20 = &off_2AFE708;
          *(_QWORD *)(v20 + 8) = 0;
          *(_OWORD *)(v20 + 16) = 0;
          if ( v39 )
          {
            n = v39;
            v40 = (void *)qalloc_or_throw(v39, v18);
            v41 = n;
            v42 = src;
            *(_QWORD *)(v20 + 8) = v40;
            *(_QWORD *)(v20 + 24) = v41;
            memcpy(v40, v42, v41);
            *(_QWORD *)(v20 + 16) = n;
          }
        }
        v21 = v45;
        v22 = src;
        a10 = 0;
        *(_QWORD *)(v20 + 32) = 1;
        *(_QWORD *)(v20 + 40) = 0;
        *(_DWORD *)(v20 + 68) = v21;
        *(_QWORD *)v20 = &off_2AFE738;
        *(_OWORD *)(v20 + 48) = 0;
        if ( v22 )
        {
          *(_QWORD *)&v56 = 0;
          qfree(v22);
        }
        src = nullptr;
        v56 = 0;
        *(_DWORD *)(v20 + 64) = v43.m128i_i32[0];
        if ( v17 != 1 )
        {
          v37 = nullptr;
          if ( v17 )
          {
            src = (void *)qvector_reserve(&src, 0, v17, 1);
            v37 = src;
          }
          v43.m128i_i64[0] = (__int64)&src;
          *(_QWORD *)&v56 = v17;
          memmove(v37, v18, v17 - 1);
          *((char *)src + v17 - 1) = 0;
        }
        sub_425C80((__int64 *)(v20 + 40), (__int64)v49, &src);
        if ( src )
        {
          *(_QWORD *)&v56 = 0;
          qfree(src);
        }
        v23 = v54.m128i_i64[0];
        v24 = ptr;
        if ( v54.m128i_i64[1] < (unsigned __int64)(v54.m128i_i64[0] + 1) )
        {
          ptr = (void *)qvector_reserve(p_ptr, ptr, v54.m128i_i64[0] + 1, 8);
          v24 = ptr;
          v23 = v54.m128i_i64[0];
        }
        v24[v23] = v20;
        ++v54.m128i_i64[0];
      }
      v25 = *(_DWORD *)(a1 + 48);
      if ( ++v10 < v25 )
      {
        v26 = (_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL * v10);
        do
        {
          if ( *v26 != -1 )
            break;
          ++v10;
          ++v26;
        }
        while ( v10 < v25 );
      }
    }
    while ( v46 != v10 );
  }
  v27 = (__int64)v49[1];
  v28 = haystack;
  if ( v27 )
  {
    --v27;
    v28 = *v49;
  }
  sub_427F20((__int64)&ptr, v27, (__int64)v28, *(int *)(v44 + 8));
  v29 = v52;
  v30 = ptr;
  ptr = nullptr;
  v31 = _mm_loadu_si128(&v54);
  v54 = 0;
  v32 = *(void **)v52;
  if ( *(_QWORD *)v52 )
  {
    v33 = v52;
    v43 = v31;
    *(_QWORD *)(v52 + 8) = 0;
    qfree(v32);
    v34 = _mm_load_si128(&v43);
    v35 = ptr;
    *(_QWORD *)v33 = v30;
    *(__m128i *)(v33 + 8) = v34;
    if ( v35 )
    {
      v54.m128i_i64[0] = 0;
      qfree(v35);
    }
  }
  else
  {
    *(_QWORD *)v52 = v30;
    *(__m128i *)(v29 + 8) = v31;
  }
  return v57 - __readfsqword(0x28u);
}

