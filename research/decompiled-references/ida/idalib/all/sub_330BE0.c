int __fastcall sub_330BE0(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CFC1F0 = 0;
  qword_2CFC1F8 = 0;
  qword_2CFC200 = 0;
  qword_2CFC1E0 = (__int64)&off_2C758B0;
  qword_2CFC1E8 = (unsigned int)qword_2CFC1E8 & 0x80000000;
  qword_2CFC228 = 0x100000000LL;
  qword_2CFC208 = 0;
  qword_2CFC210 = 0;
  qword_2CFC218 = 0;
  qword_2CFC220 = (__int64)&unk_2CFC230;
  qword_2CFC238 = (__int64)&unk_2CFC250;
  qword_2CFC240 = 1;
  dword_2CFC248 = 0;
  byte_2CFC24C = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2CFC228;
  v3 = (unsigned int)qword_2CFC228 + 1LL;
  if ( v3 > HIDWORD(qword_2CFC228) )
  {
    v5 = v1;
    sub_2237220((char *)&unk_2CFC230 - 16, &unk_2CFC230, v3, 8);
    v2 = (unsigned int)qword_2CFC228;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CFC220 + 8 * v2) = v1;
  xmmword_2CFC288 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  LODWORD(qword_2CFC228) = qword_2CFC228 + 1;
  qword_2CFC260 = (__int64)off_2C712D0;
  dword_2CFC258 = 0;
  byte_2CFC26C = 0;
  qword_2CFC1E0 = (__int64)off_2C75710;
  dword_2CFC268 = 0;
  qword_2CFC270 = (__int64)off_2BEAB98;
  sub_2217250(&qword_2CFC1E0, "max-interleave-group-factor", 27);
  qword_2CFC208 = 60;
  dword_2CFC258 = 8;
  byte_2CFC26C = 1;
  dword_2CFC268 = 8;
  BYTE2(qword_2CFC1E8) = BYTE2(qword_2CFC1E8) & 0x9F | 0x20;
  qword_2CFC200 = (__int64)"Maximum factor for an interleaved access group (default = 8)";
  sub_2218140(&qword_2CFC1E0);
  return __cxa_atexit(sub_1FED260, &qword_2CFC1E0, &off_2B25620);
}
