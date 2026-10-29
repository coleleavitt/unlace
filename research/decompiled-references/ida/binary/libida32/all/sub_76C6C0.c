unsigned __int64 __fastcall sub_76C6C0(_QWORD *a1, const char *a2, __int64 a3)
{
  __int32 v3; // r14d
  __int64 v5; // rbp
  size_t v6; // r15
  __int64 v8; // r13
  __int64 v9; // rax
  const char *v10; // rdi
  _QWORD *v11; // r8
  __int64 v12; // r13
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rdx
  __m128i v16; // xmm1
  __m128i v17; // xmm2
  __m128i *v18; // rbp
  __m128i v19; // xmm0
  __m128i *v20; // r12
  void *v22; // rax
  const char *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rbp
  __m128i *v27; // rdi
  __int64 v28; // rdx
  __int32 v29; // ecx
  __int64 v30; // rcx
  __m128i v31; // xmm0
  bool v32; // cf
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rbp
  __m128i *v36; // rdi
  __int64 v37; // xmm1_8
  __int64 v38; // rdx
  __int64 v39; // xmm2_8
  __int32 v40; // ecx
  __int64 v41; // rcx
  __m128i v42; // xmm0
  const char *v43; // rbp
  void *v44; // rax
  __m128i v45; // [rsp+0h] [rbp-78h] BYREF
  __int32 v46; // [rsp+10h] [rbp-68h] BYREF
  void *v47; // [rsp+18h] [rbp-60h]
  __m128i v48; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v49; // [rsp+38h] [rbp-40h]

  v3 = (int)a2;
  v5 = a1[12];
  v6 = *(_QWORD *)(a3 + 8);
  v49 = __readfsqword(0x28u);
  if ( !v5 )
    goto LABEL_7;
  v8 = a1[11] + 32 * v5 - 32;
  v9 = *(_QWORD *)(v8 + 16);
  if ( v6 )
  {
    a2 = *(const char **)a3;
    v10 = haystack;
    if ( v9 )
      v10 = *(const char **)(v8 + 8);
  }
  else
  {
    a2 = haystack;
    if ( !v9 )
      return v49 - __readfsqword(0x28u);
    v10 = *(const char **)(v8 + 8);
  }
  if ( !strcmp(v10, a2) )
    return v49 - __readfsqword(0x28u);
  if ( *(_DWORD *)v8 == v3 )
  {
    if ( v8 + 8 != a3 )
    {
      if ( v6 > 1 )
      {
        v43 = *(const char **)a3;
        v44 = *(void **)(v8 + 8);
        if ( *(_QWORD *)(v8 + 24) < v6 )
        {
          v44 = (void *)qvector_reserve(v8 + 8, *(_QWORD *)(v8 + 8), v6, 1);
          *(_QWORD *)(v8 + 8) = v44;
        }
        *(_QWORD *)(v8 + 16) = v6;
        memmove(v44, v43, v6 - 1);
        *(_BYTE *)(*(_QWORD *)(v8 + 8) + v6 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v8 + 16) = 0;
      }
    }
  }
  else
  {
LABEL_7:
    v46 = v3;
    v11 = a1 + 11;
    v12 = 0;
    v47 = nullptr;
    v48 = 0;
    if ( v6 )
    {
      v45.m128i_i64[0] = (__int64)(a1 + 11);
      v22 = (void *)qalloc_or_throw(v6, a2);
      v23 = *(const char **)a3;
      v48.m128i_i64[1] = v6;
      v47 = v22;
      v12 = (__int64)v22;
      memcpy(v22, v23, v6);
      v48.m128i_i64[0] = v6;
      v5 = a1[12];
      v11 = a1 + 11;
    }
    v13 = a1[11];
    v14 = a1[13];
    v15 = v5 + 1;
    if ( (unsigned __int64)&v46 < v13 || (unsigned __int64)&v46 >= v13 + 32 * v14 )
    {
      if ( v14 < v15 )
      {
        v24 = qvector_reserve(v11, 0, v15, 32);
        v25 = a1[12];
        v26 = a1[13];
        v13 = v24;
        a1[13] = v14;
        v27 = (__m128i *)a1[11];
        v28 = v25 - 1;
        if ( v28 >= 0 )
        {
          do
          {
            v29 = v27->m128i_i32[0];
            v24 += 32;
            v27 += 2;
            *(_DWORD *)(v24 - 32) = v29;
            v30 = v27[-2].m128i_i64[1];
            v31 = _mm_loadu_si128(v27 - 1);
            v27[-2].m128i_i64[1] = 0;
            *(_QWORD *)(v24 - 24) = v30;
            *(__m128i *)(v24 - 16) = v31;
            v27[-1].m128i_i64[1] = 0;
            v32 = v28-- == 0;
          }
          while ( !v32 );
          v27 = (__m128i *)a1[11];
        }
        qfree(v27);
        a1[13] = v26;
        v5 = a1[12];
        a1[11] = v13;
      }
      v19 = _mm_load_si128(&v48);
      v20 = (__m128i *)(32 * v5 + v13);
      v20->m128i_i32[0] = v3;
      v20->m128i_i64[1] = v12;
      v20[1] = v19;
    }
    else
    {
      v16 = _mm_loadl_epi64(&v48);
      v17 = _mm_loadl_epi64((const __m128i *)&v48.m128i_u64[1]);
      v47 = nullptr;
      v48 = 0;
      if ( v14 < v15 )
      {
        v45.m128i_i64[0] = v16.m128i_i64[0];
        v45.m128i_i64[1] = v17.m128i_i64[0];
        v33 = qvector_reserve(v11, 0, v15, 32);
        v34 = a1[12];
        v35 = a1[13];
        v13 = v33;
        a1[13] = v14;
        v36 = (__m128i *)a1[11];
        v37 = v45.m128i_i64[0];
        v38 = v34 - 1;
        v39 = v45.m128i_i64[1];
        if ( v38 >= 0 )
        {
          do
          {
            v40 = v36->m128i_i32[0];
            v33 += 32;
            v36 += 2;
            *(_DWORD *)(v33 - 32) = v40;
            v41 = v36[-2].m128i_i64[1];
            v42 = _mm_loadu_si128(v36 - 1);
            v36[-2].m128i_i64[1] = 0;
            *(_QWORD *)(v33 - 24) = v41;
            *(__m128i *)(v33 - 16) = v42;
            v36[-1].m128i_i64[1] = 0;
            v32 = v38-- == 0;
          }
          while ( !v32 );
          v36 = (__m128i *)a1[11];
        }
        v45.m128i_i64[1] = v39;
        v45.m128i_i64[0] = v37;
        qfree(v36);
        a1[13] = v35;
        v17 = _mm_loadl_epi64((const __m128i *)&v45.m128i_u64[1]);
        v5 = a1[12];
        v16 = _mm_loadl_epi64(&v45);
        a1[11] = v13;
      }
      v18 = (__m128i *)(v13 + 32 * v5);
      v18->m128i_i32[0] = v3;
      v18->m128i_i64[1] = v12;
      v18[1] = _mm_unpacklo_epi64(v16, v17);
    }
    ++a1[12];
  }
  return v49 - __readfsqword(0x28u);
}

