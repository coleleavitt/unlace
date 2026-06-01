int __fastcall sub_585720(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AF21F0 = 0;
  qword_4AF21F8 = 0;
  qword_4AF2200 = 0;
  qword_4AF21E0 = (__int64)&off_4A6E058;
  qword_4AF21E8 = (unsigned int)qword_4AF21E8 & 0x80000000;
  qword_4AF2208 = 0;
  qword_4AF2228 = 0x100000000LL;
  qword_4AF2210 = 0;
  qword_4AF2218 = 0;
  qword_4AF2220 = (__int64)&qword_4AF2230;
  qword_4AF2238 = (__int64)&qword_4AF2250;
  qword_4AF2240 = 1;
  dword_4AF2248 = 0;
  byte_4AF224C = 1;
  v1 = sub_259AC30(a1, &qword_4AF2230);
  v2 = (unsigned int)qword_4AF2228;
  v3 = (unsigned int)qword_4AF2228 + 1LL;
  if ( HIDWORD(qword_4AF2228) < v3 )
  {
    sub_25D6060(&qword_4AF2230 - 2, &qword_4AF2230, v3, 8);
    v2 = (unsigned int)qword_4AF2228;
  }
  *(_QWORD *)(qword_4AF2220 + 8 * v2) = v1;
  xmmword_4AF2278 = 0;
  LODWORD(qword_4AF2228) = qword_4AF2228 + 1;
  qword_4AF2260 = (__int64)&off_4A64710;
  dword_4AF2258 = 0;
  byte_4AF226C = 0;
  qword_4AF21E0 = (__int64)off_4A6DEB8;
  dword_4AF2268 = 0;
  qword_4AF2270 = (__int64)off_49D9228;
  xmmword_4AF2288 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E93E8),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4AF21E0, "expand-div-rem-bits", 19);
  dword_4AF2258 = 0x800000;
  byte_4AF226C = 1;
  dword_4AF2268 = 0x800000;
  qword_4AF2208 = 74;
  BYTE2(qword_4AF21E8) = BYTE2(qword_4AF21E8) & 0x9F | 0x20;
  qword_4AF2200 = (__int64)"div and rem instructions on integers with more than <N> bits are expanded.";
  sub_259EC40(&qword_4AF21E0);
  return __cxa_atexit(sub_1F6C940, &qword_4AF21E0, &off_47CFE00);
}

