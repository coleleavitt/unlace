int __fastcall sub_2FC8E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-10h]

  qword_2CDF530 = 0;
  qword_2CDF538 = 0;
  qword_2CDF540 = 0;
  qword_2CDF520 = (__int64)&off_2C758B0;
  qword_2CDF528 = (unsigned int)qword_2CDF528 & 0x80000000;
  qword_2CDF568 = 0x100000000LL;
  qword_2CDF548 = 0;
  qword_2CDF550 = 0;
  qword_2CDF558 = 0;
  qword_2CDF560 = (__int64)&unk_2CDF570;
  qword_2CDF578 = (__int64)&unk_2CDF590;
  qword_2CDF580 = 1;
  dword_2CDF588 = 0;
  byte_2CDF58C = 1;
  v2 = sub_2210FF0(a1, a2);
  v3 = (unsigned int)qword_2CDF568;
  v4 = (unsigned int)qword_2CDF568 + 1LL;
  if ( v4 > HIDWORD(qword_2CDF568) )
  {
    v6 = v2;
    sub_2237220((char *)&unk_2CDF570 - 16, &unk_2CDF570, v4, 8);
    v3 = (unsigned int)qword_2CDF568;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CDF560 + 8 * v3) = v2;
  word_2CDF5A8 = 0;
  xmmword_2CDF5C8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2CDF568) = qword_2CDF568 + 1;
  qword_2CDF5A0 = (__int64)off_2C714E8;
  byte_2CDF598 = 0;
  qword_2CDF520 = (__int64)off_2C75848;
  qword_2CDF5B0 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2CDF520, "disable-last-run-tracking", 25);
  word_2CDF5A8 = 256;
  byte_2CDF598 = 0;
  qword_2CDF548 = 25;
  BYTE2(qword_2CDF528) = BYTE2(qword_2CDF528) & 0x9F | 0x20;
  qword_2CDF540 = (__int64)"Disable last run tracking";
  sub_2218140(&qword_2CDF520);
  return __cxa_atexit(sub_200E190, &qword_2CDF520, &off_2B25620);
}
