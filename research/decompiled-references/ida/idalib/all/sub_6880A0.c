__int64 __fastcall sub_6880A0(__int64 a1)
{
  const char *v1; // rbp
  bool v2; // zf
  _QWORD *v3; // rbx
  size_t v4; // rax
  __int64 v5; // r15
  size_t v6; // r13
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // rax
  __m128i v13; // xmm0
  void *v14; // rbp
  __m128i v15; // xmm1
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rax
  void *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  __m128i v22; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __m128i v24; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v1 = haystack;
  v2 = *(_QWORD *)(a1 + 16) == 0;
  v25 = __readfsqword(0x28u);
  v3 = *(_QWORD **)(qword_2CCB598 + 1776);
  if ( !v2 )
    v1 = *(const char **)(a1 + 8);
  ptr = nullptr;
  v24 = 0;
  if ( v1 )
  {
    v4 = strlen(v1);
    v5 = v4 + 1;
    v6 = v4;
    ptr = (void *)qvector_reserve(&ptr, 0, v4 + 1, 1);
    v24.m128i_i64[0] = v5;
    memmove(ptr, v1, v6);
    *((_BYTE *)ptr + v6) = 0;
  }
  v7 = v3[1];
  v8 = v3[3];
  if ( (unsigned __int64)&ptr >= v7 && (unsigned __int64)&ptr < v7 + 24 * v8 )
  {
    v13 = _mm_loadl_epi64(&v24);
    v14 = ptr;
    ptr = nullptr;
    v15 = _mm_loadl_epi64((const __m128i *)&v24.m128i_u64[1]);
    v24 = 0;
    v16 = v3[2];
    v17 = v3[1];
    if ( v8 < v16 + 1 )
    {
      v22.m128i_i64[1] = v15.m128i_i64[0];
      v22.m128i_i64[0] = v13.m128i_i64[0];
      v21 = qvector_reserve(v3 + 1, v17, v16 + 1, 24);
      v3[1] = v21;
      v16 = v3[2];
      v17 = v21;
      v15 = _mm_loadl_epi64((const __m128i *)&v22.m128i_u64[1]);
      v13 = _mm_loadl_epi64(&v22);
    }
    v18 = v17 + 24 * v16;
    *(_QWORD *)v18 = v14;
    v19 = ptr;
    *(__m128i *)(v18 + 8) = _mm_unpacklo_epi64(v13, v15);
    ++v3[2];
    if ( v19 )
    {
      v24.m128i_i64[0] = 0;
      qfree(v19);
    }
  }
  else
  {
    v9 = v3[2];
    if ( v8 < v9 + 1 )
    {
      v20 = qvector_reserve(v3 + 1, v7, v9 + 1, 24);
      v3[1] = v20;
      v7 = v20;
      v9 = v3[2];
    }
    v10 = _mm_loadu_si128(&v24);
    v24.m128i_i64[1] = 0;
    v11 = v7 + 24 * v9;
    *(_QWORD *)v11 = ptr;
    *(__m128i *)(v11 + 8) = v10;
    ++v3[2];
  }
  return 0;
}
