unsigned __int64 __fastcall sub_8AAA40(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v4; // rsi
  __m128i v5; // xmm0
  void *v6; // rdi
  unsigned __int64 v7; // rbp
  size_t v8; // r13
  __int64 v9; // r12
  size_t v10; // r14
  __int64 v11; // rsi
  __int64 v13; // rsi
  __m128i v14; // xmm0
  __int64 v15; // rsi
  __m128i si128; // xmm0
  __m128i *v17; // rsi
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  void *src; // [rsp+0h] [rbp-48h] BYREF
  __int128 v25; // [rsp+8h] [rbp-40h]
  unsigned __int64 v26; // [rsp+18h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  if ( a3 == 3 )
  {
    v15 = *a2;
    if ( (unsigned __int64)a2[2] <= 0x26 )
    {
      v23 = qvector_reserve(a2, v15, 39, 1);
      *a2 = v23;
      v15 = v23;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384AE0);
    a2[1] = 39;
    *(__m128i *)v15 = si128;
    *(__m128i *)(v15 + 16) = _mm_load_si128((const __m128i *)&xmmword_2384B30);
    *(_QWORD *)(v15 + 30) = 0x6E6F3D6863746162LL;
    *(_BYTE *)(*a2 + 38) = 0;
  }
  else if ( a3 > 3 )
  {
    if ( a3 != 4 )
      goto LABEL_22;
    v13 = *a2;
    if ( (unsigned __int64)a2[2] <= 0x26 )
    {
      v21 = qvector_reserve(a2, v13, 39, 1);
      *a2 = v21;
      v13 = v21;
    }
    v14 = _mm_load_si128((const __m128i *)&xmmword_2384B00);
    a2[1] = 39;
    *(__m128i *)v13 = v14;
    *(__m128i *)(v13 + 16) = _mm_load_si128((const __m128i *)&xmmword_2384B10);
    *(_QWORD *)(v13 + 30) = 0x66666F3D68637461LL;
    *(_BYTE *)(*a2 + 38) = 0;
  }
  else
  {
    if ( a3 != 1 )
    {
      if ( a3 == 2 )
      {
        v4 = *a2;
        if ( (unsigned __int64)a2[2] <= 0x25 )
        {
          v20 = qvector_reserve(a2, v4, 38, 1);
          *a2 = v20;
          v4 = v20;
        }
        v5 = _mm_load_si128((const __m128i *)&xmmword_2384AE0);
        a2[1] = 38;
        *(__m128i *)v4 = v5;
        *(__m128i *)(v4 + 16) = _mm_load_si128((const __m128i *)&xmmword_2384B20);
        *(_QWORD *)(v4 + 29) = 0x6E6F3D6863746162LL;
        *(_BYTE *)(*a2 + 37) = 0;
        goto LABEL_8;
      }
LABEL_22:
      a2[1] = 0;
      goto LABEL_8;
    }
    v17 = (__m128i *)*a2;
    if ( (unsigned __int64)a2[2] <= 0x28 )
    {
      v22 = qvector_reserve(a2, v17, 41, 1);
      *a2 = v22;
      v17 = (__m128i *)v22;
    }
    v18 = _mm_load_si128((const __m128i *)&xmmword_2384AE0);
    a2[1] = 41;
    v17[2].m128i_i64[0] = 0x6E6F3D6863746162LL;
    *v17 = v18;
    v17[1] = _mm_load_si128((const __m128i *)&xmmword_2384AF0);
    *(_BYTE *)(*a2 + 40) = 0;
  }
LABEL_8:
  src = nullptr;
  v25 = 0;
  src = (void *)qvector_reserve(&src, 0, 16, 1);
  *(_QWORD *)&v25 = 16;
  strcpy((char *)src, " -MB%b -MR%r %l");
  v6 = src;
  v7 = v25;
  if ( (_QWORD)v25 )
  {
    v8 = v25 - 1;
    if ( (_QWORD)v25 != 1 )
    {
      v9 = a2[1];
      v10 = v25 - 1;
      if ( v9 )
      {
        --v9;
        v10 = v8 + v9;
        v7 = v25 + v9;
      }
      v11 = *a2;
      if ( a2[2] < v7 )
      {
        v19 = qvector_reserve(a2, v11, v7, 1);
        *a2 = v19;
        v11 = v19;
      }
      a2[1] = v7;
      *(_BYTE *)(v11 + v10) = 0;
      memcpy((void *)(v9 + *a2), src, v8);
      v6 = src;
    }
  }
  if ( v6 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v6);
  }
  return v26 - __readfsqword(0x28u);
}

