int __fastcall sub_2F58C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-10h]

  qword_2CDAEF0 = 0;
  qword_2CDAEF8 = 0;
  qword_2CDAF00 = 0;
  qword_2CDAEE0 = (__int64)&off_2C758B0;
  qword_2CDAEE8 = (unsigned int)qword_2CDAEE8 & 0x80000000;
  qword_2CDAF28 = 0x100000000LL;
  qword_2CDAF08 = 0;
  qword_2CDAF10 = 0;
  qword_2CDAF18 = 0;
  qword_2CDAF20 = (__int64)&unk_2CDAF30;
  qword_2CDAF38 = (__int64)&unk_2CDAF50;
  qword_2CDAF40 = 1;
  dword_2CDAF48 = 0;
  byte_2CDAF4C = 1;
  v2 = sub_2210FF0(a1, a2);
  v3 = (unsigned int)qword_2CDAF28;
  v4 = (unsigned int)qword_2CDAF28 + 1LL;
  if ( v4 > HIDWORD(qword_2CDAF28) )
  {
    v6 = v2;
    sub_2237220((char *)&unk_2CDAF30 - 16, &unk_2CDAF30, v4, 8);
    v3 = (unsigned int)qword_2CDAF28;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CDAF20 + 8 * v3) = v2;
  xmmword_2CDAF88 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  LODWORD(qword_2CDAF28) = qword_2CDAF28 + 1;
  qword_2CDAF60 = (__int64)off_2C712D0;
  dword_2CDAF58 = 0;
  byte_2CDAF6C = 0;
  qword_2CDAEE0 = (__int64)off_2C75710;
  dword_2CDAF68 = 0;
  qword_2CDAF70 = (__int64)off_2BEAB98;
  sub_2217250(&qword_2CDAEE0, "dom-tree-reachability-max-bbs-to-explore", 40);
  qword_2CDAF08 = 54;
  dword_2CDAF58 = 32;
  byte_2CDAF6C = 1;
  dword_2CDAF68 = 32;
  BYTE2(qword_2CDAEE8) = BYTE2(qword_2CDAEE8) & 0x9F | 0x20;
  qword_2CDAF00 = (__int64)"Max number of BBs to explore for reachability analysis";
  sub_2218140(&qword_2CDAEE0);
  return __cxa_atexit(sub_1FED260, &qword_2CDAEE0, &off_2B25620);
}
