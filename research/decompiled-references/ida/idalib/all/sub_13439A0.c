void __fastcall sub_13439A0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  unsigned __int64 v8; // rbx
  __int64 i; // r15
  __int64 v10; // r14
  unsigned __int64 v11; // r15
  void *v12; // rax
  size_t v13; // r13
  size_t v14; // r12
  size_t v15; // rdx
  int v16; // eax
  unsigned __int64 v17; // [rsp-18h] [rbp-70h]
  __int128 v18; // [rsp-10h] [rbp-68h]

  v6 = a2 - a1;
  v8 = a2;
  if ( (__int64)(a2 - a1) > 32 )
  {
    for ( i = ((v6 >> 5) - 2) / 2; ; --i )
    {
      sub_12FABA0(
        a1,
        i,
        v6 >> 5,
        32 * i,
        a5,
        a6,
        *(void **)(a1 + 32 * i),
        *(_QWORD *)(a1 + 32 * i + 8),
        *(_OWORD *)(a1 + 32 * i + 16));
      if ( !i )
        break;
    }
  }
  if ( a2 < a3 )
  {
    v10 = v6 >> 5;
    v11 = a2 + ((a3 - 1 - a2) & 0xFFFFFFFFFFFFFFE0LL) + 32;
    while ( 1 )
    {
      v13 = *(_QWORD *)(v8 + 8);
      v14 = *(_QWORD *)(a1 + 8);
      v15 = v14;
      if ( v13 <= v14 )
        v15 = *(_QWORD *)(v8 + 8);
      if ( !v15 )
        break;
      v16 = memcmp(*(const void **)v8, *(const void **)a1, v15);
      if ( !v16 )
        break;
      if ( v16 < 0 )
      {
LABEL_9:
        v12 = *(void **)v8;
        v18 = *(_OWORD *)(v8 + 16);
        v17 = *(_QWORD *)(v8 + 8);
        *(__m128i *)v8 = _mm_loadu_si128((const __m128i *)a1);
        *(__m128i *)(v8 + 16) = _mm_loadu_si128((const __m128i *)(a1 + 16));
        sub_12FABA0(a1, 0, v10, a4, a5, a6, v12, v17, v18);
LABEL_10:
        v8 += 32LL;
        if ( v8 == v11 )
          return;
      }
      else
      {
        v8 += 32LL;
        if ( v8 == v11 )
          return;
      }
    }
    if ( v13 == v14 || v13 >= v14 )
      goto LABEL_10;
    goto LABEL_9;
  }
}
