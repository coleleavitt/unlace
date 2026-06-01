int __fastcall sub_2F34E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-10h]

  qword_2CD9E30 = 0;
  qword_2CD9E38 = 0;
  qword_2CD9E40 = 0;
  qword_2CD9E20 = (__int64)&off_2C758B0;
  qword_2CD9E28 = (unsigned int)qword_2CD9E28 & 0x80000000;
  qword_2CD9E68 = 0x100000000LL;
  qword_2CD9E48 = 0;
  qword_2CD9E50 = 0;
  qword_2CD9E58 = 0;
  qword_2CD9E60 = (__int64)&unk_2CD9E70;
  qword_2CD9E78 = (__int64)&unk_2CD9E90;
  qword_2CD9E80 = 1;
  dword_2CD9E88 = 0;
  byte_2CD9E8C = 1;
  v2 = sub_2210FF0(a1, a2);
  v3 = (unsigned int)qword_2CD9E68;
  v4 = (unsigned int)qword_2CD9E68 + 1LL;
  if ( v4 > HIDWORD(qword_2CD9E68) )
  {
    v6 = v2;
    sub_2237220((char *)&unk_2CD9E70 - 16, &unk_2CD9E70, v4, 8);
    v3 = (unsigned int)qword_2CD9E68;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CD9E60 + 8 * v3) = v2;
  word_2CD9EA8 = 0;
  xmmword_2CD9EC8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2CD9E68) = qword_2CD9E68 + 1;
  qword_2CD9EA0 = (__int64)off_2C714E8;
  byte_2CD9E98 = 0;
  qword_2CD9E20 = (__int64)off_2C75848;
  qword_2CD9EB0 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2CD9E20, "verify-assumption-cache", 23);
  word_2CD9EA8 = 256;
  byte_2CD9E98 = 0;
  qword_2CD9E48 = 39;
  BYTE2(qword_2CD9E28) = BYTE2(qword_2CD9E28) & 0x9F | 0x20;
  qword_2CD9E40 = (__int64)"Enable verification of assumption cache";
  sub_2218140(&qword_2CD9E20);
  return __cxa_atexit(sub_200E190, &qword_2CD9E20, &off_2B25620);
}
