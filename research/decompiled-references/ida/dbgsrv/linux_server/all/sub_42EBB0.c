/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42EBB0
// Address: 0x000000000042EBB0

//----- (000000000042EBB0) ----------------------------------------------------
__int64 __fastcall sub_42EBB0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // r13
  unsigned __int64 v6; // r15
  size_t v7; // r14
  char *v8; // r12
  __int64 v9; // rax
  void **v10; // rsi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  __m128i v13; // xmm0
  void **v14; // rax
  __int64 v15; // rax
  int v16; // ebp
  void *v17; // rsi
  __int64 v18; // rax
  void *v19; // rsi
  void *v21; // rbp
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  void **v24; // rax
  void *v25; // rdi
  __int64 v26; // rax
  void *v27; // rax
  void *v28; // rax
  void **v29; // rax
  void **v30; // rax
  __m128i v31; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __m128i v33; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+28h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 352);
  v2 = *(_QWORD *)(a1 + 344);
  v34 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(v2 + 8 * v1 - 8);
  if ( *(_DWORD *)v4 != 1 )
  {
    ptr = nullptr;
    v5 = a1 + 160;
    v6 = 1;
    v33 = 0;
    v7 = 0;
    v8 = "";
LABEL_3:
    ptr = sub_481540((__int64)&ptr, nullptr, v6, 1u);
    v33.m128i_i64[0] = v6;
    memmove(ptr, v8, v7);
    *((_BYTE *)ptr + v7) = 0;
    goto LABEL_4;
  }
  v26 = *(_QWORD *)(v4 + 16);
  v8 = (char *)s1;
  if ( *(_QWORD *)(v26 + 8) )
    v8 = *(char **)v26;
  v5 = a1 + 160;
  ptr = nullptr;
  v33 = 0;
  if ( v8 )
  {
    v7 = strlen(v8);
    v6 = v7 + 1;
    goto LABEL_3;
  }
LABEL_4:
  v9 = *(_QWORD *)(a1 + 168);
  v10 = *(void ***)(a1 + 160);
  v11 = *(_QWORD *)(a1 + 176);
  v12 = v9 + 1;
  if ( &ptr >= v10 && &ptr < &v10[3 * v11] )
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
      v30 = (void **)sub_481540(v5, v10, v9 + 1, 0x18u);
      *(_QWORD *)(a1 + 160) = v30;
      v10 = v30;
      v23 = _mm_loadl_epi64((const __m128i *)&v31.m128i_u64[1]);
      v9 = *(_QWORD *)(a1 + 168);
      v22 = _mm_loadl_epi64(&v31);
    }
    v24 = &v10[3 * v9];
    *v24 = v21;
    v25 = ptr;
    *(__m128i *)(v24 + 1) = _mm_unpacklo_epi64(v22, v23);
    ++*(_QWORD *)(a1 + 168);
    if ( v25 )
    {
      v33.m128i_i64[0] = 0;
      j__free(v25);
    }
  }
  else
  {
    if ( v11 < v12 )
    {
      v29 = (void **)sub_481540(v5, v10, v9 + 1, 0x18u);
      *(_QWORD *)(a1 + 160) = v29;
      v10 = v29;
      v9 = *(_QWORD *)(a1 + 168);
    }
    v13 = _mm_loadu_si128(&v33);
    v14 = &v10[3 * v9];
    *v14 = ptr;
    *(__m128i *)(v14 + 1) = v13;
    ++*(_QWORD *)(a1 + 168);
  }
  v15 = *(_QWORD *)(a1 + 256);
  v16 = *(_DWORD *)(a1 + 208);
  v17 = *(void **)(a1 + 248);
  if ( *(_QWORD *)(a1 + 264) < (unsigned __int64)(v15 + 1) )
  {
    v28 = sub_481540(a1 + 248, v17, v15 + 1, 4u);
    *(_QWORD *)(a1 + 248) = v28;
    v17 = v28;
    v15 = *(_QWORD *)(a1 + 256);
  }
  *((_DWORD *)v17 + v15) = v16;
  v18 = *(_QWORD *)(a1 + 328);
  ++*(_QWORD *)(a1 + 256);
  v19 = *(void **)(a1 + 320);
  if ( *(_QWORD *)(a1 + 336) < (unsigned __int64)(v18 + 1) )
  {
    v27 = sub_481540(a1 + 320, v19, v18 + 1, 2u);
    *(_QWORD *)(a1 + 320) = v27;
    v19 = v27;
    v18 = *(_QWORD *)(a1 + 328);
  }
  *((_WORD *)v19 + v18) = 0;
  ++*(_QWORD *)(a1 + 328);
  return 0;
}
