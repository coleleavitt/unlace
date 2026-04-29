__int64 __fastcall sub_2E00(__int64 *a1, __int64 *a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 v7; // rsi
  __m128i si128; // xmm0
  __int64 v9; // rsi
  __int64 v10; // rax
  __m128i *v11; // rsi
  __m128i v12; // xmm0
  __int64 v13; // rsi
  __m128i v14; // xmm0
  __int64 v15; // rax
  __m128i *v16; // rsi
  __m128i v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v22; // [rsp+8h] [rbp-20h]

  v22 = __readfsqword(0x28u);
  if ( sub_2C00(a3) )
  {
    v7 = *a1;
    if ( (unsigned __int64)a1[2] <= 0x1A )
    {
      v15 = qvector_reserve(a1, v7, 27, 1);
      *a1 = v15;
      v7 = v15;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_73F0);
    a1[1] = 27;
    *(__m128i *)v7 = si128;
    *(__m128i *)(v7 + 10) = _mm_load_si128((const __m128i *)&xmmword_7400);
    *(_BYTE *)(*a1 + 26) = 0;
  }
  else if ( sub_2D80(a3) )
  {
    v13 = *a1;
    if ( (unsigned __int64)a1[2] <= 0x19 )
    {
      v18 = qvector_reserve(a1, v13, 26, 1);
      *a1 = v18;
      v13 = v18;
    }
    v14 = _mm_load_si128((const __m128i *)&xmmword_73F0);
    a1[1] = 26;
    *(__m128i *)v13 = v14;
    *(__m128i *)(v13 + 9) = _mm_load_si128((const __m128i *)&xmmword_7410);
    *(_BYTE *)(*a1 + 25) = 0;
  }
  else
  {
    qlseek(a3, 0, 0);
    if ( qlread(a3, &v21, 4) == 4 && v21 == 38489676 )
    {
      v11 = (__m128i *)*a1;
      if ( (unsigned __int64)a1[2] <= 0x20 )
      {
        v19 = qvector_reserve(a1, v11, 33, 1);
        *a1 = v19;
        v11 = (__m128i *)v19;
      }
      v12 = _mm_load_si128((const __m128i *)&xmmword_73F0);
      v5 = 26;
      a1[1] = 33;
      *v11 = v12;
      v11[1] = _mm_load_si128((const __m128i *)&xmmword_7420);
      *(_BYTE *)(*a1 + 32) = 0;
      goto LABEL_11;
    }
    if ( !sub_2C90(a3) )
      return 0;
    v16 = (__m128i *)*a1;
    if ( (unsigned __int64)a1[2] <= 0x21 )
    {
      v20 = qvector_reserve(a1, v16, 34, 1);
      *a1 = v20;
      v16 = (__m128i *)v20;
    }
    v17 = _mm_load_si128((const __m128i *)&xmmword_73F0);
    a1[1] = 34;
    v16[2].m128i_i8[0] = 101;
    *v16 = v17;
    v16[1] = _mm_load_si128((const __m128i *)&xmmword_7430);
    *(_BYTE *)(*a1 + 33) = 0;
  }
  v5 = 1;
LABEL_11:
  v9 = *a2;
  if ( (unsigned __int64)a2[2] <= 5 )
  {
    v10 = qvector_reserve(a2, v9, 6, 1);
    *a2 = v10;
    v9 = v10;
  }
  a2[1] = 6;
  *(_DWORD *)v9 = 1936746861;
  *(_BYTE *)(v9 + 4) = 108;
  *(_BYTE *)(*a2 + 5) = 0;
  return v5;
}
