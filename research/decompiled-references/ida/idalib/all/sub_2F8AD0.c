int __fastcall sub_2F8AD0(__int64 a1, __int64 a2)
{
  size_t v2; // r12
  __int64 v3; // rax
  __int64 v4; // rcx
  size_t v5; // rax
  size_t v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t v11; // rax
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __m128i v16; // xmm2
  size_t v17; // rax
  size_t v18; // rax
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __m128i v23; // xmm3
  size_t v24; // rax
  __m128i v26; // [rsp+0h] [rbp-58h] BYREF
  __int64 v27; // [rsp+18h] [rbp-40h]

  v2 = j__strlen("Whether or not to compute detailed function properties.");
  unk_2CDCD50 = 0;
  qword_2CDCD40 = &off_2C758B0;
  *(_QWORD *)&dword_2CDCD48 = dword_2CDCD48 & 0x80000000;
  qword_2CDCD80[1] = 0x100000000LL;
  unk_2CDCD58 = 0;
  unk_2CDCD60 = 0;
  unk_2CDCD68 = 0;
  unk_2CDCD70 = 0;
  unk_2CDCD78 = 0;
  qword_2CDCD80[0] = &qword_2CDCD80[2];
  qword_2CDCD80[3] = &qword_2CDCD80[6];
  qword_2CDCD80[4] = 1;
  LODWORD(qword_2CDCD80[5]) = 0;
  BYTE4(qword_2CDCD80[5]) = 1;
  v3 = sub_2210FF0("Whether or not to compute detailed function properties.", a2);
  v4 = LODWORD(qword_2CDCD80[1]);
  if ( (unsigned __int64)LODWORD(qword_2CDCD80[1]) + 1 > HIDWORD(qword_2CDCD80[1]) )
  {
    v26.m128i_i64[0] = v3;
    sub_2237220(qword_2CDCD80, &qword_2CDCD80[2], LODWORD(qword_2CDCD80[1]) + 1LL, 8);
    v4 = LODWORD(qword_2CDCD80[1]);
    v3 = v26.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CDCD80[0] + 8 * v4) = v3;
  LOWORD(qword_2CDCD80[9]) = 0;
  ++LODWORD(qword_2CDCD80[1]);
  LOBYTE(qword_2CDCD80[7]) = 0;
  qword_2CDCD80[8] = off_2C714E8;
  *(__m128 *)&qword_2CDCD80[13] = _mm_loadh_ps((const double *)off_2C78368);
  qword_2CDCD40 = off_2C75848;
  qword_2CDCD80[10] = off_2BEAB08;
  v5 = j__strlen("enable-detailed-function-properties");
  sub_2217250(&qword_2CDCD40, "enable-detailed-function-properties", v5);
  LOBYTE(qword_2CDCD80[7]) = 0;
  unk_2CDCD68 = v2;
  LOWORD(qword_2CDCD80[9]) = 256;
  BYTE2(dword_2CDCD48) = BYTE2(dword_2CDCD48) & 0x9F | 0x20;
  unk_2CDCD60 = "Whether or not to compute detailed function properties.";
  sub_2218140(&qword_2CDCD40);
  __cxa_atexit(sub_200E190, &qword_2CDCD40, &off_2B25620);
  v6 = j__strlen("The minimum number of instructions a basic block should contain before being considered big.");
  qword_2CDCCC0 = (__int64)&unk_2CDCCD0;
  v7 = v6;
  qword_2CDCC90 = 0;
  qword_2CDCC80 = (__int64)&off_2C758B0;
  qword_2CDCC88 = (unsigned int)qword_2CDCC88 & 0x80000000;
  qword_2CDCCC8 = 0x100000000LL;
  qword_2CDCC98 = 0;
  qword_2CDCCA0 = 0;
  qword_2CDCCA8 = 0;
  qword_2CDCCB0 = 0;
  qword_2CDCCB8 = 0;
  qword_2CDCCD8 = (__int64)&unk_2CDCCF0;
  qword_2CDCCE0 = 1;
  dword_2CDCCE8 = 0;
  byte_2CDCCEC = 1;
  v8 = sub_2210FF0(
         "The minimum number of instructions a basic block should contain before being considered big.",
         &qword_2CDCD40);
  v9 = (unsigned int)qword_2CDCCC8;
  v10 = (unsigned int)qword_2CDCCC8 + 1LL;
  if ( v10 > HIDWORD(qword_2CDCCC8) )
  {
    v26.m128i_i64[0] = v8;
    sub_2237220((char *)&unk_2CDCCD0 - 16, &unk_2CDCCD0, v10, 8);
    v9 = (unsigned int)qword_2CDCCC8;
    v8 = v26.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CDCCC0 + 8 * v9) = v8;
  qword_2CDCD00 = (__int64)off_2C712D0;
  qword_2CDCC80 = (__int64)off_2C75710;
  v26 = (__m128i)_mm_loadh_ps((const double *)off_2C784F8);
  xmmword_2CDCD28 = (__int128)v26;
  qword_2CDCD10 = (__int64)off_2BEAB98;
  LODWORD(qword_2CDCCC8) = qword_2CDCCC8 + 1;
  dword_2CDCCF8 = 0;
  dword_2CDCD08 = 0;
  byte_2CDCD0C = 0;
  sub_2217250(&qword_2CDCC80, "big-basic-block-instruction-threshold", 37);
  qword_2CDCCA8 = v7;
  dword_2CDCCF8 = 500;
  byte_2CDCD0C = 1;
  dword_2CDCD08 = 500;
  BYTE2(qword_2CDCC88) = BYTE2(qword_2CDCC88) & 0x9F | 0x20;
  qword_2CDCCA0 = (__int64)"The minimum number of instructions a basic block should contain before being considered big.";
  sub_2218140(&qword_2CDCC80);
  __cxa_atexit(sub_1FED260, &qword_2CDCC80, &off_2B25620);
  v11 = j__strlen("The minimum number of instructions a basic block should contain before being considered medium-sized.");
  qword_2CDCC00 = (__int64)&unk_2CDCC10;
  v12 = v11;
  qword_2CDCBD0 = 0;
  qword_2CDCBC0 = (__int64)&off_2C758B0;
  qword_2CDCBC8 = (unsigned int)qword_2CDCBC8 & 0x80000000;
  qword_2CDCC08 = 0x100000000LL;
  qword_2CDCBD8 = 0;
  qword_2CDCBE0 = 0;
  qword_2CDCBE8 = 0;
  qword_2CDCBF0 = 0;
  qword_2CDCBF8 = 0;
  qword_2CDCC18 = (__int64)&unk_2CDCC30;
  qword_2CDCC20 = 1;
  dword_2CDCC28 = 0;
  byte_2CDCC2C = 1;
  v13 = sub_2210FF0(
          "The minimum number of instructions a basic block should contain before being considered medium-sized.",
          &qword_2CDCC80);
  v14 = (unsigned int)qword_2CDCC08;
  v15 = (unsigned int)qword_2CDCC08 + 1LL;
  if ( v15 > HIDWORD(qword_2CDCC08) )
  {
    v27 = v13;
    sub_2237220((char *)&unk_2CDCC10 - 16, &unk_2CDCC10, v15, 8);
    v14 = (unsigned int)qword_2CDCC08;
    v13 = v27;
  }
  v16 = _mm_load_si128(&v26);
  *(_QWORD *)(qword_2CDCC00 + 8 * v14) = v13;
  qword_2CDCC40 = (__int64)off_2C712D0;
  qword_2CDCBC0 = (__int64)off_2C75710;
  xmmword_2CDCC68 = (__int128)v16;
  LODWORD(qword_2CDCC08) = qword_2CDCC08 + 1;
  dword_2CDCC38 = 0;
  dword_2CDCC48 = 0;
  byte_2CDCC4C = 0;
  qword_2CDCC50 = (__int64)off_2BEAB98;
  v17 = j__strlen("medium-basic-block-instruction-threshold");
  sub_2217250(&qword_2CDCBC0, "medium-basic-block-instruction-threshold", v17);
  qword_2CDCBE8 = v12;
  dword_2CDCC38 = 15;
  byte_2CDCC4C = 1;
  dword_2CDCC48 = 15;
  BYTE2(qword_2CDCBC8) = BYTE2(qword_2CDCBC8) & 0x9F | 0x20;
  qword_2CDCBE0 = (__int64)"The minimum number of instructions a basic block should contain before being considered medium-sized.";
  sub_2218140(&qword_2CDCBC0);
  __cxa_atexit(sub_1FED260, &qword_2CDCBC0, &off_2B25620);
  v18 = j__strlen("The minimum number of arguments a function call must have before it is considered having many arguments.");
  byte_2CDCB6C = 1;
  qword_2CDCB10 = 0;
  v19 = v18;
  qword_2CDCB00 = (__int64)&off_2C758B0;
  qword_2CDCB08 = (unsigned int)qword_2CDCB08 & 0x80000000;
  qword_2CDCB48 = 0x100000000LL;
  qword_2CDCB18 = 0;
  qword_2CDCB20 = 0;
  qword_2CDCB28 = 0;
  qword_2CDCB30 = 0;
  qword_2CDCB38 = 0;
  qword_2CDCB40 = (__int64)&unk_2CDCB50;
  qword_2CDCB58 = (__int64)&unk_2CDCB70;
  qword_2CDCB60 = 1;
  dword_2CDCB68 = 0;
  v20 = sub_2210FF0(
          "The minimum number of arguments a function call must have before it is considered having many arguments.",
          &qword_2CDCBC0);
  v21 = (unsigned int)qword_2CDCB48;
  v22 = (unsigned int)qword_2CDCB48 + 1LL;
  if ( v22 > HIDWORD(qword_2CDCB48) )
  {
    v27 = v20;
    sub_2237220((char *)&unk_2CDCB50 - 16, &unk_2CDCB50, v22, 8);
    v21 = (unsigned int)qword_2CDCB48;
    v20 = v27;
  }
  v23 = _mm_load_si128(&v26);
  *(_QWORD *)(qword_2CDCB40 + 8 * v21) = v20;
  qword_2CDCB80 = (__int64)off_2C712D0;
  qword_2CDCB00 = (__int64)off_2C75710;
  xmmword_2CDCBA8 = (__int128)v23;
  LODWORD(qword_2CDCB48) = qword_2CDCB48 + 1;
  dword_2CDCB78 = 0;
  dword_2CDCB88 = 0;
  byte_2CDCB8C = 0;
  qword_2CDCB90 = (__int64)off_2BEAB98;
  v24 = j__strlen("call-with-many-arguments-threshold");
  sub_2217250(&qword_2CDCB00, "call-with-many-arguments-threshold", v24);
  qword_2CDCB28 = v19;
  dword_2CDCB78 = 4;
  byte_2CDCB8C = 1;
  dword_2CDCB88 = 4;
  BYTE2(qword_2CDCB08) = BYTE2(qword_2CDCB08) & 0x9F | 0x20;
  qword_2CDCB20 = (__int64)"The minimum number of arguments a function call must have before it is considered having many arguments.";
  sub_2218140(&qword_2CDCB00);
  return __cxa_atexit(sub_1FED260, &qword_2CDCB00, &off_2B25620);
}
