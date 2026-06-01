int sub_597E80()
{
  __int64 v0; // r13
  __int64 v1; // rax
  unsigned __int64 v2; // rdx
  char v4; // [rsp+3h] [rbp-55h] BYREF
  int v5; // [rsp+4h] [rbp-54h] BYREF
  char *v6; // [rsp+8h] [rbp-50h] BYREF
  const char *v7; // [rsp+10h] [rbp-48h] BYREF
  __int64 v8; // [rsp+18h] [rbp-40h]

  v7 = "Clone multicolor basic blocks but do not demote cross scopes";
  v4 = 0;
  v8 = 60;
  v6 = &v4;
  v5 = 1;
  sub_32F9A50(qword_4AFBE80, "disable-demotion", &v5, &v7, &v6);
  __cxa_atexit(sub_1F6C9D0, qword_4AFBE80, &off_47CFE00);
  v4 = 0;
  v7 = "Do not remove implausible terminators or other similar cleanups";
  v6 = &v4;
  v8 = 63;
  v5 = 1;
  sub_32F9A50(qword_4AFBDC0, "disable-cleanups", &v5, &v7, &v6);
  __cxa_atexit(sub_1F6C9D0, qword_4AFBDC0, &off_47CFE00);
  qword_4AFBD10 = 0;
  qword_4AFBD18 = 0;
  qword_4AFBD20 = 0;
  qword_4AFBD00 = (__int64)&off_4A6E058;
  qword_4AFBD08 = (unsigned int)qword_4AFBD08 & 0x80000000;
  qword_4AFBD28 = 0;
  qword_4AFBD48 = 0x100000000LL;
  qword_4AFBD30 = 0;
  qword_4AFBD38 = 0;
  qword_4AFBD40 = (__int64)&qword_4AFBD50;
  qword_4AFBD58 = (__int64)&qword_4AFBD70;
  qword_4AFBD60 = 1;
  dword_4AFBD68 = 0;
  byte_4AFBD6C = 1;
  v0 = sub_259AC30(sub_1F6C9D0, &qword_4AFBD50);
  v1 = (unsigned int)qword_4AFBD48;
  v2 = (unsigned int)qword_4AFBD48 + 1LL;
  if ( HIDWORD(qword_4AFBD48) < v2 )
  {
    sub_25D6060(&qword_4AFBD50 - 2, &qword_4AFBD50, v2, 8);
    v1 = (unsigned int)qword_4AFBD48;
  }
  *(_QWORD *)(qword_4AFBD40 + 8 * v1) = v0;
  word_4AFBD88 = 0;
  xmmword_4AFBD98 = 0;
  LODWORD(qword_4AFBD48) = qword_4AFBD48 + 1;
  qword_4AFBD80 = (__int64)&off_4A64730;
  byte_4AFBD78 = 0;
  qword_4AFBD00 = (__int64)off_4A6DFF0;
  qword_4AFBD90 = (__int64)off_49D9168;
  xmmword_4AFBDA8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB090),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AFBD00, "demote-catchswitch-only", 23);
  word_4AFBD88 = 256;
  byte_4AFBD78 = 0;
  qword_4AFBD28 = 41;
  BYTE2(qword_4AFBD08) = BYTE2(qword_4AFBD08) & 0x9F | 0x20;
  qword_4AFBD20 = (__int64)"Demote catchswitch BBs only (for wasm EH)";
  sub_259EC40(&qword_4AFBD00);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AFBD00, &off_47CFE00);
}

