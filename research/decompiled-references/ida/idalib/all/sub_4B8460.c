unsigned __int64 __fastcall sub_4B8460(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // rdi
  __int64 i; // rax
  size_t v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rbx
  __m128i v12; // xmm0
  const char *v13; // rdx
  const char *v14; // rdx
  void *v15; // rbp
  __m128i v16; // xmm0
  size_t v17; // r14
  __int64 v18; // rax
  void *v19; // rax
  void *v20; // rax
  void *v22; // [rsp+0h] [rbp-148h]
  void *v23; // [rsp+8h] [rbp-140h]
  void *ptr; // [rsp+20h] [rbp-128h] BYREF
  __int128 v25; // [rsp+28h] [rbp-120h]
  __m128i v26; // [rsp+40h] [rbp-108h] BYREF
  __m128i v27; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-E8h]
  void *src[2]; // [rsp+68h] [rbp-E0h]
  size_t n[2]; // [rsp+78h] [rbp-D0h]
  void *v31; // [rsp+88h] [rbp-C0h]
  size_t v32[2]; // [rsp+90h] [rbp-B8h]
  __m128i v33; // [rsp+A0h] [rbp-A8h] BYREF
  __m128i v34; // [rsp+B0h] [rbp-98h] BYREF
  int v35; // [rsp+C0h] [rbp-88h]
  void *v36; // [rsp+C8h] [rbp-80h]
  void *v37; // [rsp+D0h] [rbp-78h]
  size_t v38; // [rsp+D8h] [rbp-70h]
  size_t v39; // [rsp+E0h] [rbp-68h]
  void *v40; // [rsp+E8h] [rbp-60h]
  size_t v41; // [rsp+F0h] [rbp-58h]
  size_t v42; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v43; // [rsp+108h] [rbp-40h]

  v4 = *a2;
  v43 = __readfsqword(0x28u);
  ptr = nullptr;
  v25 = 0;
  for ( i = netnode_qhashfirst(v4, &ptr, 72); i > 0; i = netnode_qhashnext(*a2, &ptr, v13, 72) )
  {
    v27.m128i_i64[0] = 0;
    v14 = haystack;
    v26 = 0;
    v27.m128i_i64[1] = -1;
    v28 = 0;
    v31 = nullptr;
    *(_OWORD *)src = 0;
    *(_OWORD *)n = 0;
    *(_OWORD *)v32 = 0;
    if ( (_QWORD)v25 )
      v14 = (const char *)ptr;
    if ( (unsigned __int8)navstack_t_get_current(a2, (__int64)&v26, v14) )
    {
      v15 = src[0];
      v33 = _mm_load_si128(&v26);
      v16 = _mm_load_si128(&v27);
      v35 = v28;
      v34 = v16;
      if ( src[0] )
        v15 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)src[0] + 16LL))(src[0]);
      v17 = n[0];
      v22 = nullptr;
      v39 = 0;
      if ( n[0] )
      {
        v22 = (void *)qalloc_or_throw(n[0]);
        v39 = v17;
        memcpy(v22, src[1], v17);
      }
      v7 = v32[0];
      v42 = 0;
      v23 = nullptr;
      if ( v32[0] )
      {
        v23 = (void *)qalloc_or_throw(v32[0]);
        v42 = v7;
        memcpy(v23, v31, v7);
      }
      v8 = a3[1];
      v9 = *a3;
      if ( a3[2] < (unsigned __int64)(v8 + 1) )
      {
        v18 = qvector_reserve(a3, v9, v8 + 1, 96);
        *a3 = v18;
        v8 = a3[1];
        v9 = v18;
      }
      v10 = v35;
      v11 = v9 + 96 * v8;
      *(__m128i *)v11 = _mm_load_si128(&v33);
      v12 = _mm_load_si128(&v34);
      *(_QWORD *)(v11 + 40) = 0;
      *(_DWORD *)(v11 + 32) = v10;
      *(__m128i *)(v11 + 16) = v12;
      if ( v15 )
        *(_QWORD *)(v11 + 40) = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v15 + 16LL))(v15);
      *(_QWORD *)(v11 + 48) = 0;
      *(_OWORD *)(v11 + 56) = 0;
      if ( v17 )
      {
        v20 = (void *)qalloc_or_throw(v17);
        *(_QWORD *)(v11 + 48) = v20;
        *(_QWORD *)(v11 + 64) = v17;
        memcpy(v20, v22, v17);
        *(_QWORD *)(v11 + 56) = v17;
      }
      *(_QWORD *)(v11 + 72) = 0;
      *(_OWORD *)(v11 + 80) = 0;
      if ( v7 )
      {
        v19 = (void *)qalloc_or_throw(v7);
        *(_QWORD *)(v11 + 72) = v19;
        *(_QWORD *)(v11 + 88) = v7;
        memcpy(v19, v23, v7);
        *(_QWORD *)(v11 + 80) = v7;
      }
      ++a3[1];
      v36 = v15;
      v37 = v22;
      v38 = v17;
      v40 = v23;
      v41 = v7;
      sub_4B66E0(&v33);
    }
    if ( src[0] )
    {
      qfree(src[0]);
      src[0] = nullptr;
    }
    if ( src[1] )
    {
      n[0] = 0;
      qfree(src[1]);
      src[1] = nullptr;
      n[1] = 0;
    }
    if ( v31 )
    {
      v32[0] = 0;
      qfree(v31);
    }
    if ( src[1] )
    {
      n[0] = 0;
      qfree(src[1]);
    }
    if ( src[0] )
      qfree(src[0]);
    v13 = haystack;
    if ( (_QWORD)v25 )
      v13 = (const char *)ptr;
  }
  if ( ptr )
  {
    *(_QWORD *)&v25 = 0;
    qfree(ptr);
  }
  return v43 - __readfsqword(0x28u);
}
