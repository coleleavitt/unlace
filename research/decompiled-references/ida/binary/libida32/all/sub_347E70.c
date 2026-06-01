int sub_347E70()
{
  size_t v0; // rax
  __int64 v1; // r14
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __m128i si128; // xmm0
  unsigned __int64 v10; // rdx
  __int128 v12; // [rsp+0h] [rbp-48h] BYREF
  __m128i v13[3]; // [rsp+10h] [rbp-38h] BYREF

  v0 = j__strlen("Do not separate the constant offset from a GEP instruction");
  qword_2CDF330 = 0;
  v1 = v0;
  qword_2CDF338 = 0;
  qword_2CDF340 = 0;
  qword_2CDF320 = (__int64)&off_2C4B8B0;
  qword_2CDF328 = (unsigned int)qword_2CDF328 & 0x80000000;
  qword_2CDF368 = 0x100000000LL;
  qword_2CDF348 = 0;
  qword_2CDF350 = 0;
  qword_2CDF358 = 0;
  qword_2CDF360 = (__int64)&unk_2CDF370;
  qword_2CDF378 = (__int64)&unk_2CDF390;
  qword_2CDF380 = 1;
  dword_2CDF388 = 0;
  byte_2CDF38C = 1;
  v2 = sub_21ED2B0("Do not separate the constant offset from a GEP instruction");
  v3 = (unsigned int)qword_2CDF368;
  v4 = (unsigned int)qword_2CDF368 + 1LL;
  if ( v4 > HIDWORD(qword_2CDF368) )
  {
    *(_QWORD *)&v12 = v2;
    sub_22134E0((char *)&unk_2CDF370 - 16, &unk_2CDF370, v4, 8);
    v3 = (unsigned int)qword_2CDF368;
    v2 = v12;
  }
  *(_QWORD *)(qword_2CDF360 + 8 * v3) = v2;
  qword_2CDF3A0 = (__int64)off_2C474E8;
  qword_2CDF320 = (__int64)off_2C4B848;
  word_2CDF3A8 = 0;
  xmmword_2CDF3C8 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  v12 = xmmword_2CDF3C8;
  LODWORD(qword_2CDF368) = qword_2CDF368 + 1;
  qword_2CDF3B0 = (__int64)off_2BC0B68;
  byte_2CDF398 = 0;
  sub_21F3510(&qword_2CDF320, "disable-separate-const-offset-from-gep", 38);
  qword_2CDF340 = (__int64)"Do not separate the constant offset from a GEP instruction";
  word_2CDF3A8 = 256;
  qword_2CDF348 = v1;
  byte_2CDF398 = 0;
  BYTE2(qword_2CDF328) = BYTE2(qword_2CDF328) & 0x9F | 0x20;
  sub_21F4400(&qword_2CDF320);
  __cxa_atexit(sub_1FEA450, &qword_2CDF320, &off_2AFC540);
  v5 = j__strlen("Verify this pass produces no dead code");
  byte_2CDF2CC = 1;
  qword_2CDF270 = 0;
  v6 = v5;
  qword_2CDF260 = (__int64)&off_2C4B8B0;
  qword_2CDF268 = (unsigned int)qword_2CDF268 & 0x80000000;
  qword_2CDF2A8 = 0x100000000LL;
  qword_2CDF278 = 0;
  qword_2CDF280 = 0;
  qword_2CDF288 = 0;
  qword_2CDF290 = 0;
  qword_2CDF298 = 0;
  qword_2CDF2A0 = (__int64)&unk_2CDF2B0;
  qword_2CDF2B8 = (__int64)&unk_2CDF2D0;
  qword_2CDF2C0 = 1;
  dword_2CDF2C8 = 0;
  v7 = sub_21ED2B0("Verify this pass produces no dead code");
  v8 = (unsigned int)qword_2CDF2A8;
  si128 = _mm_load_si128((const __m128i *)&v12);
  v10 = (unsigned int)qword_2CDF2A8 + 1LL;
  if ( v10 > HIDWORD(qword_2CDF2A8) )
  {
    *(_QWORD *)&v12 = v7;
    v13[0] = si128;
    sub_22134E0((char *)&unk_2CDF2B0 - 16, &unk_2CDF2B0, v10, 8);
    v8 = (unsigned int)qword_2CDF2A8;
    si128 = _mm_load_si128(v13);
    v7 = v12;
  }
  *(_QWORD *)(qword_2CDF2A0 + 8 * v8) = v7;
  word_2CDF2E8 = 0;
  qword_2CDF2E0 = (__int64)off_2C474E8;
  qword_2CDF260 = (__int64)off_2C4B848;
  qword_2CDF2F0 = (__int64)off_2BC0B68;
  xmmword_2CDF308 = (__int128)si128;
  LODWORD(qword_2CDF2A8) = qword_2CDF2A8 + 1;
  byte_2CDF2D8 = 0;
  sub_21F3510(&qword_2CDF260, "reassociate-geps-verify-no-dead-code", 36);
  qword_2CDF280 = (__int64)"Verify this pass produces no dead code";
  word_2CDF2E8 = 256;
  qword_2CDF288 = v6;
  byte_2CDF2D8 = 0;
  BYTE2(qword_2CDF268) = BYTE2(qword_2CDF268) & 0x9F | 0x20;
  sub_21F4400(&qword_2CDF260);
  return __cxa_atexit(sub_1FEA450, &qword_2CDF260, &off_2AFC540);
}

