__int64 __fastcall sub_3B8EB0(int a1, const char *a2)
{
  int v2; // ebp
  __int64 v3; // rbx
  __int64 v4; // rdi
  _QWORD *v5; // rax
  __m128i v6; // xmm0
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool v9; // cc
  __m128i *v10; // rsi
  __m128i si128; // xmm0
  __int64 v12; // rsi
  __m128i v13; // xmm0
  __int64 v15; // rax
  __int64 v16; // rax
  struct _Unwind_Exception *v17; // rbp

  v2 = a1 | 0x20004;
  v3 = qalloc_or_throw(192);
  *(_QWORD *)v3 = &stru_86F6A0;
  v4 = v3 + 80;
  *(_QWORD *)(v3 + 40) = "@0:1358[]\nType Libraries";
  *(_OWORD *)(v3 + 16) = -1;
  v5 = (_QWORD *)(v3 + 80);
  v6 = _mm_loadl_epi64((const __m128i *)off_869118);
  *(_BYTE *)(v3 + 10) = 0;
  *(_BYTE *)(v3 + 11) = (_BYTE)a2;
  *(_DWORD *)(v3 + 12) = v2;
  *(_QWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 48) = 2;
  *(_DWORD *)(v3 + 72) = -1;
  *(_WORD *)(v3 + 8) = 4;
  *(__m128i *)(v3 + 56) = _mm_unpacklo_epi64(v6, (__m128i)(unsigned __int64)&off_8690F0);
  do
  {
    *v5 = 0;
    v5 += 3;
    *((_OWORD *)v5 - 1) = 0;
  }
  while ( v5 != (_QWORD *)(v3 + 176) );
  *(_DWORD *)(v3 + 176) = 0;
  v7 = *(unsigned int *)(v3 + 12);
  v8 = ((*(_DWORD *)(v3 + 12) >> 19) & 0x3Fu) - 1;
  if ( ((*(_DWORD *)(v3 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v3 + 11) != 0xFF )
      goto LABEL_14;
    v7 = (unsigned int)v7 & 0xFE07FFFF;
    *(_BYTE *)(v3 + 11) = ((*(_DWORD *)(v3 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(v3 + 12) = v7;
  }
  if ( (_DWORD)a2 != (char)a2 )
  {
    if ( under_debugger )
      goto LABEL_16;
    interr(3450, a2, v7, v8, 0.0);
LABEL_14:
    if ( !under_debugger )
    {
      v17 = (struct _Unwind_Exception *)interr(3449, a2, v7, v8, 0.0);
      *(_QWORD *)v3 = &unk_870D58;
      sub_1AB100((_QWORD *)v3, a2);
      qfree(v3, a2);
      _Unwind_Resume(v17);
    }
LABEL_16:
    BUG();
  }
  v9 = *(_QWORD *)(v3 + 96) <= 0x14u;
  *(_DWORD *)(v3 + 72) = 69;
  *(_QWORD *)v3 = ltl_chooser_t___vtable;
  v10 = *(__m128i **)(v3 + 80);
  if ( v9 )
  {
    v15 = qvector_reserve(v4, v10, 21, 1);
    *(_QWORD *)(v3 + 80) = v15;
    v10 = (__m128i *)v15;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DD650);
  *(_QWORD *)(v3 + 88) = 21;
  v10[1].m128i_i32[0] = 774778489;
  *v10 = si128;
  *(_BYTE *)(*(_QWORD *)(v3 + 80) + 20LL) = 0;
  v12 = *(_QWORD *)(v3 + 104);
  if ( *(_QWORD *)(v3 + 120) <= 0x1Bu )
  {
    v4 = v3 + 104;
    v16 = qvector_reserve(v3 + 104, v12, 28, 1);
    *(_QWORD *)(v3 + 104) = v16;
    v12 = v16;
  }
  v13 = _mm_load_si128((const __m128i *)&xmmword_5DD660);
  *(_QWORD *)(v3 + 112) = 28;
  *(__m128i *)v12 = v13;
  *(__m128i *)(v12 + 11) = _mm_load_si128((const __m128i *)&xmmword_5DD670);
  *(_BYTE *)(*(_QWORD *)(v3 + 104) + 27LL) = 0;
  *(_QWORD *)(v3 + 184) = get_idati(v4);
  return v3;
}
