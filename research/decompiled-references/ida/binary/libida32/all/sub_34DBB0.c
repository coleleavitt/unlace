int sub_34DBB0()
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
  qword_2CE3290 = 0;
  v1 = v0;
  qword_2CE3298 = 0;
  qword_2CE32A0 = 0;
  qword_2CE3280 = (__int64)&off_2C4B8B0;
  qword_2CE3288 = (unsigned int)qword_2CE3288 & 0x80000000;
  qword_2CE32C8 = 0x100000000LL;
  qword_2CE32A8 = 0;
  qword_2CE32B0 = 0;
  qword_2CE32B8 = 0;
  qword_2CE32C0 = (__int64)&unk_2CE32D0;
  qword_2CE32D8 = (__int64)&unk_2CE32F0;
  qword_2CE32E0 = 1;
  dword_2CE32E8 = 0;
  byte_2CE32EC = 1;
  v2 = sub_21ED2B0(
         "Uses the source file name instead of the Module hash. This requires that the source filename has a unique name "
         "/ path to avoid name collisions.");
  v3 = (unsigned int)qword_2CE32C8;
  v4 = (unsigned int)qword_2CE32C8 + 1LL;
  if ( v4 > HIDWORD(qword_2CE32C8) )
  {
    v9 = v2;
    sub_22134E0((char *)&unk_2CE32D0 - 16, &unk_2CE32D0, v4, 8);
    v3 = (unsigned int)qword_2CE32C8;
    v2 = v9;
  }
  *(_QWORD *)(qword_2CE32C0 + 8 * v3) = v2;
  word_2CE3308 = 0;
  xmmword_2CE3328 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CE32C8) = qword_2CE32C8 + 1;
  qword_2CE3300 = (__int64)off_2C474E8;
  byte_2CE32F8 = 0;
  qword_2CE3280 = (__int64)off_2C4B848;
  qword_2CE3310 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CE3280, "use-source-filename-for-promoted-locals", 39);
  qword_2CE32A8 = v1;
  BYTE2(qword_2CE3288) = BYTE2(qword_2CE3288) & 0x9F | 0x20;
  qword_2CE32A0 = (__int64)"Uses the source file name instead of the Module hash. This requires that the source filename "
                           "has a unique name / path to avoid name collisions.";
  sub_21F4400(&qword_2CE3280);
  __cxa_atexit(sub_1FEA450, &qword_2CE3280, &off_2AFC540);
  v5 = j__strlen(
         "Move the symbols with the given name. This will delete these symbols wherever they are originally defined, and "
         "make sure their linkage is External where they are imported. It is meant to be used with the name of contextual"
         " profiling roots.");
  qword_2CE3180 = &off_2C4B8B0;
  unk_2CE3190 = 0;
  unk_2CE3198 = 0;
  unk_2CE31A0 = 0;
  *(_QWORD *)&dword_2CE3188 = dword_2CE3188 & 0x80000000 | 0x10000LL;
  qword_2CE31C0[1] = 0x100000000LL;
  unk_2CE31A8 = 0;
  unk_2CE31B0 = 0;
  unk_2CE31B8 = 0;
  qword_2CE31C0[0] = &qword_2CE31C0[2];
  qword_2CE31C0[3] = &qword_2CE31C0[6];
  qword_2CE31C0[4] = 1;
  LODWORD(qword_2CE31C0[5]) = 0;
  BYTE4(qword_2CE31C0[5]) = 1;
  v6 = sub_21ED2B0(
         "Move the symbols with the given name. This will delete these symbols wherever they are originally defined, and "
         "make sure their linkage is External where they are imported. It is meant to be used with the name of contextual"
         " profiling roots.");
  v7 = LODWORD(qword_2CE31C0[1]);
  if ( (unsigned __int64)LODWORD(qword_2CE31C0[1]) + 1 > HIDWORD(qword_2CE31C0[1]) )
  {
    v10 = v6;
    sub_22134E0(qword_2CE31C0, &qword_2CE31C0[2], LODWORD(qword_2CE31C0[1]) + 1LL, 8);
    v7 = LODWORD(qword_2CE31C0[1]);
    v6 = v10;
  }
  *(_QWORD *)(qword_2CE31C0[0] + 8 * v7) = v6;
  *(_OWORD *)&qword_2CE31C0[14] = 0;
  ++LODWORD(qword_2CE31C0[1]);
  qword_2CE3180 = off_2C4D518;
  qword_2CE31C0[7] = 0;
  qword_2CE31C0[8] = 0;
  qword_2CE31C0[17] = off_2BC0C28;
  qword_2CE31C0[9] = 0;
  qword_2CE31C0[10] = 0;
  qword_2CE31C0[11] = 0;
  qword_2CE31C0[12] = 0;
  LOBYTE(qword_2CE31C0[13]) = 0;
  qword_2CE31C0[16] = 0;
  *(__m128 *)&qword_2CE31C0[20] = _mm_loadh_ps((const double *)off_2C4DD70);
  sub_21F3510(&qword_2CE3180, "thinlto-move-symbols", 20);
  unk_2CE31A8 = v5;
  unk_2CE31A0 = "Move the symbols with the given name. This will delete these symbols wherever they are originally define"
                "d, and make sure their linkage is External where they are imported. It is meant to be used with the name"
                " of contextual profiling roots.";
  BYTE2(dword_2CE3188) = BYTE2(dword_2CE3188) & 0x9F | 0x20;
  sub_21F4400(&qword_2CE3180);
  return __cxa_atexit(sub_22A4100, &qword_2CE3180, &off_2AFC540);
}

