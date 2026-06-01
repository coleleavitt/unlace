unsigned __int64 __fastcall sub_53D360(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 named_type; // rax
  const char *v6; // rbx
  void *v7; // r12
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  __int64 v10; // rax
  void *v11; // rdi
  size_t v12; // rax
  __int64 v13; // r15
  size_t v14; // r12
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  __m128i v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  _QWORD *v24; // [rsp+8h] [rbp-70h]
  __m128i v25; // [rsp+10h] [rbp-68h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __m128i v27; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 120);
  v28 = __readfsqword(0x28u);
  v24 = a2 + 7;
  named_type = first_named_type(v3, 1);
  if ( named_type )
  {
    v6 = (const char *)named_type;
    do
    {
      ptr = nullptr;
      v27 = 0;
      v12 = strlen(v6);
      v13 = v12 + 1;
      v14 = v12;
      ptr = (void *)qvector_reserve(&ptr, 0, v12 + 1, 1);
      v27.m128i_i64[0] = v13;
      memmove(ptr, v6, v14);
      *((_BYTE *)ptr + v14) = 0;
      v23 = a2[8];
      v22 = a2[7];
      v15 = a2[9];
      v16 = v23 + 1;
      if ( (unsigned __int64)&ptr < v22 || (unsigned __int64)&ptr >= v22 + 24 * v15 )
      {
        if ( v15 < v16 )
        {
          v19 = qvector_reserve(v24, v22, v23 + 1, 24);
          a2[7] = v19;
          v22 = v19;
          v23 = a2[8];
        }
        v17 = _mm_loadu_si128(&v27);
        v18 = v22 + 24 * v23;
        *(_QWORD *)v18 = ptr;
        *(__m128i *)(v18 + 8) = v17;
        ++a2[8];
      }
      else
      {
        v7 = ptr;
        v8 = _mm_loadl_epi64(&v27);
        ptr = nullptr;
        v9 = _mm_loadl_epi64((const __m128i *)&v27.m128i_u64[1]);
        v27 = 0;
        if ( v15 < v16 )
        {
          v25.m128i_i64[1] = v9.m128i_i64[0];
          v25.m128i_i64[0] = v8.m128i_i64[0];
          v21 = qvector_reserve(v24, v22, v23 + 1, 24);
          a2[7] = v21;
          v22 = v21;
          v9 = _mm_loadl_epi64((const __m128i *)&v25.m128i_u64[1]);
          v23 = a2[8];
          v8 = _mm_loadl_epi64(&v25);
        }
        v10 = v22 + 24 * v23;
        *(_QWORD *)v10 = v7;
        v11 = ptr;
        *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64(v8, v9);
        ++a2[8];
        if ( v11 )
        {
          v27.m128i_i64[0] = 0;
          qfree(v11);
        }
      }
      v6 = (const char *)next_named_type(*(_QWORD *)(a1 + 120), v6, 1);
    }
    while ( v6 );
  }
  return v28 - __readfsqword(0x28u);
}

