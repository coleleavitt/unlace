int __fastcall sub_581D00(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AEF630 = 0;
  qword_4AEF638 = 0;
  qword_4AEF640 = 0;
  qword_4AEF620 = (__int64)&off_4A6E058;
  qword_4AEF628 = (unsigned int)qword_4AEF628 & 0x80000000;
  qword_4AEF648 = 0;
  qword_4AEF668 = 0x100000000LL;
  qword_4AEF650 = 0;
  qword_4AEF658 = 0;
  qword_4AEF660 = (__int64)&qword_4AEF670;
  qword_4AEF678 = (__int64)&qword_4AEF690;
  qword_4AEF680 = 1;
  dword_4AEF688 = 0;
  byte_4AEF68C = 1;
  v1 = sub_259AC30(a1, &qword_4AEF670);
  v2 = (unsigned int)qword_4AEF668;
  v3 = (unsigned int)qword_4AEF668 + 1LL;
  if ( HIDWORD(qword_4AEF668) < v3 )
  {
    sub_25D6060(&qword_4AEF670 - 2, &qword_4AEF670, v3, 8);
    v2 = (unsigned int)qword_4AEF668;
  }
  *(_QWORD *)(qword_4AEF660 + 8 * v2) = v1;
  word_4AEF6A8 = 0;
  xmmword_4AEF6B8 = 0;
  LODWORD(qword_4AEF668) = qword_4AEF668 + 1;
  qword_4AEF6A0 = (__int64)&off_4A64730;
  byte_4AEF698 = 0;
  qword_4AEF620 = (__int64)off_4A6DFF0;
  qword_4AEF6B0 = (__int64)off_49D9168;
  xmmword_4AEF6C8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E90C8),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AEF620, "enable-legalize-types-checking", 30);
  BYTE2(qword_4AEF628) = BYTE2(qword_4AEF628) & 0x9F | 0x20;
  sub_259EC40(&qword_4AEF620);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AEF620, &off_47CFE00);
}

