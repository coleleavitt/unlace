__int64 __fastcall sub_3AD7B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  size_t v6; // r14
  __int64 v7; // r13
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rax
  __m128i si128; // xmm0
  __int64 v12; // r12
  void *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 result; // rax
  unsigned __int64 v19; // rdx
  void *v20; // rax
  const void *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax

  *(_QWORD *)(a1 + 8) = 0xFFFFFFFF00000001LL;
  *(_QWORD *)(a1 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)a1 = &forms::abstract_form_desc_t___vtable;
  *(_QWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 )
  {
    v20 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 8));
    *(_QWORD *)(a1 + 144) = v20;
    v21 = *(const void **)a2;
    *(_QWORD *)(a1 + 160) = v6;
    memcpy(v20, v21, v6);
    *(_QWORD *)(a1 + 152) = v6;
  }
  *(_DWORD *)(a1 + 168) = -1;
  *(_QWORD *)a1 = &forms::dialog_desc_t___vtable;
  *(_QWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 200) = -1;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  sub_3AADF0(a1 + 176, 2, -1);
  sub_3AADF0(a1 + 176, 4, -1);
  *(_QWORD *)(a1 + 264) = a3;
  *(_QWORD *)a1 = &ask_offset_dialog_t___vtable;
  *(_QWORD *)(a1 + 256) = ask_offset_codec_t___vtable;
  *(_QWORD *)(a1 + 272) = a4;
  v7 = operator new(0x28u);
  *(_QWORD *)(v7 + 8) = 0;
  *(_DWORD *)(v7 + 32) = 4;
  *(_OWORD *)(v7 + 16) = 0;
  *(_QWORD *)v7 = &forms::flayout_t___vtable;
  *(_QWORD *)(a1 + 104) = v7;
  v8 = operator new(0xB0u);
  *(_QWORD *)(v8 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v8 + 8) = 4;
  *(_QWORD *)(v8 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v8 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)v8 = &forms::number_t___vtable;
  *(_QWORD *)(v8 + 136) = a1 + 272;
  v9 = *(_QWORD *)(a1 + 272);
  *(_QWORD *)(v8 + 48) = 0;
  *(_QWORD *)(v8 + 160) = v9;
  *(_QWORD *)(v8 + 56) = 0;
  *(_QWORD *)(v8 + 80) = 0;
  *(_QWORD *)(v8 + 104) = 0;
  *(_QWORD *)(v8 + 128) = 0;
  *(_BYTE *)(v8 + 152) = 2;
  *(_DWORD *)(v8 + 168) = 7;
  *(_QWORD *)(v8 + 144) = a1 + 256;
  *(_OWORD *)(v8 + 64) = 0;
  *(_OWORD *)(v8 + 88) = 0;
  *(_OWORD *)(v8 + 112) = 0;
  v10 = qvector_reserve(v8 + 56, 0, 148, 1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DD5C0);
  *(_QWORD *)(v8 + 56) = v10;
  *(_QWORD *)(v8 + 64) = 148;
  *(__m128i *)v10 = si128;
  *(__m128i *)(v10 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DD5D0);
  *(__m128i *)(v10 + 32) = _mm_load_si128((const __m128i *)&xmmword_5DD5E0);
  *(__m128i *)(v10 + 48) = _mm_load_si128((const __m128i *)&xmmword_5DD5F0);
  *(__m128i *)(v10 + 64) = _mm_load_si128((const __m128i *)&xmmword_5DD600);
  *(__m128i *)(v10 + 80) = _mm_load_si128((const __m128i *)&xmmword_5DD610);
  *(__m128i *)(v10 + 96) = _mm_load_si128((const __m128i *)&xmmword_5DD620);
  *(__m128i *)(v10 + 112) = _mm_load_si128((const __m128i *)&xmmword_5DD630);
  *(__m128i *)(v10 + 128) = _mm_load_si128((const __m128i *)&xmmword_5DD640);
  *(_DWORD *)(v10 + 143) = 690111327;
  *(_BYTE *)(*(_QWORD *)(v8 + 56) + 147LL) = 0;
  v12 = operator new(0x88u);
  *(_QWORD *)(v12 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v12 + 8) = 0xFFFFFFFF00000002LL;
  *(_QWORD *)(v12 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v12 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v12 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v12 + 48) = 0;
  *(_QWORD *)(v12 + 56) = 0;
  *(_QWORD *)(v12 + 80) = 0;
  *(_QWORD *)v12 = &forms::label_t___vtable;
  *(_QWORD *)(v12 + 104) = 0;
  *(_OWORD *)(v12 + 64) = 0;
  *(_OWORD *)(v12 + 88) = 0;
  *(_OWORD *)(v12 + 112) = 0;
  v13 = (void *)qvector_reserve(v12 + 104, 0, 16, 1);
  *(_QWORD *)(v12 + 104) = v13;
  *(_QWORD *)(v12 + 112) = 16;
  qmemcpy(v13, "&Jump to offset", 15);
  *(_BYTE *)(*(_QWORD *)(v12 + 104) + 15LL) = 0;
  v14 = *(_QWORD *)(v7 + 16);
  *(_BYTE *)(v12 + 128) = 0;
  v15 = *(_QWORD *)(v7 + 8);
  *(_DWORD *)(v12 + 32) = 1;
  if ( *(_QWORD *)(v7 + 24) < (unsigned __int64)(v14 + 1) )
  {
    v23 = qvector_reserve(v7 + 8, v15, v14 + 1, 8);
    *(_QWORD *)(v7 + 8) = v23;
    v15 = v23;
    v14 = *(_QWORD *)(v7 + 16);
  }
  *(_QWORD *)(v15 + 8 * v14) = v12;
  v16 = *(_QWORD *)(v7 + 16);
  v17 = *(_QWORD *)(v7 + 8);
  result = v16 + 1;
  v19 = v16 + 2;
  *(_QWORD *)(v7 + 16) = result;
  if ( *(_QWORD *)(v7 + 24) < v19 )
  {
    v22 = qvector_reserve(v7 + 8, v17, v19, 8);
    *(_QWORD *)(v7 + 8) = v22;
    v17 = v22;
    result = *(_QWORD *)(v7 + 16);
  }
  *(_QWORD *)(v17 + 8 * result) = v8;
  *(_DWORD *)(a1 + 168) = 0;
  ++*(_QWORD *)(v7 + 16);
  return result;
}
