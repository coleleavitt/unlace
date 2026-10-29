unsigned __int64 __fastcall sub_13ACEB0(__int64 a1, int a2, __int64 a3, int a4, int a5, int a6, char *s, __int64 a8)
{
  __int64 v8; // r8
  __m128i *v9; // rsi
  unsigned __int64 result; // rax
  size_t v12; // rax
  __int64 v13; // rdi
  _BYTE *v14; // rax
  _WORD *v15; // rcx
  __m128i v16; // xmm0
  __m128i si128; // xmm0

  v8 = *(_QWORD *)(a1 + 40);
  v9 = *(__m128i **)(v8 + 32);
  result = *(_QWORD *)(v8 + 24) - (_QWORD)v9;
  if ( (**(_BYTE **)(a1 + 16) & 0x40) != 0 && s )
  {
    if ( result > 0x15 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AA430);
      v9[1].m128i_i32[0] = 1869768224;
      v9[1].m128i_i16[2] = 8301;
      *v9 = si128;
      *(_QWORD *)(v8 + 32) += 22LL;
    }
    else
    {
      sub_227BF10(*(_QWORD *)(a1 + 40), "In file included from ", 22);
    }
    v12 = strlen(s);
    sub_13ACD70(a1, s, v12, a3);
    v13 = *(_QWORD *)(a1 + 40);
    v14 = *(_BYTE **)(v13 + 32);
    if ( (unsigned __int64)v14 >= *(_QWORD *)(v13 + 24) )
    {
      v13 = sub_227BA10(v13, 58);
    }
    else
    {
      *(_QWORD *)(v13 + 32) = v14 + 1;
      *v14 = 58;
    }
    result = sub_227B910(v13, HIDWORD(a8));
    v15 = *(_WORD **)(result + 32);
    if ( *(_QWORD *)(result + 24) - (_QWORD)v15 > 1u )
    {
      *v15 = 2618;
      *(_QWORD *)(result + 32) += 2LL;
    }
    else
    {
      return sub_227BF10(result, ":\n", 2);
    }
  }
  else if ( result > 0x11 )
  {
    v16 = _mm_load_si128((const __m128i *)&xmmword_23AA440);
    v9[1].m128i_i16[0] = 2618;
    *v9 = v16;
    *(_QWORD *)(v8 + 32) += 18LL;
  }
  else
  {
    return sub_227BF10(*(_QWORD *)(a1 + 40), "In included file:\n", 18);
  }
  return result;
}
