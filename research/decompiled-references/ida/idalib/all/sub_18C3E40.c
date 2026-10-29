unsigned __int64 __fastcall sub_18C3E40(__int64 a1)
{
  int v2; // eax
  int v3; // eax
  unsigned __int64 result; // rax
  __int64 v5; // rsi
  __m128i *v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // rsi
  unsigned int v9; // edx
  __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  __m128i v12; // xmm0
  unsigned int v13; // eax
  int v14; // eax
  __m128i si128; // xmm0
  __m128i *v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rbp
  int v19; // r12d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rcx
  __m128i *v26; // rdx
  unsigned __int64 v27; // rsi
  __m128i v28; // xmm0
  unsigned int v29; // edx
  unsigned __int64 v30; // rax

  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 632);
  *(_WORD *)(a1 + 4512) = 0;
  *(_DWORD *)(a1 + 4528) = v2;
  v3 = *(_DWORD *)(a1 + 4424);
  if ( !v3 )
  {
    result = *(unsigned int *)(a1 + 4428);
    if ( !(_DWORD)result )
    {
LABEL_5:
      *(_DWORD *)(a1 + 4448) = 0;
      return result;
    }
    v5 = *(unsigned int *)(a1 + 4432);
    v6 = *(__m128i **)(a1 + 4416);
    v7 = v5;
    v8 = v5;
    if ( v7 > 0x40 )
    {
      result = operator delete(v6, v8 * 8, 8);
      *(_QWORD *)(a1 + 4416) = 0;
      *(_QWORD *)(a1 + 4424) = 0;
      *(_DWORD *)(a1 + 4432) = 0;
      goto LABEL_5;
    }
    goto LABEL_10;
  }
  v9 = 4 * v3;
  v10 = *(unsigned int *)(a1 + 4432);
  v6 = *(__m128i **)(a1 + 4416);
  if ( (unsigned int)(4 * v3) < 0x40 )
    v9 = 64;
  if ( (unsigned int)v10 > v9 )
  {
    v13 = v3 - 1;
    if ( v13 )
    {
      _BitScanReverse(&v13, v13);
      v14 = 1 << (33 - (v13 ^ 0x1F));
      if ( v14 < 64 )
        v14 = 64;
      if ( (_DWORD)v10 == v14 )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
        v16 = v6;
        *(_QWORD *)(a1 + 4424) = 0;
        v17 = ((unsigned __int64)(8 * v10 - 8) >> 3) + 1;
        do
          *v16++ = si128;
        while ( v16 != &v6[(((unsigned __int64)(8 * v10 - 8) >> 3) + 1) >> 1] );
        result = (unsigned __int64)v6 + 8 * (v17 & 0xFFFFFFFFFFFFFFFELL);
        if ( v17 == (v17 & 0xFFFFFFFFFFFFFFFELL) )
          goto LABEL_5;
        goto LABEL_24;
      }
      v29 = 4 * v14 / 3u;
      v30 = (((v29 + 1) | ((unsigned __int64)(v29 + 1) >> 1) | (((v29 + 1) | ((unsigned __int64)(v29 + 1) >> 1)) >> 2)) >> 4)
          | (v29 + 1)
          | ((unsigned __int64)(v29 + 1) >> 1)
          | (((v29 + 1) | ((unsigned __int64)(v29 + 1) >> 1)) >> 2)
          | (((((v29 + 1) | ((unsigned __int64)(v29 + 1) >> 1) | (((v29 + 1) | ((unsigned __int64)(v29 + 1) >> 1)) >> 2)) >> 4)
            | (v29 + 1)
            | ((unsigned __int64)(v29 + 1) >> 1)
            | (((v29 + 1) | ((unsigned __int64)(v29 + 1) >> 1)) >> 2)) >> 8);
      v19 = (v30 | (v30 >> 16)) + 1;
      v18 = 8 * ((v30 | (v30 >> 16)) + 1);
    }
    else
    {
      v18 = 1024;
      v19 = 128;
    }
    operator delete(v6, 8 * v10, 8);
    *(_DWORD *)(a1 + 4432) = v19;
    result = sub_22300B0(v18, 8, v20, v21, v22, v23);
    v24 = *(unsigned int *)(a1 + 4432);
    *(_QWORD *)(a1 + 4424) = 0;
    *(_QWORD *)(a1 + 4416) = result;
    v25 = 8 * v24;
    if ( result == result + v25 )
      goto LABEL_5;
    v26 = (__m128i *)result;
    v27 = ((unsigned __int64)(v25 - 8) >> 3) + 1;
    if ( v25 != 8 )
    {
      v28 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v26++ = v28;
      while ( (__m128i *)(result + 16 * (v27 >> 1)) != v26 );
      result += 8 * (v27 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v27 & 0xFFFFFFFFFFFFFFFELL) == v27 )
        goto LABEL_5;
    }
LABEL_24:
    *(_QWORD *)result = -4096;
    *(_DWORD *)(a1 + 4448) = 0;
    return result;
  }
  v8 = v10;
LABEL_10:
  result = (unsigned __int64)&v6->m128i_u64[v8];
  if ( v6 != (__m128i *)&v6->m128i_i8[v8 * 8] )
  {
    result = (unsigned __int64)v6;
    v11 = ((unsigned __int64)(v8 * 8 - 8) >> 3) + 1;
    if ( v8 == 1 )
      goto LABEL_15;
    v12 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
    do
    {
      *(__m128i *)result = v12;
      result += 16LL;
    }
    while ( (__m128i *)result != &v6[v11 >> 1] );
    result = v11 & 0xFFFFFFFFFFFFFFFELL;
    v6 = (__m128i *)((char *)v6 + 8 * (v11 & 0xFFFFFFFFFFFFFFFELL));
    if ( v11 != (v11 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_15:
      v6->m128i_i64[0] = -4096;
  }
  *(_QWORD *)(a1 + 4424) = 0;
  *(_DWORD *)(a1 + 4448) = 0;
  return result;
}
