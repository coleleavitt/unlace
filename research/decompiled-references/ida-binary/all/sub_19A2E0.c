unsigned __int64 __fastcall sub_19A2E0(int a1, __int64 a2, int a3, double a4)
{
  __int64 v4; // rcx
  const char *v5; // rbp
  size_t v6; // rax
  __int64 v7; // r13
  size_t v8; // rbx
  __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  void *v12; // rbx
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __int64 v15; // rax
  void *v16; // rdi
  __m128i v18; // xmm0
  __int64 v19; // rax
  const void *v20; // rbp
  __int64 *v21; // r12
  size_t v22; // rax
  size_t v23; // rbx
  void *v24; // rdi
  size_t v25; // r13
  __int64 v26; // rax
  __m128i v27; // [rsp+0h] [rbp-58h] BYREF
  void *v28; // [rsp+10h] [rbp-48h] BYREF
  __m128i v29; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  if ( !a1 )
  {
    v4 = xmmword_8CACB8;
    if ( a3 < (unsigned __int64)xmmword_8CACB8 )
    {
      v20 = *(const void **)(a2 + 16);
      v21 = (__int64 *)(qword_8CACB0 + 24LL * a3);
      if ( v20 && (v22 = strlen(*(const char **)(a2 + 16)), (v23 = v22) != 0) )
      {
        v24 = (void *)*v21;
        v25 = v22 + 1;
        if ( v21[2] < v22 + 1 )
        {
          v26 = qvector_reserve(v21, *v21, v22 + 1, 1);
          *v21 = v26;
          v24 = (void *)v26;
        }
        v21[1] = v25;
        memmove(v24, v20, v23);
        *(_BYTE *)(*v21 + v23) = 0;
      }
      else
      {
        v21[1] = 0;
      }
    }
    else
    {
      if ( a3 != (_QWORD)xmmword_8CACB8 )
      {
        if ( !under_debugger )
          interr(40499, a2, a3, xmmword_8CACB8, a4);
        BUG();
      }
      v5 = *(const char **)(a2 + 16);
      v28 = nullptr;
      v29 = 0;
      if ( v5 )
      {
        v6 = strlen(v5);
        v7 = v6 + 1;
        v8 = v6;
        v28 = (void *)qvector_reserve(&v28, 0, v6 + 1, 1);
        v29.m128i_i64[0] = v7;
        memmove(v28, v5, v8);
        *((_BYTE *)v28 + v8) = 0;
        v4 = xmmword_8CACB8;
      }
      v9 = qword_8CACB0;
      v10 = v4 + 1;
      if ( (unsigned __int64)&v28 < qword_8CACB0
        || (v11 = qword_8CACB0 + 24LL * *((_QWORD *)&xmmword_8CACB8 + 1), (unsigned __int64)&v28 >= v11) )
      {
        if ( *((_QWORD *)&xmmword_8CACB8 + 1) < v10 )
        {
          qword_8CACB0 = qvector_reserve(&qword_8CACB0, qword_8CACB0, v10, 24);
          v4 = xmmword_8CACB8;
          v9 = qword_8CACB0;
        }
        v18 = _mm_loadu_si128(&v29);
        v19 = v9 + 24 * v4;
        *(_QWORD *)v19 = v28;
        *(__m128i *)(v19 + 8) = v18;
        *(_QWORD *)&xmmword_8CACB8 = xmmword_8CACB8 + 1;
      }
      else
      {
        v12 = v28;
        v13 = _mm_loadl_epi64(&v29);
        v28 = nullptr;
        v14 = _mm_loadl_epi64((const __m128i *)&v29.m128i_u64[1]);
        v29 = 0;
        if ( *((_QWORD *)&xmmword_8CACB8 + 1) < v10 )
        {
          v27.m128i_i64[1] = v14.m128i_i64[0];
          v27.m128i_i64[0] = v13.m128i_i64[0];
          qword_8CACB0 = qvector_reserve(&qword_8CACB0, qword_8CACB0, v10, 24);
          v4 = xmmword_8CACB8;
          v9 = qword_8CACB0;
          v14 = _mm_loadl_epi64((const __m128i *)&v27.m128i_u64[1]);
          v13 = _mm_loadl_epi64(&v27);
        }
        v15 = v9 + 24 * v4;
        *(_QWORD *)v15 = v12;
        v16 = v28;
        *(__m128i *)(v15 + 8) = _mm_unpacklo_epi64(v13, v14);
        *(_QWORD *)&xmmword_8CACB8 = xmmword_8CACB8 + 1;
        if ( v16 )
        {
          v29.m128i_i64[0] = 0;
          qfree(v16, v9, v10, v4, v11);
        }
      }
    }
  }
  return v30 - __readfsqword(0x28u);
}
