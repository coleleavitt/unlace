bool __fastcall sub_F9970(int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rbp
  unsigned int v10; // edx
  int v11; // eax
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __m128i v14; // xmm3
  bool v15; // zf
  const char *v16; // rax
  int v19; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v7 = qalloc_or_throw();
  v8 = itext();
  *(_QWORD *)(v7 + 32) = 0;
  *(_QWORD *)v7 = &stru_235898;
  v9 = (_QWORD *)(v7 + 80);
  *(_QWORD *)(v7 + 8) = 0x2008000000004LL;
  *(_DWORD *)(v7 + 48) = 3;
  *(_QWORD *)(v7 + 56) = 0;
  *(_DWORD *)(v7 + 72) = -1;
  *(_QWORD *)(v7 + 40) = v8;
  *(_QWORD *)(v7 + 64) = &off_230190;
  *(_OWORD *)(v7 + 16) = -1;
  do
  {
    *v9 = 0;
    v9 += 3;
    *((_OWORD *)v9 - 1) = 0;
  }
  while ( v9 != (_QWORD *)(v7 + 176) );
  *(_DWORD *)(v7 + 176) = 0;
  v10 = *(_DWORD *)(v7 + 12);
  if ( ((v10 >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v7 + 11) != 0xFF )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    *(_BYTE *)(v7 + 11) = ((v10 >> 19) & 0x3F) - 1;
    *(_DWORD *)(v7 + 12) = v10 & 0xFE07FFFF;
  }
  *(_QWORD *)v7 = off_230018;
  v11 = *(_DWORD *)(get_eah() + 8);
  v12 = _mm_cvtsi32_si128(a2);
  v13 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a4), _mm_cvtsi32_si128(a5));
  v14 = _mm_cvtsi32_si128(a3);
  v15 = v11 == 4;
  *(_DWORD *)(v7 + 180) = v11;
  v16 = " ";
  if ( v15 )
    v16 = (const char *)&unk_1D47B8;
  v19 = a1;
  *(_DWORD *)(v7 + 72) = 135;
  *(_QWORD *)(v7 + 56) = v16;
  *(_QWORD *)v7 = off_2300D8;
  *(__m128i *)(v7 + 16) = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v12, v14), v13);
  return sub_198260(v7, &v19) == 0;
}

