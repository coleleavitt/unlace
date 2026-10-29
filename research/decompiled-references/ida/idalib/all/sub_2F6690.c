int __fastcall sub_2F6690(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-10h]

  qword_2CDB630 = 0;
  qword_2CDB638 = 0;
  qword_2CDB640 = 0;
  qword_2CDB620 = (__int64)&off_2C758B0;
  qword_2CDB628 = (unsigned int)qword_2CDB628 & 0x80000000;
  qword_2CDB668 = 0x100000000LL;
  qword_2CDB648 = 0;
  qword_2CDB650 = 0;
  qword_2CDB658 = 0;
  qword_2CDB660 = (__int64)&unk_2CDB670;
  qword_2CDB678 = (__int64)&unk_2CDB690;
  qword_2CDB680 = 1;
  dword_2CDB688 = 0;
  byte_2CDB68C = 1;
  v2 = sub_2210FF0(a1, a2);
  v3 = (unsigned int)qword_2CDB668;
  v4 = (unsigned int)qword_2CDB668 + 1LL;
  if ( v4 > HIDWORD(qword_2CDB668) )
  {
    v6 = v2;
    sub_2237220((char *)&unk_2CDB670 - 16, &unk_2CDB670, v4, 8);
    v3 = (unsigned int)qword_2CDB668;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CDB660 + 8 * v3) = v2;
  word_2CDB6A8 = 0;
  LODWORD(qword_2CDB668) = qword_2CDB668 + 1;
  xmmword_2CDB6C8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  qword_2CDB6A0 = (__int64)off_2C714E8;
  byte_2CDB698 = 0;
  qword_2CDB620 = (__int64)off_2C75848;
  qword_2CDB6B0 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2CDB620, "abort-on-max-devirt-iterations-reached", 38);
  qword_2CDB648 = 79;
  qword_2CDB640 = (__int64)"Abort when the max iterations for devirtualization CGSCC repeat pass is reached";
  sub_2218140(&qword_2CDB620);
  return __cxa_atexit(sub_200E190, &qword_2CDB620, &off_2B25620);
}
