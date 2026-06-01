unsigned __int64 __fastcall sub_4A2EF0(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 i; // rax
  size_t v7; // r13
  __int64 v8; // rdx
  const char *v9; // rsi
  int v10; // eax
  char *v11; // rbx
  __m128i v12; // xmm0
  const char *v13; // rdx
  const char *v14; // rdx
  __m128i *v15; // rsi
  void *v16; // rbp
  __m128i v17; // xmm0
  size_t v18; // r14
  char *v19; // rax
  __int64 v20; // rax
  void *v21; // rax
  void *v22; // rax
  const char *v24; // [rsp+8h] [rbp-140h]
  void *v25; // [rsp+10h] [rbp-138h]
  void *ptr; // [rsp+20h] [rbp-128h] BYREF
  __int128 v27; // [rsp+28h] [rbp-120h]
  __m128i v28; // [rsp+40h] [rbp-108h] BYREF
  __m128i v29; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-E8h]
  void *src[2]; // [rsp+68h] [rbp-E0h]
  size_t n[2]; // [rsp+78h] [rbp-D0h]
  void *v33; // [rsp+88h] [rbp-C0h]
  size_t v34[2]; // [rsp+90h] [rbp-B8h]
  __m128i v35; // [rsp+A0h] [rbp-A8h] BYREF
  __m128i v36; // [rsp+B0h] [rbp-98h] BYREF
  int v37; // [rsp+C0h] [rbp-88h]
  void *v38; // [rsp+C8h] [rbp-80h]
  const char *v39; // [rsp+D0h] [rbp-78h]
  size_t v40; // [rsp+D8h] [rbp-70h]
  size_t v41; // [rsp+E0h] [rbp-68h]
  void *v42; // [rsp+E8h] [rbp-60h]
  size_t v43; // [rsp+F0h] [rbp-58h]
  size_t v44; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v45; // [rsp+108h] [rbp-40h]

  v4 = *a2;
  v45 = __readfsqword(0x28u);
  ptr = nullptr;
  v27 = 0;
  for ( i = netnode_qhashfirst(v4, &ptr, 72); i > 0; i = netnode_qhashnext(*a2, &ptr, v13, 72) )
  {
    v29.m128i_i64[0] = 0;
    v14 = haystack;
    v28 = 0;
    v29.m128i_i64[1] = -1;
    v30 = 0;
    v33 = nullptr;
    *(_OWORD *)src = 0;
    *(_OWORD *)n = 0;
    *(_OWORD *)v34 = 0;
    if ( (_QWORD)v27 )
      v14 = (const char *)ptr;
    v15 = &v28;
    if ( (unsigned __int8)navstack_t_get_current(a2, &v28, v14) )
    {
      v16 = src[0];
      v35 = _mm_load_si128(&v28);
      v17 = _mm_load_si128(&v29);
      v37 = v30;
      v36 = v17;
      if ( src[0] )
        v16 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)src[0] + 16LL))(src[0]);
      v24 = nullptr;
      v18 = n[0];
      v41 = 0;
      if ( n[0] )
      {
        v19 = (char *)qalloc_or_throw(n[0], v28.m128i_i8);
        v15 = (__m128i *)src[1];
        v24 = v19;
        v41 = v18;
        memcpy(v19, src[1], v18);
      }
      v7 = v34[0];
      v44 = 0;
      v25 = nullptr;
      if ( v34[0] )
      {
        v25 = (void *)qalloc_or_throw(v34[0], v15->m128i_i8);
        v44 = v7;
        memcpy(v25, v33, v7);
      }
      v8 = *(_QWORD *)(a3 + 8);
      v9 = *(const char **)a3;
      if ( *(_QWORD *)(a3 + 16) < (unsigned __int64)(v8 + 1) )
      {
        v20 = qvector_reserve(a3, v9, v8 + 1, 96);
        *(_QWORD *)a3 = v20;
        v8 = *(_QWORD *)(a3 + 8);
        v9 = (const char *)v20;
      }
      v10 = v37;
      v11 = (char *)&v9[96 * v8];
      *(__m128i *)v11 = _mm_load_si128(&v35);
      v12 = _mm_load_si128(&v36);
      *((_QWORD *)v11 + 5) = 0;
      *((_DWORD *)v11 + 8) = v10;
      *((__m128i *)v11 + 1) = v12;
      if ( v16 )
        *((_QWORD *)v11 + 5) = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v16 + 16LL))(v16);
      *((_QWORD *)v11 + 6) = 0;
      *(_OWORD *)(v11 + 56) = 0;
      if ( v18 )
      {
        v22 = (void *)qalloc_or_throw(v18, v9);
        *((_QWORD *)v11 + 6) = v22;
        v9 = v24;
        *((_QWORD *)v11 + 8) = v18;
        memcpy(v22, v24, v18);
        *((_QWORD *)v11 + 7) = v18;
      }
      *((_QWORD *)v11 + 9) = 0;
      *((_OWORD *)v11 + 5) = 0;
      if ( v7 )
      {
        v21 = (void *)qalloc_or_throw(v7, v9);
        *((_QWORD *)v11 + 9) = v21;
        *((_QWORD *)v11 + 11) = v7;
        memcpy(v21, v25, v7);
        *((_QWORD *)v11 + 10) = v7;
      }
      ++*(_QWORD *)(a3 + 8);
      v38 = v16;
      v39 = v24;
      v40 = v18;
      v42 = v25;
      v43 = v7;
      sub_4A11A0(&v35);
    }
    sub_4A11A0(&v28);
    v13 = haystack;
    if ( (_QWORD)v27 )
      v13 = (const char *)ptr;
  }
  if ( ptr )
  {
    *(_QWORD *)&v27 = 0;
    qfree(ptr);
  }
  return v45 - __readfsqword(0x28u);
}

