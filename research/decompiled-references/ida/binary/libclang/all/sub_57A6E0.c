int __fastcall sub_57A6E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __m128i v4; // xmm0
  char v5; // al
  __int64 v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // rdx

  qword_4AEB020[2] = 0;
  qword_4AEB020[0] = (__int64)&off_4A6E058;
  qword_4AEB020[1] &= 0x80000000uLL;
  qword_4AEB020[11] = (__int64)&qword_4AEB020[14];
  qword_4AEB020[3] = 0;
  qword_4AEB020[4] = 0;
  qword_4AEB020[5] = 0;
  qword_4AEB020[6] = 0;
  qword_4AEB020[7] = 0;
  qword_4AEB020[8] = (__int64)&qword_4AEB020[10];
  qword_4AEB020[9] = 0x100000000LL;
  qword_4AEB020[12] = 1;
  LODWORD(qword_4AEB020[13]) = 0;
  BYTE4(qword_4AEB020[13]) = 1;
  v2 = sub_259AC30(a1, a2);
  v3 = LODWORD(qword_4AEB020[9]);
  if ( HIDWORD(qword_4AEB020[9]) < (unsigned __int64)(v3 + 1) )
  {
    sub_25D6060(&qword_4AEB020[8], &qword_4AEB020[10], v3 + 1, 8);
    v3 = LODWORD(qword_4AEB020[9]);
  }
  *(_QWORD *)(qword_4AEB020[8] + 8 * v3) = v2;
  *(_OWORD *)&qword_4AEB020[19] = 0;
  v4 = _mm_loadl_epi64((const __m128i *)&off_49E86B8);
  ++LODWORD(qword_4AEB020[9]);
  qword_4AEB020[16] = (__int64)off_49D90F8;
  LODWORD(qword_4AEB020[15]) = 0;
  BYTE4(qword_4AEB020[17]) = 0;
  qword_4AEB020[0] = (__int64)off_4A6D1F8;
  LODWORD(qword_4AEB020[17]) = 0;
  qword_4AEB020[18] = (__int64)off_49D9198;
  *(__m128i *)&qword_4AEB020[21] = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)nullsub_328);
  sub_259F400(qword_4AEB020, "add-linkage-names-to-declaration-call-origins", 45);
  v5 = BYTE2(qword_4AEB020[1]);
  qword_4AEB020[5] = 141;
  BYTE2(qword_4AEB020[1]) = v5 & 0x9F | 0x20;
  qword_4AEB020[4] = (__int64)"Add DW_AT_linkage_name to function declaration DIEs referenced by DW_AT_call_origin attrib"
                              "utes. Enabled by default for -gsce debugger tuning.";
  sub_259EC40(qword_4AEB020);
  __cxa_atexit(sub_23D2630, qword_4AEB020, &off_47CFE00);
  qword_4AEAFC0 = 1;
  qword_4AEAF60 = (__int64)&off_4A6E058;
  qword_4AEAF68 = (unsigned int)qword_4AEAF68 & 0x80000000;
  qword_4AEAFA0 = (__int64)&qword_4AEAFB0;
  qword_4AEAF70 = 0;
  qword_4AEAF78 = 0;
  qword_4AEAF80 = 0;
  qword_4AEAF88 = 0;
  qword_4AEAF90 = 0;
  qword_4AEAF98 = 0;
  qword_4AEAFA8 = 0x100000000LL;
  qword_4AEAFB8 = (__int64)&qword_4AEAFD0;
  dword_4AEAFC8 = 0;
  byte_4AEAFCC = 1;
  v6 = sub_259AC30(sub_23D2630, &qword_4AEAFB0);
  v7 = (unsigned int)qword_4AEAFA8;
  v8 = (unsigned int)qword_4AEAFA8 + 1LL;
  if ( HIDWORD(qword_4AEAFA8) < v8 )
  {
    sub_25D6060(&qword_4AEAFB0 - 2, &qword_4AEAFB0, v8, 8);
    v7 = (unsigned int)qword_4AEAFA8;
  }
  *(_QWORD *)(qword_4AEAFA0 + 8 * v7) = v6;
  word_4AEAFE8 = 0;
  xmmword_4AEAFF8 = 0;
  LODWORD(qword_4AEAFA8) = qword_4AEAFA8 + 1;
  qword_4AEAFE0 = (__int64)&off_4A64730;
  byte_4AEAFD8 = 0;
  qword_4AEAF60 = (__int64)off_4A6DFF0;
  qword_4AEAFF0 = (__int64)off_49D9168;
  xmmword_4AEB008 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E86C0),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AEAF60, "emit-func-debug-line-table-offsets", 34);
  word_4AEAFE8 = 256;
  byte_4AEAFD8 = 0;
  qword_4AEAF88 = 105;
  BYTE2(qword_4AEAF68) = BYTE2(qword_4AEAF68) & 0x9F | 0x20;
  qword_4AEAF80 = (__int64)"Include line table offset in function's debug info and emit end sequence after each function's line data.";
  sub_259EC40(&qword_4AEAF60);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AEAF60, &off_47CFE00);
}

