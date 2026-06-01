int __fastcall sub_2FA2D0(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  size_t v7; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  __m128i si128; // xmm0
  unsigned __int64 v12; // rdx
  __int128 v14; // [rsp+0h] [rbp-48h] BYREF
  __m128i v15[3]; // [rsp+10h] [rbp-38h] BYREF

  v2 = j__strlen("Use this to specify the default trip count of a loop");
  qword_2CB5FD0 = 0;
  v3 = v2;
  qword_2CB5FD8 = 0;
  qword_2CB5FE0 = 0;
  qword_2CB5FC0 = (__int64)&off_2C4B8B0;
  qword_2CB5FC8 = (unsigned int)qword_2CB5FC8 & 0x80000000;
  qword_2CB6008 = 0x100000000LL;
  qword_2CB5FE8 = 0;
  qword_2CB5FF0 = 0;
  qword_2CB5FF8 = 0;
  qword_2CB6000 = (__int64)&unk_2CB6010;
  qword_2CB6018 = (__int64)&unk_2CB6030;
  qword_2CB6020 = 1;
  dword_2CB6028 = 0;
  byte_2CB602C = 1;
  v4 = sub_21ED2B0("Use this to specify the default trip count of a loop", a2);
  v5 = (unsigned int)qword_2CB6008;
  v6 = (unsigned int)qword_2CB6008 + 1LL;
  if ( v6 > HIDWORD(qword_2CB6008) )
  {
    *(_QWORD *)&v14 = v4;
    sub_22134E0((char *)&unk_2CB6010 - 16, &unk_2CB6010, v6, 8);
    v5 = (unsigned int)qword_2CB6008;
    v4 = v14;
  }
  *(_QWORD *)(qword_2CB6000 + 8 * v5) = v4;
  qword_2CB6040 = (__int64)off_2C472D0;
  qword_2CB5FC0 = (__int64)off_2C4B710;
  xmmword_2CB6068 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  v14 = xmmword_2CB6068;
  LODWORD(qword_2CB6008) = qword_2CB6008 + 1;
  qword_2CB6050 = (__int64)off_2BC0BF8;
  dword_2CB6038 = 0;
  dword_2CB6048 = 0;
  byte_2CB604C = 0;
  sub_21F3510(&qword_2CB5FC0, "default-trip-count", 18);
  qword_2CB5FE8 = v3;
  dword_2CB6038 = 100;
  byte_2CB604C = 1;
  dword_2CB6048 = 100;
  BYTE2(qword_2CB5FC8) = BYTE2(qword_2CB5FC8) & 0x9F | 0x20;
  qword_2CB5FE0 = (__int64)"Use this to specify the default trip count of a loop";
  sub_21F4400(&qword_2CB5FC0);
  __cxa_atexit(sub_1FC9520, &qword_2CB5FC0, &off_2AFC540);
  v7 = j__strlen(
         "Use this to specify the max. distance between array elements accessed in a loop so that the elements are classi"
         "fied to have temporal reuse");
  byte_2CB5F6C = 1;
  qword_2CB5F10 = 0;
  v8 = v7;
  qword_2CB5F00 = (__int64)&off_2C4B8B0;
  qword_2CB5F08 = (unsigned int)qword_2CB5F08 & 0x80000000;
  qword_2CB5F48 = 0x100000000LL;
  qword_2CB5F18 = 0;
  qword_2CB5F20 = 0;
  qword_2CB5F28 = 0;
  qword_2CB5F30 = 0;
  qword_2CB5F38 = 0;
  qword_2CB5F40 = (__int64)&unk_2CB5F50;
  qword_2CB5F58 = (__int64)&unk_2CB5F70;
  qword_2CB5F60 = 1;
  dword_2CB5F68 = 0;
  v9 = sub_21ED2B0(
         "Use this to specify the max. distance between array elements accessed in a loop so that the elements are classi"
         "fied to have temporal reuse",
         &qword_2CB5FC0);
  v10 = (unsigned int)qword_2CB5F48;
  si128 = _mm_load_si128((const __m128i *)&v14);
  v12 = (unsigned int)qword_2CB5F48 + 1LL;
  if ( v12 > HIDWORD(qword_2CB5F48) )
  {
    *(_QWORD *)&v14 = v9;
    v15[0] = si128;
    sub_22134E0((char *)&unk_2CB5F50 - 16, &unk_2CB5F50, v12, 8);
    v10 = (unsigned int)qword_2CB5F48;
    si128 = _mm_load_si128(v15);
    v9 = v14;
  }
  *(_QWORD *)(qword_2CB5F40 + 8 * v10) = v9;
  qword_2CB5F80 = (__int64)off_2C472D0;
  qword_2CB5F00 = (__int64)off_2C4B710;
  qword_2CB5F90 = (__int64)off_2BC0BF8;
  xmmword_2CB5FA8 = (__int128)si128;
  LODWORD(qword_2CB5F48) = qword_2CB5F48 + 1;
  dword_2CB5F78 = 0;
  dword_2CB5F88 = 0;
  byte_2CB5F8C = 0;
  sub_21F3510(&qword_2CB5F00, "temporal-reuse-threshold", 24);
  qword_2CB5F28 = v8;
  dword_2CB5F78 = 2;
  byte_2CB5F8C = 1;
  dword_2CB5F88 = 2;
  BYTE2(qword_2CB5F08) = BYTE2(qword_2CB5F08) & 0x9F | 0x20;
  qword_2CB5F20 = (__int64)"Use this to specify the max. distance between array elements accessed in a loop so that the e"
                           "lements are classified to have temporal reuse";
  sub_21F4400(&qword_2CB5F00);
  return __cxa_atexit(sub_1FC9520, &qword_2CB5F00, &off_2AFC540);
}

