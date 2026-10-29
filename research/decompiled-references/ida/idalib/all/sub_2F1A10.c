int sub_2F1A10()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  unsigned __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __m128i v6; // xmm1
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __m128i v10; // xmm2
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __m128i v14; // xmm3
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __m128i v18; // xmm4
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __m128i v22; // xmm5
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __m128i v26; // xmm6
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __m128i v30; // xmm7
  __m128i v32; // [rsp+0h] [rbp-58h] BYREF
  __int64 v33; // [rsp+18h] [rbp-40h]
  _DWORD v34[11]; // [rsp+2Ch] [rbp-2Ch] BYREF

  qword_2CD9CB0 = 0;
  qword_2CD9CB8 = 0;
  qword_2CD9CC0 = 0;
  qword_2CD9CA0 = (__int64)&off_2C758B0;
  qword_2CD9CA8 = (unsigned int)qword_2CD9CA8 & 0x80000000;
  qword_2CD9CE8 = 0x100000000LL;
  qword_2CD9CC8 = 0;
  qword_2CD9CD0 = 0;
  qword_2CD9CD8 = 0;
  qword_2CD9CE0 = (__int64)&unk_2CD9CF0;
  qword_2CD9CF8 = (__int64)&unk_2CD9D10;
  qword_2CD9D00 = 1;
  dword_2CD9D08 = 0;
  byte_2CD9D0C = 1;
  v0 = ((__int64 (*)(void))sub_2210FF0)();
  v1 = (unsigned int)qword_2CD9CE8;
  v2 = (unsigned int)qword_2CD9CE8 + 1LL;
  if ( v2 > HIDWORD(qword_2CD9CE8) )
  {
    v32.m128i_i64[0] = v0;
    sub_2237220((char *)&unk_2CD9CF0 - 16, &unk_2CD9CF0, v2, 8);
    v1 = (unsigned int)qword_2CD9CE8;
    v0 = v32.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CD9CE0 + 8 * v1) = v0;
  qword_2CD9D20 = (__int64)off_2C714E8;
  qword_2CD9CA0 = (__int64)off_2C75848;
  v32 = (__m128i)_mm_loadh_ps((const double *)off_2C78368);
  word_2CD9D28 = 0;
  xmmword_2CD9D48 = (__int128)v32;
  qword_2CD9D30 = (__int64)off_2BEAB08;
  LODWORD(qword_2CD9CE8) = qword_2CD9CE8 + 1;
  byte_2CD9D18 = 0;
  sub_2217250(&qword_2CD9CA0, "print-all-alias-modref-info", 27);
  BYTE2(qword_2CD9CA8) = BYTE2(qword_2CD9CA8) & 0x9F | 0x40;
  sub_2218140(&qword_2CD9CA0);
  __cxa_atexit(sub_200E190, &qword_2CD9CA0, &off_2B25620);
  qword_2CD9BF0 = 0;
  qword_2CD9BE0 = (__int64)&off_2C758B0;
  qword_2CD9BE8 = (unsigned int)qword_2CD9BE8 & 0x80000000;
  qword_2CD9C28 = 0x100000000LL;
  qword_2CD9BF8 = 0;
  qword_2CD9C00 = 0;
  qword_2CD9C08 = 0;
  qword_2CD9C10 = 0;
  qword_2CD9C18 = 0;
  qword_2CD9C20 = (__int64)&unk_2CD9C30;
  qword_2CD9C38 = (__int64)&unk_2CD9C50;
  qword_2CD9C40 = 1;
  dword_2CD9C48 = 0;
  byte_2CD9C4C = 1;
  v3 = sub_2210FF0(sub_200E190, &qword_2CD9CA0);
  v4 = (unsigned int)qword_2CD9C28;
  v5 = (unsigned int)qword_2CD9C28 + 1LL;
  if ( v5 > HIDWORD(qword_2CD9C28) )
  {
    v33 = v3;
    sub_2237220((char *)&unk_2CD9C30 - 16, &unk_2CD9C30, v5, 8);
    v4 = (unsigned int)qword_2CD9C28;
    v3 = v33;
  }
  v6 = _mm_load_si128(&v32);
  *(_QWORD *)(qword_2CD9C20 + 8 * v4) = v3;
  qword_2CD9C60 = (__int64)off_2C714E8;
  qword_2CD9BE0 = (__int64)off_2C75848;
  word_2CD9C68 = 0;
  xmmword_2CD9C88 = (__int128)v6;
  qword_2CD9C70 = (__int64)off_2BEAB08;
  LODWORD(qword_2CD9C28) = qword_2CD9C28 + 1;
  byte_2CD9C58 = 0;
  sub_2217250(&qword_2CD9BE0, "print-no-aliases", 16);
  BYTE2(qword_2CD9BE8) = BYTE2(qword_2CD9BE8) & 0x9F | 0x40;
  sub_2218140(&qword_2CD9BE0);
  __cxa_atexit(sub_200E190, &qword_2CD9BE0, &off_2B25620);
  qword_2CD9B30 = 0;
  qword_2CD9B20 = (__int64)&off_2C758B0;
  qword_2CD9B28 = (unsigned int)qword_2CD9B28 & 0x80000000;
  qword_2CD9B68 = 0x100000000LL;
  qword_2CD9B38 = 0;
  qword_2CD9B40 = 0;
  qword_2CD9B48 = 0;
  qword_2CD9B50 = 0;
  qword_2CD9B58 = 0;
  qword_2CD9B60 = (__int64)&unk_2CD9B70;
  qword_2CD9B78 = (__int64)&unk_2CD9B90;
  qword_2CD9B80 = 1;
  dword_2CD9B88 = 0;
  byte_2CD9B8C = 1;
  v7 = sub_2210FF0(sub_200E190, &qword_2CD9BE0);
  v8 = (unsigned int)qword_2CD9B68;
  v9 = (unsigned int)qword_2CD9B68 + 1LL;
  if ( v9 > HIDWORD(qword_2CD9B68) )
  {
    v33 = v7;
    sub_2237220((char *)&unk_2CD9B70 - 16, &unk_2CD9B70, v9, 8);
    v8 = (unsigned int)qword_2CD9B68;
    v7 = v33;
  }
  v10 = _mm_load_si128(&v32);
  *(_QWORD *)(qword_2CD9B60 + 8 * v8) = v7;
  qword_2CD9BA0 = (__int64)off_2C714E8;
  qword_2CD9B20 = (__int64)off_2C75848;
  word_2CD9BA8 = 0;
  xmmword_2CD9BC8 = (__int128)v10;
  qword_2CD9BB0 = (__int64)off_2BEAB08;
  LODWORD(qword_2CD9B68) = qword_2CD9B68 + 1;
  byte_2CD9B98 = 0;
  sub_2217250(&qword_2CD9B20, "print-may-aliases", 17);
  BYTE2(qword_2CD9B28) = BYTE2(qword_2CD9B28) & 0x9F | 0x40;
  sub_2218140(&qword_2CD9B20);
  __cxa_atexit(sub_200E190, &qword_2CD9B20, &off_2B25620);
  qword_2CD9A70 = 0;
  qword_2CD9A60 = (__int64)&off_2C758B0;
  qword_2CD9A68 = (unsigned int)qword_2CD9A68 & 0x80000000;
  qword_2CD9AA8 = 0x100000000LL;
  qword_2CD9A78 = 0;
  qword_2CD9A80 = 0;
  qword_2CD9A88 = 0;
  qword_2CD9A90 = 0;
  qword_2CD9A98 = 0;
  qword_2CD9AA0 = (__int64)&unk_2CD9AB0;
  qword_2CD9AB8 = (__int64)&unk_2CD9AD0;
  qword_2CD9AC0 = 1;
  dword_2CD9AC8 = 0;
  byte_2CD9ACC = 1;
  v11 = sub_2210FF0(sub_200E190, &qword_2CD9B20);
  v12 = (unsigned int)qword_2CD9AA8;
  v13 = (unsigned int)qword_2CD9AA8 + 1LL;
  if ( v13 > HIDWORD(qword_2CD9AA8) )
  {
    v33 = v11;
    sub_2237220((char *)&unk_2CD9AB0 - 16, &unk_2CD9AB0, v13, 8);
    v12 = (unsigned int)qword_2CD9AA8;
    v11 = v33;
  }
  v14 = _mm_load_si128(&v32);
  *(_QWORD *)(qword_2CD9AA0 + 8 * v12) = v11;
  qword_2CD9AE0 = (__int64)off_2C714E8;
  word_2CD9AE8 = 0;
  qword_2CD9A60 = (__int64)off_2C75848;
  xmmword_2CD9B08 = (__int128)v14;
  qword_2CD9AF0 = (__int64)off_2BEAB08;
  LODWORD(qword_2CD9AA8) = qword_2CD9AA8 + 1;
  byte_2CD9AD8 = 0;
  sub_2217250(&qword_2CD9A60, "print-partial-aliases", 21);
  BYTE2(qword_2CD9A68) = BYTE2(qword_2CD9A68) & 0x9F | 0x40;
  sub_2218140(&qword_2CD9A60);
  __cxa_atexit(sub_200E190, &qword_2CD9A60, &off_2B25620);
  qword_2CD99B0 = 0;
  qword_2CD99A0 = (__int64)&off_2C758B0;
  qword_2CD99A8 = (unsigned int)qword_2CD99A8 & 0x80000000;
  qword_2CD99E8 = 0x100000000LL;
  qword_2CD99B8 = 0;
  qword_2CD99C0 = 0;
  qword_2CD99C8 = 0;
  qword_2CD99D0 = 0;
  qword_2CD99D8 = 0;
  qword_2CD99E0 = (__int64)&unk_2CD99F0;
  qword_2CD99F8 = (__int64)&unk_2CD9A10;
  qword_2CD9A00 = 1;
  dword_2CD9A08 = 0;
  byte_2CD9A0C = 1;
  v15 = sub_2210FF0(sub_200E190, &qword_2CD9A60);
  v16 = (unsigned int)qword_2CD99E8;
  v17 = (unsigned int)qword_2CD99E8 + 1LL;
  if ( v17 > HIDWORD(qword_2CD99E8) )
  {
    v33 = v15;
    sub_2237220((char *)&unk_2CD99F0 - 16, &unk_2CD99F0, v17, 8);
    v16 = (unsigned int)qword_2CD99E8;
    v15 = v33;
  }
  v18 = _mm_load_si128(&v32);
  *(_QWORD *)(qword_2CD99E0 + 8 * v16) = v15;
  qword_2CD9A20 = (__int64)off_2C714E8;
  word_2CD9A28 = 0;
  qword_2CD99A0 = (__int64)off_2C75848;
  xmmword_2CD9A48 = (__int128)v18;
  qword_2CD9A30 = (__int64)off_2BEAB08;
  LODWORD(qword_2CD99E8) = qword_2CD99E8 + 1;
  byte_2CD9A18 = 0;
  sub_2217250(&qword_2CD99A0, "print-must-aliases", 18);
  BYTE2(qword_2CD99A8) = BYTE2(qword_2CD99A8) & 0x9F | 0x40;
  sub_2218140(&qword_2CD99A0);
  __cxa_atexit(sub_200E190, &qword_2CD99A0, &off_2B25620);
  qword_2CD98F0 = 0;
  qword_2CD98E0 = (__int64)&off_2C758B0;
  qword_2CD98E8 = (unsigned int)qword_2CD98E8 & 0x80000000;
  qword_2CD9928 = 0x100000000LL;
  qword_2CD98F8 = 0;
  qword_2CD9900 = 0;
  qword_2CD9908 = 0;
  qword_2CD9910 = 0;
  qword_2CD9918 = 0;
  qword_2CD9920 = (__int64)&unk_2CD9930;
  qword_2CD9938 = (__int64)&unk_2CD9950;
  qword_2CD9940 = 1;
  dword_2CD9948 = 0;
  byte_2CD994C = 1;
  v19 = sub_2210FF0(sub_200E190, &qword_2CD99A0);
  v20 = (unsigned int)qword_2CD9928;
  v21 = (unsigned int)qword_2CD9928 + 1LL;
  if ( v21 > HIDWORD(qword_2CD9928) )
  {
    v33 = v19;
    sub_2237220((char *)&unk_2CD9930 - 16, &unk_2CD9930, v21, 8);
    v20 = (unsigned int)qword_2CD9928;
    v19 = v33;
  }
  v22 = _mm_load_si128(&v32);
  *(_QWORD *)(qword_2CD9920 + 8 * v20) = v19;
  qword_2CD9960 = (__int64)off_2C714E8;
  qword_2CD98E0 = (__int64)off_2C75848;
  word_2CD9968 = 0;
  xmmword_2CD9988 = (__int128)v22;
  qword_2CD9970 = (__int64)off_2BEAB08;
  LODWORD(qword_2CD9928) = qword_2CD9928 + 1;
  byte_2CD9958 = 0;
  sub_2217250(&qword_2CD98E0, "print-no-modref", 15);
  BYTE2(qword_2CD98E8) = BYTE2(qword_2CD98E8) & 0x9F | 0x40;
  sub_2218140(&qword_2CD98E0);
  __cxa_atexit(sub_200E190, &qword_2CD98E0, &off_2B25620);
  v34[0] = 2;
  sub_200E440(&unk_2CD9820, "print-ref", v34);
  __cxa_atexit(sub_200E190, &unk_2CD9820, &off_2B25620);
  v34[0] = 2;
  sub_200E440(&unk_2CD9760, "print-mod", v34);
  __cxa_atexit(sub_200E190, &unk_2CD9760, &off_2B25620);
  qword_2CD96B0 = 0;
  qword_2CD96A0 = (__int64)&off_2C758B0;
  qword_2CD96A8 = (unsigned int)qword_2CD96A8 & 0x80000000;
  qword_2CD96E8 = 0x100000000LL;
  qword_2CD96B8 = 0;
  qword_2CD96C0 = 0;
  qword_2CD96C8 = 0;
  qword_2CD96D0 = 0;
  qword_2CD96D8 = 0;
  qword_2CD96E0 = (__int64)&unk_2CD96F0;
  qword_2CD96F8 = (__int64)&unk_2CD9710;
  qword_2CD9700 = 1;
  dword_2CD9708 = 0;
  byte_2CD970C = 1;
  v23 = sub_2210FF0(sub_200E190, &unk_2CD9760);
  v24 = (unsigned int)qword_2CD96E8;
  v25 = (unsigned int)qword_2CD96E8 + 1LL;
  if ( v25 > HIDWORD(qword_2CD96E8) )
  {
    v33 = v23;
    sub_2237220((char *)&unk_2CD96F0 - 16, &unk_2CD96F0, v25, 8);
    v24 = (unsigned int)qword_2CD96E8;
    v23 = v33;
  }
  v26 = _mm_load_si128(&v32);
  *(_QWORD *)(qword_2CD96E0 + 8 * v24) = v23;
  qword_2CD9720 = (__int64)off_2C714E8;
  word_2CD9728 = 0;
  qword_2CD96A0 = (__int64)off_2C75848;
  xmmword_2CD9748 = (__int128)v26;
  qword_2CD9730 = (__int64)off_2BEAB08;
  LODWORD(qword_2CD96E8) = qword_2CD96E8 + 1;
  byte_2CD9718 = 0;
  sub_2217250(&qword_2CD96A0, "print-modref", 12);
  BYTE2(qword_2CD96A8) = BYTE2(qword_2CD96A8) & 0x9F | 0x40;
  sub_2218140(&qword_2CD96A0);
  __cxa_atexit(sub_200E190, &qword_2CD96A0, &off_2B25620);
  qword_2CD95F0 = 0;
  qword_2CD95E0 = (__int64)&off_2C758B0;
  qword_2CD95E8 = (unsigned int)qword_2CD95E8 & 0x80000000;
  qword_2CD9628 = 0x100000000LL;
  qword_2CD95F8 = 0;
  qword_2CD9600 = 0;
  qword_2CD9608 = 0;
  qword_2CD9610 = 0;
  qword_2CD9618 = 0;
  qword_2CD9620 = (__int64)&unk_2CD9630;
  qword_2CD9638 = (__int64)&unk_2CD9650;
  qword_2CD9640 = 1;
  dword_2CD9648 = 0;
  byte_2CD964C = 1;
  v27 = sub_2210FF0(sub_200E190, &qword_2CD96A0);
  v28 = (unsigned int)qword_2CD9628;
  v29 = (unsigned int)qword_2CD9628 + 1LL;
  if ( v29 > HIDWORD(qword_2CD9628) )
  {
    v33 = v27;
    sub_2237220((char *)&unk_2CD9630 - 16, &unk_2CD9630, v29, 8);
    v28 = (unsigned int)qword_2CD9628;
    v27 = v33;
  }
  v30 = _mm_load_si128(&v32);
  *(_QWORD *)(qword_2CD9620 + 8 * v28) = v27;
  word_2CD9668 = 0;
  qword_2CD9660 = (__int64)off_2C714E8;
  qword_2CD95E0 = (__int64)off_2C75848;
  xmmword_2CD9688 = (__int128)v30;
  qword_2CD9670 = (__int64)off_2BEAB08;
  LODWORD(qword_2CD9628) = qword_2CD9628 + 1;
  byte_2CD9658 = 0;
  sub_2217250(&qword_2CD95E0, "evaluate-aa-metadata", 20);
  BYTE2(qword_2CD95E8) = BYTE2(qword_2CD95E8) & 0x9F | 0x40;
  sub_2218140(&qword_2CD95E0);
  return __cxa_atexit(sub_200E190, &qword_2CD95E0, &off_2B25620);
}
