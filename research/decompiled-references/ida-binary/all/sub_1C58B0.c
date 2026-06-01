unsigned __int64 __fastcall sub_1C58B0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r14
  __m128i v12; // xmm0
  __int64 v13; // r15
  __m128i v14; // xmm1
  __int64 v15; // rdx
  const char *v16; // rsi
  char *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  size_t v21; // r15
  const void *v22; // r9
  __int64 v23; // rsi
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __m128i v26; // xmm0
  __int64 v27; // rax
  void *v28; // rdi
  __int64 v29; // r10
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // [rsp+8h] [rbp-70h]
  __m128i v34; // [rsp+10h] [rbp-68h] BYREF
  __int64 v35; // [rsp+20h] [rbp-58h] BYREF
  __m128i v36; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+38h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v33 = a2 + 104;
  v3 = sub_4DF1E0(a2 + 104, a3);
  if ( v3 )
  {
    v4 = a1[1];
    v5 = v3;
    v6 = *a1;
    if ( a1[2] < (unsigned __int64)(v4 + 1) )
    {
      v32 = qvector_reserve(a1, v6, v4 + 1, 40);
      v4 = a1[1];
      *a1 = v32;
      v6 = v32;
    }
    v7 = v6 + 40 * v4;
    *(_QWORD *)v7 = 0;
    *(_QWORD *)(v7 + 24) = 12;
    *(_QWORD *)(v7 + 32) = -1;
    *(_OWORD *)(v7 + 8) = 0;
    ++a1[1];
    v8 = *(_QWORD *)(v5 + 8);
    if ( *(_QWORD *)(v7 + 16) < v8 )
    {
      *(_QWORD *)v7 = qvector_reserve(v7, *(_QWORD *)v7, v8, 24);
      v8 = *(_QWORD *)(v5 + 8);
    }
    v9 = *(_QWORD *)v5;
    v10 = *(_QWORD *)v5 + 24 * v8;
    if ( v10 != *(_QWORD *)v5 )
    {
      do
      {
        v19 = sub_4DFD60(v33, v9, 0);
        v35 = 0;
        v21 = v19;
        v22 = (const void *)v20;
        v36 = 0;
        if ( v19 )
        {
          v28 = nullptr;
          v29 = v19 + 1;
          if ( v19 != -1 )
          {
            v34.m128i_i64[1] = v20;
            v34.m128i_i64[0] = v19 + 1;
            v35 = qvector_reserve(&v35, 0, v19 + 1, 1);
            v22 = (const void *)v34.m128i_i64[1];
            v28 = (void *)v35;
            v29 = v34.m128i_i64[0];
          }
          v36.m128i_i64[0] = v29;
          memmove(v28, v22, v21);
          *(_BYTE *)(v35 + v21) = 0;
        }
        v23 = *(_QWORD *)v7;
        v24 = *(_QWORD *)(v7 + 16);
        if ( (unsigned __int64)&v35 < *(_QWORD *)v7 || (unsigned __int64)&v35 >= v23 + 24 * v24 )
        {
          v25 = *(_QWORD *)(v7 + 8);
          if ( v24 < v25 + 1 )
          {
            v30 = qvector_reserve(v7, v23, v25 + 1, 24);
            *(_QWORD *)v7 = v30;
            v23 = v30;
            v25 = *(_QWORD *)(v7 + 8);
          }
          v26 = _mm_loadu_si128(&v36);
          v27 = v23 + 24 * v25;
          v36 = 0;
          *(_QWORD *)v27 = v35;
          *(__m128i *)(v27 + 8) = v26;
          ++*(_QWORD *)(v7 + 8);
        }
        else
        {
          v12 = _mm_loadl_epi64(&v36);
          v13 = v35;
          v35 = 0;
          v14 = _mm_loadl_epi64((const __m128i *)&v36.m128i_u64[1]);
          v36 = 0;
          v15 = *(_QWORD *)(v7 + 8);
          v16 = *(const char **)v7;
          if ( *(_QWORD *)(v7 + 16) < (unsigned __int64)(v15 + 1) )
          {
            v34.m128i_i64[1] = v14.m128i_i64[0];
            v34.m128i_i64[0] = v12.m128i_i64[0];
            v31 = qvector_reserve(v7, v16, v15 + 1, 24);
            *(_QWORD *)v7 = v31;
            v15 = *(_QWORD *)(v7 + 8);
            v16 = (const char *)v31;
            v14 = _mm_loadl_epi64((const __m128i *)&v34.m128i_u64[1]);
            v12 = _mm_loadl_epi64(&v34);
          }
          v17 = (char *)&v16[24 * v15];
          *(_QWORD *)v17 = v13;
          v18 = v35;
          *(__m128i *)(v17 + 8) = _mm_unpacklo_epi64(v12, v14);
          ++*(_QWORD *)(v7 + 8);
          if ( v18 )
          {
            v36.m128i_i64[0] = 0;
            qfree(v18, v16);
          }
        }
        v9 += 24;
      }
      while ( v10 != v9 );
    }
    *(_QWORD *)(v7 + 24) = *(_QWORD *)(v5 + 104);
    *(_DWORD *)(v7 + 32) = *(_DWORD *)(v5 + 112);
    *(_DWORD *)(v7 + 36) = *(_DWORD *)(v5 + 116);
  }
  return v37 - __readfsqword(0x28u);
}
