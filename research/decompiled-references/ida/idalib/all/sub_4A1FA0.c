void __fastcall sub_4A1FA0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // rbx
  _QWORD *v7; // r14
  const char *v8; // rdx
  __int64 v9; // rax
  void *v10; // r12
  unsigned __int64 v11; // rdx
  __m128i si128; // xmm0
  void *v13; // rdi
  size_t v14; // rbp
  __m128i v15[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v3
    || *(_QWORD *)(a2 + 48) != v3
    || (v4 = 424 * a3, !*(_DWORD *)(*(_QWORD *)(a1 + 40) + 424 * a3 + 176))
    || !*(_DWORD *)(*(_QWORD *)(a2 + 40) + v4 + 176) )
  {
    if ( !under_debugger )
      interr(1939);
    BUG();
  }
  switch_dbctx(*(int *)(a1 + 8));
  v5 = v4 + *(_QWORD *)(a1 + 40);
  v6 = *(_QWORD *)(a2 + 40) + v4;
  if ( !(unsigned __int8)sub_498F00(v5, v6, a1) )
  {
    v7 = *(_QWORD **)(switch_dbctx(*(int *)(a1 + 8)) + 1672);
    if ( (*(_BYTE *)(v5 + 408) & 2) == 0 && (*(_BYTE *)(v5 + 184) & 0x3F) == 0x2D )
    {
      v8 = haystack;
      if ( *(_QWORD *)(v5 + 8) )
        v8 = *(const char **)v5;
      v9 = sub_6BB3C0(v7, 0, v8);
      sub_414330(v7, v9);
    }
    v10 = nullptr;
    sub_4A16E0(
      v5,
      *(_QWORD *)(a1 + 32),
      v7[1],
      *(_DWORD *)(v5 + 176),
      v6,
      *(_DWORD *)(a1 + 12),
      *(_DWORD *)(a2 + 12),
      1);
    v11 = *(_QWORD *)(v6 + 224);
    si128 = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
    if ( v11 )
    {
      v15[0] = si128;
      v14 = 16 * v11;
      v10 = (void *)qalloc_or_throw(16 * v11);
      memcpy(v10, *(const void **)(v6 + 216), v14);
      si128 = _mm_load_si128(v15);
    }
    v13 = *(void **)(v5 + 216);
    if ( v13 )
    {
      *(_QWORD *)(v5 + 224) = 0;
      v15[0] = si128;
      qfree(v13);
      si128 = _mm_load_si128(v15);
    }
    *(_QWORD *)(v5 + 216) = v10;
    *(__m128i *)(v5 + 224) = si128;
  }
}
