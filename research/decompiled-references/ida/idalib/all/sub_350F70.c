int sub_350F70()
{
  size_t v0; // rax
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v9; // [rsp+8h] [rbp-20h]
  __int64 v10; // [rsp+8h] [rbp-20h]

  v0 = j__strlen(
         "Uses the source file name instead of the Module hash. This requires that the source filename has a unique name "
         "/ path to avoid name collisions.");
  qword_2D0D1B0 = 0;
  v1 = v0;
  qword_2D0D1B8 = 0;
  qword_2D0D1C0 = 0;
  qword_2D0D1A0 = (__int64)&off_2C758B0;
  qword_2D0D1A8 = (unsigned int)qword_2D0D1A8 & 0x80000000;
  qword_2D0D1E8 = 0x100000000LL;
  qword_2D0D1C8 = 0;
  qword_2D0D1D0 = 0;
  qword_2D0D1D8 = 0;
  qword_2D0D1E0 = (__int64)&unk_2D0D1F0;
  qword_2D0D1F8 = (__int64)&unk_2D0D210;
  qword_2D0D200 = 1;
  dword_2D0D208 = 0;
  byte_2D0D20C = 1;
  v2 = sub_2210FF0(
         "Uses the source file name instead of the Module hash. This requires that the source filename has a unique name "
         "/ path to avoid name collisions.");
  v3 = (unsigned int)qword_2D0D1E8;
  v4 = (unsigned int)qword_2D0D1E8 + 1LL;
  if ( v4 > HIDWORD(qword_2D0D1E8) )
  {
    v9 = v2;
    sub_2237220((char *)&unk_2D0D1F0 - 16, &unk_2D0D1F0, v4, 8);
    v3 = (unsigned int)qword_2D0D1E8;
    v2 = v9;
  }
  *(_QWORD *)(qword_2D0D1E0 + 8 * v3) = v2;
  word_2D0D228 = 0;
  xmmword_2D0D248 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2D0D1E8) = qword_2D0D1E8 + 1;
  qword_2D0D220 = (__int64)off_2C714E8;
  byte_2D0D218 = 0;
  qword_2D0D1A0 = (__int64)off_2C75848;
  qword_2D0D230 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2D0D1A0, "use-source-filename-for-promoted-locals", 39);
  qword_2D0D1C8 = v1;
  BYTE2(qword_2D0D1A8) = BYTE2(qword_2D0D1A8) & 0x9F | 0x20;
  qword_2D0D1C0 = (__int64)"Uses the source file name instead of the Module hash. This requires that the source filename "
                           "has a unique name / path to avoid name collisions.";
  sub_2218140(&qword_2D0D1A0);
  __cxa_atexit(sub_200E190, &qword_2D0D1A0, &off_2B25620);
  v5 = j__strlen(
         "Move the symbols with the given name. This will delete these symbols wherever they are originally defined, and "
         "make sure their linkage is External where they are imported. It is meant to be used with the name of contextual"
         " profiling roots.");
  qword_2D0D0A0 = &off_2C758B0;
  unk_2D0D0B0 = 0;
  unk_2D0D0B8 = 0;
  unk_2D0D0C0 = 0;
  *(_QWORD *)&dword_2D0D0A8 = dword_2D0D0A8 & 0x80000000 | 0x10000LL;
  qword_2D0D0E0[1] = 0x100000000LL;
  unk_2D0D0C8 = 0;
  unk_2D0D0D0 = 0;
  unk_2D0D0D8 = 0;
  qword_2D0D0E0[0] = &qword_2D0D0E0[2];
  qword_2D0D0E0[3] = &qword_2D0D0E0[6];
  qword_2D0D0E0[4] = 1;
  LODWORD(qword_2D0D0E0[5]) = 0;
  BYTE4(qword_2D0D0E0[5]) = 1;
  v6 = sub_2210FF0(
         "Move the symbols with the given name. This will delete these symbols wherever they are originally defined, and "
         "make sure their linkage is External where they are imported. It is meant to be used with the name of contextual"
         " profiling roots.");
  v7 = LODWORD(qword_2D0D0E0[1]);
  if ( (unsigned __int64)LODWORD(qword_2D0D0E0[1]) + 1 > HIDWORD(qword_2D0D0E0[1]) )
  {
    v10 = v6;
    sub_2237220(qword_2D0D0E0, &qword_2D0D0E0[2], LODWORD(qword_2D0D0E0[1]) + 1LL, 8);
    v7 = LODWORD(qword_2D0D0E0[1]);
    v6 = v10;
  }
  *(_QWORD *)(qword_2D0D0E0[0] + 8 * v7) = v6;
  *(_OWORD *)&qword_2D0D0E0[14] = 0;
  ++LODWORD(qword_2D0D0E0[1]);
  qword_2D0D0A0 = off_2C77518;
  qword_2D0D0E0[7] = 0;
  qword_2D0D0E0[8] = 0;
  qword_2D0D0E0[17] = off_2BEABC8;
  qword_2D0D0E0[9] = 0;
  qword_2D0D0E0[10] = 0;
  qword_2D0D0E0[11] = 0;
  qword_2D0D0E0[12] = 0;
  LOBYTE(qword_2D0D0E0[13]) = 0;
  qword_2D0D0E0[16] = 0;
  *(__m128 *)&qword_2D0D0E0[20] = _mm_loadh_ps((const double *)off_2C77D70);
  sub_2217250(&qword_2D0D0A0, "thinlto-move-symbols", 20);
  unk_2D0D0C8 = v5;
  unk_2D0D0C0 = "Move the symbols with the given name. This will delete these symbols wherever they are originally define"
                "d, and make sure their linkage is External where they are imported. It is meant to be used with the name"
                " of contextual profiling roots.";
  BYTE2(dword_2D0D0A8) = BYTE2(dword_2D0D0A8) & 0x9F | 0x20;
  sub_2218140(&qword_2D0D0A0);
  return __cxa_atexit(sub_22C7E40, &qword_2D0D0A0, &off_2B25620);
}
