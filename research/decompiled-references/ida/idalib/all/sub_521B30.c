unsigned __int64 __fastcall sub_521B30(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // r12
  __int64 *v6; // r12
  __int64 *v7; // rbx
  __int64 v8; // r15
  __int64 v9; // r14
  size_t v10; // rbp
  __int64 v11; // rbp
  size_t v12; // r13
  char v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rsi
  __m128i v16; // xmm0
  __int64 v17; // rax
  void *v18; // rdx
  __m128i v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // rbp
  void *v23; // rax
  const void *v24; // rsi
  __int64 v25; // rax
  void *v26; // rax
  const void *v27; // rsi
  __int64 v28; // rdx
  void *ptr; // [rsp+0h] [rbp-88h]
  __m128i v30; // [rsp+8h] [rbp-80h] BYREF
  __int64 v31; // [rsp+18h] [rbp-70h]
  void *v32; // [rsp+20h] [rbp-68h]
  __m128i v33; // [rsp+28h] [rbp-60h] BYREF
  __int64 v34; // [rsp+38h] [rbp-50h]
  char v35; // [rsp+40h] [rbp-48h]
  unsigned __int64 v36; // [rsp+48h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v3
    || *(_QWORD *)(a2 + 48) != v3
    || (v5 = 8 * a3, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * a3))
    || !*(_QWORD *)(*(_QWORD *)(a2 + 40) + 8 * a3) )
  {
    if ( !under_debugger )
      interr(1937);
    BUG();
  }
  switch_dbctx(*(int *)(a1 + 8));
  v6 = (__int64 *)(*(_QWORD *)(a1 + 40) + v5);
  ptr = nullptr;
  v30 = 0;
  v7 = *(__int64 **)(qword_2CCB598 + 1784);
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 8 * a3);
  v9 = v7[12];
  v10 = *(_QWORD *)(v8 + 8);
  if ( v10 )
  {
    v23 = (void *)qalloc_or_throw(*(_QWORD *)(v8 + 8));
    v24 = *(const void **)v8;
    v30.m128i_i64[1] = v10;
    ptr = v23;
    memcpy(v23, v24, v10);
    v30.m128i_i64[0] = v10;
  }
  v11 = *(_QWORD *)(v8 + 24);
  v31 = v11;
  if ( v11 )
    ++*(_DWORD *)(v11 + 12);
  v12 = *(_QWORD *)(v8 + 40);
  v32 = nullptr;
  v33 = 0;
  if ( v12 )
  {
    v26 = (void *)qalloc_or_throw(v12);
    v27 = *(const void **)(v8 + 32);
    v32 = v26;
    v33.m128i_i64[1] = v12;
    memcpy(v26, v27, v12);
    v33.m128i_i64[0] = v12;
  }
  v13 = *(_BYTE *)(v8 + 64);
  v14 = v7[12];
  v15 = v7[11];
  v34 = *(_QWORD *)(v8 + 56);
  v35 = v13;
  if ( v7[13] < (unsigned __int64)(v14 + 1) )
  {
    v25 = qvector_reserve(v7 + 11, v15, v14 + 1, 72);
    v7[11] = v25;
    v14 = v7[12];
    v15 = v25;
  }
  v16 = _mm_loadu_si128(&v30);
  v17 = v15 + 72 * v14;
  *(_QWORD *)v17 = ptr;
  v18 = v32;
  *(__m128i *)(v17 + 8) = v16;
  v19 = _mm_loadu_si128(&v33);
  *(_QWORD *)(v17 + 24) = v11;
  if ( v11 )
  {
    ++*(_DWORD *)(v11 + 12);
    *(_QWORD *)(v17 + 32) = v18;
    v20 = v34;
    *(_BYTE *)(v17 + 64) = v13;
    *(_QWORD *)(v17 + 56) = v20;
    *(__m128i *)(v17 + 40) = v19;
    ++v7[12];
    --*(_DWORD *)(v11 + 12);
  }
  else
  {
    *(_QWORD *)(v17 + 32) = v18;
    v28 = v34;
    *(_BYTE *)(v17 + 64) = v13;
    *(_QWORD *)(v17 + 56) = v28;
    *(__m128i *)(v17 + 40) = v19;
    ++v7[12];
  }
  v21 = v7[11] + 72 * v9;
  *(_QWORD *)(v21 + 56) = -1;
  sub_5216C0(v21, *v7);
  *v6 = v21;
  return v36 - __readfsqword(0x28u);
}
