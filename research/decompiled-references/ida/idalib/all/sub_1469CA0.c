unsigned __int64 __fastcall sub_1469CA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rdx
  __m128i *v5; // rdx
  unsigned __int64 result; // rax
  __int64 v7; // rax
  int v8; // esi
  size_t v9; // r12
  const char *v10; // rax
  __m128i *v11; // rdx
  const char *v12; // r13
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  _WORD *v15; // rdi
  unsigned __int64 v16; // rax
  __m128i *v17; // rdx
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __m128i *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __m128i v23; // xmm0
  __m128i si128; // xmm0
  __m128i v25; // xmm0
  unsigned int v26[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 16);
  if ( *(_WORD *)(v3 + 32) == 1 )
  {
    v20 = *(__m128i **)(a2 + 32);
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)v20 > 0x1Bu )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AA5D0);
      qmemcpy(&v20[1], "end of file\n", 12);
      *v20 = si128;
      *(_QWORD *)(a2 + 32) += 28LL;
      return 0x6620666F20646E65LL;
    }
    else
    {
      return sub_227BF10(a2, "<eof> parser at end of file\n", 28);
    }
  }
  else if ( *(_DWORD *)(v3 + 16) )
  {
    v4 = *(_QWORD *)(v3 + 8);
    v26[0] = *(_DWORD *)(v3 + 16);
    sub_101AC40(v26, a2, *(_QWORD *)(v4 + 88));
    if ( sub_10CCDE0(*(_WORD *)(v3 + 32)) )
    {
      v5 = *(__m128i **)(a2 + 32);
      result = *(_QWORD *)(a2 + 24) - (_QWORD)v5;
      if ( result > 0x15 )
      {
        v19 = _mm_load_si128((const __m128i *)&xmmword_23AA600);
        v5[1].m128i_i32[0] = 1701539700;
        v5[1].m128i_i16[2] = 2670;
        *v5 = v19;
        *(_QWORD *)(a2 + 32) += 22LL;
      }
      else
      {
        return sub_227BF10(a2, ": at annotation token\n", 22);
      }
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 16);
      v8 = *(_DWORD *)(v3 + 16);
      LOBYTE(v26[0]) = 0;
      v9 = *(unsigned int *)(v3 + 20);
      v10 = sub_1021A70(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 88LL), v8, v26);
      v11 = *(__m128i **)(v2 + 32);
      v12 = v10;
      v13 = *(_QWORD *)(v2 + 24) - (_QWORD)v11;
      if ( LOBYTE(v26[0]) )
      {
        if ( v13 > 0x1E )
        {
          v25 = _mm_load_si128((const __m128i *)&xmmword_23AA610);
          qmemcpy(&v11[1], "t parser token\n", 15);
          *v11 = v25;
          *(_QWORD *)(v2 + 32) += 31LL;
          return 0x7265737261702074LL;
        }
        else
        {
          return sub_227BF10(v2, ": unknown current parser token\n", 31);
        }
      }
      else
      {
        if ( v13 > 0x17 )
        {
          v23 = _mm_load_si128((const __m128i *)&xmmword_23AA620);
          v11[1].m128i_i64[0] = 0x27206E656B6F7420LL;
          *v11 = v23;
          v15 = (_WORD *)(*(_QWORD *)(v2 + 32) + 24LL);
          *(_QWORD *)(v2 + 32) = v15;
        }
        else
        {
          v14 = sub_227BF10(v2, ": current parser token '", 24);
          v15 = *(_WORD **)(v14 + 32);
          v2 = v14;
        }
        v16 = *(_QWORD *)(v2 + 24) - (_QWORD)v15;
        if ( v9 > v16 )
        {
          v21 = sub_227BF10(v2, v12, v9);
          v15 = *(_WORD **)(v21 + 32);
          v2 = v21;
          v16 = *(_QWORD *)(v21 + 24) - (_QWORD)v15;
        }
        else if ( v9 )
        {
          memcpy(v15, v12, v9);
          v22 = *(_QWORD *)(v2 + 24);
          v15 = (_WORD *)(v9 + *(_QWORD *)(v2 + 32));
          *(_QWORD *)(v2 + 32) = v15;
          v16 = v22 - (_QWORD)v15;
        }
        if ( v16 > 1 )
        {
          *v15 = 2599;
          *(_QWORD *)(v2 + 32) += 2LL;
          return 2599;
        }
        else
        {
          return sub_227BF10(v2, "'\n", 2);
        }
      }
    }
  }
  else
  {
    v17 = *(__m128i **)(a2 + 32);
    result = *(_QWORD *)(a2 + 24) - (_QWORD)v17;
    if ( result > 0x24 )
    {
      v18 = _mm_load_si128((const __m128i *)&xmmword_23AA5E0);
      v17[2].m128i_i32[0] = 1852795252;
      v17[2].m128i_i8[4] = 10;
      *v17 = v18;
      v17[1] = _mm_load_si128((const __m128i *)&xmmword_23AA5F0);
      *(_QWORD *)(a2 + 32) += 37LL;
    }
    else
    {
      return sub_227BF10(a2, "<unknown> parser at unknown location\n", 37);
    }
  }
  return result;
}
