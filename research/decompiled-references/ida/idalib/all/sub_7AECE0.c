__int64 sub_7AECE0()
{
  __int64 v0; // rdx
  __m128i si128; // xmm0

  v0 = operator new(0x858u);
  *(_OWORD *)v0 = 0;
  *(_OWORD *)(v0 + 16) = 0;
  *(_OWORD *)(v0 + 32) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A83C0);
  *(_DWORD *)(v0 + 48) = 0;
  *(_QWORD *)(v0 + 68) = 114;
  *(_QWORD *)(v0 + 76) = 0;
  *(__m128i *)(v0 + 52) = si128;
  *(_QWORD *)(v0 + 84) = 0;
  *(_QWORD *)(v0 + 563) = 0;
  memset(
    (void *)((v0 + 92) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v0 - (((_DWORD)v0 + 92) & 0xFFFFFFF8) + 571) >> 3));
  *(_QWORD *)(v0 + 571) = 0x6B6E696C2D000500LL;
  *(_QWORD *)(v0 + 579) = 0;
  *(_QWORD *)(v0 + 587) = 0;
  *(_QWORD *)(v0 + 1082) = 0;
  memset(
    (void *)((v0 + 595) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v0 - (((_DWORD)v0 + 595) & 0xFFFFFFF8) + 1090) >> 3));
  *(_QWORD *)(v0 + 1090) = 0x656D616E4E232300LL;
  *(_QWORD *)(v0 + 1098) = 0;
  *(_QWORD *)(v0 + 1106) = 0;
  *(_QWORD *)(v0 + 1601) = 0;
  memset(
    (void *)((v0 + 1114) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v0 - (((_DWORD)v0 + 1114) & 0xFFFFFFF8) + 1609) >> 3));
  *(_QWORD *)(v0 + 1609) = 0x656D614E6E232300LL;
  *(_QWORD *)(v0 + 1617) = 0;
  *(_QWORD *)(v0 + 1625) = 0;
  *(_QWORD *)(v0 + 2120) = 0;
  memset(
    (void *)((v0 + 1633) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v0 - (((_DWORD)v0 + 1633) & 0xFFFFFFF8) + 2128) >> 3));
  *(_QWORD *)(v0 + 2128) = 0;
  return v0;
}
