int __fastcall sub_347CA0(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CDF1B0 = 0;
  qword_2CDF1B8 = 0;
  qword_2CDF1C0 = 0;
  qword_2CDF1A0 = (__int64)&off_2C4B8B0;
  qword_2CDF1A8 = (unsigned int)qword_2CDF1A8 & 0x80000000;
  qword_2CDF1E8 = 0x100000000LL;
  qword_2CDF1C8 = 0;
  qword_2CDF1D0 = 0;
  qword_2CDF1D8 = 0;
  qword_2CDF1E0 = (__int64)&unk_2CDF1F0;
  qword_2CDF1F8 = (__int64)&unk_2CDF210;
  qword_2CDF200 = 1;
  dword_2CDF208 = 0;
  byte_2CDF20C = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CDF1E8;
  v3 = (unsigned int)qword_2CDF1E8 + 1LL;
  if ( v3 > HIDWORD(qword_2CDF1E8) )
  {
    v5 = v1;
    sub_22134E0((char *)&unk_2CDF1F0 - 16, &unk_2CDF1F0, v3, 8);
    v2 = (unsigned int)qword_2CDF1E8;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CDF1E0 + 8 * v2) = v1;
  word_2CDF228 = 0;
  xmmword_2CDF248 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CDF1E8) = qword_2CDF1E8 + 1;
  qword_2CDF220 = (__int64)off_2C474E8;
  byte_2CDF218 = 0;
  qword_2CDF1A0 = (__int64)off_2C4B848;
  qword_2CDF230 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CDF1A0, "sroa-skip-mem2reg", 17);
  word_2CDF228 = 256;
  byte_2CDF218 = 0;
  BYTE2(qword_2CDF1A8) = BYTE2(qword_2CDF1A8) & 0x9F | 0x20;
  sub_21F4400(&qword_2CDF1A0);
  return __cxa_atexit(sub_1FEA450, &qword_2CDF1A0, &off_2AFC540);
}

