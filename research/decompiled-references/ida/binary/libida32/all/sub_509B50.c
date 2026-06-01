unsigned __int64 __fastcall sub_509B50(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // r12
  __int64 *v6; // r12
  __int64 *v7; // r13
  __int64 *v8; // r15
  __int64 v9; // rbp
  size_t v10; // rbx
  __int64 v11; // rbx
  size_t v12; // r14
  char v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rsi
  __m128i v17; // xmm0
  void *v18; // rax
  int v19; // eax
  __int64 v20; // rbp
  void *v22; // rax
  __int64 v23; // rax
  void *v24; // rax
  const void *v25; // rsi
  int v26; // eax
  void *ptr; // [rsp+0h] [rbp-88h]
  __m128i v28; // [rsp+8h] [rbp-80h] BYREF
  __int64 v29; // [rsp+18h] [rbp-70h]
  void *v30; // [rsp+20h] [rbp-68h]
  __m128i v31; // [rsp+28h] [rbp-60h] BYREF
  int v32; // [rsp+38h] [rbp-50h]
  char v33; // [rsp+3Ch] [rbp-4Ch]
  unsigned __int64 v34; // [rsp+48h] [rbp-40h]

  v34 = __readfsqword(0x28u);
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
  v28 = 0;
  v7 = *(__int64 **)(qword_2CA1698 + 1592);
  v8 = *(__int64 **)(*(_QWORD *)(a2 + 40) + 8 * a3);
  v9 = v7[12];
  v10 = v8[1];
  if ( v10 )
  {
    v22 = (void *)qalloc_or_throw(v8[1], (const char *)a2);
    a2 = *v8;
    v28.m128i_i64[1] = v10;
    ptr = v22;
    memcpy(v22, (const void *)a2, v10);
    v28.m128i_i64[0] = v10;
  }
  v11 = v8[3];
  v29 = v11;
  if ( v11 )
    ++*(_DWORD *)(v11 + 12);
  v12 = v8[5];
  v30 = nullptr;
  v31 = 0;
  if ( v12 )
  {
    v24 = (void *)qalloc_or_throw(v12, (const char *)a2);
    v25 = (const void *)v8[4];
    v30 = v24;
    v31.m128i_i64[1] = v12;
    memcpy(v24, v25, v12);
    v31.m128i_i64[0] = v12;
  }
  v13 = *((_BYTE *)v8 + 60);
  v14 = v7[11];
  v32 = *((_DWORD *)v8 + 14);
  v15 = v7[12];
  v33 = v13;
  if ( v7[13] < (unsigned __int64)(v15 + 1) )
  {
    v23 = qvector_reserve(v7 + 11, v14, v15 + 1, 64);
    v7[11] = v23;
    v14 = v23;
    v15 = v7[12];
  }
  v16 = (v15 << 6) + v14;
  *(__m128i *)(v16 + 8) = _mm_loadu_si128(&v28);
  v17 = _mm_loadu_si128(&v31);
  *(_QWORD *)v16 = ptr;
  v18 = v30;
  *(_QWORD *)(v16 + 24) = v11;
  if ( v11 )
  {
    ++*(_DWORD *)(v11 + 12);
    *(_QWORD *)(v16 + 32) = v18;
    v19 = v32;
    *(_BYTE *)(v16 + 60) = v13;
    *(_DWORD *)(v16 + 56) = v19;
    *(__m128i *)(v16 + 40) = v17;
    ++v7[12];
    --*(_DWORD *)(v11 + 12);
  }
  else
  {
    *(_QWORD *)(v16 + 32) = v18;
    v26 = v32;
    *(_BYTE *)(v16 + 60) = v13;
    *(_DWORD *)(v16 + 56) = v26;
    *(__m128i *)(v16 + 40) = v17;
    ++v7[12];
  }
  v20 = v7[11] + (v9 << 6);
  *(_DWORD *)(v20 + 56) = -1;
  sub_5096E0(v20, *v7);
  *v6 = v20;
  return v34 - __readfsqword(0x28u);
}

