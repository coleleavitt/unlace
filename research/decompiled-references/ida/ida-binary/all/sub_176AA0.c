__int64 __fastcall sub_176AA0(__int64 a1, int a2)
{
  __m128i si128; // xmm0

  QT::QObject::QObject((QT::QObject *)a1, nullptr);
  *(_DWORD *)(a1 + 32) = a2;
  *(_OWORD *)(a1 + 48) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)a1 = &AbstractRenderer___vtable;
  *(_BYTE *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 64) = -1;
  *(_QWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 124) = -1;
  *(_QWORD *)(a1 + 128) = a1;
  *(_QWORD *)(a1 + 72) = -1;
  *(_QWORD *)(a1 + 80) = -1;
  *(_DWORD *)(a1 + 88) = 0;
  *(__m128i *)(a1 + 108) = si128;
  QT::QObject::QObject((QT::QObject *)(a1 + 136), nullptr);
  *(_BYTE *)(a1 + 30) = 0;
  *(_QWORD *)(a1 + 136) = &off_86F790;
  *(_QWORD *)(a1 + 152) = a1;
  *(_QWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_WORD *)(a1 + 28) = 256;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  return 256;
}
