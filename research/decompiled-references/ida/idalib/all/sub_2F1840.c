int sub_2F1840()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  unsigned __int64 v2; // rdx
  __int64 v4; // [rsp+8h] [rbp-10h]

  qword_2CD9530 = 0;
  qword_2CD9538 = 0;
  qword_2CD9540 = 0;
  qword_2CD9520 = (__int64)&off_2C758B0;
  qword_2CD9528 = (unsigned int)qword_2CD9528 & 0x80000000;
  qword_2CD9568 = 0x100000000LL;
  qword_2CD9548 = 0;
  qword_2CD9550 = 0;
  qword_2CD9558 = 0;
  qword_2CD9560 = (__int64)&unk_2CD9570;
  qword_2CD9578 = (__int64)&unk_2CD9590;
  qword_2CD9580 = 1;
  dword_2CD9588 = 0;
  byte_2CD958C = 1;
  v0 = sub_2210FF0();
  v1 = (unsigned int)qword_2CD9568;
  v2 = (unsigned int)qword_2CD9568 + 1LL;
  if ( v2 > HIDWORD(qword_2CD9568) )
  {
    v4 = v0;
    sub_2237220((char *)&unk_2CD9570 - 16, &unk_2CD9570, v2, 8);
    v1 = (unsigned int)qword_2CD9568;
    v0 = v4;
  }
  *(_QWORD *)(qword_2CD9560 + 8 * v1) = v0;
  word_2CD95A8 = 0;
  xmmword_2CD95C8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2CD9568) = qword_2CD9568 + 1;
  qword_2CD95A0 = (__int64)off_2C714E8;
  byte_2CD9598 = 0;
  qword_2CD9520 = (__int64)off_2C75848;
  qword_2CD95B0 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2CD9520, "disable-basic-aa", 16);
  word_2CD95A8 = 256;
  byte_2CD9598 = 0;
  BYTE2(qword_2CD9528) = BYTE2(qword_2CD9528) & 0x9F | 0x20;
  sub_2218140(&qword_2CD9520);
  return __cxa_atexit(sub_200E190, &qword_2CD9520, &off_2B25620);
}
