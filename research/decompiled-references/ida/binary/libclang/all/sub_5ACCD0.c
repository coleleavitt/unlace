int __fastcall sub_5ACCD0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4B057B0 = 0;
  qword_4B057B8 = 0;
  qword_4B057C0 = 0;
  qword_4B057A0 = (__int64)&off_4A6E058;
  qword_4B057A8 = (unsigned int)qword_4B057A8 & 0x80000000;
  qword_4B057C8 = 0;
  qword_4B057E8 = 0x100000000LL;
  qword_4B057D0 = 0;
  qword_4B057D8 = 0;
  qword_4B057E0 = (__int64)&qword_4B057F0;
  qword_4B057F8 = (__int64)&qword_4B05810;
  qword_4B05800 = 1;
  dword_4B05808 = 0;
  byte_4B0580C = 1;
  v1 = sub_259AC30(a1, &qword_4B057F0);
  v2 = (unsigned int)qword_4B057E8;
  v3 = (unsigned int)qword_4B057E8 + 1LL;
  if ( HIDWORD(qword_4B057E8) < v3 )
  {
    sub_25D6060(&qword_4B057F0 - 2, &qword_4B057F0, v3, 8);
    v2 = (unsigned int)qword_4B057E8;
  }
  *(_QWORD *)(qword_4B057E0 + 8 * v2) = v1;
  xmmword_4B05838 = 0;
  LODWORD(qword_4B057E8) = qword_4B057E8 + 1;
  qword_4B05820 = (__int64)&off_4A64710;
  dword_4B05818 = 0;
  byte_4B0582C = 0;
  qword_4B057A0 = (__int64)off_4A6DEB8;
  dword_4B05828 = 0;
  qword_4B05830 = (__int64)off_49D9228;
  xmmword_4B05848 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EBAC0),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4B057A0, "max-deopt-or-unreachable-succ-check-depth", 41);
  dword_4B05818 = 8;
  byte_4B0582C = 1;
  dword_4B05828 = 8;
  qword_4B057C8 = 171;
  BYTE2(qword_4B057A8) = BYTE2(qword_4B057A8) & 0x9F | 0x20;
  qword_4B057C0 = (__int64)"Set the maximum path length when checking whether a basic block is followed by a block that e"
                           "ither has a terminating deoptimizing call or is terminated with an unreachable";
  sub_259EC40(&qword_4B057A0);
  return __cxa_atexit(sub_1F6C940, &qword_4B057A0, &off_47CFE00);
}

