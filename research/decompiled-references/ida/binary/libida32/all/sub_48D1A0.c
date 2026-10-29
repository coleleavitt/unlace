void __fastcall sub_48D1A0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rbx
  _QWORD *v8; // r14
  const char *v9; // rdx
  unsigned int v10; // eax
  const char *v11; // rsi
  int v12; // eax
  void *v13; // r12
  unsigned __int64 v14; // rdx
  __m128i si128; // xmm0
  void *v16; // rdi
  size_t v17; // rbp
  __m128i v18[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v3
    || *(_QWORD *)(a2 + 48) != v3
    || (v5 = 416 * a3, !*(_DWORD *)(*(_QWORD *)(a1 + 40) + 416 * a3 + 176))
    || !*(_DWORD *)(*(_QWORD *)(a2 + 40) + v5 + 176) )
  {
    if ( !under_debugger )
      interr(1939);
    BUG();
  }
  switch_dbctx(*(int *)(a1 + 8));
  v6 = v5 + *(_QWORD *)(a1 + 40);
  v7 = *(_QWORD *)(a2 + 40) + v5;
  if ( !(unsigned __int8)sub_4842F0(v6, v7, a1) )
  {
    v8 = *(_QWORD **)(switch_dbctx(*(int *)(a1 + 8)) + 1480);
    if ( (*(_BYTE *)(v6 + 400) & 2) == 0 && (*(_BYTE *)(v6 + 184) & 0x3F) == 0x2D )
    {
      v9 = haystack;
      if ( *(_QWORD *)(v6 + 8) )
        v9 = *(const char **)v6;
      v10 = sub_69A9F0(v8, 0, v9);
      sub_400FA0(v8, v10);
    }
    v11 = *(const char **)(a1 + 32);
    v12 = *(_DWORD *)(a2 + 12);
    v13 = nullptr;
    sub_48C8E0(v6, (__int64)v11, v8[1], *(_DWORD *)(v6 + 176), v7, *(_DWORD *)(a1 + 12), v12, 1);
    v14 = *(_QWORD *)(v7 + 224);
    si128 = _mm_unpacklo_epi64((__m128i)v14, (__m128i)v14);
    if ( v14 )
    {
      v18[0] = si128;
      v17 = 16 * v14;
      v13 = (void *)qalloc_or_throw(16 * v14, v11);
      memcpy(v13, *(const void **)(v7 + 216), v17);
      si128 = _mm_load_si128(v18);
    }
    v16 = *(void **)(v6 + 216);
    if ( v16 )
    {
      *(_QWORD *)(v6 + 224) = 0;
      v18[0] = si128;
      qfree(v16);
      si128 = _mm_load_si128(v18);
    }
    *(_QWORD *)(v6 + 216) = v13;
    *(__m128i *)(v6 + 224) = si128;
  }
}

