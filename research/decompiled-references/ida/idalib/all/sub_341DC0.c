int __fastcall sub_341DC0(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2D03D90 = 0;
  qword_2D03D98 = 0;
  qword_2D03DA0 = 0;
  qword_2D03D80 = (__int64)&off_2C758B0;
  qword_2D03D88 = (unsigned int)qword_2D03D88 & 0x80000000;
  qword_2D03DC8 = 0x100000000LL;
  qword_2D03DA8 = 0;
  qword_2D03DB0 = 0;
  qword_2D03DB8 = 0;
  qword_2D03DC0 = (__int64)&unk_2D03DD0;
  qword_2D03DD8 = (__int64)&unk_2D03DF0;
  qword_2D03DE0 = 1;
  dword_2D03DE8 = 0;
  byte_2D03DEC = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2D03DC8;
  v3 = (unsigned int)qword_2D03DC8 + 1LL;
  if ( v3 > HIDWORD(qword_2D03DC8) )
  {
    v5 = v1;
    sub_2237220((char *)&unk_2D03DD0 - 16, &unk_2D03DD0, v3, 8);
    v2 = (unsigned int)qword_2D03DC8;
    v1 = v5;
  }
  *(_QWORD *)(qword_2D03DC0 + 8 * v2) = v1;
  word_2D03E08 = 0;
  xmmword_2D03E28 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2D03DC8) = qword_2D03DC8 + 1;
  qword_2D03E00 = (__int64)off_2C714E8;
  byte_2D03DF8 = 0;
  qword_2D03D80 = (__int64)off_2C75848;
  qword_2D03E10 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2D03D80, "loop-deletion-enable-symbolic-execution", 39);
  word_2D03E08 = 257;
  byte_2D03DF8 = 1;
  qword_2D03DA8 = 111;
  BYTE2(qword_2D03D88) = BYTE2(qword_2D03D88) & 0x9F | 0x20;
  qword_2D03DA0 = (__int64)"Break backedge through symbolic execution of 1st iteration attempting to prove that the backe"
                           "dge is never taken";
  sub_2218140(&qword_2D03D80);
  return __cxa_atexit(sub_200E190, &qword_2D03D80, &off_2B25620);
}
