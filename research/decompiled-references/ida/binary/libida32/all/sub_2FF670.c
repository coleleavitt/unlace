int sub_2FF670()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  unsigned __int64 v2; // rdx
  __int64 v4; // [rsp+8h] [rbp-10h]

  qword_2CB7D20 = (__int64)&qword_2CB7D50;
  qword_2CB7D28 = 1;
  qword_2CB7D30 = 0;
  qword_2CB7D38 = 0;
  dword_2CB7D40 = 1065353216;
  qword_2CB7D48 = 0;
  qword_2CB7D50 = 0;
  __cxa_atexit(sub_1FEEAE0, &qword_2CB7D50 - 6, &off_2AFC540);
  qword_2CB7C70 = 0;
  qword_2CB7C78 = 0;
  qword_2CB7C80 = 0;
  qword_2CB7C60 = (__int64)&off_2C4B8B0;
  qword_2CB7C68 = (unsigned int)qword_2CB7C68 & 0x80000000;
  qword_2CB7CA8 = 0x100000000LL;
  qword_2CB7C88 = 0;
  qword_2CB7C90 = 0;
  qword_2CB7C98 = 0;
  qword_2CB7CA0 = (__int64)&unk_2CB7CB0;
  qword_2CB7CB8 = (__int64)&unk_2CB7CD0;
  qword_2CB7CC0 = 1;
  dword_2CB7CC8 = 0;
  byte_2CB7CCC = 1;
  v0 = sub_21ED2B0(sub_1FEEAE0, &qword_2CB7D50 - 6);
  v1 = (unsigned int)qword_2CB7CA8;
  v2 = (unsigned int)qword_2CB7CA8 + 1LL;
  if ( v2 > HIDWORD(qword_2CB7CA8) )
  {
    v4 = v0;
    sub_22134E0((char *)&unk_2CB7CB0 - 16, &unk_2CB7CB0, v2, 8);
    v1 = (unsigned int)qword_2CB7CA8;
    v0 = v4;
  }
  *(_QWORD *)(qword_2CB7CA0 + 8 * v1) = v0;
  word_2CB7CE8 = 0;
  xmmword_2CB7D08 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CB7CA8) = qword_2CB7CA8 + 1;
  qword_2CB7CE0 = (__int64)off_2C474E8;
  byte_2CB7CD8 = 0;
  qword_2CB7C60 = (__int64)off_2C4B848;
  qword_2CB7CF0 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CB7C60, "only-simple-regions", 19);
  qword_2CB7C80 = (__int64)"Show only simple regions in the graphviz viewer";
  word_2CB7CE8 = 256;
  byte_2CB7CD8 = 0;
  qword_2CB7C88 = 47;
  BYTE2(qword_2CB7C68) = BYTE2(qword_2CB7C68) & 0x9F | 0x20;
  sub_21F4400(&qword_2CB7C60);
  return __cxa_atexit(sub_1FEA450, &qword_2CB7C60, &off_2AFC540);
}

