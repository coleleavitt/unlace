int __fastcall sub_32D640(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CD2210 = 0;
  qword_2CD2218 = 0;
  qword_2CD2220 = 0;
  qword_2CD2200 = (__int64)&off_2C4B8B0;
  qword_2CD2208 = (unsigned int)qword_2CD2208 & 0x80000000;
  qword_2CD2248 = 0x100000000LL;
  qword_2CD2228 = 0;
  qword_2CD2230 = 0;
  qword_2CD2238 = 0;
  qword_2CD2240 = (__int64)&unk_2CD2250;
  qword_2CD2258 = (__int64)&unk_2CD2270;
  qword_2CD2260 = 1;
  dword_2CD2268 = 0;
  byte_2CD226C = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CD2248;
  v3 = (unsigned int)qword_2CD2248 + 1LL;
  if ( v3 > HIDWORD(qword_2CD2248) )
  {
    v5 = v1;
    sub_22134E0((char *)&unk_2CD2250 - 16, &unk_2CD2250, v3, 8);
    v2 = (unsigned int)qword_2CD2248;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CD2240 + 8 * v2) = v1;
  xmmword_2CD22A8 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  LODWORD(qword_2CD2248) = qword_2CD2248 + 1;
  qword_2CD2280 = (__int64)off_2C472D0;
  dword_2CD2278 = 0;
  byte_2CD228C = 0;
  qword_2CD2200 = (__int64)off_2C4B710;
  dword_2CD2288 = 0;
  qword_2CD2290 = (__int64)off_2BC0BF8;
  sub_21F3510(&qword_2CD2200, "dom-conditions-max-uses", 23);
  dword_2CD2278 = 20;
  byte_2CD228C = 1;
  dword_2CD2288 = 20;
  BYTE2(qword_2CD2208) = BYTE2(qword_2CD2208) & 0x9F | 0x20;
  sub_21F4400(&qword_2CD2200);
  return __cxa_atexit(sub_1FC9520, &qword_2CD2200, &off_2AFC540);
}

