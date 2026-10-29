__int64 __fastcall sub_73C020(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, int a6)
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
      v9 = sub_738E20(v8, 0, 0, a4, a5, a6);
      v6 = 0;
      v10 = (__int64)v9;
      if ( v9 )
      {
        sub_738AD0(*(_QWORD *)(a1 + 8), (__int64)v9);
        LODWORD(xmmword_2CCC600) = *(_DWORD *)(a1 + 32);
        *(_DWORD *)((char *)&xmmword_2CCC600 + 14) = *(_DWORD *)(a1 + 24);
        *(_DWORD *)((char *)&xmmword_2CCC600 + 10) = *(_DWORD *)(a1 + 28);
        *(_DWORD *)((char *)&xmmword_2CCC600 + 6) = *(_DWORD *)(a1 + 36);
        WORD2(xmmword_2CCC600) = *(_DWORD *)a1;
        qstrncpy(byte_2CCC613, aBTreeV2_0, 10);
        LOWORD(xmmword_2CCC61D) = 1;
        byte_2CCC612 = a2;
        *(__m128i *)v10 = _mm_load_si128((const __m128i *)&xmmword_2CCC600);
        *(__m128i *)(v10 + 16) = _mm_load_si128((const __m128i *)&unk_2CCC610);
        *(__m128i *)(v10 + 29) = _mm_loadu_si128((const __m128i *)&xmmword_2CCC61D);
        sub_738DE0(*(_QWORD *)(a1 + 8), v10);
        return 2;
      }
    }
  }
  return v6;
}
