int __fastcall sub_56A810(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4ADFD10 = 0;
  qword_4ADFD18 = 0;
  qword_4ADFD20 = 0;
  qword_4ADFD00 = (__int64)&off_4A6E058;
  qword_4ADFD08 = (unsigned int)qword_4ADFD08 & 0x80000000;
  qword_4ADFD28 = 0;
  qword_4ADFD48 = 0x100000000LL;
  qword_4ADFD30 = 0;
  qword_4ADFD38 = 0;
  qword_4ADFD40 = (__int64)&qword_4ADFD50;
  qword_4ADFD58 = (__int64)&qword_4ADFD70;
  qword_4ADFD60 = 1;
  dword_4ADFD68 = 0;
  byte_4ADFD6C = 1;
  v1 = sub_259AC30(a1, &qword_4ADFD50);
  v2 = (unsigned int)qword_4ADFD48;
  v3 = (unsigned int)qword_4ADFD48 + 1LL;
  if ( HIDWORD(qword_4ADFD48) < v3 )
  {
    sub_25D6060(&qword_4ADFD50 - 2, &qword_4ADFD50, v3, 8);
    v2 = (unsigned int)qword_4ADFD48;
  }
  *(_QWORD *)(qword_4ADFD40 + 8 * v2) = v1;
  word_4ADFD88 = 0;
  qword_4ADFD80 = (__int64)&off_4A64730;
  xmmword_4ADFD98 = 0;
  LODWORD(qword_4ADFD48) = qword_4ADFD48 + 1;
  qword_4ADFD00 = (__int64)off_4A6DFF0;
  byte_4ADFD78 = 0;
  qword_4ADFD90 = (__int64)off_49D9168;
  xmmword_4ADFDA8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49CBDA0),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4ADFD00, "x86-indirect-branch-tracking", 28);
  word_4ADFD88 = 256;
  byte_4ADFD78 = 0;
  qword_4ADFD28 = 41;
  BYTE2(qword_4ADFD08) = BYTE2(qword_4ADFD08) & 0x9F | 0x20;
  qword_4ADFD20 = (__int64)"Enable X86 indirect branch tracking pass.";
  sub_259EC40(&qword_4ADFD00);
  return __cxa_atexit(sub_1F6C9D0, &qword_4ADFD00, &off_47CFE00);
}

