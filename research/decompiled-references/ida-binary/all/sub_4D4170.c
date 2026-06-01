__int64 __fastcall sub_4D4170(__int64 a1)
{
  __m128i v2[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v3; // [rsp+38h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  v2[0] = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(a1 + 104) + 64LL));
  return __ROR4__(_byteswap_ulong(QT::QColor::rgb((QT::QColor *)v2)), 8) & 0xFFFFFF;
}
