int __fastcall sub_5F4FD0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4B33330 = 0;
  qword_4B33338 = 0;
  qword_4B33340 = 0;
  qword_4B33320 = (__int64)&off_4A6E058;
  qword_4B33328 = (unsigned int)qword_4B33328 & 0x80000000;
  qword_4B33348 = 0;
  qword_4B33368 = 0x100000000LL;
  qword_4B33350 = 0;
  qword_4B33358 = 0;
  qword_4B33360 = (__int64)&qword_4B33370;
  qword_4B33378 = (__int64)&qword_4B33390;
  qword_4B33380 = 1;
  dword_4B33388 = 0;
  byte_4B3338C = 1;
  v1 = sub_259AC30(a1, &qword_4B33370);
  v2 = (unsigned int)qword_4B33368;
  v3 = (unsigned int)qword_4B33368 + 1LL;
  if ( HIDWORD(qword_4B33368) < v3 )
  {
    sub_25D6060(&qword_4B33370 - 2, &qword_4B33370, v3, 8);
    v2 = (unsigned int)qword_4B33368;
  }
  *(_QWORD *)(qword_4B33360 + 8 * v2) = v1;
  word_4B333A8 = 0;
  xmmword_4B333B8 = 0;
  LODWORD(qword_4B33368) = qword_4B33368 + 1;
  qword_4B333A0 = (__int64)&off_4A64730;
  byte_4B33398 = 0;
  qword_4B33320 = (__int64)off_4A6DFF0;
  qword_4B333B0 = (__int64)off_49D9168;
  xmmword_4B333C8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49F2098),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B33320, "disable-auto-upgrade-debug-info", 31);
  qword_4B33348 = 33;
  qword_4B33340 = (__int64)"Disable autoupgrade of debug info";
  sub_259EC40(&qword_4B33320);
  return __cxa_atexit(sub_1F6C9D0, &qword_4B33320, &off_47CFE00);
}

