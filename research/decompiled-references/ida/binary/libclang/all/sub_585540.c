int __fastcall sub_585540(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AF2110 = 0;
  qword_4AF2118 = 0;
  qword_4AF2120 = 0;
  qword_4AF2100 = (__int64)&off_4A6E058;
  qword_4AF2108 = (unsigned int)qword_4AF2108 & 0x80000000;
  qword_4AF2128 = 0;
  qword_4AF2148 = 0x100000000LL;
  qword_4AF2130 = 0;
  qword_4AF2138 = 0;
  qword_4AF2140 = (__int64)&qword_4AF2150;
  qword_4AF2158 = (__int64)&qword_4AF2170;
  qword_4AF2160 = 1;
  dword_4AF2168 = 0;
  byte_4AF216C = 1;
  v1 = sub_259AC30(a1, &qword_4AF2150);
  v2 = (unsigned int)qword_4AF2148;
  v3 = (unsigned int)qword_4AF2148 + 1LL;
  if ( HIDWORD(qword_4AF2148) < v3 )
  {
    sub_25D6060(&qword_4AF2150 - 2, &qword_4AF2150, v3, 8);
    v2 = (unsigned int)qword_4AF2148;
  }
  *(_QWORD *)(qword_4AF2140 + 8 * v2) = v1;
  word_4AF2188 = 0;
  xmmword_4AF2198 = 0;
  LODWORD(qword_4AF2148) = qword_4AF2148 + 1;
  qword_4AF2180 = (__int64)&off_4A64730;
  byte_4AF2178 = 0;
  qword_4AF2100 = (__int64)off_4A6DFF0;
  qword_4AF2190 = (__int64)off_49D9168;
  xmmword_4AF21A8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E93E0),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AF2100, "view-edge-bundles", 17);
  qword_4AF2128 = 42;
  BYTE2(qword_4AF2108) = BYTE2(qword_4AF2108) & 0x9F | 0x20;
  qword_4AF2120 = (__int64)"Pop up a window to show edge bundle graphs";
  sub_259EC40(&qword_4AF2100);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AF2100, &off_47CFE00);
}

