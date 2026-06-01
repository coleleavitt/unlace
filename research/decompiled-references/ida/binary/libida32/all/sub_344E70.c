int sub_344E70()
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

  v0 = j__strlen("Weight of the branch likely to be taken (default = 2000)");
  qword_2CDDC90 = 0;
  v1 = v0;
  qword_2CDDC98 = 0;
  qword_2CDDCA0 = 0;
  qword_2CDDC80 = (__int64)&off_2C4B8B0;
  qword_2CDDC88 = (unsigned int)qword_2CDDC88 & 0x80000000;
  qword_2CDDCC8 = 0x100000000LL;
  qword_2CDDCA8 = 0;
  qword_2CDDCB0 = 0;
  qword_2CDDCB8 = 0;
  qword_2CDDCC0 = (__int64)&unk_2CDDCD0;
  qword_2CDDCD8 = (__int64)&unk_2CDDCF0;
  qword_2CDDCE0 = 1;
  dword_2CDDCE8 = 0;
  byte_2CDDCEC = 1;
  v2 = sub_21ED2B0("Weight of the branch likely to be taken (default = 2000)");
  v3 = (unsigned int)qword_2CDDCC8;
  v4 = (unsigned int)qword_2CDDCC8 + 1LL;
  if ( v4 > HIDWORD(qword_2CDDCC8) )
  {
    *(_QWORD *)&v12 = v2;
    sub_22134E0((char *)&unk_2CDDCD0 - 16, &unk_2CDDCD0, v4, 8);
    v3 = (unsigned int)qword_2CDDCC8;
    v2 = v12;
  }
  *(_QWORD *)(qword_2CDDCC0 + 8 * v3) = v2;
  qword_2CDDD00 = (__int64)off_2C472D0;
  qword_2CDDC80 = (__int64)off_2C4B710;
  xmmword_2CDDD28 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  v12 = xmmword_2CDDD28;
  LODWORD(qword_2CDDCC8) = qword_2CDDCC8 + 1;
  qword_2CDDD10 = (__int64)off_2BC0BF8;
  dword_2CDDCF8 = 0;
  dword_2CDDD08 = 0;
  byte_2CDDD0C = 0;
  sub_21F3510(&qword_2CDDC80, "likely-branch-weight", 20);
  qword_2CDDCA8 = v1;
  dword_2CDDCF8 = 2000;
  byte_2CDDD0C = 1;
  dword_2CDDD08 = 2000;
  BYTE2(qword_2CDDC88) = BYTE2(qword_2CDDC88) & 0x9F | 0x20;
  qword_2CDDCA0 = (__int64)"Weight of the branch likely to be taken (default = 2000)";
  sub_21F4400(&qword_2CDDC80);
  __cxa_atexit(sub_1FC9520, &qword_2CDDC80, &off_2AFC540);
  v5 = j__strlen("Weight of the branch unlikely to be taken (default = 1)");
  byte_2CDDC2C = 1;
  qword_2CDDBD0 = 0;
  v6 = v5;
  qword_2CDDBC0 = (__int64)&off_2C4B8B0;
  qword_2CDDBC8 = (unsigned int)qword_2CDDBC8 & 0x80000000;
  qword_2CDDC08 = 0x100000000LL;
  qword_2CDDBD8 = 0;
  qword_2CDDBE0 = 0;
  qword_2CDDBE8 = 0;
  qword_2CDDBF0 = 0;
  qword_2CDDBF8 = 0;
  qword_2CDDC00 = (__int64)&unk_2CDDC10;
  qword_2CDDC18 = (__int64)&unk_2CDDC30;
  qword_2CDDC20 = 1;
  dword_2CDDC28 = 0;
  v7 = sub_21ED2B0("Weight of the branch unlikely to be taken (default = 1)");
  v8 = (unsigned int)qword_2CDDC08;
  si128 = _mm_load_si128((const __m128i *)&v12);
  v10 = (unsigned int)qword_2CDDC08 + 1LL;
  if ( v10 > HIDWORD(qword_2CDDC08) )
  {
    *(_QWORD *)&v12 = v7;
    v13[0] = si128;
    sub_22134E0((char *)&unk_2CDDC10 - 16, &unk_2CDDC10, v10, 8);
    v8 = (unsigned int)qword_2CDDC08;
    si128 = _mm_load_si128(v13);
    v7 = v12;
  }
  *(_QWORD *)(qword_2CDDC00 + 8 * v8) = v7;
  qword_2CDDC40 = (__int64)off_2C472D0;
  qword_2CDDBC0 = (__int64)off_2C4B710;
  qword_2CDDC50 = (__int64)off_2BC0BF8;
  xmmword_2CDDC68 = (__int128)si128;
  LODWORD(qword_2CDDC08) = qword_2CDDC08 + 1;
  dword_2CDDC38 = 0;
  dword_2CDDC48 = 0;
  byte_2CDDC4C = 0;
  sub_21F3510(&qword_2CDDBC0, "unlikely-branch-weight", 22);
  qword_2CDDBE8 = v6;
  dword_2CDDC38 = 1;
  byte_2CDDC4C = 1;
  dword_2CDDC48 = 1;
  BYTE2(qword_2CDDBC8) = BYTE2(qword_2CDDBC8) & 0x9F | 0x20;
  qword_2CDDBE0 = (__int64)"Weight of the branch unlikely to be taken (default = 1)";
  sub_21F4400(&qword_2CDDBC0);
  return __cxa_atexit(sub_1FC9520, &qword_2CDDBC0, &off_2AFC540);
}

