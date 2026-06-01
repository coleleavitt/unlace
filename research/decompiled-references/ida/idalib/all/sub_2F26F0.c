int __fastcall sub_2F26F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-10h]

  qword_2CD9D70 = 0;
  qword_2CD9D78 = 0;
  qword_2CD9D80 = 0;
  qword_2CD9D60 = (__int64)&off_2C758B0;
  qword_2CD9D68 = (unsigned int)qword_2CD9D68 & 0x80000000;
  qword_2CD9DA8 = 0x100000000LL;
  qword_2CD9D88 = 0;
  qword_2CD9D90 = 0;
  qword_2CD9D98 = 0;
  qword_2CD9DA0 = (__int64)&unk_2CD9DB0;
  qword_2CD9DB8 = (__int64)&unk_2CD9DD0;
  qword_2CD9DC0 = 1;
  dword_2CD9DC8 = 0;
  byte_2CD9DCC = 1;
  v2 = sub_2210FF0(a1, a2);
  v3 = (unsigned int)qword_2CD9DA8;
  v4 = (unsigned int)qword_2CD9DA8 + 1LL;
  if ( v4 > HIDWORD(qword_2CD9DA8) )
  {
    v6 = v2;
    sub_2237220((char *)&unk_2CD9DB0 - 16, &unk_2CD9DB0, v4, 8);
    v3 = (unsigned int)qword_2CD9DA8;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CD9DA0 + 8 * v3) = v2;
  xmmword_2CD9E08 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  LODWORD(qword_2CD9DA8) = qword_2CD9DA8 + 1;
  qword_2CD9DE0 = (__int64)off_2C712D0;
  dword_2CD9DD8 = 0;
  byte_2CD9DEC = 0;
  qword_2CD9D60 = (__int64)off_2C75710;
  dword_2CD9DE8 = 0;
  qword_2CD9DF0 = (__int64)off_2BEAB98;
  sub_2217250(&qword_2CD9D60, "alias-set-saturation-threshold", 30);
  dword_2CD9DD8 = 250;
  byte_2CD9DEC = 1;
  dword_2CD9DE8 = 250;
  qword_2CD9D88 = 86;
  BYTE2(qword_2CD9D68) = BYTE2(qword_2CD9D68) & 0x9F | 0x20;
  qword_2CD9D80 = (__int64)"The maximum total number of memory locations alias sets may contain before degradation";
  sub_2218140(&qword_2CD9D60);
  return __cxa_atexit(sub_1FED260, &qword_2CD9D60, &off_2B25620);
}
