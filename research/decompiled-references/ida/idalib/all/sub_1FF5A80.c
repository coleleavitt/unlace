_QWORD *__fastcall sub_1FF5A80(_QWORD *a1)
{
  __int64 v1; // rax
  __m128i si128; // xmm0
  _QWORD *result; // rax

  v1 = operator new(0x38u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AAE90);
  *a1 = v1;
  *(_QWORD *)v1 = v1 + 16;
  *(_QWORD *)(v1 + 8) = 0;
  *(_BYTE *)(v1 + 16) = 0;
  *(_QWORD *)(v1 + 32) = 0;
  *(__m128i *)(v1 + 40) = si128;
  result = (_QWORD *)operator new(8u);
  *result = off_2BE4D50;
  a1[1] = result;
  return result;
}
