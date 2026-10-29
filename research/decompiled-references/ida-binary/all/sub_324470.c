__int64 __fastcall sub_324470(__int64 a1, const char *a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v6; // ebp
  __int64 v8; // r15
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 ph; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // cc
  void *v18; // rsi
  __int128 v19; // xmm2
  __m128i *v20; // rsi
  __m128i si128; // xmm0
  void *v22; // rsi
  __m128i v23; // xmm0
  __int64 v24; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // [rsp+0h] [rbp-68h]
  int v32; // [rsp+8h] [rbp-60h]
  unsigned int v33; // [rsp+Ch] [rbp-5Ch]
  int v34[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v35; // [rsp+18h] [rbp-50h]
  int v36; // [rsp+20h] [rbp-48h]
  int v37[2]; // [rsp+28h] [rbp-40h]
  __int64 v38; // [rsp+30h] [rbp-38h]

  v6 = (unsigned int)a2;
  v33 = a3;
  *(_QWORD *)v37 = __readfsqword(0x28u);
  v8 = itext(1036, a2, a3);
  v9 = qalloc_or_throw(256);
  *(_QWORD *)(v9 + 32) = 0;
  *(_DWORD *)(v9 + 48) = 0;
  *(_DWORD *)(v9 + 72) = -1;
  *(_QWORD *)v9 = &stru_86F6A0;
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
  v11 = *(unsigned int *)(v9 + 12);
  v12 = ((*(_DWORD *)(v9 + 12) >> 19) & 0x3Fu) - 1;
  if ( ((*(_DWORD *)(v9 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v9 + 11) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, a2, v11, v12, 0.0);
      BUG();
    }
    v11 = (unsigned int)v11 & 0xFE07FFFF;
    *(_BYTE *)(v9 + 11) = ((*(_DWORD *)(v9 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(v9 + 12) = v11;
  }
  *(_QWORD *)v9 = segm_chooser_t___vtable;
  ph = get_ph(256, a2, v11, v12);
  *(_QWORD *)(v9 + 184) = ph;
  LODWORD(ph) = *(_DWORD *)(ph + 8);
  *(_QWORD *)(v9 + 200) = 0;
  *(_OWORD *)(v9 + 208) = 0;
  *(_QWORD *)(v9 + 224) = 0;
  *(_BYTE *)(v9 + 192) = (ph & 0xC0) == 64;
  *(_OWORD *)(v9 + 232) = 0;
  *(_DWORD *)(v9 + 248) = *(_DWORD *)(get_eah(256, a2, v14) + 24);
  sub_323F40(v9);
  v17 = *(_QWORD *)(v9 + 96) <= 0xEu;
  v18 = *(void **)(v9 + 80);
  *(_DWORD *)(v9 + 72) = 46;
  *((_QWORD *)&v19 + 1) = _mm_loadu_si128((const __m128i *)(v9 + 216)).m128i_i64[1];
  *(_QWORD *)v9 = segm_editor_t___vtable;
  *(double *)&v19 = *(double *)(v9 + 200);
  *(_OWORD *)(v9 + 56) = v19;
  if ( v17 )
  {
    v30 = qvector_reserve(v9 + 80, v18, 15, 1);
    *(_QWORD *)(v9 + 80) = v30;
    v18 = (void *)v30;
  }
  *(_QWORD *)(v9 + 88) = 15;
  qmemcpy(v18, "Add segment...", 14);
  *(_BYTE *)(*(_QWORD *)(v9 + 80) + 14LL) = 0;
  v20 = *(__m128i **)(v9 + 104);
  if ( *(_QWORD *)(v9 + 120) <= 0x11u )
  {
    v27 = qvector_reserve(v9 + 104, v20, 18, 1);
    *(_QWORD *)(v9 + 104) = v27;
    v20 = (__m128i *)v27;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DD040);
  *(_QWORD *)(v9 + 112) = 18;
  v20[1].m128i_i8[0] = 46;
  *v20 = si128;
  *(_BYTE *)(*(_QWORD *)(v9 + 104) + 17LL) = 0;
  v22 = *(void **)(v9 + 128);
  if ( *(_QWORD *)(v9 + 144) <= 0xFu )
  {
    v26 = qvector_reserve(v9 + 128, v22, 16, 1);
    *(_QWORD *)(v9 + 128) = v26;
    v22 = (void *)v26;
  }
  *(_QWORD *)(v9 + 136) = 16;
  qmemcpy(v22, "Edit segment...", 15);
  v23 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v6), _mm_cvtsi32_si128(v33)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a4), _mm_cvtsi32_si128(a5)));
  *(_BYTE *)(*(_QWORD *)(v9 + 128) + 15LL) = 0;
  *(__m128i *)(v9 + 16) = v23;
  *(_QWORD *)v34 = a1;
  if ( a1 == -1 )
    *(_QWORD *)v34 = xmmword_8CC810;
  v24 = sub_4AED50(v9, v34, v15, v16);
  LOBYTE(a4) = v24 == 0;
  if ( !v24 )
  {
    v28 = sub_4A0300(*(void **)(v9 + 40), v31, v32, v34[0], v35, v36, v37[0], v38);
    if ( v28 )
    {
      v29 = *(_QWORD *)(v28 + 2488);
      v35 = 0;
      *(_QWORD *)v34 = v29;
      sub_534250(v34, 0, 0, *(double *)v23.m128i_i64);
      sub_534250(v34, unk_8CA8D0, 0, *(double *)v23.m128i_i64);
      sub_534250(v34, unk_8CA8D8, 0, *(double *)v23.m128i_i64);
    }
  }
  return a4;
}
