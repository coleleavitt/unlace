int __fastcall sub_590D30(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AF7A50 = 0;
  qword_4AF7A58 = 0;
  qword_4AF7A60 = 0;
  qword_4AF7A40 = (__int64)&off_4A6E058;
  qword_4AF7A48 = (unsigned int)qword_4AF7A48 & 0x80000000;
  qword_4AF7A68 = 0;
  qword_4AF7A88 = 0x100000000LL;
  qword_4AF7A70 = 0;
  qword_4AF7A78 = 0;
  qword_4AF7A80 = (__int64)&qword_4AF7A90;
  qword_4AF7A98 = (__int64)&qword_4AF7AB0;
  qword_4AF7AA0 = 1;
  dword_4AF7AA8 = 0;
  byte_4AF7AAC = 1;
  v1 = sub_259AC30(a1, &qword_4AF7A90);
  v2 = (unsigned int)qword_4AF7A88;
  v3 = (unsigned int)qword_4AF7A88 + 1LL;
  if ( HIDWORD(qword_4AF7A88) < v3 )
  {
    sub_25D6060(&qword_4AF7A90 - 2, &qword_4AF7A90, v3, 8);
    v2 = (unsigned int)qword_4AF7A88;
  }
  *(_QWORD *)(qword_4AF7A80 + 8 * v2) = v1;
  word_4AF7AC8 = 0;
  xmmword_4AF7AD8 = 0;
  LODWORD(qword_4AF7A88) = qword_4AF7A88 + 1;
  qword_4AF7AC0 = (__int64)&off_4A64730;
  byte_4AF7AB8 = 0;
  qword_4AF7A40 = (__int64)off_4A6DFF0;
  qword_4AF7AD0 = (__int64)off_49D9168;
  xmmword_4AF7AE8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EA300),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AF7A40, "enable-split-loopiv-heuristic", 29);
  word_4AF7AC8 = 257;
  qword_4AF7A60 = (__int64)"Enable loop iv regalloc heuristic";
  qword_4AF7A68 = 33;
  byte_4AF7AB8 = 1;
  sub_259EC40(&qword_4AF7A40);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AF7A40, &off_47CFE00);
}

