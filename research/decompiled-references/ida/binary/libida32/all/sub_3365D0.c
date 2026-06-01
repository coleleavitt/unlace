int sub_3365D0()
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
  qword_2CD6910 = 0;
  v1 = v0;
  qword_2CD6918 = 0;
  qword_2CD6920 = 0;
  qword_2CD6900 = (__int64)&off_2C4B8B0;
  qword_2CD6908 = (unsigned int)qword_2CD6908 & 0x80000000;
  qword_2CD6948 = 0x100000000LL;
  qword_2CD6928 = 0;
  qword_2CD6930 = 0;
  qword_2CD6938 = 0;
  qword_2CD6940 = (__int64)&unk_2CD6950;
  qword_2CD6958 = (__int64)&unk_2CD6970;
  qword_2CD6960 = 1;
  dword_2CD6968 = 0;
  byte_2CD696C = 1;
  v2 = sub_21ED2B0(
         "Enable the use of the block frequency analysis to reduce the chance to execute const materialization more frequ"
         "ently than without hoisting.");
  v3 = (unsigned int)qword_2CD6948;
  v4 = (unsigned int)qword_2CD6948 + 1LL;
  if ( v4 > HIDWORD(qword_2CD6948) )
  {
    *(_QWORD *)&v17 = v2;
    sub_22134E0((char *)&unk_2CD6950 - 16, &unk_2CD6950, v4, 8);
    v3 = (unsigned int)qword_2CD6948;
    v2 = v17;
  }
  *(_QWORD *)(qword_2CD6940 + 8 * v3) = v2;
  qword_2CD6980 = (__int64)off_2C474E8;
  qword_2CD6900 = (__int64)off_2C4B848;
  word_2CD6988 = 0;
  xmmword_2CD69A8 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  v17 = xmmword_2CD69A8;
  LODWORD(qword_2CD6948) = qword_2CD6948 + 1;
  qword_2CD6990 = (__int64)off_2BC0B68;
  byte_2CD6978 = 0;
  sub_21F3510(&qword_2CD6900, "consthoist-with-block-frequency", 31);
  word_2CD6988 = 257;
  qword_2CD6928 = v1;
  byte_2CD6978 = 1;
  BYTE2(qword_2CD6908) = BYTE2(qword_2CD6908) & 0x9F | 0x20;
  qword_2CD6920 = (__int64)"Enable the use of the block frequency analysis to reduce the chance to execute const material"
                           "ization more frequently than without hoisting.";
  sub_21F4400(&qword_2CD6900);
  __cxa_atexit(sub_1FEA450, &qword_2CD6900, &off_2AFC540);
  v5 = j__strlen("Try hoisting constant gep expressions");
  qword_2CD6880 = (__int64)&unk_2CD6890;
  v6 = v5;
  qword_2CD6850 = 0;
  qword_2CD6840 = (__int64)&off_2C4B8B0;
  qword_2CD6848 = (unsigned int)qword_2CD6848 & 0x80000000;
  qword_2CD6888 = 0x100000000LL;
  qword_2CD6858 = 0;
  qword_2CD6860 = 0;
  qword_2CD6868 = 0;
  qword_2CD6870 = 0;
  qword_2CD6878 = 0;
  qword_2CD6898 = (__int64)&unk_2CD68B0;
  qword_2CD68A0 = 1;
  dword_2CD68A8 = 0;
  byte_2CD68AC = 1;
  v7 = sub_21ED2B0("Try hoisting constant gep expressions");
  v8 = (unsigned int)qword_2CD6888;
  si128 = _mm_load_si128((const __m128i *)&v17);
  v10 = (unsigned int)qword_2CD6888 + 1LL;
  if ( v10 > HIDWORD(qword_2CD6888) )
  {
    *(_QWORD *)&v17 = v7;
    v18[0] = si128;
    sub_22134E0((char *)&unk_2CD6890 - 16, &unk_2CD6890, v10, 8);
    v8 = (unsigned int)qword_2CD6888;
    si128 = _mm_load_si128(v18);
    v7 = v17;
  }
  *(_QWORD *)(qword_2CD6880 + 8 * v8) = v7;
  word_2CD68C8 = 0;
  qword_2CD68C0 = (__int64)off_2C474E8;
  qword_2CD6840 = (__int64)off_2C4B848;
  xmmword_2CD68E8 = (__int128)si128;
  qword_2CD68D0 = (__int64)off_2BC0B68;
  LODWORD(qword_2CD6888) = qword_2CD6888 + 1;
  byte_2CD68B8 = 0;
  sub_21F3510(&qword_2CD6840, "consthoist-gep", 14);
  word_2CD68C8 = 256;
  byte_2CD68B8 = 0;
  qword_2CD6868 = v6;
  BYTE2(qword_2CD6848) = BYTE2(qword_2CD6848) & 0x9F | 0x20;
  qword_2CD6860 = (__int64)"Try hoisting constant gep expressions";
  sub_21F4400(&qword_2CD6840);
  __cxa_atexit(sub_1FEA450, &qword_2CD6840, &off_2AFC540);
  v11 = j__strlen("Do not rebase if number of dependent constants of a Base is less than this number.");
  byte_2CD67EC = 1;
  qword_2CD6790 = 0;
  v12 = v11;
  qword_2CD6780 = (__int64)&off_2C4B8B0;
  qword_2CD6788 = (unsigned int)qword_2CD6788 & 0x80000000;
  qword_2CD67C8 = 0x100000000LL;
  qword_2CD6798 = 0;
  qword_2CD67A0 = 0;
  qword_2CD67A8 = 0;
  qword_2CD67B0 = 0;
  qword_2CD67B8 = 0;
  qword_2CD67C0 = (__int64)&unk_2CD67D0;
  qword_2CD67D8 = (__int64)&unk_2CD67F0;
  qword_2CD67E0 = 1;
  dword_2CD67E8 = 0;
  v13 = sub_21ED2B0("Do not rebase if number of dependent constants of a Base is less than this number.");
  v14 = (unsigned int)qword_2CD67C8;
  v15 = (unsigned int)qword_2CD67C8 + 1LL;
  if ( v15 > HIDWORD(qword_2CD67C8) )
  {
    *(_QWORD *)&v17 = v13;
    sub_22134E0((char *)&unk_2CD67D0 - 16, &unk_2CD67D0, v15, 8);
    v14 = (unsigned int)qword_2CD67C8;
    v13 = v17;
  }
  *(_QWORD *)(qword_2CD67C0 + 8 * v14) = v13;
  xmmword_2CD6828 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  LODWORD(qword_2CD67C8) = qword_2CD67C8 + 1;
  qword_2CD6800 = (__int64)off_2C472D0;
  dword_2CD67F8 = 0;
  byte_2CD680C = 0;
  qword_2CD6780 = (__int64)off_2C4B710;
  dword_2CD6808 = 0;
  qword_2CD6810 = (__int64)off_2BC0BF8;
  sub_21F3510(&qword_2CD6780, "consthoist-min-num-to-rebase", 28);
  qword_2CD67A8 = v12;
  qword_2CD67A0 = (__int64)"Do not rebase if number of dependent constants of a Base is less than this number.";
  dword_2CD67F8 = 0;
  byte_2CD680C = 1;
  dword_2CD6808 = 0;
  BYTE2(qword_2CD6788) = BYTE2(qword_2CD6788) & 0x9F | 0x20;
  sub_21F4400(&qword_2CD6780);
  return __cxa_atexit(sub_1FC9520, &qword_2CD6780, &off_2AFC540);
}

