int __fastcall sub_302130(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  size_t v7; // r13
  __int64 v8; // rax
  __int64 v9; // rcx
  __m128i si128; // xmm0
  size_t v11; // rax
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int128 v17; // [rsp+0h] [rbp-58h] BYREF
  __m128i v18[4]; // [rsp+10h] [rbp-48h] BYREF

  v2 = j__strlen("Specify the current profile is used as a partial profile.");
  qword_2CE17B0 = 0;
  v3 = v2;
  qword_2CE17B8 = 0;
  qword_2CE17C0 = 0;
  qword_2CE17A0 = (__int64)&off_2C758B0;
  qword_2CE17A8 = (unsigned int)qword_2CE17A8 & 0x80000000;
  qword_2CE17E8 = 0x100000000LL;
  qword_2CE17C8 = 0;
  qword_2CE17D0 = 0;
  qword_2CE17D8 = 0;
  qword_2CE17E0 = (__int64)&unk_2CE17F0;
  qword_2CE17F8 = (__int64)&unk_2CE1810;
  qword_2CE1800 = 1;
  dword_2CE1808 = 0;
  byte_2CE180C = 1;
  v4 = sub_2210FF0("Specify the current profile is used as a partial profile.", a2);
  v5 = (unsigned int)qword_2CE17E8;
  v6 = (unsigned int)qword_2CE17E8 + 1LL;
  if ( v6 > HIDWORD(qword_2CE17E8) )
  {
    *(_QWORD *)&v17 = v4;
    sub_2237220((char *)&unk_2CE17F0 - 16, &unk_2CE17F0, v6, 8);
    v5 = (unsigned int)qword_2CE17E8;
    v4 = v17;
  }
  *(_QWORD *)(qword_2CE17E0 + 8 * v5) = v4;
  qword_2CE1820 = (__int64)off_2C714E8;
  qword_2CE17A0 = (__int64)off_2C75848;
  word_2CE1828 = 0;
  xmmword_2CE1848 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  v17 = xmmword_2CE1848;
  LODWORD(qword_2CE17E8) = qword_2CE17E8 + 1;
  qword_2CE1830 = (__int64)off_2BEAB08;
  byte_2CE1818 = 0;
  sub_2217250(&qword_2CE17A0, "partial-profile", 15);
  word_2CE1828 = 256;
  qword_2CE17C8 = v3;
  byte_2CE1818 = 0;
  BYTE2(qword_2CE17A8) = BYTE2(qword_2CE17A8) & 0x9F | 0x20;
  qword_2CE17C0 = (__int64)"Specify the current profile is used as a partial profile.";
  sub_2218140(&qword_2CE17A0);
  __cxa_atexit(sub_200E190, &qword_2CE17A0, &off_2B25620);
  v7 = j__strlen(
         "If true, scale the working set size of the partial sample profile by the partial profile ratio to reflect the s"
         "ize of the program being compiled.");
  qword_2CE16E0 = &off_2C758B0;
  *(_QWORD *)&dword_2CE16E8 = dword_2CE16E8 & 0x80000000;
  qword_2CE1720[1] = 0x100000000LL;
  unk_2CE16F0 = 0;
  unk_2CE16F8 = 0;
  unk_2CE1700 = 0;
  unk_2CE1708 = 0;
  unk_2CE1710 = 0;
  unk_2CE1718 = 0;
  qword_2CE1720[0] = &qword_2CE1720[2];
  qword_2CE1720[3] = &qword_2CE1720[6];
  qword_2CE1720[4] = 1;
  LODWORD(qword_2CE1720[5]) = 0;
  BYTE4(qword_2CE1720[5]) = 1;
  v8 = sub_2210FF0(
         "If true, scale the working set size of the partial sample profile by the partial profile ratio to reflect the s"
         "ize of the program being compiled.",
         &qword_2CE17A0);
  v9 = LODWORD(qword_2CE1720[1]);
  si128 = _mm_load_si128((const __m128i *)&v17);
  if ( (unsigned __int64)LODWORD(qword_2CE1720[1]) + 1 > HIDWORD(qword_2CE1720[1]) )
  {
    *(_QWORD *)&v17 = v8;
    v18[0] = si128;
    sub_2237220(qword_2CE1720, &qword_2CE1720[2], LODWORD(qword_2CE1720[1]) + 1LL, 8);
    v9 = LODWORD(qword_2CE1720[1]);
    si128 = _mm_load_si128(v18);
    v8 = v17;
  }
  *(_QWORD *)(qword_2CE1720[0] + 8 * v9) = v8;
  LOWORD(qword_2CE1720[9]) = 0;
  qword_2CE1720[8] = off_2C714E8;
  qword_2CE16E0 = off_2C75848;
  ++LODWORD(qword_2CE1720[1]);
  LOBYTE(qword_2CE1720[7]) = 0;
  qword_2CE1720[10] = off_2BEAB08;
  *(__m128i *)&qword_2CE1720[13] = si128;
  sub_2217250(&qword_2CE16E0, "scale-partial-sample-profile-working-set-size", 45);
  LOBYTE(qword_2CE1720[7]) = 1;
  unk_2CE1708 = v7;
  LOWORD(qword_2CE1720[9]) = 257;
  BYTE2(dword_2CE16E8) = BYTE2(dword_2CE16E8) & 0x9F | 0x20;
  unk_2CE1700 = "If true, scale the working set size of the partial sample profile by the partial profile ratio to reflec"
                "t the size of the program being compiled.";
  sub_2218140(&qword_2CE16E0);
  __cxa_atexit(sub_200E190, &qword_2CE16E0, &off_2B25620);
  v11 = j__strlen(
          "The scale factor used to scale the working set size of the partial sample profile along with the partial profi"
          "le ratio. This includes the factor of the profile counter per block and the factor to scale the working set si"
          "ze to use the same shared thresholds as PGO.");
  qword_2CE1660 = (__int64)&unk_2CE1670;
  v12 = v11;
  qword_2CE1630 = 0;
  qword_2CE1620 = (__int64)&off_2C758B0;
  qword_2CE1628 = (unsigned int)qword_2CE1628 & 0x80000000;
  qword_2CE1668 = 0x100000000LL;
  qword_2CE1638 = 0;
  qword_2CE1640 = 0;
  qword_2CE1648 = 0;
  qword_2CE1650 = 0;
  qword_2CE1658 = 0;
  qword_2CE1678 = (__int64)&unk_2CE1690;
  qword_2CE1680 = 1;
  dword_2CE1688 = 0;
  byte_2CE168C = 1;
  v13 = sub_2210FF0(
          "The scale factor used to scale the working set size of the partial sample profile along with the partial profi"
          "le ratio. This includes the factor of the profile counter per block and the factor to scale the working set si"
          "ze to use the same shared thresholds as PGO.",
          &qword_2CE16E0);
  v14 = (unsigned int)qword_2CE1668;
  v15 = (unsigned int)qword_2CE1668 + 1LL;
  if ( v15 > HIDWORD(qword_2CE1668) )
  {
    *(_QWORD *)&v17 = v13;
    sub_2237220((char *)&unk_2CE1670 - 16, &unk_2CE1670, v15, 8);
    v14 = (unsigned int)qword_2CE1668;
    v13 = v17;
  }
  *(_QWORD *)(qword_2CE1660 + 8 * v14) = v13;
  xmmword_2CE16D0 = (__int128)_mm_loadh_ps((const double *)off_2C77C00);
  LODWORD(qword_2CE1668) = qword_2CE1668 + 1;
  qword_2CE16A0 = (__int64)off_2C716B8;
  qword_2CE1698 = 0;
  byte_2CE16B0 = 0;
  qword_2CE1620 = (__int64)off_2C716D8;
  qword_2CE16A8 = 0;
  qword_2CE16B8 = (__int64)off_2BEABF8;
  sub_2217250(&qword_2CE1620, "partial-sample-profile-working-set-size-scale-factor", 52);
  qword_2CE1648 = v12;
  qword_2CE1698 = 0x3F80624DD2F1A9FCLL;
  byte_2CE16B0 = 1;
  BYTE2(qword_2CE1628) = BYTE2(qword_2CE1628) & 0x9F | 0x20;
  qword_2CE16A8 = 0x3F80624DD2F1A9FCLL;
  qword_2CE1640 = (__int64)"The scale factor used to scale the working set size of the partial sample profile along with "
                           "the partial profile ratio. This includes the factor of the profile counter per block and the "
                           "factor to scale the working set size to use the same shared thresholds as PGO.";
  sub_2218140(&qword_2CE1620);
  return __cxa_atexit(sub_20102F0, &qword_2CE1620, &off_2B25620);
}
