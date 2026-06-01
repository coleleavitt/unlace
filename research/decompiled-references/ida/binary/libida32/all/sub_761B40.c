__int64 __fastcall sub_761B40(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r15
  size_t v7; // r14
  const char *v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  __m128i v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // ebp
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rsi
  void *v21; // rbp
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  __int64 v24; // rax
  void *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __m128i v31; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __m128i v33; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+28h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 344);
  v2 = *(_QWORD *)(a1 + 336);
  v34 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(v2 + 8 * v1 - 8);
  if ( *(_DWORD *)v4 != 1 )
  {
    ptr = nullptr;
    v5 = a1 + 152;
    v6 = 1;
    v33 = 0;
    v7 = 0;
    v8 = &byte_22CD811;
LABEL_3:
    ptr = (void *)qvector_reserve(&ptr, 0, v6, 1);
    v33.m128i_i64[0] = v6;
    memmove(ptr, v8, v7);
    *((_BYTE *)ptr + v7) = 0;
    goto LABEL_4;
  }
  v26 = *(_QWORD *)(v4 + 16);
  v8 = haystack;
  if ( *(_QWORD *)(v26 + 8) )
    v8 = *(const char **)v26;
  v5 = a1 + 152;
  ptr = nullptr;
  v33 = 0;
  if ( v8 )
  {
    v7 = strlen(v8);
    v6 = v7 + 1;
    goto LABEL_3;
  }
LABEL_4:
  v9 = *(_QWORD *)(a1 + 160);
  v10 = *(_QWORD *)(a1 + 152);
  v11 = *(_QWORD *)(a1 + 168);
  v12 = v9 + 1;
  if ( (unsigned __int64)&ptr >= v10 && (unsigned __int64)&ptr < v10 + 24 * v11 )
  {
    v21 = ptr;
    v22 = _mm_loadl_epi64(&v33);
    ptr = nullptr;
    v23 = _mm_loadl_epi64((const __m128i *)&v33.m128i_u64[1]);
    v33 = 0;
    if ( v11 < v12 )
    {
      v31.m128i_i64[1] = v23.m128i_i64[0];
      v31.m128i_i64[0] = v22.m128i_i64[0];
      v30 = qvector_reserve(v5, v10, v9 + 1, 24);
      *(_QWORD *)(a1 + 152) = v30;
      v10 = v30;
      v23 = _mm_loadl_epi64((const __m128i *)&v31.m128i_u64[1]);
      v9 = *(_QWORD *)(a1 + 160);
      v22 = _mm_loadl_epi64(&v31);
    }
    v24 = v10 + 24 * v9;
    *(_QWORD *)v24 = v21;
    v25 = ptr;
    *(__m128i *)(v24 + 8) = _mm_unpacklo_epi64(v22, v23);
    ++*(_QWORD *)(a1 + 160);
    if ( v25 )
    {
      v33.m128i_i64[0] = 0;
      qfree(v25);
    }
  }
  else
  {
    if ( v11 < v12 )
    {
      v29 = qvector_reserve(v5, v10, v9 + 1, 24);
      *(_QWORD *)(a1 + 152) = v29;
      v10 = v29;
      v9 = *(_QWORD *)(a1 + 160);
    }
    v13 = _mm_loadu_si128(&v33);
    v14 = v10 + 24 * v9;
    *(_QWORD *)v14 = ptr;
    *(__m128i *)(v14 + 8) = v13;
    ++*(_QWORD *)(a1 + 160);
  }
  v15 = *(_QWORD *)(a1 + 248);
  v16 = *(_DWORD *)(a1 + 200);
  v17 = *(_QWORD *)(a1 + 240);
  if ( *(_QWORD *)(a1 + 256) < (unsigned __int64)(v15 + 1) )
  {
    v28 = qvector_reserve(a1 + 240, v17, v15 + 1, 4);
    *(_QWORD *)(a1 + 240) = v28;
    v17 = v28;
    v15 = *(_QWORD *)(a1 + 248);
  }
  *(_DWORD *)(v17 + 4 * v15) = v16;
  v18 = *(_QWORD *)(a1 + 320);
  ++*(_QWORD *)(a1 + 248);
  v19 = *(_QWORD *)(a1 + 312);
  if ( *(_QWORD *)(a1 + 328) < (unsigned __int64)(v18 + 1) )
  {
    v27 = qvector_reserve(a1 + 312, v19, v18 + 1, 2);
    *(_QWORD *)(a1 + 312) = v27;
    v19 = v27;
    v18 = *(_QWORD *)(a1 + 320);
  }
  *(_WORD *)(v19 + 2 * v18) = 0;
  ++*(_QWORD *)(a1 + 320);
  return 0;
}

