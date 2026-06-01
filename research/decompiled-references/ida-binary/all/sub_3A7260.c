void *__fastcall sub_3A7260(__int64 a1)
{
  __int64 v2; // rdi
  __m128i si128; // xmm0
  __m128i v4; // xmm1

  v2 = a1 + 64;
  *(_QWORD *)(v2 - 64) = &unk_872A10;
  *(_QWORD *)(v2 - 56) = 0;
  *(_WORD *)(v2 - 32) = 0;
  *(_QWORD *)(v2 - 24) = 0;
  *(_QWORD *)(v2 - 16) = 0;
  *(_WORD *)(v2 - 8) = 1;
  *(_OWORD *)(v2 - 48) = 0;
  sub_3A5C10(v2);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC720);
  v4 = _mm_load_si128((const __m128i *)&xmmword_5DD510);
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)a1 = &edit_type_form_data_t___vtable;
  *(__m128i *)(a1 + 128) = si128;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 264) = -1;
  *(_QWORD *)(a1 + 272) = 0;
  *(_BYTE *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  *(_BYTE *)(a1 + 316) = 0;
  *(_QWORD *)(a1 + 240) = &unk_8BCB20;
  *(_OWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  *(__m128i *)(a1 + 248) = v4;
  *(_OWORD *)(a1 + 280) = 0;
  return &unk_8BCB20;
}
