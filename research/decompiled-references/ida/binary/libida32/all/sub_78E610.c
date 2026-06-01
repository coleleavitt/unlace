__int64 sub_78E610()
{
  __int64 v0; // rdx
  __m128i si128; // xmm0

  v0 = operator new(0x850u);
  *(_OWORD *)v0 = 0;
  *(_OWORD *)(v0 + 16) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384390);
  *(_QWORD *)(v0 + 32) = 0;
  *(_DWORD *)(v0 + 40) = 0;
  *(_QWORD *)(v0 + 60) = 114;
  *(_QWORD *)(v0 + 68) = 0;
  *(__m128i *)(v0 + 44) = si128;
  *(_QWORD *)(v0 + 76) = 0;
  *(_QWORD *)(v0 + 555) = 0;
  memset(
    (void *)((v0 + 84) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v0 - (((_DWORD)v0 + 84) & 0xFFFFFFF8) + 563) >> 3));
  *(_QWORD *)(v0 + 563) = 0x6B6E696C2D000500LL;
  *(_QWORD *)(v0 + 571) = 0;
  *(_QWORD *)(v0 + 579) = 0;
  *(_QWORD *)(v0 + 1074) = 0;
  memset(
    (void *)((v0 + 587) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v0 - (((_DWORD)v0 + 587) & 0xFFFFFFF8) + 1082) >> 3));
  *(_QWORD *)(v0 + 1082) = 0x656D616E4E232300LL;
  *(_QWORD *)(v0 + 1090) = 0;
  *(_QWORD *)(v0 + 1098) = 0;
  *(_QWORD *)(v0 + 1593) = 0;
  memset(
    (void *)((v0 + 1106) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v0 - (((_DWORD)v0 + 1106) & 0xFFFFFFF8) + 1601) >> 3));
  *(_QWORD *)(v0 + 1601) = 0x656D614E6E232300LL;
  *(_QWORD *)(v0 + 1609) = 0;
  *(_QWORD *)(v0 + 1617) = 0;
  *(_QWORD *)(v0 + 2112) = 0;
  memset(
    (void *)((v0 + 1625) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v0 - (((_DWORD)v0 + 1625) & 0xFFFFFFF8) + 2120) >> 3));
  *(_QWORD *)(v0 + 2120) = 0;
  return v0;
}

