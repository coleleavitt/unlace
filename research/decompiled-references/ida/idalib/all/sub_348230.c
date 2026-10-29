int sub_348230()
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
  qword_2D07BB0 = 0;
  v1 = v0;
  qword_2D07BB8 = 0;
  qword_2D07BC0 = 0;
  qword_2D07BA0 = (__int64)&off_2C758B0;
  qword_2D07BA8 = (unsigned int)qword_2D07BA8 & 0x80000000;
  qword_2D07BE8 = 0x100000000LL;
  qword_2D07BC8 = 0;
  qword_2D07BD0 = 0;
  qword_2D07BD8 = 0;
  qword_2D07BE0 = (__int64)&unk_2D07BF0;
  qword_2D07BF8 = (__int64)&unk_2D07C10;
  qword_2D07C00 = 1;
  dword_2D07C08 = 0;
  byte_2D07C0C = 1;
  v2 = sub_2210FF0("Weight of the branch likely to be taken (default = 2000)");
  v3 = (unsigned int)qword_2D07BE8;
  v4 = (unsigned int)qword_2D07BE8 + 1LL;
  if ( v4 > HIDWORD(qword_2D07BE8) )
  {
    *(_QWORD *)&v12 = v2;
    sub_2237220((char *)&unk_2D07BF0 - 16, &unk_2D07BF0, v4, 8);
    v3 = (unsigned int)qword_2D07BE8;
    v2 = v12;
  }
  *(_QWORD *)(qword_2D07BE0 + 8 * v3) = v2;
  qword_2D07C20 = (__int64)off_2C712D0;
  qword_2D07BA0 = (__int64)off_2C75710;
  xmmword_2D07C48 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  v12 = xmmword_2D07C48;
  LODWORD(qword_2D07BE8) = qword_2D07BE8 + 1;
  qword_2D07C30 = (__int64)off_2BEAB98;
  dword_2D07C18 = 0;
  dword_2D07C28 = 0;
  byte_2D07C2C = 0;
  sub_2217250(&qword_2D07BA0, "likely-branch-weight", 20);
  qword_2D07BC8 = v1;
  dword_2D07C18 = 2000;
  byte_2D07C2C = 1;
  dword_2D07C28 = 2000;
  BYTE2(qword_2D07BA8) = BYTE2(qword_2D07BA8) & 0x9F | 0x20;
  qword_2D07BC0 = (__int64)"Weight of the branch likely to be taken (default = 2000)";
  sub_2218140(&qword_2D07BA0);
  __cxa_atexit(sub_1FED260, &qword_2D07BA0, &off_2B25620);
  v5 = j__strlen("Weight of the branch unlikely to be taken (default = 1)");
  byte_2D07B4C = 1;
  qword_2D07AF0 = 0;
  v6 = v5;
  qword_2D07AE0 = (__int64)&off_2C758B0;
  qword_2D07AE8 = (unsigned int)qword_2D07AE8 & 0x80000000;
  qword_2D07B28 = 0x100000000LL;
  qword_2D07AF8 = 0;
  qword_2D07B00 = 0;
  qword_2D07B08 = 0;
  qword_2D07B10 = 0;
  qword_2D07B18 = 0;
  qword_2D07B20 = (__int64)&unk_2D07B30;
  qword_2D07B38 = (__int64)&unk_2D07B50;
  qword_2D07B40 = 1;
  dword_2D07B48 = 0;
  v7 = sub_2210FF0("Weight of the branch unlikely to be taken (default = 1)");
  v8 = (unsigned int)qword_2D07B28;
  si128 = _mm_load_si128((const __m128i *)&v12);
  v10 = (unsigned int)qword_2D07B28 + 1LL;
  if ( v10 > HIDWORD(qword_2D07B28) )
  {
    *(_QWORD *)&v12 = v7;
    v13[0] = si128;
    sub_2237220((char *)&unk_2D07B30 - 16, &unk_2D07B30, v10, 8);
    v8 = (unsigned int)qword_2D07B28;
    si128 = _mm_load_si128(v13);
    v7 = v12;
  }
  *(_QWORD *)(qword_2D07B20 + 8 * v8) = v7;
  qword_2D07B60 = (__int64)off_2C712D0;
  qword_2D07AE0 = (__int64)off_2C75710;
  qword_2D07B70 = (__int64)off_2BEAB98;
  xmmword_2D07B88 = (__int128)si128;
  LODWORD(qword_2D07B28) = qword_2D07B28 + 1;
  dword_2D07B58 = 0;
  dword_2D07B68 = 0;
  byte_2D07B6C = 0;
  sub_2217250(&qword_2D07AE0, "unlikely-branch-weight", 22);
  qword_2D07B08 = v6;
  dword_2D07B58 = 1;
  byte_2D07B6C = 1;
  dword_2D07B68 = 1;
  BYTE2(qword_2D07AE8) = BYTE2(qword_2D07AE8) & 0x9F | 0x20;
  qword_2D07B00 = (__int64)"Weight of the branch unlikely to be taken (default = 1)";
  sub_2218140(&qword_2D07AE0);
  return __cxa_atexit(sub_1FED260, &qword_2D07AE0, &off_2B25620);
}
