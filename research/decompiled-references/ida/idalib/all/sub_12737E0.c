void __fastcall sub_12737E0(__int64 a1, __int64 a2)
{
  void **v2; // rbx
  __int64 v3; // r13
  __m128i si128; // xmm0
  __int128 v7; // xmm1
  unsigned __int64 v8; // r12
  void *v9; // rdi
  void *v10; // rsi
  void **v11; // rax
  void *v12; // rdx
  void **v13; // rbp
  void **v14; // rbx
  size_t v15; // rdx

  v2 = *(void ***)a1;
  v3 = *(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 == v3 )
    return;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  v7 = 0;
  do
  {
    while ( 1 )
    {
      *(__m128i *)(a2 + 8) = si128;
      v8 = (unsigned __int64)v2[1];
      v9 = (void *)(a2 + 24);
      *(_QWORD *)a2 = a2 + 24;
      if ( v8 )
      {
        if ( (void **)a2 != v2 )
          break;
      }
LABEL_3:
      v2 += 7;
      a2 += 56;
      if ( (void **)v3 == v2 )
        goto LABEL_8;
    }
    v10 = *v2;
    v11 = v2 + 3;
    if ( v2 + 3 == *v2 )
    {
      v15 = v8;
      if ( v8 <= 0x20
        || (sub_2236E10(a2, a2 + 24, v8, 1),
            v15 = (size_t)v2[1],
            v10 = *v2,
            v7 = 0,
            v9 = *(void **)a2,
            si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20),
            v15) )
      {
        memcpy(v9, v10, v15);
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
        v7 = 0;
      }
      *(_QWORD *)(a2 + 8) = v8;
      v2[1] = nullptr;
      goto LABEL_3;
    }
    *(_QWORD *)(a2 + 8) = v8;
    v12 = v2[2];
    v2 += 7;
    a2 += 56;
    *(_QWORD *)(a2 - 56) = v10;
    *(_QWORD *)(a2 - 40) = v12;
    *(v2 - 7) = v11;
    *((_OWORD *)v2 - 3) = v7;
  }
  while ( (void **)v3 != v2 );
LABEL_8:
  v13 = *(void ***)a1;
  v14 = (void **)(*(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8));
  if ( *(void ***)a1 != v14 )
  {
    do
    {
      while ( 1 )
      {
        v14 -= 7;
        if ( *v14 == v14 + 3 )
          break;
        free(*v14);
        if ( v14 == v13 )
          return;
      }
    }
    while ( v14 != v13 );
  }
}
