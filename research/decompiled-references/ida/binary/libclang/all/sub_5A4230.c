int __fastcall sub_5A4230(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // rdx

  qword_4B023A0 = (__int64)&off_4A6E058;
  qword_4B023A8 = (unsigned int)qword_4B023A8 & 0x80000000;
  qword_4B023B0 = 0;
  qword_4B023B8 = 0;
  qword_4B023C0 = 0;
  qword_4B023C8 = 0;
  qword_4B023D0 = 0;
  qword_4B023D8 = 0;
  qword_4B023E0 = (__int64)&qword_4B023F0;
  qword_4B023E8 = 0x100000000LL;
  qword_4B023F8 = (__int64)&qword_4B02410;
  qword_4B02400 = 1;
  dword_4B02408 = 0;
  byte_4B0240C = 1;
  v1 = sub_259AC30(a1, &qword_4B023F0);
  v2 = (unsigned int)qword_4B023E8;
  v3 = (unsigned int)qword_4B023E8 + 1LL;
  if ( HIDWORD(qword_4B023E8) < v3 )
  {
    sub_25D6060(&qword_4B023F0 - 2, &qword_4B023F0, v3, 8);
    v2 = (unsigned int)qword_4B023E8;
  }
  *(_QWORD *)(qword_4B023E0 + 8 * v2) = v1;
  xmmword_4B02438 = 0;
  LODWORD(qword_4B023E8) = qword_4B023E8 + 1;
  qword_4B02420 = (__int64)off_49D90F8;
  dword_4B02418 = 0;
  byte_4B0242C = 0;
  qword_4B023A0 = (__int64)off_4A6D1F8;
  dword_4B02428 = 0;
  qword_4B02430 = (__int64)off_49D9198;
  xmmword_4B02448 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB660),
                                (__m128i)(unsigned __int64)nullsub_328);
  sub_259F400(&qword_4B023A0, "enable-shrink-wrap", 18);
  qword_4B023C8 = 31;
  BYTE2(qword_4B023A8) = BYTE2(qword_4B023A8) & 0x9F | 0x20;
  qword_4B023C0 = (__int64)"enable the shrink-wrapping pass";
  sub_259EC40(&qword_4B023A0);
  __cxa_atexit(sub_23D2630, &qword_4B023A0, &off_47CFE00);
  qword_4B02340 = 1;
  qword_4B022E0 = (__int64)&off_4A6E058;
  qword_4B022E8 = (unsigned int)qword_4B022E8 & 0x80000000;
  qword_4B02320 = (__int64)&qword_4B02330;
  qword_4B022F0 = 0;
  qword_4B022F8 = 0;
  qword_4B02300 = 0;
  qword_4B02308 = 0;
  qword_4B02310 = 0;
  qword_4B02318 = 0;
  qword_4B02328 = 0x100000000LL;
  qword_4B02338 = (__int64)&qword_4B02350;
  dword_4B02348 = 0;
  byte_4B0234C = 1;
  v4 = sub_259AC30(sub_23D2630, &qword_4B02330);
  v5 = (unsigned int)qword_4B02328;
  v6 = (unsigned int)qword_4B02328 + 1LL;
  if ( HIDWORD(qword_4B02328) < v6 )
  {
    sub_25D6060(&qword_4B02330 - 2, &qword_4B02330, v6, 8);
    v5 = (unsigned int)qword_4B02328;
  }
  *(_QWORD *)(qword_4B02320 + 8 * v5) = v4;
  word_4B02368 = 0;
  xmmword_4B02378 = 0;
  LODWORD(qword_4B02328) = qword_4B02328 + 1;
  qword_4B02360 = (__int64)&off_4A64730;
  byte_4B02358 = 0;
  qword_4B022E0 = (__int64)off_4A6DFF0;
  qword_4B02370 = (__int64)off_49D9168;
  xmmword_4B02388 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB668),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B022E0, "enable-shrink-wrap-region-split", 31);
  word_4B02368 = 257;
  byte_4B02358 = 1;
  qword_4B02308 = 49;
  BYTE2(qword_4B022E8) = BYTE2(qword_4B022E8) & 0x9F | 0x20;
  qword_4B02300 = (__int64)"enable splitting of the restore block if possible";
  sub_259EC40(&qword_4B022E0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4B022E0, &off_47CFE00);
}

