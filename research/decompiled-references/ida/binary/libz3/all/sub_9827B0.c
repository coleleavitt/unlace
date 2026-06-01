__int64 __fastcall sub_9827B0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx
  __int64 v4; // rdi
  __int64 *v5; // rax
  __int64 v6; // r8
  __int64 *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 result; // rax
  void *v11; // rdi
  __int64 v12; // r12
  unsigned int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // rcx
  __m128i si128; // xmm0
  __m128i v17; // xmm2
  __int64 v18; // rdx
  __int64 v19; // rax

  v2 = 8LL * a2;
  v4 = *(_QWORD *)(a1 + 88);
  v5 = (__int64 *)(v4 + v2);
  if ( v4 )
  {
    v6 = 8LL * *(unsigned int *)(v4 - 4);
    v7 = (__int64 *)(v4 + v6);
    if ( v2 == v6 )
    {
LABEL_5:
      *(_DWORD *)(v4 - 4) = a2;
      goto LABEL_6;
    }
  }
  else
  {
    v7 = nullptr;
    if ( !v2 )
      goto LABEL_6;
  }
  do
  {
    v8 = *v5++;
    *(_BYTE *)(v8 + 8) &= ~1u;
  }
  while ( v7 != v5 );
  if ( v4 )
    goto LABEL_5;
LABEL_6:
  v9 = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(a1 + 96) = a2;
  if ( v9 )
    *(_DWORD *)(v9 - 4) = 0;
  result = *(unsigned int *)(a1 + 140);
  if ( (_DWORD)result )
  {
    v11 = *(void **)(a1 + 112);
    if ( v11 )
      sub_186B220(v11);
    v12 = *(unsigned int *)(a1 + 124);
    v13 = v12 + *(_DWORD *)(a1 + 128);
    *(_DWORD *)(a1 + 120) = v13;
    v14 = sub_186B270(24LL * v13);
    v15 = v14;
    if ( !v13 )
      goto LABEL_19;
    if ( v13 - 1 <= 1 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_18B6710);
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_18B6710);
      v17 = _mm_load_si128((const __m128i *)&xmmword_18B6720);
      v18 = v14 + 48LL * (v13 >> 1);
      do
      {
        *(__m128i *)v14 = si128;
        v14 += 48;
        *(__m128i *)(v14 - 32) = v17;
        *(_OWORD *)(v14 - 16) = 0;
      }
      while ( v14 != v18 );
      if ( (v13 & 1) == 0 )
        goto LABEL_19;
      v19 = v13 & 0xFFFFFFFE;
      v13 -= v19;
      v14 = v15 + 24 * v19;
    }
    *(_QWORD *)(v14 + 16) = 0;
    *(__m128i *)v14 = si128;
    if ( v13 != 1 )
    {
      *(_QWORD *)(v14 + 40) = 0;
      *(__m128i *)(v14 + 24) = si128;
    }
LABEL_19:
    *(_QWORD *)(a1 + 112) = v15;
    result = v15 + 24 * v12;
    *(_DWORD *)(a1 + 132) = v12;
    *(_QWORD *)(a1 + 136) = 0;
    *(_QWORD *)(a1 + 152) = result;
    *(_QWORD *)(a1 + 160) = 0;
    *(_QWORD *)(a1 + 168) = 0;
  }
  return result;
}

