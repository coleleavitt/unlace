int __fastcall sub_34E5F0(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2D0A5D0 = 0;
  qword_2D0A5D8 = 0;
  qword_2D0A5E0 = 0;
  qword_2D0A5C0 = (__int64)&off_2C758B0;
  qword_2D0A5C8 = (unsigned int)qword_2D0A5C8 & 0x80000000;
  qword_2D0A608 = 0x100000000LL;
  qword_2D0A5E8 = 0;
  qword_2D0A5F0 = 0;
  qword_2D0A5F8 = 0;
  qword_2D0A600 = (__int64)&unk_2D0A610;
  qword_2D0A618 = (__int64)&unk_2D0A630;
  qword_2D0A620 = 1;
  dword_2D0A628 = 0;
  byte_2D0A62C = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2D0A608;
  v3 = (unsigned int)qword_2D0A608 + 1LL;
  if ( v3 > HIDWORD(qword_2D0A608) )
  {
    v5 = v1;
    sub_2237220((char *)&unk_2D0A610 - 16, &unk_2D0A610, v3, 8);
    v2 = (unsigned int)qword_2D0A608;
    v1 = v5;
  }
  *(_QWORD *)(qword_2D0A600 + 8 * v2) = v1;
  word_2D0A648 = 0;
  xmmword_2D0A668 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2D0A608) = qword_2D0A608 + 1;
  qword_2D0A640 = (__int64)off_2C714E8;
  byte_2D0A638 = 0;
  qword_2D0A5C0 = (__int64)off_2C75848;
  qword_2D0A650 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2D0A5C0, "tre-disable-entrycount-recompute", 32);
  word_2D0A648 = 256;
  byte_2D0A638 = 0;
  qword_2D0A5E8 = 94;
  BYTE2(qword_2D0A5C8) = BYTE2(qword_2D0A5C8) & 0x9F | 0x20;
  qword_2D0A5E0 = (__int64)"Force disabling recomputing of function entry count, on successful tail recursion elimination.";
  sub_2218140(&qword_2D0A5C0);
  return __cxa_atexit(sub_200E190, &qword_2D0A5C0, &off_2B25620);
}
