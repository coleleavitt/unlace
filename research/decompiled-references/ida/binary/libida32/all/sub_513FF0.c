_QWORD *__fastcall sub_513FF0(__int64 a1)
{
  _QWORD *v1; // rbp
  __int64 v2; // rbx
  __int64 v3; // rax
  __m128i si128; // xmm0
  unsigned int v6; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v6 = 206;
  v1 = (_QWORD *)operator new(8u);
  v2 = operator new(0x30u);
  *(_QWORD *)v2 = &unk_2BD03E8;
  *(_DWORD *)(v2 + 8) = 5;
  *(_QWORD *)(v2 + 16) = 0;
  *(_OWORD *)(v2 + 24) = 0;
  v3 = qvector_reserve(v2 + 16, 0, 18, 1);
  *(_QWORD *)(v2 + 16) = v3;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2383AF0);
  *(_QWORD *)(v2 + 24) = 18;
  *(_BYTE *)(v3 + 16) = 115;
  *(__m128i *)v3 = si128;
  *(_BYTE *)(*(_QWORD *)(v2 + 16) + 17LL) = 0;
  *(_QWORD *)v2 = &off_2B03F10;
  *(_QWORD *)(v2 + 40) = a1;
  *v1 = sub_414870((__int64)v1, v2, &v6);
  return v1;
}

