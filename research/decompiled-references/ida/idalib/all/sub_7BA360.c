unsigned __int64 __fastcall sub_7BA360(__int64 *a1, const char *a2, char a3)
{
  size_t v5; // rax
  __int64 v6; // r15
  size_t v7; // r13
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  __m128i v12; // xmm0
  __int64 v13; // rax
  void *v15; // rbp
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  __int64 v18; // rax
  void *v19; // rdi
  __int64 *v20; // rbp
  __int64 v21; // rbx
  __int64 v22; // rsi
  unsigned __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __m128i v28; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __m128i v30; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v30 = 0;
  ptr = nullptr;
  if ( a2 )
  {
    v5 = strlen(a2);
    v6 = v5 + 1;
    v7 = v5;
    ptr = (void *)qvector_reserve(&ptr, 0, v5 + 1, 1);
    v30.m128i_i64[0] = v6;
    memmove(ptr, a2, v7);
    *((_BYTE *)ptr + v7) = 0;
  }
  v8 = a1[1];
  v9 = *a1;
  v10 = a1[2];
  v11 = v8 + 1;
  if ( (unsigned __int64)&ptr >= *a1 && (unsigned __int64)&ptr < v9 + 24 * v10 )
  {
    v15 = ptr;
    v16 = _mm_loadl_epi64(&v30);
    ptr = nullptr;
    v17 = _mm_loadl_epi64((const __m128i *)&v30.m128i_u64[1]);
    v30 = 0;
    if ( v10 < v11 )
    {
      v28.m128i_i64[1] = v17.m128i_i64[0];
      v28.m128i_i64[0] = v16.m128i_i64[0];
      v27 = qvector_reserve(a1, v9, v8 + 1, 24);
      *a1 = v27;
      v9 = v27;
      v8 = a1[1];
      v17 = _mm_loadl_epi64((const __m128i *)&v28.m128i_u64[1]);
      v16 = _mm_loadl_epi64(&v28);
    }
    v18 = v9 + 24 * v8;
    *(_QWORD *)v18 = v15;
    v19 = ptr;
    *(__m128i *)(v18 + 8) = _mm_unpacklo_epi64(v16, v17);
    ++a1[1];
    if ( v19 )
    {
      v30.m128i_i64[0] = 0;
      qfree(v19);
      if ( !a3 )
        return v31 - __readfsqword(0x28u);
LABEL_14:
      v20 = (__int64 *)(*a1 + 24 * a1[1] - 24);
      v21 = v20[1];
      if ( v21 )
      {
        v24 = v21 + 7;
        v23 = v21 + 8;
        v22 = *v20;
        --v21;
        if ( v20[2] >= v23 )
          goto LABEL_16;
      }
      else
      {
        v22 = *v20;
        v23 = 9;
        v24 = 8;
        if ( (unsigned __int64)v20[2] >= 9 )
        {
LABEL_16:
          v20[1] = v23;
          *(_BYTE *)(v22 + v24) = 0;
          *(_QWORD *)(*v20 + v21) = 0x64657869662E2E2ELL;
          return v31 - __readfsqword(0x28u);
        }
      }
      v26 = qvector_reserve(v20, v22, v23, 1);
      *v20 = v26;
      v22 = v26;
      goto LABEL_16;
    }
  }
  else
  {
    if ( v10 < v11 )
    {
      v25 = qvector_reserve(a1, v9, v8 + 1, 24);
      *a1 = v25;
      v9 = v25;
      v8 = a1[1];
    }
    v12 = _mm_loadu_si128(&v30);
    v13 = v9 + 24 * v8;
    *(_QWORD *)v13 = ptr;
    *(__m128i *)(v13 + 8) = v12;
    ++a1[1];
  }
  if ( a3 )
    goto LABEL_14;
  return v31 - __readfsqword(0x28u);
}
