int __fastcall sub_56D4E0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AE11B0 = 0;
  qword_4AE11B8 = 0;
  qword_4AE11C0 = 0;
  qword_4AE11A0 = (__int64)&off_4A6E058;
  qword_4AE11A8 = (unsigned int)qword_4AE11A8 & 0x80000000;
  qword_4AE11C8 = 0;
  qword_4AE11E8 = 0x100000000LL;
  qword_4AE11D0 = 0;
  qword_4AE11D8 = 0;
  qword_4AE11E0 = (__int64)&qword_4AE11F0;
  qword_4AE11F8 = (__int64)&qword_4AE1210;
  qword_4AE1200 = 1;
  dword_4AE1208 = 0;
  byte_4AE120C = 1;
  v1 = sub_259AC30(a1, &qword_4AE11F0);
  v2 = (unsigned int)qword_4AE11E8;
  v3 = (unsigned int)qword_4AE11E8 + 1LL;
  if ( HIDWORD(qword_4AE11E8) < v3 )
  {
    sub_25D6060(&qword_4AE11F0 - 2, &qword_4AE11F0, v3, 8);
    v2 = (unsigned int)qword_4AE11E8;
  }
  *(_QWORD *)(qword_4AE11E0 + 8 * v2) = v1;
  word_4AE1228 = 0;
  qword_4AE1220 = (__int64)&off_4A64730;
  xmmword_4AE1238 = 0;
  LODWORD(qword_4AE11E8) = qword_4AE11E8 + 1;
  qword_4AE11A0 = (__int64)off_4A6DFF0;
  byte_4AE1218 = 0;
  qword_4AE1230 = (__int64)off_49D9168;
  xmmword_4AE1248 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49CC2F8),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AE11A0, "x86-experimental-lvi-inline-asm-hardening", 41);
  qword_4AE11C8 = 111;
  qword_4AE11C0 = (__int64)"Harden inline assembly code that may be vulnerable to Load Value Injection (LVI). This featur"
                           "e is experimental.";
  BYTE2(qword_4AE11A8) = BYTE2(qword_4AE11A8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE11A0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AE11A0, &off_47CFE00);
}

