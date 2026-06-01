bool __fastcall sub_37F300(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  unsigned int v12; // r13d
  __int64 v16; // rbx
  __int64 v17; // rdi
  _QWORD *v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // rcx
  bool v22; // cc
  __int64 v23; // rsi
  __m128i si128; // xmm0
  __m128i *v25; // rsi
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __m128 v35; // xmm4
  __m128 v36; // xmm5
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD v39[7]; // [rsp+0h] [rbp-38h] BYREF

  v12 = a2;
  v39[1] = __readfsqword(0x28u);
  if ( !(unsigned int)get_idasgn_qty() && (unsigned int)getinf(5) == 11 )
    sub_169630(
      (int)"ICON ERROR\n"
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
           "   please use \"File->Load file->FLIRT signature file\" menu item.\n",
      a2,
      v31,
      v32,
      v33,
      v34,
      a5,
      a6,
      a7,
      a8,
      v35,
      v36,
      a11,
      a12,
      v39[0]);
  v16 = qalloc_or_throw(184);
  *(_QWORD *)v16 = &stru_86F6A0;
  v17 = v16 + 80;
  *(_QWORD *)(v16 + 8) = 0x2030008000004LL;
  *(_QWORD *)(v16 + 40) = "@0:588[]\nSignatures";
  *(_OWORD *)(v16 + 16) = -1;
  v18 = (_QWORD *)(v16 + 80);
  v19 = _mm_loadl_epi64((const __m128i *)&off_867B38);
  *(_QWORD *)(v16 + 32) = 0;
  *(_DWORD *)(v16 + 48) = 4;
  *(_DWORD *)(v16 + 72) = -1;
  *(__m128i *)(v16 + 56) = _mm_unpacklo_epi64(v19, (__m128i)(unsigned __int64)&off_867B00);
  do
  {
    *v18 = 0;
    v18 += 3;
    *((_OWORD *)v18 - 1) = 0;
  }
  while ( (_QWORD *)(v16 + 176) != v18 );
  *(_DWORD *)(v16 + 176) = 0;
  v20 = *(unsigned int *)(v16 + 12);
  v21 = ((*(_DWORD *)(v16 + 12) >> 19) & 0x3Fu) - 1;
  if ( ((*(_DWORD *)(v16 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v16 + 11) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, a2, v20, v21, 0.0);
      BUG();
    }
    v20 = (unsigned int)v20 & 0xFE07FFFF;
    *(_BYTE *)(v16 + 11) = ((*(_DWORD *)(v16 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(v16 + 12) = v20;
  }
  v22 = *(_QWORD *)(v16 + 96) <= 0x16u;
  *(_DWORD *)(v16 + 72) = 47;
  *(_QWORD *)v16 = appsgn_chooser_t___vtable;
  v23 = *(_QWORD *)(v16 + 80);
  if ( v22 )
  {
    v38 = qvector_reserve(v17, v23, 23, 1);
    *(_QWORD *)(v16 + 80) = v38;
    v23 = v38;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DD340);
  *(_QWORD *)(v16 + 88) = 23;
  *(__m128i *)v23 = si128;
  *(_QWORD *)(v23 + 14) = 0x2E2E2E6572757461LL;
  *(_BYTE *)(*(_QWORD *)(v16 + 80) + 22LL) = 0;
  v25 = *(__m128i **)(v16 + 104);
  if ( *(_QWORD *)(v16 + 120) <= 0x21u )
  {
    v17 = v16 + 104;
    v37 = qvector_reserve(v16 + 104, v25, 34, 1);
    *(_QWORD *)(v16 + 104) = v37;
    v25 = (__m128i *)v37;
  }
  v26 = _mm_load_si128((const __m128i *)&xmmword_5DD350);
  *(_QWORD *)(v16 + 112) = 34;
  *v25 = v26;
  v27 = _mm_load_si128((const __m128i *)&xmmword_5DD360);
  v25[2].m128i_i8[0] = 116;
  v25[1] = v27;
  *(_BYTE *)(*(_QWORD *)(v16 + 104) + 33LL) = 0;
  *(__m128i *)(v16 + 16) = _mm_unpacklo_epi64(
                             _mm_unpacklo_epi32(_mm_cvtsi32_si128(a1), _mm_cvtsi32_si128(v12)),
                             _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(a4)));
  v39[0] = (int)get_current_idasgn(v17, v25, v20, v21);
  return sub_4AED50(v16, v39, v28, v29) == 0;
}
