int __fastcall sub_583070(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // rdx

  qword_4AF0260 = (__int64)&off_4A6E058;
  qword_4AF0268 = (unsigned int)qword_4AF0268 & 0x80000000;
  qword_4AF0270 = 0;
  qword_4AF0278 = 0;
  qword_4AF0280 = 0;
  qword_4AF0288 = 0;
  qword_4AF0290 = 0;
  qword_4AF0298 = 0;
  qword_4AF02A0 = (__int64)&qword_4AF02B0;
  qword_4AF02A8 = 0x100000000LL;
  qword_4AF02B8 = (__int64)&qword_4AF02D0;
  qword_4AF02C0 = 1;
  dword_4AF02C8 = 0;
  byte_4AF02CC = 1;
  v1 = sub_259AC30(a1, &qword_4AF02B0);
  v2 = (unsigned int)qword_4AF02A8;
  v3 = (unsigned int)qword_4AF02A8 + 1LL;
  if ( HIDWORD(qword_4AF02A8) < v3 )
  {
    sub_25D6060(&qword_4AF02B0 - 2, &qword_4AF02B0, v3, 8);
    v2 = (unsigned int)qword_4AF02A8;
  }
  *(_QWORD *)(qword_4AF02A0 + 8 * v2) = v1;
  word_4AF02E8 = 0;
  xmmword_4AF02F8 = 0;
  LODWORD(qword_4AF02A8) = qword_4AF02A8 + 1;
  qword_4AF02E0 = (__int64)&off_4A64730;
  byte_4AF02D8 = 0;
  qword_4AF0260 = (__int64)off_4A6DFF0;
  qword_4AF02F0 = (__int64)off_49D9168;
  xmmword_4AF0308 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E90F0),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AF0260, "disable-dfa-sched", 17);
  qword_4AF0288 = 36;
  BYTE2(qword_4AF0268) = BYTE2(qword_4AF0268) & 0x9F | 0x20;
  qword_4AF0280 = (__int64)"Disable use of DFA during scheduling";
  sub_259EC40(&qword_4AF0260);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF0260, &off_47CFE00);
  qword_4AF0200 = 1;
  qword_4AF01A0 = (__int64)&off_4A6E058;
  qword_4AF01A8 = (unsigned int)qword_4AF01A8 & 0x80000000;
  qword_4AF01E0 = (__int64)&qword_4AF01F0;
  qword_4AF01B0 = 0;
  qword_4AF01B8 = 0;
  qword_4AF01C0 = 0;
  qword_4AF01C8 = 0;
  qword_4AF01D0 = 0;
  qword_4AF01D8 = 0;
  qword_4AF01E8 = 0x100000000LL;
  qword_4AF01F8 = (__int64)&qword_4AF0210;
  dword_4AF0208 = 0;
  byte_4AF020C = 1;
  v4 = sub_259AC30(sub_1F6C9D0, &qword_4AF01F0);
  v5 = (unsigned int)qword_4AF01E8;
  v6 = (unsigned int)qword_4AF01E8 + 1LL;
  if ( HIDWORD(qword_4AF01E8) < v6 )
  {
    sub_25D6060(&qword_4AF01F0 - 2, &qword_4AF01F0, v6, 8);
    v5 = (unsigned int)qword_4AF01E8;
  }
  *(_QWORD *)(qword_4AF01E0 + 8 * v5) = v4;
  xmmword_4AF0238 = 0;
  LODWORD(qword_4AF01E8) = qword_4AF01E8 + 1;
  qword_4AF0220 = (__int64)&off_4A692B8;
  dword_4AF0218 = 0;
  byte_4AF022C = 0;
  qword_4AF01A0 = (__int64)off_4A6DF20;
  dword_4AF0228 = 0;
  qword_4AF0230 = (__int64)off_49D91C8;
  xmmword_4AF0248 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E90F8),
                                (__m128i)(unsigned __int64)nullsub_291);
  sub_259F400(&qword_4AF01A0, "dfa-sched-reg-pressure-threshold", 32);
  dword_4AF0218 = 5;
  byte_4AF022C = 1;
  dword_4AF0228 = 5;
  qword_4AF01C8 = 50;
  BYTE2(qword_4AF01A8) = BYTE2(qword_4AF01A8) & 0x9F | 0x20;
  qword_4AF01C0 = (__int64)"Track reg pressure and switch priority to in-depth";
  sub_259EC40(&qword_4AF01A0);
  return __cxa_atexit(sub_20B86E0, &qword_4AF01A0, &off_47CFE00);
}

