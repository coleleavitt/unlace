__int64 __fastcall sub_714E80(__int64 a1, char a2)
{
  unsigned int v2; // edx
  __m128i *v4; // rdi
  char *v5; // rax
  __int64 v6; // rbp

  v2 = 1;
  v4 = *(__m128i **)(a1 + 8);
  if ( v4 )
  {
    if ( (~*(_BYTE *)(a1 + 1620) & 7) != 0 )
    {
      v5 = sub_7136A0(v4, 0, 0);
      v2 = 0;
      v6 = (__int64)v5;
      if ( v5 )
      {
        sub_713360(*(_QWORD *)(a1 + 8), (__int64)v5);
        LOWORD(xmmword_2CA25E0) = *(_WORD *)(a1 + 32);
        WORD5(xmmword_2CA25E0) = *(_WORD *)(a1 + 24);
        *(_DWORD *)((char *)&xmmword_2CA25E0 + 6) = *(_DWORD *)(a1 + 28);
        WORD2(xmmword_2CA25E0) = *(_WORD *)(a1 + 34);
        WORD1(xmmword_2CA25E0) = *(_DWORD *)a1;
        qstrncpy((char *)&xmmword_2CA25E0 + 13, aBTreeV2, 10);
        BYTE12(xmmword_2CA25E0) = a2;
        word_2CA25F7 = 1;
        *(__m128i *)v6 = _mm_load_si128((const __m128i *)&xmmword_2CA25E0);
        *(__m128i *)(v6 + 16) = _mm_load_si128((const __m128i *)&unk_2CA25F0);
        *(_QWORD *)(v6 + 31) = *(__int64 *)((char *)&qword_2CA25F9 + 6);
        sub_713660(*(_QWORD *)(a1 + 8), v6);
        return 2;
      }
    }
  }
  return v2;
}

