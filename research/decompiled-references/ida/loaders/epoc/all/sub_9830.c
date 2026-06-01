__int64 __fastcall sub_9830(__int64 *a1, __int64 *a2, __int64 *a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  bool v7; // zf
  int v8; // eax
  __int64 v10; // rsi
  int v11; // ebp
  int v12; // r14d
  unsigned __int16 v13; // bx
  __int64 v14; // rsi
  __m128i v15; // xmm0
  int v16; // esi
  int v17; // eax
  __m128i *v18; // rsi
  __m128i si128; // xmm0
  int v20; // r12d
  void *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD v28[24]; // [rsp+18h] [rbp-C0h] BYREF

  v4 = a1[1];
  v5 = *a1;
  v28[18] = __readfsqword(0x28u);
  if ( v4 <= 0x9B )
  {
    if ( v4 <= 0x77 )
      return 0;
    v8 = *(_DWORD *)v5;
    if ( (unsigned int)(*(_DWORD *)v5 - 268435577) > 1 )
    {
LABEL_4:
      if ( *(_DWORD *)(v5 + 8) == 268436505 )
      {
        v20 = *(_DWORD *)(v5 + 12);
        if ( v20 == (unsigned int)sub_7D60(v5) && *(_WORD *)(v5 + 18) )
        {
          if ( a2 )
          {
            v21 = (void *)*a2;
            if ( (unsigned __int64)a2[2] <= 0xD )
            {
              v27 = qvector_reserve(a2, v21, 14, 1);
              *a2 = v27;
              v21 = (void *)v27;
            }
            a2[1] = 14;
            qmemcpy(v21, "EPOC SIS file", 13);
            *(_BYTE *)(*a2 + 13) = 0;
          }
          return 1;
        }
        if ( (unsigned __int64)a1[1] <= 0xF )
          return 0;
        v8 = *(_DWORD *)v5;
      }
      if ( v8 == 270539386 && (unsigned int)sub_7D60(v5) == *(_DWORD *)(v5 + 12) )
      {
        if ( a2 )
        {
          v18 = (__m128i *)*a2;
          if ( (unsigned __int64)a2[2] <= 0x12 )
          {
            v26 = qvector_reserve(a2, v18, 19, 1);
            *a2 = v26;
            v18 = (__m128i *)v26;
          }
          si128 = _mm_load_si128((const __m128i *)&xmmword_FDC0);
          a2[1] = 19;
          v18[1].m128i_i16[0] = 25964;
          *v18 = si128;
          *(_BYTE *)(*a2 + 18) = 0;
        }
        return 1;
      }
      return 0;
    }
    goto LABEL_9;
  }
  v7 = *(_DWORD *)(v5 + 16) == 1129271365;
  v28[0] = _mm_loadu_si128((const __m128i *)(v5 + 16)).m128i_i64[1];
  *(__m128i *)&v28[1] = _mm_loadu_si128((const __m128i *)(v5 + 32));
  *(__m128i *)&v28[3] = _mm_loadu_si128((const __m128i *)(v5 + 48));
  *(__m128i *)&v28[5] = _mm_loadu_si128((const __m128i *)(v5 + 64));
  *(__m128i *)&v28[7] = _mm_loadu_si128((const __m128i *)(v5 + 80));
  *(__m128i *)&v28[9] = _mm_loadu_si128((const __m128i *)(v5 + 96));
  *(__m128i *)&v28[11] = _mm_loadu_si128((const __m128i *)(v5 + 112));
  *(__m128i *)&v28[13] = _mm_loadu_si128((const __m128i *)(v5 + 128));
  *(__m128i *)((char *)&v28[14] + 4) = _mm_loadu_si128((const __m128i *)(v5 + 140));
  if ( !v7 )
  {
    v8 = *(_DWORD *)v5;
    if ( (unsigned int)(*(_DWORD *)v5 - 268435577) > 1 )
      goto LABEL_4;
LABEL_9:
    if ( a2 )
      sub_8B00(a2, (__int64)"EPOC ROM Image (EKA%d)", ((*(_DWORD *)(v5 + 88) & 0xE0) == 32) + 1);
LABEL_11:
    if ( a3 )
    {
      v10 = *a3;
      if ( (unsigned __int64)a3[2] <= 9 )
      {
        v24 = qvector_reserve(a3, v10, 10, 1);
        *a3 = v24;
        v10 = v24;
      }
      a3[1] = 10;
      *(_QWORD *)v10 = 0x764D52413A6D7261LL;
      *(_BYTE *)(v10 + 8) = 54;
      *(_BYTE *)(*a3 + 9) = 0;
    }
    return 1;
  }
  v11 = *(_DWORD *)(v5 + 20);
  v12 = *(_DWORD *)(v5 + 44);
  v13 = *(_WORD *)(v5 + 122);
  if ( a2 )
  {
    v14 = *a2;
    if ( (unsigned __int64)a2[2] <= 0x15 )
    {
      v22 = qvector_reserve(a2, v14, 22, 1);
      *a2 = v22;
      v14 = v22;
    }
    v15 = _mm_load_si128((const __m128i *)&xmmword_FDB0);
    a2[1] = 22;
    *(__m128i *)v14 = v15;
    *(_QWORD *)(v14 + 13) = 0x6567616D4920656CLL;
    *(_BYTE *)(*a2 + 21) = 0;
  }
  if ( (v12 & 0xF000008) == 0 )
  {
    v16 = v28[1];
    memset(v28, 0, 132);
    LODWORD(v28[1]) = v16;
LABEL_22:
    v17 = v11;
    goto LABEL_23;
  }
  v17 = v13;
  if ( (v12 & 0xF000000u) <= 0x1FFFFFF )
    goto LABEL_22;
LABEL_23:
  if ( v17 == 4096 )
  {
    if ( a3 )
    {
      v23 = *a3;
      if ( (unsigned __int64)a3[2] <= 6 )
      {
        v25 = qvector_reserve(a3, v23, 7, 1);
        *a3 = v25;
        v23 = v25;
      }
      a3[1] = 7;
      *(_DWORD *)v23 = 1635018093;
      *(_WORD *)(v23 + 4) = 25456;
      *(_BYTE *)(*a3 + 6) = 0;
    }
    return 1;
  }
  if ( (unsigned int)(v17 - 0x2000) <= 2 )
    goto LABEL_11;
  return 1;
}

