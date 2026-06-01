int __fastcall sub_2FED70(__int64 a1, __int64 a2)
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
  qword_2CB7890 = 0;
  v3 = v2;
  qword_2CB7898 = 0;
  qword_2CB78A0 = 0;
  qword_2CB7880 = (__int64)&off_2C4B8B0;
  qword_2CB7888 = (unsigned int)qword_2CB7888 & 0x80000000;
  qword_2CB78C8 = 0x100000000LL;
  qword_2CB78A8 = 0;
  qword_2CB78B0 = 0;
  qword_2CB78B8 = 0;
  qword_2CB78C0 = (__int64)&unk_2CB78D0;
  qword_2CB78D8 = (__int64)&unk_2CB78F0;
  qword_2CB78E0 = 1;
  dword_2CB78E8 = 0;
  byte_2CB78EC = 1;
  v4 = sub_21ED2B0("Specify the current profile is used as a partial profile.", a2);
  v5 = (unsigned int)qword_2CB78C8;
  v6 = (unsigned int)qword_2CB78C8 + 1LL;
  if ( v6 > HIDWORD(qword_2CB78C8) )
  {
    *(_QWORD *)&v17 = v4;
    sub_22134E0((char *)&unk_2CB78D0 - 16, &unk_2CB78D0, v6, 8);
    v5 = (unsigned int)qword_2CB78C8;
    v4 = v17;
  }
  *(_QWORD *)(qword_2CB78C0 + 8 * v5) = v4;
  qword_2CB7900 = (__int64)off_2C474E8;
  qword_2CB7880 = (__int64)off_2C4B848;
  word_2CB7908 = 0;
  xmmword_2CB7928 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  v17 = xmmword_2CB7928;
  LODWORD(qword_2CB78C8) = qword_2CB78C8 + 1;
  qword_2CB7910 = (__int64)off_2BC0B68;
  byte_2CB78F8 = 0;
  sub_21F3510(&qword_2CB7880, "partial-profile", 15);
  word_2CB7908 = 256;
  qword_2CB78A8 = v3;
  byte_2CB78F8 = 0;
  BYTE2(qword_2CB7888) = BYTE2(qword_2CB7888) & 0x9F | 0x20;
  qword_2CB78A0 = (__int64)"Specify the current profile is used as a partial profile.";
  sub_21F4400(&qword_2CB7880);
  __cxa_atexit(sub_1FEA450, &qword_2CB7880, &off_2AFC540);
  v7 = j__strlen(
         "If true, scale the working set size of the partial sample profile by the partial profile ratio to reflect the s"
         "ize of the program being compiled.");
  qword_2CB77C0 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CB77C8 = dword_2CB77C8 & 0x80000000;
  qword_2CB7800[1] = 0x100000000LL;
  unk_2CB77D0 = 0;
  unk_2CB77D8 = 0;
  unk_2CB77E0 = 0;
  unk_2CB77E8 = 0;
  unk_2CB77F0 = 0;
  unk_2CB77F8 = 0;
  qword_2CB7800[0] = &qword_2CB7800[2];
  qword_2CB7800[3] = &qword_2CB7800[6];
  qword_2CB7800[4] = 1;
  LODWORD(qword_2CB7800[5]) = 0;
  BYTE4(qword_2CB7800[5]) = 1;
  v8 = sub_21ED2B0(
         "If true, scale the working set size of the partial sample profile by the partial profile ratio to reflect the s"
         "ize of the program being compiled.",
         &qword_2CB7880);
  v9 = LODWORD(qword_2CB7800[1]);
  si128 = _mm_load_si128((const __m128i *)&v17);
  if ( (unsigned __int64)LODWORD(qword_2CB7800[1]) + 1 > HIDWORD(qword_2CB7800[1]) )
  {
    *(_QWORD *)&v17 = v8;
    v18[0] = si128;
    sub_22134E0(qword_2CB7800, &qword_2CB7800[2], LODWORD(qword_2CB7800[1]) + 1LL, 8);
    v9 = LODWORD(qword_2CB7800[1]);
    si128 = _mm_load_si128(v18);
    v8 = v17;
  }
  *(_QWORD *)(qword_2CB7800[0] + 8 * v9) = v8;
  LOWORD(qword_2CB7800[9]) = 0;
  qword_2CB7800[8] = off_2C474E8;
  qword_2CB77C0 = off_2C4B848;
  ++LODWORD(qword_2CB7800[1]);
  LOBYTE(qword_2CB7800[7]) = 0;
  qword_2CB7800[10] = off_2BC0B68;
  *(__m128i *)&qword_2CB7800[13] = si128;
  sub_21F3510(&qword_2CB77C0, "scale-partial-sample-profile-working-set-size", 45);
  LOBYTE(qword_2CB7800[7]) = 1;
  unk_2CB77E8 = v7;
  LOWORD(qword_2CB7800[9]) = 257;
  BYTE2(dword_2CB77C8) = BYTE2(dword_2CB77C8) & 0x9F | 0x20;
  unk_2CB77E0 = "If true, scale the working set size of the partial sample profile by the partial profile ratio to reflec"
                "t the size of the program being compiled.";
  sub_21F4400(&qword_2CB77C0);
  __cxa_atexit(sub_1FEA450, &qword_2CB77C0, &off_2AFC540);
  v11 = j__strlen(
          "The scale factor used to scale the working set size of the partial sample profile along with the partial profi"
          "le ratio. This includes the factor of the profile counter per block and the factor to scale the working set si"
          "ze to use the same shared thresholds as PGO.");
  qword_2CB7740 = (__int64)&unk_2CB7750;
  v12 = v11;
  qword_2CB7710 = 0;
  qword_2CB7700 = (__int64)&off_2C4B8B0;
  qword_2CB7708 = (unsigned int)qword_2CB7708 & 0x80000000;
  qword_2CB7748 = 0x100000000LL;
  qword_2CB7718 = 0;
  qword_2CB7720 = 0;
  qword_2CB7728 = 0;
  qword_2CB7730 = 0;
  qword_2CB7738 = 0;
  qword_2CB7758 = (__int64)&unk_2CB7770;
  qword_2CB7760 = 1;
  dword_2CB7768 = 0;
  byte_2CB776C = 1;
  v13 = sub_21ED2B0(
          "The scale factor used to scale the working set size of the partial sample profile along with the partial profi"
          "le ratio. This includes the factor of the profile counter per block and the factor to scale the working set si"
          "ze to use the same shared thresholds as PGO.",
          &qword_2CB77C0);
  v14 = (unsigned int)qword_2CB7748;
  v15 = (unsigned int)qword_2CB7748 + 1LL;
  if ( v15 > HIDWORD(qword_2CB7748) )
  {
    *(_QWORD *)&v17 = v13;
    sub_22134E0((char *)&unk_2CB7750 - 16, &unk_2CB7750, v15, 8);
    v14 = (unsigned int)qword_2CB7748;
    v13 = v17;
  }
  *(_QWORD *)(qword_2CB7740 + 8 * v14) = v13;
  xmmword_2CB77B0 = (__int128)_mm_loadh_ps((const double *)off_2C4DC00);
  LODWORD(qword_2CB7748) = qword_2CB7748 + 1;
  qword_2CB7780 = (__int64)off_2C476B8;
  qword_2CB7778 = 0;
  byte_2CB7790 = 0;
  qword_2CB7700 = (__int64)off_2C476D8;
  qword_2CB7788 = 0;
  qword_2CB7798 = (__int64)off_2BC0C58;
  sub_21F3510(&qword_2CB7700, "partial-sample-profile-working-set-size-scale-factor", 52);
  qword_2CB7728 = v12;
  qword_2CB7778 = 0x3F80624DD2F1A9FCLL;
  byte_2CB7790 = 1;
  BYTE2(qword_2CB7708) = BYTE2(qword_2CB7708) & 0x9F | 0x20;
  qword_2CB7788 = 0x3F80624DD2F1A9FCLL;
  qword_2CB7720 = (__int64)"The scale factor used to scale the working set size of the partial sample profile along with "
                           "the partial profile ratio. This includes the factor of the profile counter per block and the "
                           "factor to scale the working set size to use the same shared thresholds as PGO.";
  sub_21F4400(&qword_2CB7700);
  return __cxa_atexit(sub_1FEC5B0, &qword_2CB7700, &off_2AFC540);
}

