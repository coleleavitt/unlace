bool __fastcall sub_F9B60(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
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
  _QWORD v19[9]; // [rsp+10h] [rbp-48h] BYREF

  v19[1] = __readfsqword(0x28u);
  v7 = qalloc_or_throw();
  v8 = itext();
  *(_QWORD *)(v7 + 32) = 0;
  *(_QWORD *)v7 = &stru_236898;
  v9 = (_QWORD *)(v7 + 80);
  *(_QWORD *)(v7 + 8) = 0x2008000000004LL;
  *(_DWORD *)(v7 + 48) = 3;
  *(_QWORD *)(v7 + 56) = 0;
  *(_DWORD *)(v7 + 72) = -1;
  *(_QWORD *)(v7 + 40) = v8;
  *(_QWORD *)(v7 + 64) = &off_2311D0;
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
  *(_QWORD *)v7 = off_231058;
  v11 = *(_DWORD *)(get_eah() + 24);
  v12 = _mm_cvtsi32_si128(a2);
  v13 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a4), _mm_cvtsi32_si128(a5));
  v14 = _mm_cvtsi32_si128(a3);
  v15 = v11 == 4;
  *(_DWORD *)(v7 + 180) = v11;
  v16 = " ";
  if ( v15 )
    v16 = (const char *)&unk_1D57B8;
  *(_DWORD *)(v7 + 72) = 135;
  *(_QWORD *)(v7 + 56) = v16;
  *(_QWORD *)v7 = off_231118;
  *(__m128i *)(v7 + 16) = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v12, v14), v13);
  v19[0] = a1;
  return sub_198E60(v7, v19) == 0;
}

