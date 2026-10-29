int sub_302A30()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  unsigned __int64 v2; // rdx
  __int64 v4; // [rsp+8h] [rbp-10h]

  qword_2CE1C40 = (__int64)&qword_2CE1C70;
  qword_2CE1C48 = 1;
  qword_2CE1C50 = 0;
  qword_2CE1C58 = 0;
  dword_2CE1C60 = 1065353216;
  qword_2CE1C68 = 0;
  qword_2CE1C70 = 0;
  __cxa_atexit(sub_2012820, &qword_2CE1C70 - 6, &off_2B25620);
  qword_2CE1B90 = 0;
  qword_2CE1B98 = 0;
  qword_2CE1BA0 = 0;
  qword_2CE1B80 = (__int64)&off_2C758B0;
  qword_2CE1B88 = (unsigned int)qword_2CE1B88 & 0x80000000;
  qword_2CE1BC8 = 0x100000000LL;
  qword_2CE1BA8 = 0;
  qword_2CE1BB0 = 0;
  qword_2CE1BB8 = 0;
  qword_2CE1BC0 = (__int64)&unk_2CE1BD0;
  qword_2CE1BD8 = (__int64)&unk_2CE1BF0;
  qword_2CE1BE0 = 1;
  dword_2CE1BE8 = 0;
  byte_2CE1BEC = 1;
  v0 = sub_2210FF0(sub_2012820, &qword_2CE1C70 - 6);
  v1 = (unsigned int)qword_2CE1BC8;
  v2 = (unsigned int)qword_2CE1BC8 + 1LL;
  if ( v2 > HIDWORD(qword_2CE1BC8) )
  {
    v4 = v0;
    sub_2237220((char *)&unk_2CE1BD0 - 16, &unk_2CE1BD0, v2, 8);
    v1 = (unsigned int)qword_2CE1BC8;
    v0 = v4;
  }
  *(_QWORD *)(qword_2CE1BC0 + 8 * v1) = v0;
  word_2CE1C08 = 0;
  xmmword_2CE1C28 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2CE1BC8) = qword_2CE1BC8 + 1;
  qword_2CE1C00 = (__int64)off_2C714E8;
  byte_2CE1BF8 = 0;
  qword_2CE1B80 = (__int64)off_2C75848;
  qword_2CE1C10 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2CE1B80, "only-simple-regions", 19);
  qword_2CE1BA0 = (__int64)"Show only simple regions in the graphviz viewer";
  word_2CE1C08 = 256;
  byte_2CE1BF8 = 0;
  qword_2CE1BA8 = 47;
  BYTE2(qword_2CE1B88) = BYTE2(qword_2CE1B88) & 0x9F | 0x20;
  sub_2218140(&qword_2CE1B80);
  return __cxa_atexit(sub_200E190, &qword_2CE1B80, &off_2B25620);
}
