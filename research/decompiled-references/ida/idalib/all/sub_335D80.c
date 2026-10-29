int __fastcall sub_335D80(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CFE7B0 = 0;
  qword_2CFE7B8 = 0;
  qword_2CFE7C0 = 0;
  qword_2CFE7A0 = (__int64)&off_2C758B0;
  qword_2CFE7A8 = (unsigned int)qword_2CFE7A8 & 0x80000000;
  qword_2CFE7E8 = 0x100000000LL;
  qword_2CFE7C8 = 0;
  qword_2CFE7D0 = 0;
  qword_2CFE7D8 = 0;
  qword_2CFE7E0 = (__int64)&unk_2CFE7F0;
  qword_2CFE7F8 = (__int64)&unk_2CFE810;
  qword_2CFE800 = 1;
  dword_2CFE808 = 0;
  byte_2CFE80C = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2CFE7E8;
  v3 = (unsigned int)qword_2CFE7E8 + 1LL;
  if ( v3 > HIDWORD(qword_2CFE7E8) )
  {
    v5 = v1;
    sub_2237220((char *)&unk_2CFE7F0 - 16, &unk_2CFE7F0, v3, 8);
    v2 = (unsigned int)qword_2CFE7E8;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CFE7E0 + 8 * v2) = v1;
  word_2CFE828 = 0;
  LODWORD(qword_2CFE7E8) = qword_2CFE7E8 + 1;
  xmmword_2CFE848 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  qword_2CFE820 = (__int64)off_2C714E8;
  byte_2CFE818 = 0;
  qword_2CFE7A0 = (__int64)off_2C75848;
  qword_2CFE830 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2CFE7A0, "safepoint-ir-verifier-print-only", 32);
  byte_2CFE818 = 0;
  word_2CFE828 = 256;
  sub_2218140(&qword_2CFE7A0);
  return __cxa_atexit(sub_200E190, &qword_2CFE7A0, &off_2B25620);
}
