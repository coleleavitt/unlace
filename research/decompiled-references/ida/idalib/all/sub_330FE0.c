int sub_330FE0()
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

  v0 = j__strlen("Print the global id for each value when reading the module summary");
  qword_2CFC430 = 0;
  v1 = v0;
  qword_2CFC438 = 0;
  qword_2CFC440 = 0;
  qword_2CFC420 = (__int64)&off_2C758B0;
  qword_2CFC428 = (unsigned int)qword_2CFC428 & 0x80000000;
  qword_2CFC468 = 0x100000000LL;
  qword_2CFC448 = 0;
  qword_2CFC450 = 0;
  qword_2CFC458 = 0;
  qword_2CFC460 = (__int64)&unk_2CFC470;
  qword_2CFC478 = (__int64)&unk_2CFC490;
  qword_2CFC480 = 1;
  dword_2CFC488 = 0;
  byte_2CFC48C = 1;
  v2 = sub_2210FF0("Print the global id for each value when reading the module summary");
  v3 = (unsigned int)qword_2CFC468;
  v4 = (unsigned int)qword_2CFC468 + 1LL;
  if ( v4 > HIDWORD(qword_2CFC468) )
  {
    *(_QWORD *)&v12 = v2;
    sub_2237220((char *)&unk_2CFC470 - 16, &unk_2CFC470, v4, 8);
    v3 = (unsigned int)qword_2CFC468;
    v2 = v12;
  }
  *(_QWORD *)(qword_2CFC460 + 8 * v3) = v2;
  qword_2CFC4A0 = (__int64)off_2C714E8;
  word_2CFC4A8 = 0;
  qword_2CFC420 = (__int64)off_2C75848;
  xmmword_2CFC4C8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  v12 = xmmword_2CFC4C8;
  LODWORD(qword_2CFC468) = qword_2CFC468 + 1;
  qword_2CFC4B0 = (__int64)off_2BEAB08;
  byte_2CFC498 = 0;
  sub_2217250(&qword_2CFC420, "print-summary-global-ids", 24);
  word_2CFC4A8 = 256;
  qword_2CFC448 = v1;
  byte_2CFC498 = 0;
  BYTE2(qword_2CFC428) = BYTE2(qword_2CFC428) & 0x9F | 0x20;
  qword_2CFC440 = (__int64)"Print the global id for each value when reading the module summary";
  sub_2218140(&qword_2CFC420);
  __cxa_atexit(sub_200E190, &qword_2CFC420, &off_2B25620);
  v5 = j__strlen("Expand constant expressions to instructions for testing purposes");
  byte_2CFC3CC = 1;
  qword_2CFC370 = 0;
  v6 = v5;
  qword_2CFC360 = (__int64)&off_2C758B0;
  qword_2CFC368 = (unsigned int)qword_2CFC368 & 0x80000000;
  qword_2CFC3A8 = 0x100000000LL;
  qword_2CFC378 = 0;
  qword_2CFC380 = 0;
  qword_2CFC388 = 0;
  qword_2CFC390 = 0;
  qword_2CFC398 = 0;
  qword_2CFC3A0 = (__int64)&unk_2CFC3B0;
  qword_2CFC3B8 = (__int64)&unk_2CFC3D0;
  qword_2CFC3C0 = 1;
  dword_2CFC3C8 = 0;
  v7 = sub_2210FF0("Expand constant expressions to instructions for testing purposes");
  v8 = (unsigned int)qword_2CFC3A8;
  si128 = _mm_load_si128((const __m128i *)&v12);
  v10 = (unsigned int)qword_2CFC3A8 + 1LL;
  if ( v10 > HIDWORD(qword_2CFC3A8) )
  {
    *(_QWORD *)&v12 = v7;
    v13[0] = si128;
    sub_2237220((char *)&unk_2CFC3B0 - 16, &unk_2CFC3B0, v10, 8);
    v8 = (unsigned int)qword_2CFC3A8;
    si128 = _mm_load_si128(v13);
    v7 = v12;
  }
  *(_QWORD *)(qword_2CFC3A0 + 8 * v8) = v7;
  word_2CFC3E8 = 0;
  qword_2CFC3E0 = (__int64)off_2C714E8;
  qword_2CFC360 = (__int64)off_2C75848;
  qword_2CFC3F0 = (__int64)off_2BEAB08;
  xmmword_2CFC408 = (__int128)si128;
  LODWORD(qword_2CFC3A8) = qword_2CFC3A8 + 1;
  byte_2CFC3D8 = 0;
  sub_2217250(&qword_2CFC360, "expand-constant-exprs", 21);
  qword_2CFC388 = v6;
  BYTE2(qword_2CFC368) = BYTE2(qword_2CFC368) & 0x9F | 0x20;
  qword_2CFC380 = (__int64)"Expand constant expressions to instructions for testing purposes";
  sub_2218140(&qword_2CFC360);
  return __cxa_atexit(sub_200E190, &qword_2CFC360, &off_2B25620);
}
