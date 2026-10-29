int __fastcall sub_56BDB0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AE07D0 = 0;
  qword_4AE07D8 = 0;
  qword_4AE07E0 = 0;
  qword_4AE07C0 = (__int64)&off_4A6E058;
  qword_4AE07C8 = (unsigned int)qword_4AE07C8 & 0x80000000;
  qword_4AE07E8 = 0;
  qword_4AE0808 = 0x100000000LL;
  qword_4AE07F0 = 0;
  qword_4AE07F8 = 0;
  qword_4AE0800 = (__int64)&qword_4AE0810;
  qword_4AE0818 = (__int64)&qword_4AE0830;
  qword_4AE0820 = 1;
  dword_4AE0828 = 0;
  byte_4AE082C = 1;
  v1 = sub_259AC30(a1, &qword_4AE0810);
  v2 = (unsigned int)qword_4AE0808;
  v3 = (unsigned int)qword_4AE0808 + 1LL;
  if ( HIDWORD(qword_4AE0808) < v3 )
  {
    sub_25D6060(&qword_4AE0810 - 2, &qword_4AE0810, v3, 8);
    v2 = (unsigned int)qword_4AE0808;
  }
  *(_QWORD *)(qword_4AE0800 + 8 * v2) = v1;
  word_4AE0848 = 0;
  qword_4AE0840 = (__int64)&off_4A64730;
  xmmword_4AE0858 = 0;
  LODWORD(qword_4AE0808) = qword_4AE0808 + 1;
  qword_4AE07C0 = (__int64)off_4A6DFF0;
  byte_4AE0838 = 0;
  qword_4AE0850 = (__int64)off_49D9168;
  xmmword_4AE0868 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49CC058),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AE07C0, "x86-use-fsrm-for-memcpy", 23);
  word_4AE0848 = 256;
  byte_4AE0838 = 0;
  qword_4AE07E8 = 41;
  BYTE2(qword_4AE07C8) = BYTE2(qword_4AE07C8) & 0x9F | 0x20;
  qword_4AE07E0 = (__int64)"Use fast short rep mov in memcpy lowering";
  sub_259EC40(&qword_4AE07C0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AE07C0, &off_47CFE00);
}

