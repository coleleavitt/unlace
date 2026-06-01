int sub_33E610()
{
  size_t v0; // rax
  __int64 v1; // r13
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  __m128i si128; // xmm0
  unsigned __int64 v10; // rdx
  __int128 v12; // [rsp+0h] [rbp-48h] BYREF
  __m128i v13[3]; // [rsp+10h] [rbp-38h] BYREF

  v0 = j__strlen("Do not sink instructions that require cloning unless they execute less than this percent of the time.");
  qword_2CD9DB0 = 0;
  v1 = v0;
  qword_2CD9DB8 = 0;
  qword_2CD9DC0 = 0;
  qword_2CD9DA0 = (__int64)&off_2C4B8B0;
  qword_2CD9DA8 = (unsigned int)qword_2CD9DA8 & 0x80000000;
  qword_2CD9DE8 = 0x100000000LL;
  qword_2CD9DC8 = 0;
  qword_2CD9DD0 = 0;
  qword_2CD9DD8 = 0;
  qword_2CD9DE0 = (__int64)&unk_2CD9DF0;
  qword_2CD9DF8 = (__int64)&unk_2CD9E10;
  qword_2CD9E00 = 1;
  dword_2CD9E08 = 0;
  byte_2CD9E0C = 1;
  v2 = sub_21ED2B0("Do not sink instructions that require cloning unless they execute less than this percent of the time.");
  v3 = (unsigned int)qword_2CD9DE8;
  v4 = (unsigned int)qword_2CD9DE8 + 1LL;
  if ( v4 > HIDWORD(qword_2CD9DE8) )
  {
    *(_QWORD *)&v12 = v2;
    sub_22134E0((char *)&unk_2CD9DF0 - 16, &unk_2CD9DF0, v4, 8);
    v3 = (unsigned int)qword_2CD9DE8;
    v2 = v12;
  }
  *(_QWORD *)(qword_2CD9DE0 + 8 * v3) = v2;
  qword_2CD9E20 = (__int64)off_2C472D0;
  qword_2CD9DA0 = (__int64)off_2C4B710;
  xmmword_2CD9E48 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  v12 = xmmword_2CD9E48;
  LODWORD(qword_2CD9DE8) = qword_2CD9DE8 + 1;
  qword_2CD9E30 = (__int64)off_2BC0BF8;
  dword_2CD9E18 = 0;
  dword_2CD9E28 = 0;
  byte_2CD9E2C = 0;
  sub_21F3510(&qword_2CD9DA0, "sink-freq-percent-threshold", 27);
  qword_2CD9DC8 = v1;
  dword_2CD9E18 = 90;
  byte_2CD9E2C = 1;
  dword_2CD9E28 = 90;
  BYTE2(qword_2CD9DA8) = BYTE2(qword_2CD9DA8) & 0x9F | 0x20;
  qword_2CD9DC0 = (__int64)"Do not sink instructions that require cloning unless they execute less than this percent of the time.";
  sub_21F4400(&qword_2CD9DA0);
  __cxa_atexit(sub_1FC9520, &qword_2CD9DA0, &off_2AFC540);
  v5 = j__strlen("Do not sink instructions that have too many uses.");
  byte_2CD9D4C = 1;
  qword_2CD9CF0 = 0;
  v6 = v5;
  qword_2CD9CE0 = (__int64)&off_2C4B8B0;
  qword_2CD9CE8 = (unsigned int)qword_2CD9CE8 & 0x80000000;
  qword_2CD9D28 = 0x100000000LL;
  qword_2CD9CF8 = 0;
  qword_2CD9D00 = 0;
  qword_2CD9D08 = 0;
  qword_2CD9D10 = 0;
  qword_2CD9D18 = 0;
  qword_2CD9D20 = (__int64)&unk_2CD9D30;
  qword_2CD9D38 = (__int64)&unk_2CD9D50;
  qword_2CD9D40 = 1;
  dword_2CD9D48 = 0;
  v7 = sub_21ED2B0("Do not sink instructions that have too many uses.");
  v8 = (unsigned int)qword_2CD9D28;
  si128 = _mm_load_si128((const __m128i *)&v12);
  v10 = (unsigned int)qword_2CD9D28 + 1LL;
  if ( v10 > HIDWORD(qword_2CD9D28) )
  {
    *(_QWORD *)&v12 = v7;
    v13[0] = si128;
    sub_22134E0((char *)&unk_2CD9D30 - 16, &unk_2CD9D30, v10, 8);
    v8 = (unsigned int)qword_2CD9D28;
    si128 = _mm_load_si128(v13);
    v7 = v12;
  }
  *(_QWORD *)(qword_2CD9D20 + 8 * v8) = v7;
  qword_2CD9D60 = (__int64)off_2C472D0;
  qword_2CD9CE0 = (__int64)off_2C4B710;
  qword_2CD9D70 = (__int64)off_2BC0BF8;
  xmmword_2CD9D88 = (__int128)si128;
  LODWORD(qword_2CD9D28) = qword_2CD9D28 + 1;
  dword_2CD9D58 = 0;
  dword_2CD9D68 = 0;
  byte_2CD9D6C = 0;
  sub_21F3510(&qword_2CD9CE0, "max-uses-for-sinking", 20);
  qword_2CD9D08 = v6;
  dword_2CD9D58 = 30;
  byte_2CD9D6C = 1;
  dword_2CD9D68 = 30;
  BYTE2(qword_2CD9CE8) = BYTE2(qword_2CD9CE8) & 0x9F | 0x20;
  qword_2CD9D00 = (__int64)"Do not sink instructions that have too many uses.";
  sub_21F4400(&qword_2CD9CE0);
  return __cxa_atexit(sub_1FC9520, &qword_2CD9CE0, &off_2AFC540);
}

