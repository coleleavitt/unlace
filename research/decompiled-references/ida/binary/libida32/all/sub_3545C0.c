int sub_3545C0()
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
  unsigned __int64 v9; // rdx
  __m128i si128; // xmm3
  size_t v11; // rax
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __m128i v16; // xmm4
  __m128 v17; // xmm1
  size_t v18; // rax
  __m128i v19; // xmm1
  __m128i v20; // xmm1
  __m128i v21; // xmm1
  __m128i v23; // [rsp+0h] [rbp-78h] BYREF
  __m128 v24; // [rsp+10h] [rbp-68h] BYREF
  int v25; // [rsp+20h] [rbp-58h] BYREF
  int v26; // [rsp+24h] [rbp-54h] BYREF
  int *v27; // [rsp+28h] [rbp-50h] BYREF
  const char *v28; // [rsp+30h] [rbp-48h] BYREF
  size_t v29; // [rsp+38h] [rbp-40h]

  v0 = j__strlen("Enable unsafe double to float shrinking for math lib calls");
  qword_2CE6990 = 0;
  v1 = v0;
  qword_2CE6998 = 0;
  qword_2CE69A0 = 0;
  qword_2CE6980 = (__int64)&off_2C4B8B0;
  qword_2CE6988 = (unsigned int)qword_2CE6988 & 0x80000000;
  qword_2CE69C8 = 0x100000000LL;
  qword_2CE69A8 = 0;
  qword_2CE69B0 = 0;
  qword_2CE69B8 = 0;
  qword_2CE69C0 = (__int64)&unk_2CE69D0;
  qword_2CE69D8 = (__int64)&unk_2CE69F0;
  qword_2CE69E0 = 1;
  dword_2CE69E8 = 0;
  byte_2CE69EC = 1;
  v2 = sub_21ED2B0("Enable unsafe double to float shrinking for math lib calls");
  v3 = (unsigned int)qword_2CE69C8;
  v4 = (unsigned int)qword_2CE69C8 + 1LL;
  if ( v4 > HIDWORD(qword_2CE69C8) )
  {
    v23.m128i_i64[0] = v2;
    sub_22134E0((char *)&unk_2CE69D0 - 16, &unk_2CE69D0, v4, 8);
    v3 = (unsigned int)qword_2CE69C8;
    v2 = v23.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CE69C0 + 8 * v3) = v2;
  qword_2CE6A00 = (__int64)off_2C474E8;
  word_2CE6A08 = 0;
  qword_2CE6980 = (__int64)off_2C4B848;
  v24 = _mm_loadh_ps((const double *)off_2C4E368);
  xmmword_2CE6A28 = (__int128)v24;
  qword_2CE6A10 = (__int64)off_2BC0B68;
  LODWORD(qword_2CE69C8) = qword_2CE69C8 + 1;
  byte_2CE69F8 = 0;
  sub_21F3510(&qword_2CE6980, "enable-double-float-shrink", 26);
  word_2CE6A08 = 256;
  qword_2CE69A8 = v1;
  byte_2CE69F8 = 0;
  BYTE2(qword_2CE6988) = BYTE2(qword_2CE6988) & 0x9F | 0x20;
  qword_2CE69A0 = (__int64)"Enable unsafe double to float shrinking for math lib calls";
  sub_21F4400(&qword_2CE6980);
  __cxa_atexit(sub_1FEA450, &qword_2CE6980, &off_2AFC540);
  v5 = j__strlen("Enable hot/cold operator new library calls");
  qword_2CE6900 = (__int64)&unk_2CE6910;
  v6 = v5;
  qword_2CE68D0 = 0;
  qword_2CE68C0 = (__int64)&off_2C4B8B0;
  qword_2CE68C8 = (unsigned int)qword_2CE68C8 & 0x80000000;
  qword_2CE6908 = 0x100000000LL;
  qword_2CE68D8 = 0;
  qword_2CE68E0 = 0;
  qword_2CE68E8 = 0;
  qword_2CE68F0 = 0;
  qword_2CE68F8 = 0;
  qword_2CE6918 = (__int64)&unk_2CE6930;
  qword_2CE6920 = 1;
  dword_2CE6928 = 0;
  byte_2CE692C = 1;
  v7 = sub_21ED2B0("Enable hot/cold operator new library calls");
  v8 = (unsigned int)qword_2CE6908;
  v9 = (unsigned int)qword_2CE6908 + 1LL;
  if ( v9 > HIDWORD(qword_2CE6908) )
  {
    v23.m128i_i64[0] = v7;
    sub_22134E0((char *)&unk_2CE6910 - 16, &unk_2CE6910, v9, 8);
    v8 = (unsigned int)qword_2CE6908;
    v7 = v23.m128i_i64[0];
  }
  si128 = _mm_load_si128((const __m128i *)&v24);
  *(_QWORD *)(qword_2CE6900 + 8 * v8) = v7;
  qword_2CE6940 = (__int64)off_2C474E8;
  qword_2CE68C0 = (__int64)off_2C4B848;
  word_2CE6948 = 0;
  xmmword_2CE6968 = (__int128)si128;
  qword_2CE6950 = (__int64)off_2BC0B68;
  LODWORD(qword_2CE6908) = qword_2CE6908 + 1;
  byte_2CE6938 = 0;
  sub_21F3510(&qword_2CE68C0, "optimize-hot-cold-new", 21);
  word_2CE6948 = 256;
  qword_2CE68E8 = v6;
  byte_2CE6938 = 0;
  BYTE2(qword_2CE68C8) = BYTE2(qword_2CE68C8) & 0x9F | 0x20;
  qword_2CE68E0 = (__int64)"Enable hot/cold operator new library calls";
  sub_21F4400(&qword_2CE68C0);
  __cxa_atexit(sub_1FEA450, &qword_2CE68C0, &off_2AFC540);
  v11 = j__strlen("Enable optimization of existing hot/cold operator new library calls");
  byte_2CE686C = 1;
  qword_2CE6810 = 0;
  v12 = v11;
  qword_2CE6800 = (__int64)&off_2C4B8B0;
  qword_2CE6808 = (unsigned int)qword_2CE6808 & 0x80000000;
  qword_2CE6848 = 0x100000000LL;
  qword_2CE6818 = 0;
  qword_2CE6820 = 0;
  qword_2CE6828 = 0;
  qword_2CE6830 = 0;
  qword_2CE6838 = 0;
  qword_2CE6840 = (__int64)&unk_2CE6850;
  qword_2CE6858 = (__int64)&unk_2CE6870;
  qword_2CE6860 = 1;
  dword_2CE6868 = 0;
  v13 = sub_21ED2B0("Enable optimization of existing hot/cold operator new library calls");
  v14 = (unsigned int)qword_2CE6848;
  v15 = (unsigned int)qword_2CE6848 + 1LL;
  if ( v15 > HIDWORD(qword_2CE6848) )
  {
    v23.m128i_i64[0] = v13;
    sub_22134E0((char *)&unk_2CE6850 - 16, &unk_2CE6850, v15, 8);
    v14 = (unsigned int)qword_2CE6848;
    v13 = v23.m128i_i64[0];
  }
  v16 = _mm_load_si128((const __m128i *)&v24);
  v23.m128i_i64[0] = (__int64)nullsub_1512;
  *(_QWORD *)(qword_2CE6840 + 8 * v14) = v13;
  word_2CE6888 = 0;
  v17 = _mm_loadh_ps((const double *)v23.m128i_i64);
  qword_2CE6880 = (__int64)off_2C474E8;
  qword_2CE6800 = (__int64)off_2C4B848;
  xmmword_2CE68A8 = (__int128)v16;
  v23 = (__m128i)v17;
  qword_2CE6890 = (__int64)off_2BC0B68;
  LODWORD(qword_2CE6848) = qword_2CE6848 + 1;
  byte_2CE6878 = 0;
  sub_21F3510(&qword_2CE6800, "optimize-existing-hot-cold-new", 30);
  word_2CE6888 = 256;
  qword_2CE6828 = v12;
  byte_2CE6878 = 0;
  BYTE2(qword_2CE6808) = BYTE2(qword_2CE6808) & 0x9F | 0x20;
  qword_2CE6820 = (__int64)"Enable optimization of existing hot/cold operator new library calls";
  sub_21F4400(&qword_2CE6800);
  __cxa_atexit(sub_1FEA450, &qword_2CE6800, &off_2AFC540);
  v18 = j__strlen("Value to pass to hot/cold operator new for cold allocation");
  v28 = "Value to pass to hot/cold operator new for cold allocation";
  v29 = v18;
  v27 = &v25;
  v25 = 1;
  v26 = 1;
  sub_1FEBAE0(&qword_2CE6740, 0, 0);
  v19 = _mm_load_si128(&v23);
  qword_2CE6740 = (__int64)off_2C4D5B0;
  xmmword_2CE67E8 = (__int128)v19;
  qword_2CE67D0 = (__int64)off_2C4D580;
  v24.m128_u64[0] = (unsigned __int64)&v26;
  qword_2CE67C0 = (__int64)off_2C472D0;
  dword_2CE67B8 = 0;
  dword_2CE67C8 = 0;
  byte_2CE67CC = 0;
  sub_354540((__int64)&qword_2CE6740, "cold-new-hint-value", &v26, &v27, (__int64 *)&v28);
  sub_21F4400(&qword_2CE6740);
  __cxa_atexit(sub_22A5420, &qword_2CE6740, &off_2AFC540);
  v29 = j__strlen("Value to pass to hot/cold operator new for notcold (warm) allocation");
  v28 = "Value to pass to hot/cold operator new for notcold (warm) allocation";
  v27 = &v25;
  v25 = 128;
  v26 = 1;
  sub_1FEBAE0(&qword_2CE6680, 0, 0);
  v20 = _mm_load_si128(&v23);
  qword_2CE6700 = (__int64)off_2C472D0;
  xmmword_2CE6728 = (__int128)v20;
  qword_2CE6680 = (__int64)off_2C4D5B0;
  qword_2CE6710 = (__int64)off_2C4D580;
  dword_2CE66F8 = 0;
  dword_2CE6708 = 0;
  byte_2CE670C = 0;
  sub_354540((__int64)&qword_2CE6680, "notcold-new-hint-value", v24.m128_u64[0], &v27, (__int64 *)&v28);
  sub_21F4400(&qword_2CE6680);
  __cxa_atexit(sub_22A5420, &qword_2CE6680, &off_2AFC540);
  v29 = j__strlen("Value to pass to hot/cold operator new for hot allocation");
  v28 = "Value to pass to hot/cold operator new for hot allocation";
  v27 = &v25;
  v25 = 254;
  v26 = 1;
  sub_1FEBAE0(&qword_2CE65C0, 0, 0);
  v21 = _mm_load_si128(&v23);
  qword_2CE6640 = (__int64)off_2C472D0;
  xmmword_2CE6668 = (__int128)v21;
  qword_2CE65C0 = (__int64)off_2C4D5B0;
  qword_2CE6650 = (__int64)off_2C4D580;
  dword_2CE6638 = 0;
  dword_2CE6648 = 0;
  byte_2CE664C = 0;
  sub_354540((__int64)&qword_2CE65C0, "hot-new-hint-value", v24.m128_u64[0], &v27, (__int64 *)&v28);
  sub_21F4400(&qword_2CE65C0);
  return __cxa_atexit(sub_22A5420, &qword_2CE65C0, &off_2AFC540);
}

