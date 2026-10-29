__int64 __fastcall sub_71BAE0(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v6; // edx
  __m128i *v8; // rdi
  char *v9; // rax
  __int64 v10; // rbp

  v6 = 1;
  v8 = *(__m128i **)(a1 + 8);
  if ( v8 )
  {
    if ( (~*(_BYTE *)(a1 + 1620) & 7) != 0 )
    {
      v9 = sub_7188E0(v8, 0, 0, a4, a5, a6);
      v6 = 0;
      v10 = (__int64)v9;
      if ( v9 )
      {
        sub_718590(*(_QWORD *)(a1 + 8), (__int64)v9);
        LODWORD(xmmword_2CA2700) = *(_DWORD *)(a1 + 32);
        *(_DWORD *)((char *)&xmmword_2CA2700 + 14) = *(_DWORD *)(a1 + 24);
        *(_DWORD *)((char *)&xmmword_2CA2700 + 10) = *(_DWORD *)(a1 + 28);
        *(_DWORD *)((char *)&xmmword_2CA2700 + 6) = *(_DWORD *)(a1 + 36);
        WORD2(xmmword_2CA2700) = *(_DWORD *)a1;
        qstrncpy(byte_2CA2713, aBTreeV2_0, 10);
        LOWORD(xmmword_2CA271D) = 1;
        byte_2CA2712 = a2;
        *(__m128i *)v10 = _mm_load_si128((const __m128i *)&xmmword_2CA2700);
        *(__m128i *)(v10 + 16) = _mm_load_si128((const __m128i *)&unk_2CA2710);
        *(__m128i *)(v10 + 29) = _mm_loadu_si128((const __m128i *)&xmmword_2CA271D);
        sub_7188A0(*(_QWORD *)(a1 + 8), v10);
        return 2;
      }
    }
  }
  return v6;
}

