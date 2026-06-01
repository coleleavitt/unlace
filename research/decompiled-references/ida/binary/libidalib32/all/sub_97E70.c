unsigned __int64 __fastcall sub_97E70(int a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  const char *v4; // rbp
  size_t v5; // rax
  __int64 v6; // r13
  size_t v7; // rbx
  __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  void *v10; // rbx
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  __int64 v13; // rax
  void *v14; // rdi
  __m128i v16; // xmm0
  __int64 v17; // rax
  const void *v18; // rbp
  __int64 v19; // r12
  size_t v20; // rax
  size_t v21; // rbx
  void *v22; // rdi
  size_t v23; // r13
  __int64 v24; // rax
  __m128i v25; // [rsp+0h] [rbp-58h] BYREF
  void *v26; // [rsp+10h] [rbp-48h] BYREF
  __m128i v27; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  if ( !a1 )
  {
    v3 = xmmword_2508C8;
    if ( a3 < (unsigned __int64)xmmword_2508C8 )
    {
      v18 = *(const void **)(a2 + 16);
      v19 = qword_2508C0 + 24LL * a3;
      if ( v18 && (v20 = strlen(*(const char **)(a2 + 16)), (v21 = v20) != 0) )
      {
        v22 = *(void **)v19;
        v23 = v20 + 1;
        if ( *(_QWORD *)(v19 + 16) < v20 + 1 )
        {
          v24 = qvector_reserve();
          *(_QWORD *)v19 = v24;
          v22 = (void *)v24;
        }
        *(_QWORD *)(v19 + 8) = v23;
        memmove(v22, v18, v21);
        *(_BYTE *)(*(_QWORD *)v19 + v21) = 0;
      }
      else
      {
        *(_QWORD *)(v19 + 8) = 0;
      }
    }
    else
    {
      if ( a3 != (_QWORD)xmmword_2508C8 )
      {
        if ( !under_debugger )
          interr();
        BUG();
      }
      v4 = *(const char **)(a2 + 16);
      v26 = nullptr;
      v27 = 0;
      if ( v4 )
      {
        v5 = strlen(v4);
        v6 = v5 + 1;
        v7 = v5;
        v26 = (void *)qvector_reserve();
        v27.m128i_i64[0] = v6;
        memmove(v26, v4, v7);
        *((_BYTE *)v26 + v7) = 0;
        v3 = xmmword_2508C8;
      }
      v8 = qword_2508C0;
      v9 = v3 + 1;
      if ( (unsigned __int64)&v26 < qword_2508C0
        || (unsigned __int64)&v26 >= qword_2508C0 + 24LL * *((_QWORD *)&xmmword_2508C8 + 1) )
      {
        if ( *((_QWORD *)&xmmword_2508C8 + 1) < v9 )
        {
          qword_2508C0 = qvector_reserve();
          v3 = xmmword_2508C8;
          v8 = qword_2508C0;
        }
        v16 = _mm_loadu_si128(&v27);
        v17 = v8 + 24 * v3;
        *(_QWORD *)v17 = v26;
        *(__m128i *)(v17 + 8) = v16;
        *(_QWORD *)&xmmword_2508C8 = xmmword_2508C8 + 1;
      }
      else
      {
        v10 = v26;
        v11 = _mm_loadl_epi64(&v27);
        v26 = nullptr;
        v12 = _mm_loadl_epi64((const __m128i *)&v27.m128i_u64[1]);
        v27 = 0;
        if ( *((_QWORD *)&xmmword_2508C8 + 1) < v9 )
        {
          v25.m128i_i64[1] = v12.m128i_i64[0];
          v25.m128i_i64[0] = v11.m128i_i64[0];
          qword_2508C0 = qvector_reserve();
          v3 = xmmword_2508C8;
          v8 = qword_2508C0;
          v12 = _mm_loadl_epi64((const __m128i *)&v25.m128i_u64[1]);
          v11 = _mm_loadl_epi64(&v25);
        }
        v13 = v8 + 24 * v3;
        *(_QWORD *)v13 = v10;
        v14 = v26;
        *(__m128i *)(v13 + 8) = _mm_unpacklo_epi64(v11, v12);
        *(_QWORD *)&xmmword_2508C8 = xmmword_2508C8 + 1;
        if ( v14 )
        {
          v27.m128i_i64[0] = 0;
          qfree();
        }
      }
    }
  }
  return v28 - __readfsqword(0x28u);
}

