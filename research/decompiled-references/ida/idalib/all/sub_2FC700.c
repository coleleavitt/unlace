int __fastcall sub_2FC700(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-10h]

  qword_2CDF470 = 0;
  qword_2CDF478 = 0;
  qword_2CDF480 = 0;
  qword_2CDF460 = (__int64)&off_2C758B0;
  qword_2CDF468 = (unsigned int)qword_2CDF468 & 0x80000000;
  qword_2CDF4A8 = 0x100000000LL;
  qword_2CDF488 = 0;
  qword_2CDF490 = 0;
  qword_2CDF498 = 0;
  qword_2CDF4A0 = (__int64)&unk_2CDF4B0;
  qword_2CDF4B8 = (__int64)&unk_2CDF4D0;
  qword_2CDF4C0 = 1;
  dword_2CDF4C8 = 0;
  byte_2CDF4CC = 1;
  v2 = sub_2210FF0(a1, a2);
  v3 = (unsigned int)qword_2CDF4A8;
  v4 = (unsigned int)qword_2CDF4A8 + 1LL;
  if ( v4 > HIDWORD(qword_2CDF4A8) )
  {
    v6 = v2;
    sub_2237220((char *)&unk_2CDF4B0 - 16, &unk_2CDF4B0, v4, 8);
    v3 = (unsigned int)qword_2CDF4A8;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CDF4A0 + 8 * v3) = v2;
  word_2CDF4E8 = 0;
  xmmword_2CDF508 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2CDF4A8) = qword_2CDF4A8 + 1;
  qword_2CDF4E0 = (__int64)off_2C714E8;
  byte_2CDF4D8 = 0;
  qword_2CDF460 = (__int64)off_2C75848;
  qword_2CDF4F0 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2CDF460, "interactive-model-runner-echo-reply", 35);
  word_2CDF4E8 = 256;
  byte_2CDF4D8 = 0;
  qword_2CDF488 = 109;
  BYTE2(qword_2CDF468) = BYTE2(qword_2CDF468) & 0x9F | 0x20;
  qword_2CDF480 = (__int64)"The InteractiveModelRunner will echo back to stderr the data received from the host (for debu"
                           "gging purposes).";
  sub_2218140(&qword_2CDF460);
  return __cxa_atexit(sub_200E190, &qword_2CDF460, &off_2B25620);
}
