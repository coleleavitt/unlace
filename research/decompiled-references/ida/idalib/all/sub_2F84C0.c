int __fastcall sub_2F84C0(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  size_t v7; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  __m128i si128; // xmm0
  unsigned __int64 v12; // rdx
  size_t v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int128 v19; // [rsp+0h] [rbp-58h] BYREF
  __m128i v20[4]; // [rsp+10h] [rbp-48h] BYREF

  v2 = j__strlen("Try to delinearize array references.");
  qword_2CDCA10 = 0;
  v3 = v2;
  qword_2CDCA18 = 0;
  qword_2CDCA20 = 0;
  qword_2CDCA00 = (__int64)&off_2C758B0;
  qword_2CDCA08 = (unsigned int)qword_2CDCA08 & 0x80000000;
  qword_2CDCA48 = 0x100000000LL;
  qword_2CDCA28 = 0;
  qword_2CDCA30 = 0;
  qword_2CDCA38 = 0;
  qword_2CDCA40 = (__int64)&unk_2CDCA50;
  qword_2CDCA58 = (__int64)&unk_2CDCA70;
  qword_2CDCA60 = 1;
  dword_2CDCA68 = 0;
  byte_2CDCA6C = 1;
  v4 = sub_2210FF0("Try to delinearize array references.", a2);
  v5 = (unsigned int)qword_2CDCA48;
  v6 = (unsigned int)qword_2CDCA48 + 1LL;
  if ( v6 > HIDWORD(qword_2CDCA48) )
  {
    *(_QWORD *)&v19 = v4;
    sub_2237220((char *)&unk_2CDCA50 - 16, &unk_2CDCA50, v6, 8);
    v5 = (unsigned int)qword_2CDCA48;
    v4 = v19;
  }
  *(_QWORD *)(qword_2CDCA40 + 8 * v5) = v4;
  qword_2CDCA80 = (__int64)off_2C714E8;
  word_2CDCA88 = 0;
  qword_2CDCA00 = (__int64)off_2C75848;
  xmmword_2CDCAA8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  v19 = xmmword_2CDCAA8;
  LODWORD(qword_2CDCA48) = qword_2CDCA48 + 1;
  qword_2CDCA90 = (__int64)off_2BEAB08;
  byte_2CDCA78 = 0;
  sub_2217250(&qword_2CDCA00, "da-delinearize", 14);
  word_2CDCA88 = 257;
  qword_2CDCA28 = v3;
  byte_2CDCA78 = 1;
  BYTE2(qword_2CDCA08) = BYTE2(qword_2CDCA08) & 0x9F | 0x20;
  qword_2CDCA20 = (__int64)"Try to delinearize array references.";
  sub_2218140(&qword_2CDCA00);
  __cxa_atexit(sub_200E190, &qword_2CDCA00, &off_2B25620);
  v7 = j__strlen(
         "Disable checks that try to statically verify validity of delinearized subscripts. Enabling this option may resu"
         "lt in incorrect dependence vectors for languages that allow the subscript of one dimension to underflow or over"
         "flow into another dimension.");
  qword_2CDC980 = (__int64)&unk_2CDC990;
  v8 = v7;
  qword_2CDC950 = 0;
  qword_2CDC940 = (__int64)&off_2C758B0;
  qword_2CDC948 = (unsigned int)qword_2CDC948 & 0x80000000;
  qword_2CDC988 = 0x100000000LL;
  qword_2CDC958 = 0;
  qword_2CDC960 = 0;
  qword_2CDC968 = 0;
  qword_2CDC970 = 0;
  qword_2CDC978 = 0;
  qword_2CDC998 = (__int64)&unk_2CDC9B0;
  qword_2CDC9A0 = 1;
  dword_2CDC9A8 = 0;
  byte_2CDC9AC = 1;
  v9 = sub_2210FF0(
         "Disable checks that try to statically verify validity of delinearized subscripts. Enabling this option may resu"
         "lt in incorrect dependence vectors for languages that allow the subscript of one dimension to underflow or over"
         "flow into another dimension.",
         &qword_2CDCA00);
  v10 = (unsigned int)qword_2CDC988;
  si128 = _mm_load_si128((const __m128i *)&v19);
  v12 = (unsigned int)qword_2CDC988 + 1LL;
  if ( v12 > HIDWORD(qword_2CDC988) )
  {
    *(_QWORD *)&v19 = v9;
    v20[0] = si128;
    sub_2237220((char *)&unk_2CDC990 - 16, &unk_2CDC990, v12, 8);
    v10 = (unsigned int)qword_2CDC988;
    si128 = _mm_load_si128(v20);
    v9 = v19;
  }
  *(_QWORD *)(qword_2CDC980 + 8 * v10) = v9;
  word_2CDC9C8 = 0;
  qword_2CDC9C0 = (__int64)off_2C714E8;
  qword_2CDC940 = (__int64)off_2C75848;
  xmmword_2CDC9E8 = (__int128)si128;
  qword_2CDC9D0 = (__int64)off_2BEAB08;
  LODWORD(qword_2CDC988) = qword_2CDC988 + 1;
  byte_2CDC9B8 = 0;
  sub_2217250(&qword_2CDC940, "da-disable-delinearization-checks", 33);
  qword_2CDC968 = v8;
  BYTE2(qword_2CDC948) = BYTE2(qword_2CDC948) & 0x9F | 0x20;
  qword_2CDC960 = (__int64)"Disable checks that try to statically verify validity of delinearized subscripts. Enabling th"
                           "is option may result in incorrect dependence vectors for languages that allow the subscript o"
                           "f one dimension to underflow or overflow into another dimension.";
  sub_2218140(&qword_2CDC940);
  __cxa_atexit(sub_200E190, &qword_2CDC940, &off_2B25620);
  v13 = j__strlen("Maximum depth allowed for the recursive algorithm used to explore MIV direction vectors.");
  byte_2CDC8EC = 1;
  qword_2CDC890 = 0;
  v14 = v13;
  qword_2CDC880 = (__int64)&off_2C758B0;
  qword_2CDC888 = (unsigned int)qword_2CDC888 & 0x80000000;
  qword_2CDC8C8 = 0x100000000LL;
  qword_2CDC898 = 0;
  qword_2CDC8A0 = 0;
  qword_2CDC8A8 = 0;
  qword_2CDC8B0 = 0;
  qword_2CDC8B8 = 0;
  qword_2CDC8C0 = (__int64)&unk_2CDC8D0;
  qword_2CDC8D8 = (__int64)&unk_2CDC8F0;
  qword_2CDC8E0 = 1;
  dword_2CDC8E8 = 0;
  v15 = sub_2210FF0(
          "Maximum depth allowed for the recursive algorithm used to explore MIV direction vectors.",
          &qword_2CDC940);
  v16 = (unsigned int)qword_2CDC8C8;
  v17 = (unsigned int)qword_2CDC8C8 + 1LL;
  if ( v17 > HIDWORD(qword_2CDC8C8) )
  {
    *(_QWORD *)&v19 = v15;
    sub_2237220((char *)&unk_2CDC8D0 - 16, &unk_2CDC8D0, v17, 8);
    v16 = (unsigned int)qword_2CDC8C8;
    v15 = v19;
  }
  *(_QWORD *)(qword_2CDC8C0 + 8 * v16) = v15;
  xmmword_2CDC928 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  LODWORD(qword_2CDC8C8) = qword_2CDC8C8 + 1;
  qword_2CDC900 = (__int64)off_2C712D0;
  dword_2CDC8F8 = 0;
  byte_2CDC90C = 0;
  qword_2CDC880 = (__int64)off_2C75710;
  dword_2CDC908 = 0;
  qword_2CDC910 = (__int64)off_2BEAB98;
  sub_2217250(&qword_2CDC880, "da-miv-max-level-threshold", 26);
  qword_2CDC8A8 = v14;
  dword_2CDC8F8 = 7;
  byte_2CDC90C = 1;
  dword_2CDC908 = 7;
  BYTE2(qword_2CDC888) = BYTE2(qword_2CDC888) & 0x9F | 0x20;
  qword_2CDC8A0 = (__int64)"Maximum depth allowed for the recursive algorithm used to explore MIV direction vectors.";
  sub_2218140(&qword_2CDC880);
  return __cxa_atexit(sub_1FED260, &qword_2CDC880, &off_2B25620);
}
