int sub_340ED0()
{
  size_t v0; // rax
  __int64 v1; // r13
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  __m128i si128; // xmm0
  unsigned __int64 v10; // rdx
  __int128 v12; // [rsp+0h] [rbp-48h] BYREF
  __m128i v13[3]; // [rsp+10h] [rbp-38h] BYREF

  v0 = j__strlen("Only split jump tables with size less or equal than JumpTableSizeThreshold.");
  qword_2D03550 = 0;
  v1 = v0;
  qword_2D03558 = 0;
  qword_2D03560 = 0;
  qword_2D03540 = (__int64)&off_2C758B0;
  qword_2D03548 = (unsigned int)qword_2D03548 & 0x80000000;
  qword_2D03588 = 0x100000000LL;
  qword_2D03568 = 0;
  qword_2D03570 = 0;
  qword_2D03578 = 0;
  qword_2D03580 = (__int64)&unk_2D03590;
  qword_2D03598 = (__int64)&unk_2D035B0;
  qword_2D035A0 = 1;
  dword_2D035A8 = 0;
  byte_2D035AC = 1;
  v2 = sub_2210FF0("Only split jump tables with size less or equal than JumpTableSizeThreshold.");
  v3 = (unsigned int)qword_2D03588;
  v4 = (unsigned int)qword_2D03588 + 1LL;
  if ( v4 > HIDWORD(qword_2D03588) )
  {
    *(_QWORD *)&v12 = v2;
    sub_2237220((char *)&unk_2D03590 - 16, &unk_2D03590, v4, 8);
    v3 = (unsigned int)qword_2D03588;
    v2 = v12;
  }
  *(_QWORD *)(qword_2D03580 + 8 * v3) = v2;
  qword_2D035C0 = (__int64)off_2C712D0;
  qword_2D03540 = (__int64)off_2C75710;
  xmmword_2D035E8 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  v12 = xmmword_2D035E8;
  LODWORD(qword_2D03588) = qword_2D03588 + 1;
  qword_2D035D0 = (__int64)off_2BEAB98;
  dword_2D035B8 = 0;
  dword_2D035C8 = 0;
  byte_2D035CC = 0;
  sub_2217250(&qword_2D03540, "jump-table-to-switch-size-threshold", 35);
  qword_2D03568 = v1;
  dword_2D035B8 = 10;
  byte_2D035CC = 1;
  dword_2D035C8 = 10;
  BYTE2(qword_2D03548) = BYTE2(qword_2D03548) & 0x9F | 0x20;
  qword_2D03560 = (__int64)"Only split jump tables with size less or equal than JumpTableSizeThreshold.";
  sub_2218140(&qword_2D03540);
  __cxa_atexit(sub_1FED260, &qword_2D03540, &off_2B25620);
  v5 = j__strlen("Only split jump tables containing functions whose sizes are less or equal than this threshold.");
  byte_2D034EC = 1;
  qword_2D03490 = 0;
  v6 = v5;
  qword_2D03480 = (__int64)&off_2C758B0;
  qword_2D03488 = (unsigned int)qword_2D03488 & 0x80000000;
  qword_2D034C8 = 0x100000000LL;
  qword_2D03498 = 0;
  qword_2D034A0 = 0;
  qword_2D034A8 = 0;
  qword_2D034B0 = 0;
  qword_2D034B8 = 0;
  qword_2D034C0 = (__int64)&unk_2D034D0;
  qword_2D034D8 = (__int64)&unk_2D034F0;
  qword_2D034E0 = 1;
  dword_2D034E8 = 0;
  v7 = sub_2210FF0("Only split jump tables containing functions whose sizes are less or equal than this threshold.");
  v8 = (unsigned int)qword_2D034C8;
  si128 = _mm_load_si128((const __m128i *)&v12);
  v10 = (unsigned int)qword_2D034C8 + 1LL;
  if ( v10 > HIDWORD(qword_2D034C8) )
  {
    *(_QWORD *)&v12 = v7;
    v13[0] = si128;
    sub_2237220((char *)&unk_2D034D0 - 16, &unk_2D034D0, v10, 8);
    v8 = (unsigned int)qword_2D034C8;
    si128 = _mm_load_si128(v13);
    v7 = v12;
  }
  *(_QWORD *)(qword_2D034C0 + 8 * v8) = v7;
  qword_2D03500 = (__int64)off_2C712D0;
  qword_2D03480 = (__int64)off_2C75710;
  qword_2D03510 = (__int64)off_2BEAB98;
  xmmword_2D03528 = (__int128)si128;
  LODWORD(qword_2D034C8) = qword_2D034C8 + 1;
  dword_2D034F8 = 0;
  dword_2D03508 = 0;
  byte_2D0350C = 0;
  sub_2217250(&qword_2D03480, "jump-table-to-switch-function-size-threshold", 44);
  qword_2D034A8 = v6;
  dword_2D034F8 = 50;
  byte_2D0350C = 1;
  dword_2D03508 = 50;
  BYTE2(qword_2D03488) = BYTE2(qword_2D03488) & 0x9F | 0x20;
  qword_2D034A0 = (__int64)"Only split jump tables containing functions whose sizes are less or equal than this threshold.";
  sub_2218140(&qword_2D03480);
  return __cxa_atexit(sub_1FED260, &qword_2D03480, &off_2B25620);
}
