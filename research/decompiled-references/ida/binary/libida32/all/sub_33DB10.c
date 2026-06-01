int sub_33DB10()
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
  qword_2CD9630 = 0;
  v1 = v0;
  qword_2CD9638 = 0;
  qword_2CD9640 = 0;
  qword_2CD9620 = (__int64)&off_2C4B8B0;
  qword_2CD9628 = (unsigned int)qword_2CD9628 & 0x80000000;
  qword_2CD9668 = 0x100000000LL;
  qword_2CD9648 = 0;
  qword_2CD9650 = 0;
  qword_2CD9658 = 0;
  qword_2CD9660 = (__int64)&unk_2CD9670;
  qword_2CD9678 = (__int64)&unk_2CD9690;
  qword_2CD9680 = 1;
  dword_2CD9688 = 0;
  byte_2CD968C = 1;
  v2 = sub_21ED2B0("Only split jump tables with size less or equal than JumpTableSizeThreshold.");
  v3 = (unsigned int)qword_2CD9668;
  v4 = (unsigned int)qword_2CD9668 + 1LL;
  if ( v4 > HIDWORD(qword_2CD9668) )
  {
    *(_QWORD *)&v12 = v2;
    sub_22134E0((char *)&unk_2CD9670 - 16, &unk_2CD9670, v4, 8);
    v3 = (unsigned int)qword_2CD9668;
    v2 = v12;
  }
  *(_QWORD *)(qword_2CD9660 + 8 * v3) = v2;
  qword_2CD96A0 = (__int64)off_2C472D0;
  qword_2CD9620 = (__int64)off_2C4B710;
  xmmword_2CD96C8 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  v12 = xmmword_2CD96C8;
  LODWORD(qword_2CD9668) = qword_2CD9668 + 1;
  qword_2CD96B0 = (__int64)off_2BC0BF8;
  dword_2CD9698 = 0;
  dword_2CD96A8 = 0;
  byte_2CD96AC = 0;
  sub_21F3510(&qword_2CD9620, "jump-table-to-switch-size-threshold", 35);
  qword_2CD9648 = v1;
  dword_2CD9698 = 10;
  byte_2CD96AC = 1;
  dword_2CD96A8 = 10;
  BYTE2(qword_2CD9628) = BYTE2(qword_2CD9628) & 0x9F | 0x20;
  qword_2CD9640 = (__int64)"Only split jump tables with size less or equal than JumpTableSizeThreshold.";
  sub_21F4400(&qword_2CD9620);
  __cxa_atexit(sub_1FC9520, &qword_2CD9620, &off_2AFC540);
  v5 = j__strlen("Only split jump tables containing functions whose sizes are less or equal than this threshold.");
  byte_2CD95CC = 1;
  qword_2CD9570 = 0;
  v6 = v5;
  qword_2CD9560 = (__int64)&off_2C4B8B0;
  qword_2CD9568 = (unsigned int)qword_2CD9568 & 0x80000000;
  qword_2CD95A8 = 0x100000000LL;
  qword_2CD9578 = 0;
  qword_2CD9580 = 0;
  qword_2CD9588 = 0;
  qword_2CD9590 = 0;
  qword_2CD9598 = 0;
  qword_2CD95A0 = (__int64)&unk_2CD95B0;
  qword_2CD95B8 = (__int64)&unk_2CD95D0;
  qword_2CD95C0 = 1;
  dword_2CD95C8 = 0;
  v7 = sub_21ED2B0("Only split jump tables containing functions whose sizes are less or equal than this threshold.");
  v8 = (unsigned int)qword_2CD95A8;
  si128 = _mm_load_si128((const __m128i *)&v12);
  v10 = (unsigned int)qword_2CD95A8 + 1LL;
  if ( v10 > HIDWORD(qword_2CD95A8) )
  {
    *(_QWORD *)&v12 = v7;
    v13[0] = si128;
    sub_22134E0((char *)&unk_2CD95B0 - 16, &unk_2CD95B0, v10, 8);
    v8 = (unsigned int)qword_2CD95A8;
    si128 = _mm_load_si128(v13);
    v7 = v12;
  }
  *(_QWORD *)(qword_2CD95A0 + 8 * v8) = v7;
  qword_2CD95E0 = (__int64)off_2C472D0;
  qword_2CD9560 = (__int64)off_2C4B710;
  qword_2CD95F0 = (__int64)off_2BC0BF8;
  xmmword_2CD9608 = (__int128)si128;
  LODWORD(qword_2CD95A8) = qword_2CD95A8 + 1;
  dword_2CD95D8 = 0;
  dword_2CD95E8 = 0;
  byte_2CD95EC = 0;
  sub_21F3510(&qword_2CD9560, "jump-table-to-switch-function-size-threshold", 44);
  qword_2CD9588 = v6;
  dword_2CD95D8 = 50;
  byte_2CD95EC = 1;
  dword_2CD95E8 = 50;
  BYTE2(qword_2CD9568) = BYTE2(qword_2CD9568) & 0x9F | 0x20;
  qword_2CD9580 = (__int64)"Only split jump tables containing functions whose sizes are less or equal than this threshold.";
  sub_21F4400(&qword_2CD9560);
  return __cxa_atexit(sub_1FC9520, &qword_2CD9560, &off_2AFC540);
}

