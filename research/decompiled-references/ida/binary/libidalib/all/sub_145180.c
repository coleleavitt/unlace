__int64 __fastcall sub_145180(int a1, int a2)
{
  __int64 v2; // rbx
  __m128i v3; // xmm0
  _QWORD *v4; // rax
  unsigned int v5; // edx
  bool v6; // cc
  void *v7; // rsi
  __int64 v8; // rsi
  __m128i si128; // xmm0
  __m128i *v10; // rsi
  __m128i v11; // xmm0
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  struct _Unwind_Exception *v16; // rbp

  v2 = qalloc_or_throw();
  *(_QWORD *)(v2 + 40) = itext();
  *(_OWORD *)(v2 + 16) = -1;
  v3 = _mm_loadl_epi64(&off_234700);
  *(_QWORD *)v2 = &stru_236898;
  *(_WORD *)(v2 + 8) = 4;
  v4 = (_QWORD *)(v2 + 80);
  *(_BYTE *)(v2 + 10) = 0;
  *(_BYTE *)(v2 + 11) = a2;
  *(_DWORD *)(v2 + 12) = a1 | 0x20084;
  *(_QWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 48) = 2;
  *(_DWORD *)(v2 + 72) = -1;
  *(__m128i *)(v2 + 56) = _mm_unpacklo_epi64(v3, (__m128i)(unsigned __int64)off_2346F0);
  do
  {
    *v4 = 0;
    v4 += 3;
    *((_OWORD *)v4 - 1) = 0;
  }
  while ( v4 != (_QWORD *)(v2 + 176) );
  *(_DWORD *)(v2 + 176) = 0;
  v5 = *(_DWORD *)(v2 + 12);
  if ( ((v5 >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v2 + 11) != 0xFF )
      goto LABEL_16;
    *(_BYTE *)(v2 + 11) = ((v5 >> 19) & 0x3F) - 1;
    *(_DWORD *)(v2 + 12) = v5 & 0xFE07FFFF;
  }
  if ( a2 != (char)a2 )
  {
    if ( under_debugger )
      goto LABEL_18;
    interr();
LABEL_16:
    if ( !under_debugger )
    {
      v16 = (struct _Unwind_Exception *)interr();
      qfree();
      _Unwind_Resume(v16);
    }
LABEL_18:
    BUG();
  }
  v6 = *(_QWORD *)(v2 + 96) <= 0xFu;
  *(_DWORD *)(v2 + 72) = 48;
  *(_QWORD *)v2 = off_234638;
  v7 = *(void **)(v2 + 80);
  if ( v6 )
  {
    v13 = qvector_reserve();
    *(_QWORD *)(v2 + 80) = v13;
    v7 = (void *)v13;
  }
  *(_QWORD *)(v2 + 88) = 16;
  qmemcpy(v7, "Add selector...", 15);
  *(_BYTE *)(*(_QWORD *)(v2 + 80) + 15LL) = 0;
  v8 = *(_QWORD *)(v2 + 104);
  if ( *(_QWORD *)(v2 + 120) <= 0x15u )
  {
    v15 = qvector_reserve();
    *(_QWORD *)(v2 + 104) = v15;
    v8 = v15;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D3760);
  *(_QWORD *)(v2 + 112) = 22;
  *(__m128i *)v8 = si128;
  *(_QWORD *)(v8 + 13) = 0x2E2E2E297328726FLL;
  *(_BYTE *)(*(_QWORD *)(v2 + 104) + 21LL) = 0;
  v10 = *(__m128i **)(v2 + 128);
  if ( *(_QWORD *)(v2 + 144) <= 0x18u )
  {
    v14 = qvector_reserve();
    *(_QWORD *)(v2 + 128) = v14;
    v10 = (__m128i *)v14;
  }
  v11 = _mm_load_si128((const __m128i *)&xmmword_1D3770);
  *(_QWORD *)(v2 + 136) = 25;
  v10[1].m128i_i64[0] = 0x2E2E2E65756C6176LL;
  *v10 = v11;
  *(_BYTE *)(*(_QWORD *)(v2 + 128) + 24LL) = 0;
  return v2;
}

