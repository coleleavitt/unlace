int sub_5A22E0()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  __int64 v2; // r13
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 v7; // [rsp+0h] [rbp-90h]
  __int64 v8; // [rsp+10h] [rbp-80h] BYREF
  void *v9[2]; // [rsp+18h] [rbp-78h] BYREF
  __int64 v10; // [rsp+28h] [rbp-68h]
  _BYTE v11[88]; // [rsp+38h] [rbp-58h] BYREF

  xmmword_4B015D0 = 0;
  qword_4B015E0 = 0;
  sub_34BBC80(&xmmword_4B015D0, &aRegisterAlloca_0[-16]);
  __cxa_atexit(sub_34BB850, &xmmword_4B015D0, &off_47CFE00);
  xmmword_4B015B0 = 0;
  qword_4B015C0 = 0;
  sub_34BBC80(&xmmword_4B015B0, &qword_42B2518 - 3);
  __cxa_atexit(sub_34BB850, &xmmword_4B015B0, &off_47CFE00);
  xmmword_4B01590 = 0;
  qword_4B015A0 = 0;
  sub_34BBC80(&xmmword_4B01590, &qword_42B2500[-2]);
  __cxa_atexit(sub_34BB850, &xmmword_4B01590, &off_47CFE00);
  qword_4B014B0 = 0;
  qword_4B014B8 = 0;
  qword_4B014A0 = (__int64)&off_4A6E058;
  qword_4B014A8 = (unsigned int)qword_4B014A8 & 0x80000000;
  qword_4B014C0 = 0;
  qword_4B014C8 = 0;
  qword_4B014D0 = 0;
  qword_4B014D8 = 0;
  qword_4B014E0 = (__int64)&qword_4B014F0;
  qword_4B014E8 = 0x100000000LL;
  qword_4B014F8 = (__int64)&qword_4B01510;
  qword_4B01500 = 1;
  dword_4B01508 = 0;
  byte_4B0150C = 1;
  v0 = sub_259AC30(sub_34BB850, &qword_4B014F0);
  v1 = (unsigned int)qword_4B014E8;
  if ( HIDWORD(qword_4B014E8) < (unsigned __int64)(unsigned int)qword_4B014E8 + 1 )
  {
    v7 = v0;
    sub_25D6060(&qword_4B014F0 - 2, &qword_4B014F0, (unsigned int)qword_4B014E8 + 1LL, 8);
    v1 = (unsigned int)qword_4B014E8;
    v0 = v7;
  }
  *(_QWORD *)(qword_4B014E0 + 8 * v1) = v0;
  qword_4B01518 = (__int64)&byte_4B01528;
  LODWORD(qword_4B014E8) = qword_4B014E8 + 1;
  qword_4B01520 = 0;
  qword_4B014A0 = (__int64)&off_4A6DF88;
  xmmword_4B01538 = (__int128)_mm_unpacklo_epi64(
                                (__m128i)(unsigned __int64)&off_49D9118,
                                (__m128i)(unsigned __int64)&byte_4B01550);
  xmmword_4B01570 = 0;
  qword_4B01568 = (__int64)off_49D92E8;
  byte_4B01528 = 0;
  byte_4B01550 = 0;
  xmmword_4B01580 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB4C0),
                                (__m128i)(unsigned __int64)nullsub_294);
  qword_4B01548 = 0;
  byte_4B01560 = 0;
  sub_259F400(&qword_4B014A0, "regalloc-evict-interactive-channel-base", 39);
  qword_4B014C8 = 209;
  BYTE2(qword_4B014A8) = BYTE2(qword_4B014A8) & 0x9F | 0x20;
  qword_4B014C0 = (__int64)"Base file path for the interactive mode. The incoming filename should have the name <regalloc"
                           "-evict-interactive-channel-base>.in, while the outgoing name should be <regalloc-evict-intera"
                           "ctive-channel-base>.out";
  sub_259EC40(&qword_4B014A0);
  __cxa_atexit(sub_2283FB0, &qword_4B014A0, &off_47CFE00);
  qword_4B01440 = 1;
  qword_4B013E0 = (__int64)&off_4A6E058;
  qword_4B013E8 = (unsigned int)qword_4B013E8 & 0x80000000;
  qword_4B01420 = (__int64)&qword_4B01430;
  qword_4B013F0 = 0;
  qword_4B013F8 = 0;
  qword_4B01400 = 0;
  qword_4B01408 = 0;
  qword_4B01410 = 0;
  qword_4B01418 = 0;
  qword_4B01428 = 0x100000000LL;
  qword_4B01438 = (__int64)&qword_4B01450;
  dword_4B01448 = 0;
  byte_4B0144C = 1;
  v2 = sub_259AC30(sub_2283FB0, &qword_4B01430);
  v3 = (unsigned int)qword_4B01428;
  v4 = (unsigned int)qword_4B01428 + 1LL;
  if ( HIDWORD(qword_4B01428) < v4 )
  {
    sub_25D6060(&qword_4B01430 - 2, &qword_4B01430, v4, 8);
    v3 = (unsigned int)qword_4B01428;
  }
  *(_QWORD *)(qword_4B01420 + 8 * v3) = v2;
  xmmword_4B01478 = 0;
  LODWORD(qword_4B01428) = qword_4B01428 + 1;
  qword_4B01460 = (__int64)&off_4A64710;
  dword_4B01458 = 0;
  byte_4B0146C = 0;
  qword_4B013E0 = (__int64)off_4A6DEB8;
  dword_4B01468 = 0;
  qword_4B01470 = (__int64)off_49D9228;
  xmmword_4B01488 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB4C8),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4B013E0, "mlregalloc-max-eviction-count", 29);
  qword_4B01408 = 95;
  dword_4B01458 = 100;
  byte_4B0146C = 1;
  dword_4B01468 = 100;
  BYTE2(qword_4B013E8) = BYTE2(qword_4B013E8) & 0x9F | 0x20;
  qword_4B01400 = (__int64)"The maximum number of times a live range can be evicted before preventing it from being evicted";
  sub_259EC40(&qword_4B013E0);
  __cxa_atexit(sub_1F6C940, &qword_4B013E0, &off_47CFE00);
  xmmword_4B013B0 = 0;
  qword_4B013C0 = 0;
  sub_34BBC80(&xmmword_4B013B0, &qword_42B24F0[-2]);
  __cxa_atexit(sub_34BB850, &xmmword_4B013B0, &off_47CFE00);
  *(_OWORD *)v9 = 0;
  v8 = 1;
  v10 = 0;
  sub_34BBC80(v9, &v8);
  sub_34BBBE0(v11, "index_to_evict");
  v5 = sub_3856310();
  sub_3856360(qword_4B01360, v11, 0, v5, 8, v9);
  std::string::_M_dispose();
  if ( v9[0] )
    operator delete(v9[0], v10 - (unsigned __int64)v9[0]);
  return __cxa_atexit(sub_34BC190, qword_4B01360, &off_47CFE00);
}

