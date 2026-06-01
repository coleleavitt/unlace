__int64 __fastcall sub_3F5570(__int64 a1, int a2, const char *a3, __int64 a4)
{
  bool v6; // cc
  __int64 *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 result; // rax
  __int64 v13; // rbp
  size_t v14; // rax
  __int64 v15; // r15
  size_t v16; // rbx
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  __m128i v21; // xmm0
  __int64 v22; // rax
  __int64 *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rax
  void *v28; // rbx
  __m128i v29; // xmm0
  __m128i v30; // xmm1
  __int64 v31; // rax
  void *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __m128i v36; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __m128i v38; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+28h] [rbp-40h]

  v6 = *(_QWORD *)(a4 + 8) <= 1u;
  v39 = __readfsqword(0x28u);
  if ( !v6 )
  {
    v8 = (__int64 *)(a1 + 72);
    if ( a2 )
    {
      v8 = (__int64 *)(a1 + 96);
      if ( a2 == -1 )
        v8 = *(__int64 **)(a1 + 64);
    }
    v9 = v8[1];
    v10 = *v8;
    if ( v8[2] < (unsigned __int64)(v9 + 1) )
    {
      v27 = qvector_reserve(v8, v10, v9 + 1, 24);
      v9 = v8[1];
      *v8 = v27;
      v10 = v27;
    }
    v11 = v10 + 24 * v9;
    *(_QWORD *)v11 = 0;
    *(_OWORD *)(v11 + 8) = 0;
    ++v8[1];
    sub_35A790((char **)v11);
    result = (unsigned int)(a2 >> 31);
    if ( a2 )
      return result;
    goto LABEL_16;
  }
  if ( !a2 )
  {
    v13 = a1 + 72;
    ptr = nullptr;
    v38 = 0;
    if ( a3 )
    {
      v14 = strlen(a3);
      v15 = v14 + 1;
      v16 = v14;
      ptr = (void *)qvector_reserve(&ptr, 0, v14 + 1, 1);
      v38.m128i_i64[0] = v15;
      memmove(ptr, a3, v16);
      *((_BYTE *)ptr + v16) = 0;
    }
    v17 = *(_QWORD *)(a1 + 80);
    v18 = *(_QWORD *)(a1 + 72);
    v19 = *(_QWORD *)(a1 + 88);
    v20 = v17 + 1;
    if ( (unsigned __int64)&ptr >= v18 && (unsigned __int64)&ptr < v18 + 24 * v19 )
    {
      v28 = ptr;
      v29 = _mm_loadl_epi64(&v38);
      ptr = nullptr;
      v30 = _mm_loadl_epi64((const __m128i *)&v38.m128i_u64[1]);
      v38 = 0;
      if ( v19 < v20 )
      {
        v36.m128i_i64[1] = v30.m128i_i64[0];
        v36.m128i_i64[0] = v29.m128i_i64[0];
        v35 = qvector_reserve(v13, v18, v17 + 1, 24);
        *(_QWORD *)(a1 + 72) = v35;
        v18 = v35;
        v30 = _mm_loadl_epi64((const __m128i *)&v36.m128i_u64[1]);
        v17 = *(_QWORD *)(a1 + 80);
        v29 = _mm_loadl_epi64(&v36);
      }
      v31 = v18 + 24 * v17;
      *(_QWORD *)v31 = v28;
      v32 = ptr;
      *(__m128i *)(v31 + 8) = _mm_unpacklo_epi64(v29, v30);
      ++*(_QWORD *)(a1 + 80);
      if ( v32 )
      {
        v38.m128i_i64[0] = 0;
        qfree(v32);
      }
    }
    else
    {
      if ( v19 < v20 )
      {
        v34 = qvector_reserve(v13, v18, v17 + 1, 24);
        *(_QWORD *)(a1 + 72) = v34;
        v18 = v34;
        v17 = *(_QWORD *)(a1 + 80);
      }
      v21 = _mm_loadu_si128(&v38);
      v22 = v18 + 24 * v17;
      *(_QWORD *)v22 = ptr;
      *(__m128i *)(v22 + 8) = v21;
      ++*(_QWORD *)(a1 + 80);
    }
LABEL_16:
    ++*(_DWORD *)(a1 + 152);
    return 0;
  }
  if ( a2 >= 0 )
    return 0;
  v23 = *(__int64 **)(a1 + 64);
  v24 = v23[1];
  v25 = *v23;
  if ( v23[2] < (unsigned __int64)(v24 + 1) )
  {
    v33 = qvector_reserve(*(_QWORD *)(a1 + 64), v25, v24 + 1, 24);
    v24 = v23[1];
    *v23 = v33;
    v25 = v33;
  }
  v26 = v25 + 24 * v24;
  *(_QWORD *)v26 = 0;
  *(_OWORD *)(v26 + 8) = 0;
  ++v23[1];
  sub_35A790((char **)v26);
  return 0xFFFFFFFFLL;
}
