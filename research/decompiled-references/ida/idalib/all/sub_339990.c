int sub_339990()
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
  size_t v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int128 v17; // [rsp+0h] [rbp-58h] BYREF
  __m128i v18[4]; // [rsp+10h] [rbp-48h] BYREF

  v0 = j__strlen(
         "Enable the use of the block frequency analysis to reduce the chance to execute const materialization more frequ"
         "ently than without hoisting.");
  qword_2D00830 = 0;
  v1 = v0;
  qword_2D00838 = 0;
  qword_2D00840 = 0;
  qword_2D00820 = (__int64)&off_2C758B0;
  qword_2D00828 = (unsigned int)qword_2D00828 & 0x80000000;
  qword_2D00868 = 0x100000000LL;
  qword_2D00848 = 0;
  qword_2D00850 = 0;
  qword_2D00858 = 0;
  qword_2D00860 = (__int64)&unk_2D00870;
  qword_2D00878 = (__int64)&unk_2D00890;
  qword_2D00880 = 1;
  dword_2D00888 = 0;
  byte_2D0088C = 1;
  v2 = sub_2210FF0(
         "Enable the use of the block frequency analysis to reduce the chance to execute const materialization more frequ"
         "ently than without hoisting.");
  v3 = (unsigned int)qword_2D00868;
  v4 = (unsigned int)qword_2D00868 + 1LL;
  if ( v4 > HIDWORD(qword_2D00868) )
  {
    *(_QWORD *)&v17 = v2;
    sub_2237220((char *)&unk_2D00870 - 16, &unk_2D00870, v4, 8);
    v3 = (unsigned int)qword_2D00868;
    v2 = v17;
  }
  *(_QWORD *)(qword_2D00860 + 8 * v3) = v2;
  qword_2D008A0 = (__int64)off_2C714E8;
  qword_2D00820 = (__int64)off_2C75848;
  word_2D008A8 = 0;
  xmmword_2D008C8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  v17 = xmmword_2D008C8;
  LODWORD(qword_2D00868) = qword_2D00868 + 1;
  qword_2D008B0 = (__int64)off_2BEAB08;
  byte_2D00898 = 0;
  sub_2217250(&qword_2D00820, "consthoist-with-block-frequency", 31);
  word_2D008A8 = 257;
  qword_2D00848 = v1;
  byte_2D00898 = 1;
  BYTE2(qword_2D00828) = BYTE2(qword_2D00828) & 0x9F | 0x20;
  qword_2D00840 = (__int64)"Enable the use of the block frequency analysis to reduce the chance to execute const material"
                           "ization more frequently than without hoisting.";
  sub_2218140(&qword_2D00820);
  __cxa_atexit(sub_200E190, &qword_2D00820, &off_2B25620);
  v5 = j__strlen("Try hoisting constant gep expressions");
  qword_2D007A0 = (__int64)&unk_2D007B0;
  v6 = v5;
  qword_2D00770 = 0;
  qword_2D00760 = (__int64)&off_2C758B0;
  qword_2D00768 = (unsigned int)qword_2D00768 & 0x80000000;
  qword_2D007A8 = 0x100000000LL;
  qword_2D00778 = 0;
  qword_2D00780 = 0;
  qword_2D00788 = 0;
  qword_2D00790 = 0;
  qword_2D00798 = 0;
  qword_2D007B8 = (__int64)&unk_2D007D0;
  qword_2D007C0 = 1;
  dword_2D007C8 = 0;
  byte_2D007CC = 1;
  v7 = sub_2210FF0("Try hoisting constant gep expressions");
  v8 = (unsigned int)qword_2D007A8;
  si128 = _mm_load_si128((const __m128i *)&v17);
  v10 = (unsigned int)qword_2D007A8 + 1LL;
  if ( v10 > HIDWORD(qword_2D007A8) )
  {
    *(_QWORD *)&v17 = v7;
    v18[0] = si128;
    sub_2237220((char *)&unk_2D007B0 - 16, &unk_2D007B0, v10, 8);
    v8 = (unsigned int)qword_2D007A8;
    si128 = _mm_load_si128(v18);
    v7 = v17;
  }
  *(_QWORD *)(qword_2D007A0 + 8 * v8) = v7;
  word_2D007E8 = 0;
  qword_2D007E0 = (__int64)off_2C714E8;
  qword_2D00760 = (__int64)off_2C75848;
  xmmword_2D00808 = (__int128)si128;
  qword_2D007F0 = (__int64)off_2BEAB08;
  LODWORD(qword_2D007A8) = qword_2D007A8 + 1;
  byte_2D007D8 = 0;
  sub_2217250(&qword_2D00760, "consthoist-gep", 14);
  word_2D007E8 = 256;
  byte_2D007D8 = 0;
  qword_2D00788 = v6;
  BYTE2(qword_2D00768) = BYTE2(qword_2D00768) & 0x9F | 0x20;
  qword_2D00780 = (__int64)"Try hoisting constant gep expressions";
  sub_2218140(&qword_2D00760);
  __cxa_atexit(sub_200E190, &qword_2D00760, &off_2B25620);
  v11 = j__strlen("Do not rebase if number of dependent constants of a Base is less than this number.");
  byte_2D0070C = 1;
  qword_2D006B0 = 0;
  v12 = v11;
  qword_2D006A0 = (__int64)&off_2C758B0;
  qword_2D006A8 = (unsigned int)qword_2D006A8 & 0x80000000;
  qword_2D006E8 = 0x100000000LL;
  qword_2D006B8 = 0;
  qword_2D006C0 = 0;
  qword_2D006C8 = 0;
  qword_2D006D0 = 0;
  qword_2D006D8 = 0;
  qword_2D006E0 = (__int64)&unk_2D006F0;
  qword_2D006F8 = (__int64)&unk_2D00710;
  qword_2D00700 = 1;
  dword_2D00708 = 0;
  v13 = sub_2210FF0("Do not rebase if number of dependent constants of a Base is less than this number.");
  v14 = (unsigned int)qword_2D006E8;
  v15 = (unsigned int)qword_2D006E8 + 1LL;
  if ( v15 > HIDWORD(qword_2D006E8) )
  {
    *(_QWORD *)&v17 = v13;
    sub_2237220((char *)&unk_2D006F0 - 16, &unk_2D006F0, v15, 8);
    v14 = (unsigned int)qword_2D006E8;
    v13 = v17;
  }
  *(_QWORD *)(qword_2D006E0 + 8 * v14) = v13;
  xmmword_2D00748 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  LODWORD(qword_2D006E8) = qword_2D006E8 + 1;
  qword_2D00720 = (__int64)off_2C712D0;
  dword_2D00718 = 0;
  byte_2D0072C = 0;
  qword_2D006A0 = (__int64)off_2C75710;
  dword_2D00728 = 0;
  qword_2D00730 = (__int64)off_2BEAB98;
  sub_2217250(&qword_2D006A0, "consthoist-min-num-to-rebase", 28);
  qword_2D006C8 = v12;
  qword_2D006C0 = (__int64)"Do not rebase if number of dependent constants of a Base is less than this number.";
  dword_2D00718 = 0;
  byte_2D0072C = 1;
  dword_2D00728 = 0;
  BYTE2(qword_2D006A8) = BYTE2(qword_2D006A8) & 0x9F | 0x20;
  sub_2218140(&qword_2D006A0);
  return __cxa_atexit(sub_1FED260, &qword_2D006A0, &off_2B25620);
}
