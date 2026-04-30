__int64 __fastcall sub_37DCF0(int a1, const char *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __m128i v4; // xmm0
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool v8; // cc
  void *v9; // rsi
  __int64 v10; // rsi
  __m128i si128; // xmm0
  __m128i *v12; // rsi
  __m128i v13; // xmm0
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  struct _Unwind_Exception *v18; // rbp

  v2 = qalloc_or_throw(184);
  *(_QWORD *)(v2 + 40) = itext(1153, a2, v3);
  *(_OWORD *)(v2 + 16) = -1;
  v4 = _mm_loadl_epi64((const __m128i *)&off_8679F0);
  *(_QWORD *)v2 = &stru_86F6A0;
  *(_WORD *)(v2 + 8) = 4;
  v5 = (_QWORD *)(v2 + 80);
  *(_BYTE *)(v2 + 10) = 0;
  *(_BYTE *)(v2 + 11) = (_BYTE)a2;
  *(_DWORD *)(v2 + 12) = a1 | 0x20084;
  *(_QWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 48) = 2;
  *(_DWORD *)(v2 + 72) = -1;
  *(__m128i *)(v2 + 56) = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)off_8679E0);
  do
  {
    *v5 = 0;
    v5 += 3;
    *((_OWORD *)v5 - 1) = 0;
  }
  while ( v5 != (_QWORD *)(v2 + 176) );
  *(_DWORD *)(v2 + 176) = 0;
  v6 = *(unsigned int *)(v2 + 12);
  v7 = ((*(_DWORD *)(v2 + 12) >> 19) & 0x3Fu) - 1;
  if ( ((*(_DWORD *)(v2 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v2 + 11) != 0xFF )
      goto LABEL_16;
    v6 = (unsigned int)v6 & 0xFE07FFFF;
    *(_BYTE *)(v2 + 11) = ((*(_DWORD *)(v2 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(v2 + 12) = v6;
  }
  if ( (_DWORD)a2 != (char)a2 )
  {
    if ( under_debugger )
      goto LABEL_18;
    interr(3450, a2, v6, v7, 0.0);
LABEL_16:
    if ( !under_debugger )
    {
      v18 = (struct _Unwind_Exception *)interr(3449, a2, v6, v7, 0.0);
      qfree(v2, a2);
      _Unwind_Resume(v18);
    }
LABEL_18:
    BUG();
  }
  v8 = *(_QWORD *)(v2 + 96) <= 0xFu;
  *(_DWORD *)(v2 + 72) = 48;
  *(_QWORD *)v2 = sel_chooser_t___vtable;
  v9 = *(void **)(v2 + 80);
  if ( v8 )
  {
    v15 = qvector_reserve(v2 + 80, v9, 16, 1);
    *(_QWORD *)(v2 + 80) = v15;
    v9 = (void *)v15;
  }
  *(_QWORD *)(v2 + 88) = 16;
  qmemcpy(v9, "Add selector...", 15);
  *(_BYTE *)(*(_QWORD *)(v2 + 80) + 15LL) = 0;
  v10 = *(_QWORD *)(v2 + 104);
  if ( *(_QWORD *)(v2 + 120) <= 0x15u )
  {
    v17 = qvector_reserve(v2 + 104, v10, 22, 1);
    *(_QWORD *)(v2 + 104) = v17;
    v10 = v17;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DD320);
  *(_QWORD *)(v2 + 112) = 22;
  *(__m128i *)v10 = si128;
  *(_QWORD *)(v10 + 13) = 0x2E2E2E297328726FLL;
  *(_BYTE *)(*(_QWORD *)(v2 + 104) + 21LL) = 0;
  v12 = *(__m128i **)(v2 + 128);
  if ( *(_QWORD *)(v2 + 144) <= 0x18u )
  {
    v16 = qvector_reserve(v2 + 128, v12, 25, 1);
    *(_QWORD *)(v2 + 128) = v16;
    v12 = (__m128i *)v16;
  }
  v13 = _mm_load_si128((const __m128i *)&xmmword_5DD330);
  *(_QWORD *)(v2 + 136) = 25;
  v12[1].m128i_i64[0] = 0x2E2E2E65756C6176LL;
  *v12 = v13;
  *(_BYTE *)(*(_QWORD *)(v2 + 128) + 24LL) = 0;
  return v2;
}
