int __fastcall sub_340560(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2D030D0 = 0;
  qword_2D030D8 = 0;
  qword_2D030E0 = 0;
  qword_2D030C0 = (__int64)&off_2C758B0;
  qword_2D030C8 = (unsigned int)qword_2D030C8 & 0x80000000;
  qword_2D03108 = 0x100000000LL;
  qword_2D030E8 = 0;
  qword_2D030F0 = 0;
  qword_2D030F8 = 0;
  qword_2D03100 = (__int64)&unk_2D03110;
  qword_2D03118 = (__int64)&unk_2D03130;
  qword_2D03120 = 1;
  dword_2D03128 = 0;
  byte_2D0312C = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2D03108;
  v3 = (unsigned int)qword_2D03108 + 1LL;
  if ( v3 > HIDWORD(qword_2D03108) )
  {
    v5 = v1;
    sub_2237220((char *)&unk_2D03110 - 16, &unk_2D03110, v3, 8);
    v2 = (unsigned int)qword_2D03108;
    v1 = v5;
  }
  *(_QWORD *)(qword_2D03100 + 8 * v2) = v1;
  word_2D03148 = 0;
  xmmword_2D03168 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2D03108) = qword_2D03108 + 1;
  qword_2D03140 = (__int64)off_2C714E8;
  byte_2D03138 = 0;
  qword_2D030C0 = (__int64)off_2C75848;
  qword_2D03150 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2D030C0, "assume-default-is-flat-addrspace", 32);
  word_2D03148 = 256;
  byte_2D03138 = 0;
  qword_2D030E8 = 96;
  BYTE2(qword_2D030C8) = BYTE2(qword_2D030C8) & 0x9F | 0x40;
  qword_2D030E0 = (__int64)"The default address space is assumed as the flat address space. This is mainly for test purpose.";
  sub_2218140(&qword_2D030C0);
  return __cxa_atexit(sub_200E190, &qword_2D030C0, &off_2B25620);
}
