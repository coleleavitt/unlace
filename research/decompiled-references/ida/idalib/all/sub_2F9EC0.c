int __fastcall sub_2F9EC0(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  size_t v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __m128i v17; // xmm2
  size_t v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __m128i v23; // xmm3
  size_t v24; // r13
  __int64 v25; // rax
  __int64 v26; // rcx
  __m128i v27; // xmm4
  __m128i v29; // [rsp+0h] [rbp-58h] BYREF
  __int64 v30; // [rsp+18h] [rbp-40h]

  v2 = j__strlen("The percentage threshold against remaining unpromoted indirect call count for the promotion");
  qword_2CDDA90 = 0;
  v3 = v2;
  qword_2CDDA98 = 0;
  qword_2CDDAA0 = 0;
  qword_2CDDA80 = (__int64)&off_2C758B0;
  qword_2CDDA88 = (unsigned int)qword_2CDDA88 & 0x80000000;
  qword_2CDDAC8 = 0x100000000LL;
  qword_2CDDAA8 = 0;
  qword_2CDDAB0 = 0;
  qword_2CDDAB8 = 0;
  qword_2CDDAC0 = (__int64)&unk_2CDDAD0;
  qword_2CDDAD8 = (__int64)&unk_2CDDAF0;
  qword_2CDDAE0 = 1;
  dword_2CDDAE8 = 0;
  byte_2CDDAEC = 1;
  v4 = sub_2210FF0("The percentage threshold against remaining unpromoted indirect call count for the promotion", a2);
  v5 = (unsigned int)qword_2CDDAC8;
  v6 = (unsigned int)qword_2CDDAC8 + 1LL;
  if ( v6 > HIDWORD(qword_2CDDAC8) )
  {
    v29.m128i_i64[0] = v4;
    sub_2237220((char *)&unk_2CDDAD0 - 16, &unk_2CDDAD0, v6, 8);
    v5 = (unsigned int)qword_2CDDAC8;
    v4 = v29.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CDDAC0 + 8 * v5) = v4;
  qword_2CDDB00 = (__int64)off_2C712D0;
  qword_2CDDA80 = (__int64)off_2C75710;
  v29 = (__m128i)_mm_loadh_ps((const double *)off_2C784F8);
  xmmword_2CDDB28 = (__int128)v29;
  qword_2CDDB10 = (__int64)off_2BEAB98;
  LODWORD(qword_2CDDAC8) = qword_2CDDAC8 + 1;
  dword_2CDDAF8 = 0;
  dword_2CDDB08 = 0;
  byte_2CDDB0C = 0;
  sub_2217250(&qword_2CDDA80, "icp-remaining-percent-threshold", 31);
  qword_2CDDAA8 = v3;
  dword_2CDDAF8 = 30;
  byte_2CDDB0C = 1;
  dword_2CDDB08 = 30;
  BYTE2(qword_2CDDA88) = BYTE2(qword_2CDDA88) & 0x9F | 0x20;
  qword_2CDDAA0 = (__int64)"The percentage threshold against remaining unpromoted indirect call count for the promotion";
  sub_2218140(&qword_2CDDA80);
  __cxa_atexit(sub_1FED260, &qword_2CDDA80, &off_2B25620);
  v7 = j__strlen("The percentage threshold against total count for the promotion");
  qword_2CDDA00 = (__int64)&unk_2CDDA10;
  v8 = v7;
  qword_2CDD9D0 = 0;
  qword_2CDD9C0 = (__int64)&off_2C758B0;
  qword_2CDD9C8 = (unsigned int)qword_2CDD9C8 & 0x80000000;
  qword_2CDDA08 = 0x100000000LL;
  qword_2CDD9D8 = 0;
  qword_2CDD9E0 = 0;
  qword_2CDD9E8 = 0;
  qword_2CDD9F0 = 0;
  qword_2CDD9F8 = 0;
  qword_2CDDA18 = (__int64)&unk_2CDDA30;
  qword_2CDDA20 = 1;
  dword_2CDDA28 = 0;
  byte_2CDDA2C = 1;
  v9 = sub_2210FF0("The percentage threshold against total count for the promotion", &qword_2CDDA80);
  v10 = (unsigned int)qword_2CDDA08;
  v11 = (unsigned int)qword_2CDDA08 + 1LL;
  if ( v11 > HIDWORD(qword_2CDDA08) )
  {
    v30 = v9;
    sub_2237220((char *)&unk_2CDDA10 - 16, &unk_2CDDA10, v11, 8);
    v10 = (unsigned int)qword_2CDDA08;
    v9 = v30;
  }
  *(_QWORD *)(qword_2CDDA00 + 8 * v10) = v9;
  xmmword_2CDDA70 = (__int128)_mm_loadh_ps((const double *)off_2C78C90);
  LODWORD(qword_2CDDA08) = qword_2CDDA08 + 1;
  qword_2CDDA40 = (__int64)off_2C71B28;
  qword_2CDDA38 = 0;
  byte_2CDDA50 = 0;
  qword_2CDD9C0 = (__int64)off_2C71B48;
  qword_2CDDA48 = 0;
  qword_2CDDA58 = (__int64)off_2BEABC8;
  sub_2217250(&qword_2CDD9C0, "icp-total-percent-threshold", 27);
  qword_2CDD9E8 = v8;
  qword_2CDDA38 = 5;
  byte_2CDDA50 = 1;
  qword_2CDDA48 = 5;
  BYTE2(qword_2CDD9C8) = BYTE2(qword_2CDD9C8) & 0x9F | 0x20;
  qword_2CDD9E0 = (__int64)"The percentage threshold against total count for the promotion";
  sub_2218140(&qword_2CDD9C0);
  __cxa_atexit(sub_2014000, &qword_2CDD9C0, &off_2B25620);
  v12 = j__strlen("Minimum absolute count for promotion candidate");
  qword_2CDD940 = (__int64)&unk_2CDD950;
  v13 = v12;
  qword_2CDD910 = 0;
  qword_2CDD900 = (__int64)&off_2C758B0;
  qword_2CDD908 = (unsigned int)qword_2CDD908 & 0x80000000;
  qword_2CDD948 = 0x100000000LL;
  qword_2CDD918 = 0;
  qword_2CDD920 = 0;
  qword_2CDD928 = 0;
  qword_2CDD930 = 0;
  qword_2CDD938 = 0;
  qword_2CDD958 = (__int64)&unk_2CDD970;
  qword_2CDD960 = 1;
  dword_2CDD968 = 0;
  byte_2CDD96C = 1;
  v14 = sub_2210FF0("Minimum absolute count for promotion candidate", &qword_2CDD9C0);
  v15 = (unsigned int)qword_2CDD948;
  v16 = (unsigned int)qword_2CDD948 + 1LL;
  if ( v16 > HIDWORD(qword_2CDD948) )
  {
    v30 = v14;
    sub_2237220((char *)&unk_2CDD950 - 16, &unk_2CDD950, v16, 8);
    v15 = (unsigned int)qword_2CDD948;
    v14 = v30;
  }
  v17 = _mm_load_si128(&v29);
  *(_QWORD *)(qword_2CDD940 + 8 * v15) = v14;
  qword_2CDD980 = (__int64)off_2C712D0;
  qword_2CDD900 = (__int64)off_2C75710;
  xmmword_2CDD9A8 = (__int128)v17;
  qword_2CDD990 = (__int64)off_2BEAB98;
  LODWORD(qword_2CDD948) = qword_2CDD948 + 1;
  dword_2CDD978 = 0;
  dword_2CDD988 = 0;
  byte_2CDD98C = 0;
  sub_2217250(&qword_2CDD900, "icp-minimum-count-threshold", 27);
  qword_2CDD928 = v13;
  dword_2CDD978 = 0;
  byte_2CDD98C = 1;
  dword_2CDD988 = 0;
  BYTE2(qword_2CDD908) = BYTE2(qword_2CDD908) & 0x9F | 0x20;
  qword_2CDD920 = (__int64)"Minimum absolute count for promotion candidate";
  sub_2218140(&qword_2CDD900);
  __cxa_atexit(sub_1FED260, &qword_2CDD900, &off_2B25620);
  v18 = j__strlen("Max number of promotions for a single indirect call callsite");
  qword_2CDD880 = (__int64)&unk_2CDD890;
  v19 = v18;
  qword_2CDD850 = 0;
  qword_2CDD840 = (__int64)&off_2C758B0;
  qword_2CDD848 = (unsigned int)qword_2CDD848 & 0x80000000;
  qword_2CDD888 = 0x100000000LL;
  qword_2CDD858 = 0;
  qword_2CDD860 = 0;
  qword_2CDD868 = 0;
  qword_2CDD870 = 0;
  qword_2CDD878 = 0;
  qword_2CDD898 = (__int64)&unk_2CDD8B0;
  qword_2CDD8A0 = 1;
  dword_2CDD8A8 = 0;
  byte_2CDD8AC = 1;
  v20 = sub_2210FF0("Max number of promotions for a single indirect call callsite", &qword_2CDD900);
  v21 = (unsigned int)qword_2CDD888;
  v22 = (unsigned int)qword_2CDD888 + 1LL;
  if ( v22 > HIDWORD(qword_2CDD888) )
  {
    v30 = v20;
    sub_2237220((char *)&unk_2CDD890 - 16, &unk_2CDD890, v22, 8);
    v21 = (unsigned int)qword_2CDD888;
    v20 = v30;
  }
  v23 = _mm_load_si128(&v29);
  *(_QWORD *)(qword_2CDD880 + 8 * v21) = v20;
  qword_2CDD8C0 = (__int64)off_2C712D0;
  qword_2CDD840 = (__int64)off_2C75710;
  xmmword_2CDD8E8 = (__int128)v23;
  qword_2CDD8D0 = (__int64)off_2BEAB98;
  LODWORD(qword_2CDD888) = qword_2CDD888 + 1;
  dword_2CDD8B8 = 0;
  dword_2CDD8C8 = 0;
  byte_2CDD8CC = 0;
  sub_2217250(&qword_2CDD840, "icp-max-prom", 12);
  qword_2CDD868 = v19;
  dword_2CDD8B8 = 3;
  byte_2CDD8CC = 1;
  dword_2CDD8C8 = 3;
  BYTE2(qword_2CDD848) = BYTE2(qword_2CDD848) & 0x9F | 0x20;
  qword_2CDD860 = (__int64)"Max number of promotions for a single indirect call callsite";
  sub_2218140(&qword_2CDD840);
  __cxa_atexit(sub_1FED260, &qword_2CDD840, &off_2B25620);
  v24 = j__strlen("Max number of vtables annotated for a vtable load instruction.");
  qword_2CDD780 = &off_2C758B0;
  *(_QWORD *)&dword_2CDD788 = dword_2CDD788 & 0x80000000;
  qword_2CDD7C0[1] = 0x100000000LL;
  unk_2CDD790 = 0;
  unk_2CDD798 = 0;
  unk_2CDD7A0 = 0;
  unk_2CDD7A8 = 0;
  unk_2CDD7B0 = 0;
  unk_2CDD7B8 = 0;
  qword_2CDD7C0[0] = &qword_2CDD7C0[2];
  qword_2CDD7C0[3] = &qword_2CDD7C0[6];
  qword_2CDD7C0[4] = 1;
  LODWORD(qword_2CDD7C0[5]) = 0;
  BYTE4(qword_2CDD7C0[5]) = 1;
  v25 = sub_2210FF0("Max number of vtables annotated for a vtable load instruction.", &qword_2CDD840);
  v26 = LODWORD(qword_2CDD7C0[1]);
  if ( (unsigned __int64)LODWORD(qword_2CDD7C0[1]) + 1 > HIDWORD(qword_2CDD7C0[1]) )
  {
    v30 = v25;
    sub_2237220(qword_2CDD7C0, &qword_2CDD7C0[2], LODWORD(qword_2CDD7C0[1]) + 1LL, 8);
    v26 = LODWORD(qword_2CDD7C0[1]);
    v25 = v30;
  }
  v27 = _mm_load_si128(&v29);
  *(_QWORD *)(qword_2CDD7C0[0] + 8 * v26) = v25;
  qword_2CDD7C0[8] = off_2C712D0;
  qword_2CDD780 = off_2C75710;
  ++LODWORD(qword_2CDD7C0[1]);
  qword_2CDD7C0[10] = off_2BEAB98;
  LODWORD(qword_2CDD7C0[7]) = 0;
  LODWORD(qword_2CDD7C0[9]) = 0;
  BYTE4(qword_2CDD7C0[9]) = 0;
  *(__m128i *)&qword_2CDD7C0[13] = v27;
  sub_2217250(&qword_2CDD780, "icp-max-num-vtables", 19);
  unk_2CDD7A8 = v24;
  LODWORD(qword_2CDD7C0[7]) = 6;
  BYTE4(qword_2CDD7C0[9]) = 1;
  LODWORD(qword_2CDD7C0[9]) = 6;
  BYTE2(dword_2CDD788) = BYTE2(dword_2CDD788) & 0x9F | 0x20;
  unk_2CDD7A0 = "Max number of vtables annotated for a vtable load instruction.";
  sub_2218140(&qword_2CDD780);
  return __cxa_atexit(sub_1FED260, &qword_2CDD780, &off_2B25620);
}
