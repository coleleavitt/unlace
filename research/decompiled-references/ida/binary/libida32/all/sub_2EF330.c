int __fastcall sub_2EF330(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-10h]

  qword_2CAFE50 = 0;
  qword_2CAFE58 = 0;
  qword_2CAFE60 = 0;
  qword_2CAFE40 = (__int64)&off_2C4B8B0;
  qword_2CAFE48 = (unsigned int)qword_2CAFE48 & 0x80000000;
  qword_2CAFE88 = 0x100000000LL;
  qword_2CAFE68 = 0;
  qword_2CAFE70 = 0;
  qword_2CAFE78 = 0;
  qword_2CAFE80 = (__int64)&unk_2CAFE90;
  qword_2CAFE98 = (__int64)&unk_2CAFEB0;
  qword_2CAFEA0 = 1;
  dword_2CAFEA8 = 0;
  byte_2CAFEAC = 1;
  v2 = sub_21ED2B0(a1, a2);
  v3 = (unsigned int)qword_2CAFE88;
  v4 = (unsigned int)qword_2CAFE88 + 1LL;
  if ( v4 > HIDWORD(qword_2CAFE88) )
  {
    v6 = v2;
    sub_22134E0((char *)&unk_2CAFE90 - 16, &unk_2CAFE90, v4, 8);
    v3 = (unsigned int)qword_2CAFE88;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CAFE80 + 8 * v3) = v2;
  xmmword_2CAFEE8 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  LODWORD(qword_2CAFE88) = qword_2CAFE88 + 1;
  qword_2CAFEC0 = (__int64)off_2C472D0;
  dword_2CAFEB8 = 0;
  byte_2CAFECC = 0;
  qword_2CAFE40 = (__int64)off_2C4B710;
  dword_2CAFEC8 = 0;
  qword_2CAFED0 = (__int64)off_2BC0BF8;
  sub_21F3510(&qword_2CAFE40, "alias-set-saturation-threshold", 30);
  dword_2CAFEB8 = 250;
  byte_2CAFECC = 1;
  dword_2CAFEC8 = 250;
  qword_2CAFE68 = 86;
  BYTE2(qword_2CAFE48) = BYTE2(qword_2CAFE48) & 0x9F | 0x20;
  qword_2CAFE60 = (__int64)"The maximum total number of memory locations alias sets may contain before degradation";
  sub_21F4400(&qword_2CAFE40);
  return __cxa_atexit(sub_1FC9520, &qword_2CAFE40, &off_2AFC540);
}

