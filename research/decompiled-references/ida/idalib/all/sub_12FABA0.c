void *__fastcall sub_12FABA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        unsigned __int64 a8,
        __int128 a9)
{
  __int64 v9; // r15
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // rcx
  __m128i *v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  size_t v16; // r12
  size_t v17; // r14
  size_t v18; // rdx
  int v19; // eax
  unsigned __int64 v20; // r14
  __int64 v21; // r15
  size_t v22; // rdx
  unsigned __int64 v23; // r12
  int v24; // eax
  __m128i v26; // xmm4
  __m128i *v27; // rbp
  __int64 v28; // rax
  const __m128i *v29; // rax
  __int64 s2; // [rsp+8h] [rbp-70h]
  void *s2a; // [rsp+8h] [rbp-70h]
  __int64 v32; // [rsp+10h] [rbp-68h]
  __m128i v34[4]; // [rsp+30h] [rbp-48h] BYREF

  s2 = (a3 - 1) / 2;
  v32 = a3 & 1;
  if ( a2 < s2 )
  {
    v9 = a2;
    while ( 1 )
    {
      v10 = 2 * (v9 + 1);
      v14 = (v9 + 1) << 6;
      v15 = a1 + v14 - 32;
      v11 = a1 + v14;
      v16 = *(_QWORD *)(v11 + 8);
      v17 = *(_QWORD *)(v15 + 8);
      v18 = v17;
      if ( v16 <= v17 )
        v18 = *(_QWORD *)(v11 + 8);
      if ( v18 && (v19 = memcmp(*(const void **)v11, *(const void **)v15, v18)) != 0 )
      {
        if ( v19 >= 0 )
          goto LABEL_6;
      }
      else if ( v16 == v17 || v16 >= v17 )
      {
        goto LABEL_6;
      }
      --v10;
      v11 = a1 + 32 * v10;
LABEL_6:
      v12 = v9;
      v9 = v10;
      v13 = (__m128i *)(a1 + 32 * v12);
      *v13 = _mm_loadu_si128((const __m128i *)v11);
      v13[1] = _mm_loadu_si128((const __m128i *)(v11 + 16));
      if ( v10 >= s2 )
      {
        if ( v32 )
          goto LABEL_14;
        goto LABEL_28;
      }
    }
  }
  v11 = a1 + 32 * a2;
  if ( (a3 & 1) != 0 )
  {
    v20 = a8;
    s2a = a7;
    v34[0] = _mm_loadu_si128((const __m128i *)&a9);
    goto LABEL_22;
  }
  v10 = a2;
LABEL_28:
  if ( (a3 - 2) / 2 == v10 )
  {
    v28 = v10 + 1;
    v10 = 2 * (v10 + 1) - 1;
    v29 = (const __m128i *)(a1 + (v28 << 6) - 32);
    *(__m128i *)v11 = _mm_loadu_si128(v29);
    *(__m128i *)(v11 + 16) = _mm_loadu_si128(v29 + 1);
    v11 = a1 + 32 * v10;
  }
LABEL_14:
  v20 = a8;
  s2a = a7;
  v34[0] = _mm_loadu_si128((const __m128i *)&a9);
  v21 = (v10 - 1) / 2;
  if ( v10 > a2 )
  {
    while ( 1 )
    {
      v22 = a8;
      v11 = a1 + 32 * v21;
      v23 = *(_QWORD *)(v11 + 8);
      if ( v23 <= a8 )
        v22 = *(_QWORD *)(v11 + 8);
      if ( v22 && (v24 = memcmp(*(const void **)v11, a7, v22)) != 0 )
      {
        if ( v24 >= 0 )
          goto LABEL_21;
      }
      else if ( v23 == a8 || v23 >= a8 )
      {
LABEL_21:
        v11 = a1 + 32 * v10;
        break;
      }
      v27 = (__m128i *)(a1 + 32 * v10);
      *v27 = _mm_loadu_si128((const __m128i *)v11);
      v27[1] = _mm_loadu_si128((const __m128i *)(v11 + 16));
      v10 = v21;
      if ( a2 >= v21 )
        break;
      v21 = (v21 - 1) / 2;
    }
  }
LABEL_22:
  v26 = _mm_loadu_si128(v34);
  *(_QWORD *)(v11 + 8) = v20;
  *(_QWORD *)v11 = s2a;
  *(__m128i *)(v11 + 16) = v26;
  return s2a;
}
