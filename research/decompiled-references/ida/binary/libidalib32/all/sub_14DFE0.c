unsigned __int64 __fastcall sub_14DFE0(__int64 a1)
{
  char *v2; // r15
  void *v3; // r14
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __int64 v6; // rax
  void *v7; // rdi
  const char *v8; // r13
  size_t v9; // rax
  __int64 v10; // r12
  size_t v11; // r14
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  __m128i v14; // xmm0
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  __m128i v21; // [rsp+8h] [rbp-68h] BYREF
  void *v22; // [rsp+18h] [rbp-58h] BYREF
  __m128i v23; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+30h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = qvector_reserve();
  v2 = (char *)&off_2502E0;
  do
  {
    while ( 1 )
    {
      v22 = nullptr;
      v8 = *(const char **)v2;
      v23 = 0;
      if ( v8 )
      {
        v9 = strlen(v8);
        v10 = v9 + 1;
        v11 = v9;
        v22 = (void *)qvector_reserve();
        v23.m128i_i64[0] = v10;
        memmove(v22, v8, v11);
        *((_BYTE *)v22 + v11) = 0;
      }
      v20 = *(_QWORD *)(a1 + 40);
      v19 = *(_QWORD *)(a1 + 32);
      v12 = *(_QWORD *)(a1 + 48);
      v13 = v20 + 1;
      if ( (unsigned __int64)&v22 < v19 || (unsigned __int64)&v22 >= v19 + 24 * v12 )
        break;
      v3 = v22;
      v4 = _mm_loadl_epi64(&v23);
      v22 = nullptr;
      v5 = _mm_loadl_epi64((const __m128i *)&v23.m128i_u64[1]);
      v23 = 0;
      if ( v12 < v13 )
      {
        v21.m128i_i64[1] = v5.m128i_i64[0];
        v21.m128i_i64[0] = v4.m128i_i64[0];
        v18 = qvector_reserve();
        *(_QWORD *)(a1 + 32) = v18;
        v19 = v18;
        v5 = _mm_loadl_epi64((const __m128i *)&v21.m128i_u64[1]);
        v20 = *(_QWORD *)(a1 + 40);
        v4 = _mm_loadl_epi64(&v21);
      }
      v6 = v19 + 24 * v20;
      *(_QWORD *)v6 = v3;
      v7 = v22;
      *(__m128i *)(v6 + 8) = _mm_unpacklo_epi64(v4, v5);
      ++*(_QWORD *)(a1 + 40);
      if ( v7 )
      {
        v23.m128i_i64[0] = 0;
        qfree();
      }
      v2 += 8;
      if ( &byte_250308 == v2 )
        return v24 - __readfsqword(0x28u);
    }
    if ( v12 < v13 )
    {
      v17 = qvector_reserve();
      *(_QWORD *)(a1 + 32) = v17;
      v19 = v17;
      v20 = *(_QWORD *)(a1 + 40);
    }
    v14 = _mm_loadu_si128(&v23);
    v2 += 8;
    v15 = v19 + 24 * v20;
    *(_QWORD *)v15 = v22;
    *(__m128i *)(v15 + 8) = v14;
    ++*(_QWORD *)(a1 + 40);
  }
  while ( &byte_250308 != v2 );
  return v24 - __readfsqword(0x28u);
}

