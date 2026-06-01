int __fastcall sub_2F36C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __m128i si128; // xmm0
  unsigned __int64 v8; // rdx
  __int128 v10; // [rsp+0h] [rbp-48h] BYREF
  __m128i v11[3]; // [rsp+10h] [rbp-38h] BYREF

  qword_2CD9FB0 = 0;
  qword_2CD9FB8 = 0;
  qword_2CD9FC0 = 0;
  qword_2CD9FA0 = (__int64)&off_2C758B0;
  qword_2CD9FA8 = (unsigned int)qword_2CD9FA8 & 0x80000000;
  qword_2CD9FE8 = 0x100000000LL;
  qword_2CD9FC8 = 0;
  qword_2CD9FD0 = 0;
  qword_2CD9FD8 = 0;
  qword_2CD9FE0 = (__int64)&unk_2CD9FF0;
  qword_2CD9FF8 = (__int64)&unk_2CDA010;
  qword_2CDA000 = 1;
  dword_2CDA008 = 0;
  byte_2CDA00C = 1;
  v2 = sub_2210FF0(a1, a2);
  v3 = (unsigned int)qword_2CD9FE8;
  v4 = (unsigned int)qword_2CD9FE8 + 1LL;
  if ( v4 > HIDWORD(qword_2CD9FE8) )
  {
    *(_QWORD *)&v10 = v2;
    sub_2237220((char *)&unk_2CD9FF0 - 16, &unk_2CD9FF0, v4, 8);
    v3 = (unsigned int)qword_2CD9FE8;
    v2 = v10;
  }
  *(_QWORD *)(qword_2CD9FE0 + 8 * v3) = v2;
  qword_2CDA020 = (__int64)off_2C714E8;
  qword_2CD9FA0 = (__int64)off_2C75848;
  word_2CDA028 = 0;
  xmmword_2CDA048 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  v10 = xmmword_2CDA048;
  LODWORD(qword_2CD9FE8) = qword_2CD9FE8 + 1;
  qword_2CDA030 = (__int64)off_2BEAB08;
  byte_2CDA018 = 0;
  sub_2217250(&qword_2CD9FA0, "basic-aa-recphi", 15);
  word_2CDA028 = 257;
  byte_2CDA018 = 1;
  BYTE2(qword_2CD9FA8) = BYTE2(qword_2CD9FA8) & 0x9F | 0x20;
  sub_2218140(&qword_2CD9FA0);
  __cxa_atexit(sub_200E190, &qword_2CD9FA0, &off_2B25620);
  qword_2CD9EF0 = 0;
  qword_2CD9EE0 = (__int64)&off_2C758B0;
  qword_2CD9EE8 = (unsigned int)qword_2CD9EE8 & 0x80000000;
  qword_2CD9F28 = 0x100000000LL;
  qword_2CD9EF8 = 0;
  qword_2CD9F00 = 0;
  qword_2CD9F08 = 0;
  qword_2CD9F10 = 0;
  qword_2CD9F18 = 0;
  qword_2CD9F20 = (__int64)&unk_2CD9F30;
  qword_2CD9F38 = (__int64)&unk_2CD9F50;
  qword_2CD9F40 = 1;
  dword_2CD9F48 = 0;
  byte_2CD9F4C = 1;
  v5 = sub_2210FF0(sub_200E190, &qword_2CD9FA0);
  v6 = (unsigned int)qword_2CD9F28;
  si128 = _mm_load_si128((const __m128i *)&v10);
  v8 = (unsigned int)qword_2CD9F28 + 1LL;
  if ( v8 > HIDWORD(qword_2CD9F28) )
  {
    *(_QWORD *)&v10 = v5;
    v11[0] = si128;
    sub_2237220((char *)&unk_2CD9F30 - 16, &unk_2CD9F30, v8, 8);
    v6 = (unsigned int)qword_2CD9F28;
    si128 = _mm_load_si128(v11);
    v5 = v10;
  }
  *(_QWORD *)(qword_2CD9F20 + 8 * v6) = v5;
  word_2CD9F68 = 0;
  qword_2CD9F60 = (__int64)off_2C714E8;
  qword_2CD9EE0 = (__int64)off_2C75848;
  qword_2CD9F70 = (__int64)off_2BEAB08;
  xmmword_2CD9F88 = (__int128)si128;
  LODWORD(qword_2CD9F28) = qword_2CD9F28 + 1;
  byte_2CD9F58 = 0;
  sub_2217250(&qword_2CD9EE0, "basic-aa-separate-storage", 25);
  word_2CD9F68 = 257;
  byte_2CD9F58 = 1;
  BYTE2(qword_2CD9EE8) = BYTE2(qword_2CD9EE8) & 0x9F | 0x20;
  sub_2218140(&qword_2CD9EE0);
  return __cxa_atexit(sub_200E190, &qword_2CD9EE0, &off_2B25620);
}
