unsigned __int64 __fastcall sub_3ABCE0(int a1, __int64 *a2)
{
  __int64 *std_dirtree; // rax
  __int64 *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  void *v9; // r13
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  __int64 v12; // rax
  void *v13; // rdi
  __m128i v14; // xmm0
  __int64 v15; // rax
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rbp
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // r12
  __int64 v25; // rax
  void *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __m128i v32; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v33; // [rsp+18h] [rbp-50h] BYREF
  void *ptr; // [rsp+20h] [rbp-48h] BYREF
  __m128i v35; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v36; // [rsp+38h] [rbp-30h]

  v36 = __readfsqword(0x28u);
  std_dirtree = (__int64 *)get_std_dirtree(5);
  v4 = std_dirtree;
  if ( !a2 )
  {
    v33 = 1;
    sub_3AAFC0(nullptr, &v33, std_dirtree, 0);
    return v33;
  }
  if ( (unsigned __int64)a2[2] <= 0xFFFF )
    *a2 = qvector_reserve(a2, *a2, &stru_10000, 24);
  v35 = 0;
  ptr = nullptr;
  ptr = (void *)qvector_reserve(&ptr, 0, 2, 1);
  v35.m128i_i64[0] = 2;
  *(_BYTE *)ptr = 47;
  *((_BYTE *)ptr + 1) = 0;
  v5 = a2[1];
  v6 = *a2;
  v7 = a2[2];
  v8 = v5 + 1;
  if ( (unsigned __int64)&ptr < *a2 || (unsigned __int64)&ptr >= v6 + 24 * v7 )
  {
    if ( v7 < v8 )
    {
      v23 = qvector_reserve(a2, v6, v5 + 1, 24);
      *a2 = v23;
      v6 = v23;
      v5 = a2[1];
    }
    v14 = _mm_loadu_si128(&v35);
    v15 = v6 + 24 * v5;
    *(_QWORD *)v15 = ptr;
    *(__m128i *)(v15 + 8) = v14;
    ++a2[1];
  }
  else
  {
    v9 = ptr;
    v10 = _mm_loadl_epi64(&v35);
    ptr = nullptr;
    v11 = _mm_loadl_epi64((const __m128i *)&v35.m128i_u64[1]);
    v35 = 0;
    if ( v7 < v8 )
    {
      v32.m128i_i64[1] = v11.m128i_i64[0];
      v32.m128i_i64[0] = v10.m128i_i64[0];
      v27 = qvector_reserve(a2, v6, v5 + 1, 24);
      *a2 = v27;
      v6 = v27;
      v5 = a2[1];
      v11 = _mm_loadl_epi64((const __m128i *)&v32.m128i_u64[1]);
      v10 = _mm_loadl_epi64(&v32);
    }
    v12 = v6 + 24 * v5;
    *(_QWORD *)v12 = v9;
    *(__m128i *)(v12 + 8) = _mm_unpacklo_epi64(v10, v11);
    v13 = ptr;
    ++a2[1];
    if ( v13 )
    {
      v35.m128i_i64[0] = 0;
      qfree(v13);
    }
  }
  v33 = 1;
  sub_3AAFC0(a2, &v33, v4, 0);
  v16 = v33;
  v17 = a2[1];
  if ( v33 != v17 )
  {
    ptr = nullptr;
    v35 = 0;
    if ( v33 < v17 )
    {
      v24 = v33;
      do
      {
        v25 = *a2 + 24 * v24;
        v26 = *(void **)v25;
        if ( *(_QWORD *)v25 )
        {
          *(_QWORD *)(v25 + 8) = 0;
          qfree(v26);
        }
        ++v24;
      }
      while ( v24 < v17 );
      a2[1] = v16;
      return v33;
    }
    else
    {
      v18 = *a2;
      v19 = a2[2];
      if ( (unsigned __int64)&ptr >= *a2 && (unsigned __int64)&ptr < v18 + 24 * v19 )
      {
        if ( v19 < v33 )
        {
          v31 = qvector_reserve(a2, v18, v33, 24);
          v17 = a2[1];
          *a2 = v31;
        }
        if ( v17 < v16 )
        {
          v20 = 24 * v17;
          do
          {
            ++v17;
            v21 = v20 + *a2;
            v20 += 24;
            *(_QWORD *)v21 = 0;
            *(_OWORD *)(v21 + 8) = 0;
          }
          while ( v16 != v17 );
        }
LABEL_22:
        a2[1] = v16;
        return v33;
      }
      if ( v19 < v33 )
      {
        v30 = qvector_reserve(a2, v18, v33, 24);
        v17 = a2[1];
        *a2 = v30;
      }
      if ( v17 >= v16 )
        goto LABEL_22;
      v28 = 24 * v17;
      do
      {
        ++v17;
        v29 = v28 + *a2;
        v28 += 24;
        *(_QWORD *)v29 = 0;
        *(_OWORD *)(v29 + 8) = 0;
      }
      while ( v16 != v17 );
      a2[1] = v16;
      return v33;
    }
  }
  return v17;
}
