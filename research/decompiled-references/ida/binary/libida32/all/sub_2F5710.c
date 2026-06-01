int __fastcall sub_2F5710(__int64 a1, __int64 a2)
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
  unk_2CB2E30 = 0;
  qword_2CB2E20 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CB2E28 = dword_2CB2E28 & 0x80000000;
  qword_2CB2E60[1] = 0x100000000LL;
  unk_2CB2E38 = 0;
  unk_2CB2E40 = 0;
  unk_2CB2E48 = 0;
  unk_2CB2E50 = 0;
  unk_2CB2E58 = 0;
  qword_2CB2E60[0] = &qword_2CB2E60[2];
  qword_2CB2E60[3] = &qword_2CB2E60[6];
  qword_2CB2E60[4] = 1;
  LODWORD(qword_2CB2E60[5]) = 0;
  BYTE4(qword_2CB2E60[5]) = 1;
  v3 = sub_21ED2B0("Whether or not to compute detailed function properties.", a2);
  v4 = LODWORD(qword_2CB2E60[1]);
  if ( (unsigned __int64)LODWORD(qword_2CB2E60[1]) + 1 > HIDWORD(qword_2CB2E60[1]) )
  {
    v26.m128i_i64[0] = v3;
    sub_22134E0(qword_2CB2E60, &qword_2CB2E60[2], LODWORD(qword_2CB2E60[1]) + 1LL, 8);
    v4 = LODWORD(qword_2CB2E60[1]);
    v3 = v26.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CB2E60[0] + 8 * v4) = v3;
  LOWORD(qword_2CB2E60[9]) = 0;
  ++LODWORD(qword_2CB2E60[1]);
  LOBYTE(qword_2CB2E60[7]) = 0;
  qword_2CB2E60[8] = off_2C474E8;
  *(__m128 *)&qword_2CB2E60[13] = _mm_loadh_ps((const double *)off_2C4E368);
  qword_2CB2E20 = off_2C4B848;
  qword_2CB2E60[10] = off_2BC0B68;
  v5 = j__strlen("enable-detailed-function-properties");
  sub_21F3510(&qword_2CB2E20, "enable-detailed-function-properties", v5);
  LOBYTE(qword_2CB2E60[7]) = 0;
  unk_2CB2E48 = v2;
  LOWORD(qword_2CB2E60[9]) = 256;
  BYTE2(dword_2CB2E28) = BYTE2(dword_2CB2E28) & 0x9F | 0x20;
  unk_2CB2E40 = "Whether or not to compute detailed function properties.";
  sub_21F4400(&qword_2CB2E20);
  __cxa_atexit(sub_1FEA450, &qword_2CB2E20, &off_2AFC540);
  v6 = j__strlen("The minimum number of instructions a basic block should contain before being considered big.");
  qword_2CB2DA0 = (__int64)&unk_2CB2DB0;
  v7 = v6;
  qword_2CB2D70 = 0;
  qword_2CB2D60 = (__int64)&off_2C4B8B0;
  qword_2CB2D68 = (unsigned int)qword_2CB2D68 & 0x80000000;
  qword_2CB2DA8 = 0x100000000LL;
  qword_2CB2D78 = 0;
  qword_2CB2D80 = 0;
  qword_2CB2D88 = 0;
  qword_2CB2D90 = 0;
  qword_2CB2D98 = 0;
  qword_2CB2DB8 = (__int64)&unk_2CB2DD0;
  qword_2CB2DC0 = 1;
  dword_2CB2DC8 = 0;
  byte_2CB2DCC = 1;
  v8 = sub_21ED2B0(
         "The minimum number of instructions a basic block should contain before being considered big.",
         &qword_2CB2E20);
  v9 = (unsigned int)qword_2CB2DA8;
  v10 = (unsigned int)qword_2CB2DA8 + 1LL;
  if ( v10 > HIDWORD(qword_2CB2DA8) )
  {
    v26.m128i_i64[0] = v8;
    sub_22134E0((char *)&unk_2CB2DB0 - 16, &unk_2CB2DB0, v10, 8);
    v9 = (unsigned int)qword_2CB2DA8;
    v8 = v26.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CB2DA0 + 8 * v9) = v8;
  qword_2CB2DE0 = (__int64)off_2C472D0;
  qword_2CB2D60 = (__int64)off_2C4B710;
  v26 = (__m128i)_mm_loadh_ps((const double *)off_2C4E4F8);
  xmmword_2CB2E08 = (__int128)v26;
  qword_2CB2DF0 = (__int64)off_2BC0BF8;
  LODWORD(qword_2CB2DA8) = qword_2CB2DA8 + 1;
  dword_2CB2DD8 = 0;
  dword_2CB2DE8 = 0;
  byte_2CB2DEC = 0;
  sub_21F3510(&qword_2CB2D60, "big-basic-block-instruction-threshold", 37);
  qword_2CB2D88 = v7;
  dword_2CB2DD8 = 500;
  byte_2CB2DEC = 1;
  dword_2CB2DE8 = 500;
  BYTE2(qword_2CB2D68) = BYTE2(qword_2CB2D68) & 0x9F | 0x20;
  qword_2CB2D80 = (__int64)"The minimum number of instructions a basic block should contain before being considered big.";
  sub_21F4400(&qword_2CB2D60);
  __cxa_atexit(sub_1FC9520, &qword_2CB2D60, &off_2AFC540);
  v11 = j__strlen("The minimum number of instructions a basic block should contain before being considered medium-sized.");
  qword_2CB2CE0 = (__int64)&unk_2CB2CF0;
  v12 = v11;
  qword_2CB2CB0 = 0;
  qword_2CB2CA0 = (__int64)&off_2C4B8B0;
  qword_2CB2CA8 = (unsigned int)qword_2CB2CA8 & 0x80000000;
  qword_2CB2CE8 = 0x100000000LL;
  qword_2CB2CB8 = 0;
  qword_2CB2CC0 = 0;
  qword_2CB2CC8 = 0;
  qword_2CB2CD0 = 0;
  qword_2CB2CD8 = 0;
  qword_2CB2CF8 = (__int64)&unk_2CB2D10;
  qword_2CB2D00 = 1;
  dword_2CB2D08 = 0;
  byte_2CB2D0C = 1;
  v13 = sub_21ED2B0(
          "The minimum number of instructions a basic block should contain before being considered medium-sized.",
          &qword_2CB2D60);
  v14 = (unsigned int)qword_2CB2CE8;
  v15 = (unsigned int)qword_2CB2CE8 + 1LL;
  if ( v15 > HIDWORD(qword_2CB2CE8) )
  {
    v27 = v13;
    sub_22134E0((char *)&unk_2CB2CF0 - 16, &unk_2CB2CF0, v15, 8);
    v14 = (unsigned int)qword_2CB2CE8;
    v13 = v27;
  }
  v16 = _mm_load_si128(&v26);
  *(_QWORD *)(qword_2CB2CE0 + 8 * v14) = v13;
  qword_2CB2D20 = (__int64)off_2C472D0;
  qword_2CB2CA0 = (__int64)off_2C4B710;
  xmmword_2CB2D48 = (__int128)v16;
  LODWORD(qword_2CB2CE8) = qword_2CB2CE8 + 1;
  dword_2CB2D18 = 0;
  dword_2CB2D28 = 0;
  byte_2CB2D2C = 0;
  qword_2CB2D30 = (__int64)off_2BC0BF8;
  v17 = j__strlen("medium-basic-block-instruction-threshold");
  sub_21F3510(&qword_2CB2CA0, "medium-basic-block-instruction-threshold", v17);
  qword_2CB2CC8 = v12;
  dword_2CB2D18 = 15;
  byte_2CB2D2C = 1;
  dword_2CB2D28 = 15;
  BYTE2(qword_2CB2CA8) = BYTE2(qword_2CB2CA8) & 0x9F | 0x20;
  qword_2CB2CC0 = (__int64)"The minimum number of instructions a basic block should contain before being considered medium-sized.";
  sub_21F4400(&qword_2CB2CA0);
  __cxa_atexit(sub_1FC9520, &qword_2CB2CA0, &off_2AFC540);
  v18 = j__strlen("The minimum number of arguments a function call must have before it is considered having many arguments.");
  byte_2CB2C4C = 1;
  qword_2CB2BF0 = 0;
  v19 = v18;
  qword_2CB2BE0 = (__int64)&off_2C4B8B0;
  qword_2CB2BE8 = (unsigned int)qword_2CB2BE8 & 0x80000000;
  qword_2CB2C28 = 0x100000000LL;
  qword_2CB2BF8 = 0;
  qword_2CB2C00 = 0;
  qword_2CB2C08 = 0;
  qword_2CB2C10 = 0;
  qword_2CB2C18 = 0;
  qword_2CB2C20 = (__int64)&unk_2CB2C30;
  qword_2CB2C38 = (__int64)&unk_2CB2C50;
  qword_2CB2C40 = 1;
  dword_2CB2C48 = 0;
  v20 = sub_21ED2B0(
          "The minimum number of arguments a function call must have before it is considered having many arguments.",
          &qword_2CB2CA0);
  v21 = (unsigned int)qword_2CB2C28;
  v22 = (unsigned int)qword_2CB2C28 + 1LL;
  if ( v22 > HIDWORD(qword_2CB2C28) )
  {
    v27 = v20;
    sub_22134E0((char *)&unk_2CB2C30 - 16, &unk_2CB2C30, v22, 8);
    v21 = (unsigned int)qword_2CB2C28;
    v20 = v27;
  }
  v23 = _mm_load_si128(&v26);
  *(_QWORD *)(qword_2CB2C20 + 8 * v21) = v20;
  qword_2CB2C60 = (__int64)off_2C472D0;
  qword_2CB2BE0 = (__int64)off_2C4B710;
  xmmword_2CB2C88 = (__int128)v23;
  LODWORD(qword_2CB2C28) = qword_2CB2C28 + 1;
  dword_2CB2C58 = 0;
  dword_2CB2C68 = 0;
  byte_2CB2C6C = 0;
  qword_2CB2C70 = (__int64)off_2BC0BF8;
  v24 = j__strlen("call-with-many-arguments-threshold");
  sub_21F3510(&qword_2CB2BE0, "call-with-many-arguments-threshold", v24);
  qword_2CB2C08 = v19;
  dword_2CB2C58 = 4;
  byte_2CB2C6C = 1;
  dword_2CB2C68 = 4;
  BYTE2(qword_2CB2BE8) = BYTE2(qword_2CB2BE8) & 0x9F | 0x20;
  qword_2CB2C00 = (__int64)"The minimum number of arguments a function call must have before it is considered having many arguments.";
  sub_21F4400(&qword_2CB2BE0);
  return __cxa_atexit(sub_1FC9520, &qword_2CB2BE0, &off_2AFC540);
}

