bool __fastcall sub_146450(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __m128i v9; // xmm0
  unsigned int v10; // edx
  bool v11; // cc
  __int64 v12; // rsi
  __m128i si128; // xmm0
  __m128i *v14; // rsi
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD v20[7]; // [rsp+0h] [rbp-38h] BYREF

  v20[1] = __readfsqword(0x28u);
  if ( !(unsigned int)get_idasgn_qty() && (unsigned int)getinf() == 11 )
    sub_92200((__int64)"ICON ERROR\n"
                       "AUTOHIDE REGISTRY\n"
                       "IDA has failed to recognize the compiler used to create this program.\n"
                       "This can be because\n"
                       "\n"
                       "\n"
                       "1) IDA does not have FLIRT libraries for this compiler. If you have the\n"
                       "   original object libraries, you may be able to create your own custom\n"
                       "   FLIRT libraries. Check our web site for further information.\n"
                       "\n"
                       "\n"
                       "2) The required FLIRT libraries are available but IDA has not recognized\n"
                       "   the compiler. If you know which compiler was used to create the program,\n"
                       "   please use \"File->Load file->FLIRT signature file\" menu item.\n");
  v7 = qalloc_or_throw();
  *(_QWORD *)v7 = &stru_236898;
  *(_QWORD *)(v7 + 8) = 0x2030008000004LL;
  *(_QWORD *)(v7 + 40) = "@0:588[]\nSignatures";
  *(_OWORD *)(v7 + 16) = -1;
  v8 = (_QWORD *)(v7 + 80);
  v9 = _mm_loadl_epi64((const __m128i *)&off_234858);
  *(_QWORD *)(v7 + 32) = 0;
  *(_DWORD *)(v7 + 48) = 4;
  *(_DWORD *)(v7 + 72) = -1;
  *(__m128i *)(v7 + 56) = _mm_unpacklo_epi64(v9, (__m128i)(unsigned __int64)&off_234820);
  do
  {
    *v8 = 0;
    v8 += 3;
    *((_OWORD *)v8 - 1) = 0;
  }
  while ( (_QWORD *)(v7 + 176) != v8 );
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
  v11 = *(_QWORD *)(v7 + 96) <= 0x16u;
  *(_DWORD *)(v7 + 72) = 47;
  *(_QWORD *)v7 = off_234718;
  v12 = *(_QWORD *)(v7 + 80);
  if ( v11 )
  {
    v19 = qvector_reserve();
    *(_QWORD *)(v7 + 80) = v19;
    v12 = v19;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D3780);
  *(_QWORD *)(v7 + 88) = 23;
  *(__m128i *)v12 = si128;
  *(_QWORD *)(v12 + 14) = 0x2E2E2E6572757461LL;
  *(_BYTE *)(*(_QWORD *)(v7 + 80) + 22LL) = 0;
  v14 = *(__m128i **)(v7 + 104);
  if ( *(_QWORD *)(v7 + 120) <= 0x21u )
  {
    v18 = qvector_reserve();
    *(_QWORD *)(v7 + 104) = v18;
    v14 = (__m128i *)v18;
  }
  v15 = _mm_load_si128((const __m128i *)&xmmword_1D3790);
  *(_QWORD *)(v7 + 112) = 34;
  *v14 = v15;
  v16 = _mm_load_si128((const __m128i *)&xmmword_1D37A0);
  v14[2].m128i_i8[0] = 116;
  v14[1] = v16;
  *(_BYTE *)(*(_QWORD *)(v7 + 104) + 33LL) = 0;
  *(__m128i *)(v7 + 16) = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(_mm_cvtsi32_si128(a1), _mm_cvtsi32_si128(a2)),
                            _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(a4)));
  v20[0] = (int)get_current_idasgn();
  return sub_198E60(v7, v20) == 0;
}

