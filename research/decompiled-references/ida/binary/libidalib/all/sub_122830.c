bool __fastcall sub_122830(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 v8; // r15
  __int64 v9; // rbx
  _QWORD *v10; // rax
  unsigned int v11; // edx
  __int64 ph; // rax
  bool v13; // cc
  void *v14; // rsi
  __int128 v15; // xmm2
  __m128i *v16; // rsi
  __m128i si128; // xmm0
  void *v18; // rsi
  __int64 v19; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD v25[9]; // [rsp+10h] [rbp-48h] BYREF

  v25[1] = __readfsqword(0x28u);
  v8 = itext();
  v9 = qalloc_or_throw();
  *(_QWORD *)(v9 + 32) = 0;
  *(_DWORD *)(v9 + 48) = 0;
  *(_DWORD *)(v9 + 72) = -1;
  *(_QWORD *)v9 = &stru_236898;
  *(_QWORD *)(v9 + 40) = v8;
  *(_OWORD *)(v9 + 16) = -1;
  *(_QWORD *)(v9 + 8) = 0x2078405000004LL;
  v10 = (_QWORD *)(v9 + 80);
  *(_OWORD *)(v9 + 56) = 0;
  do
  {
    *v10 = 0;
    v10 += 3;
    *((_OWORD *)v10 - 1) = 0;
  }
  while ( (_QWORD *)(v9 + 176) != v10 );
  *(_DWORD *)(v9 + 176) = 0;
  v11 = *(_DWORD *)(v9 + 12);
  if ( ((v11 >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v9 + 11) != 0xFF )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    *(_BYTE *)(v9 + 11) = ((v11 >> 19) & 0x3F) - 1;
    *(_DWORD *)(v9 + 12) = v11 & 0xFE07FFFF;
  }
  *(_QWORD *)v9 = off_232030;
  ph = get_ph();
  *(_QWORD *)(v9 + 184) = ph;
  LODWORD(ph) = *(_DWORD *)(ph + 8);
  *(_QWORD *)(v9 + 200) = 0;
  *(_OWORD *)(v9 + 208) = 0;
  *(_QWORD *)(v9 + 224) = 0;
  *(_BYTE *)(v9 + 192) = (ph & 0xC0) == 64;
  *(_OWORD *)(v9 + 232) = 0;
  *(_DWORD *)(v9 + 248) = *(_DWORD *)(get_eah() + 24);
  sub_122300(v9);
  v13 = *(_QWORD *)(v9 + 96) <= 0xEu;
  v14 = *(void **)(v9 + 80);
  *(_DWORD *)(v9 + 72) = 46;
  *((_QWORD *)&v15 + 1) = _mm_loadu_si128((const __m128i *)(v9 + 216)).m128i_i64[1];
  *(_QWORD *)v9 = off_2320F0;
  *(double *)&v15 = *(double *)(v9 + 200);
  *(_OWORD *)(v9 + 56) = v15;
  if ( v13 )
  {
    v23 = qvector_reserve();
    *(_QWORD *)(v9 + 80) = v23;
    v14 = (void *)v23;
  }
  *(_QWORD *)(v9 + 88) = 15;
  qmemcpy(v14, "Add segment...", 14);
  *(_BYTE *)(*(_QWORD *)(v9 + 80) + 14LL) = 0;
  v16 = *(__m128i **)(v9 + 104);
  if ( *(_QWORD *)(v9 + 120) <= 0x11u )
  {
    v22 = qvector_reserve();
    *(_QWORD *)(v9 + 104) = v22;
    v16 = (__m128i *)v22;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D3560);
  *(_QWORD *)(v9 + 112) = 18;
  v16[1].m128i_i8[0] = 46;
  *v16 = si128;
  *(_BYTE *)(*(_QWORD *)(v9 + 104) + 17LL) = 0;
  v18 = *(void **)(v9 + 128);
  if ( *(_QWORD *)(v9 + 144) <= 0xFu )
  {
    v21 = qvector_reserve();
    *(_QWORD *)(v9 + 128) = v21;
    v18 = (void *)v21;
  }
  *(_QWORD *)(v9 + 136) = 16;
  qmemcpy(v18, "Edit segment...", 15);
  v19 = *(_QWORD *)(v9 + 128);
  v25[0] = a1;
  *(_BYTE *)(v19 + 15) = 0;
  *(__m128i *)(v9 + 16) = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(a3)),
                            _mm_unpacklo_epi32(_mm_cvtsi32_si128(a4), _mm_cvtsi32_si128(a5)));
  if ( a1 == -1 )
    v25[0] = xmmword_2528A0;
  return sub_198E60(v9, v25) == 0;
}

