__int64 __fastcall sub_48DC80(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // r13
  unsigned __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rbp
  __int64 i; // r15
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  __int64 *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  char *v16; // rdx
  __int64 v17; // rbp
  __int64 v18; // rbx
  char *v19; // rax
  void *v20; // rdi
  __m128i v22; // [rsp+0h] [rbp-78h] BYREF
  __int64 v23; // [rsp+10h] [rbp-68h]
  void **p_ptr; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v26; // [rsp+28h] [rbp-50h]
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 8);
  v27 = __readfsqword(0x28u);
  v26 = 0;
  ptr = nullptr;
  v3 = *(int *)(v1 + 28);
  if ( *(_DWORD *)(v1 + 28) )
  {
    v4 = *(int *)(v1 + 28);
    p_ptr = &ptr;
    sub_481440((__int64 *)&ptr, v4);
    v5 = 0;
    v23 = 8 * v3;
    if ( (int)v3 > 0 )
    {
      do
      {
        v6 = *(_QWORD *)(a1 + v5 + 56);
        v7 = 3 * v5;
        v8 = *(_QWORD *)(v6 + 48);
        for ( i = v8 + 80LL * *(_QWORD *)(v6 + 56); i != v8; ++v12[1] )
        {
          v10 = _mm_loadl_epi64((const __m128i *)v8);
          v11 = _mm_loadl_epi64((const __m128i *)(v8 + 8));
          v12 = (__int64 *)((char *)ptr + v7);
          v13 = *(_QWORD *)((char *)ptr + v7 + 8);
          v14 = *(_QWORD *)((char *)ptr + v7);
          if ( *(_QWORD *)((char *)ptr + v7 + 16) < (unsigned __int64)(v13 + 1) )
          {
            v22.m128i_i64[1] = v11.m128i_i64[0];
            v22.m128i_i64[0] = v10.m128i_i64[0];
            v15 = qvector_reserve((char *)ptr + v7, v14, v13 + 1, 16);
            *v12 = v15;
            v14 = v15;
            v13 = v12[1];
            v11 = _mm_loadl_epi64((const __m128i *)&v22.m128i_u64[1]);
            v10 = _mm_loadl_epi64(&v22);
          }
          v8 += 80;
          *(__m128i *)(v14 + 16 * v13) = _mm_unpacklo_epi64(v10, v11);
        }
        v5 += 8;
      }
      while ( v23 != v5 );
    }
  }
  else
  {
    p_ptr = &ptr;
  }
  sub_459830((__int64 *)(a1 + 152), p_ptr);
  v16 = (char *)ptr;
  if ( ptr )
  {
    v17 = v26;
    if ( (_QWORD)v26 )
    {
      v18 = 0;
      do
      {
        v19 = &v16[24 * v18];
        v20 = *(void **)v19;
        if ( *(_QWORD *)v19 )
        {
          *((_QWORD *)v19 + 1) = 0;
          qfree(v20);
          v16 = (char *)ptr;
        }
        ++v18;
      }
      while ( v17 != v18 );
    }
    *(_QWORD *)&v26 = 0;
    qfree(v16);
  }
  return merge_handler_perform_diff(a1);
}
