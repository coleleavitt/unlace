int __fastcall sub_5A3090(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int v8; // [rsp+10h] [rbp-68h] BYREF
  int v9; // [rsp+14h] [rbp-64h] BYREF
  int *v10; // [rsp+18h] [rbp-60h] BYREF
  void *v11; // [rsp+20h] [rbp-58h] BYREF
  __int64 v12; // [rsp+28h] [rbp-50h]
  char v13[72]; // [rsp+30h] [rbp-48h] BYREF

  qword_4B01B10 = 0;
  qword_4B01B18 = 0;
  qword_4B01B20 = 0;
  qword_4B01B00 = (__int64)&off_4A6E058;
  qword_4B01B08 = (unsigned int)qword_4B01B08 & 0x80000000;
  qword_4B01B28 = 0;
  qword_4B01B30 = 0;
  qword_4B01B38 = 0;
  qword_4B01B40 = (__int64)&qword_4B01B50;
  qword_4B01B48 = 0x100000000LL;
  qword_4B01B58 = (__int64)&qword_4B01B70;
  qword_4B01B60 = 1;
  dword_4B01B68 = 0;
  byte_4B01B6C = 1;
  v1 = sub_259AC30(a1, &qword_4B01B50);
  v2 = (unsigned int)qword_4B01B48;
  v3 = (unsigned int)qword_4B01B48 + 1LL;
  if ( HIDWORD(qword_4B01B48) < v3 )
  {
    sub_25D6060(&qword_4B01B50 - 2, &qword_4B01B50, v3, 8);
    v2 = (unsigned int)qword_4B01B48;
  }
  *(_QWORD *)(qword_4B01B40 + 8 * v2) = v1;
  word_4B01B88 = 0;
  xmmword_4B01B98 = 0;
  LODWORD(qword_4B01B48) = qword_4B01B48 + 1;
  qword_4B01B80 = (__int64)&off_4A64730;
  byte_4B01B78 = 0;
  qword_4B01B00 = (__int64)off_4A6DFF0;
  qword_4B01B90 = (__int64)off_49D9168;
  xmmword_4B01BA8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB520),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B01B00, "post-RA-scheduler", 17);
  qword_4B01B20 = (__int64)"Enable scheduling after register allocation";
  word_4B01B88 = 256;
  byte_4B01B78 = 0;
  qword_4B01B28 = 43;
  BYTE2(qword_4B01B08) = BYTE2(qword_4B01B08) & 0x9F | 0x20;
  sub_259EC40(&qword_4B01B00);
  __cxa_atexit(sub_1F6C9D0, &qword_4B01B00, &off_47CFE00);
  qword_4B01A10 = 0;
  qword_4B01A00 = (__int64)&off_4A6E058;
  qword_4B01A08 = (unsigned int)qword_4B01A08 & 0x80000000;
  qword_4B01A40 = (__int64)&qword_4B01A50;
  qword_4B01A18 = 0;
  qword_4B01A20 = 0;
  qword_4B01A28 = 0;
  qword_4B01A30 = 0;
  qword_4B01A38 = 0;
  qword_4B01A48 = 0x100000000LL;
  qword_4B01A58 = (__int64)&qword_4B01A70;
  qword_4B01A60 = 1;
  dword_4B01A68 = 0;
  byte_4B01A6C = 1;
  v4 = sub_259AC30(sub_1F6C9D0, &qword_4B01A50);
  v5 = (unsigned int)qword_4B01A48;
  v6 = (unsigned int)qword_4B01A48 + 1LL;
  if ( HIDWORD(qword_4B01A48) < v6 )
  {
    sub_25D6060(&qword_4B01A50 - 2, &qword_4B01A50, v6, 8);
    v5 = (unsigned int)qword_4B01A48;
  }
  *(_QWORD *)(qword_4B01A40 + 8 * v5) = v4;
  qword_4B01A78 = (__int64)&byte_4B01A88;
  LODWORD(qword_4B01A48) = qword_4B01A48 + 1;
  qword_4B01A80 = 0;
  qword_4B01A00 = (__int64)&off_4A6DF88;
  xmmword_4B01A98 = (__int128)_mm_unpacklo_epi64(
                                (__m128i)(unsigned __int64)&off_49D9118,
                                (__m128i)(unsigned __int64)&byte_4B01AB0);
  xmmword_4B01AD0 = 0;
  qword_4B01AC8 = (__int64)off_49D92E8;
  byte_4B01A88 = 0;
  byte_4B01AB0 = 0;
  xmmword_4B01AE0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB528),
                                (__m128i)(unsigned __int64)nullsub_294);
  qword_4B01AA8 = 0;
  byte_4B01AC0 = 0;
  sub_259F400(&qword_4B01A00, "break-anti-dependencies", 23);
  qword_4B01A20 = (__int64)"Break post-RA scheduling anti-dependencies: \"critical\", \"all\", or \"none\"";
  qword_4B01A28 = 72;
  v11 = v13;
  strcpy(v13, "none");
  v12 = 4;
  std::string::_M_assign();
  byte_4B01AC0 = 1;
  std::string::_M_assign();
  BYTE2(qword_4B01A08) = BYTE2(qword_4B01A08) & 0x9F | 0x20;
  sub_259EC40(&qword_4B01A00);
  __cxa_atexit(sub_2283FB0, &qword_4B01A00, &off_47CFE00);
  v10 = &v8;
  v11 = "Debug control MBBs that are scheduled";
  v9 = 1;
  v8 = 0;
  v12 = 37;
  sub_34D97C0(qword_4B01940, "postra-sched-debugdiv", &v11, &v10, &v9);
  __cxa_atexit(sub_20B86E0, qword_4B01940, &off_47CFE00);
  v11 = "Debug control MBBs that are scheduled";
  v9 = 1;
  v8 = 0;
  v10 = &v8;
  v12 = 37;
  sub_34D97C0(qword_4B01880, "postra-sched-debugmod", &v11, &v10, &v9);
  return __cxa_atexit(sub_20B86E0, qword_4B01880, &off_47CFE00);
}

