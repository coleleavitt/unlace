int __fastcall sub_2F9990(__int64 a1, __int64 a2)
{
  size_t v2; // r15
  __int64 v3; // rax
  __int64 v4; // rcx
  size_t v5; // rax
  size_t v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __m128i v9; // xmm0
  size_t v10; // rax
  size_t v11; // rax
  size_t v12; // rax
  __m128i v14; // [rsp+0h] [rbp-78h] BYREF
  __m128i v15; // [rsp+10h] [rbp-68h] BYREF
  char v16; // [rsp+23h] [rbp-55h] BYREF
  int v17; // [rsp+24h] [rbp-54h] BYREF
  char *v18; // [rsp+28h] [rbp-50h] BYREF
  const char *v19; // [rsp+30h] [rbp-48h] BYREF
  size_t v20; // [rsp+38h] [rbp-40h]

  v2 = j__strlen("disable similarity matching, and outlining, across branches for debugging purposes.");
  unk_2CDD470 = 0;
  qword_2CDD460 = &off_2C758B0;
  *(_QWORD *)&dword_2CDD468 = dword_2CDD468 & 0x80000000;
  qword_2CDD4A0[1] = 0x100000000LL;
  unk_2CDD478 = 0;
  unk_2CDD480 = 0;
  unk_2CDD488 = 0;
  unk_2CDD490 = 0;
  unk_2CDD498 = 0;
  qword_2CDD4A0[0] = &qword_2CDD4A0[2];
  qword_2CDD4A0[3] = &qword_2CDD4A0[6];
  qword_2CDD4A0[4] = 1;
  LODWORD(qword_2CDD4A0[5]) = 0;
  BYTE4(qword_2CDD4A0[5]) = 1;
  v3 = sub_2210FF0("disable similarity matching, and outlining, across branches for debugging purposes.", a2);
  v4 = LODWORD(qword_2CDD4A0[1]);
  if ( (unsigned __int64)LODWORD(qword_2CDD4A0[1]) + 1 > HIDWORD(qword_2CDD4A0[1]) )
  {
    v14.m128i_i64[0] = v3;
    sub_2237220(qword_2CDD4A0, &qword_2CDD4A0[2], LODWORD(qword_2CDD4A0[1]) + 1LL, 8);
    v4 = LODWORD(qword_2CDD4A0[1]);
    v3 = v14.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CDD4A0[0] + 8 * v4) = v3;
  qword_2CDD4A0[8] = off_2C714E8;
  ++LODWORD(qword_2CDD4A0[1]);
  qword_2CDD460 = off_2C75848;
  LOWORD(qword_2CDD4A0[9]) = 0;
  LOBYTE(qword_2CDD4A0[7]) = 0;
  qword_2CDD4A0[10] = off_2BEAB08;
  *(__m128 *)&qword_2CDD4A0[13] = _mm_loadh_ps((const double *)off_2C78368);
  v14 = *(__m128i *)&qword_2CDD4A0[13];
  v5 = j__strlen("no-ir-sim-branch-matching");
  sub_2217250(&qword_2CDD460, "no-ir-sim-branch-matching", v5);
  unk_2CDD488 = v2;
  LOBYTE(qword_2CDD4A0[7]) = 0;
  LOWORD(qword_2CDD4A0[9]) = 256;
  BYTE2(dword_2CDD468) = BYTE2(dword_2CDD468) & 0x9F | 0x40;
  unk_2CDD480 = "disable similarity matching, and outlining, across branches for debugging purposes.";
  sub_2218140(&qword_2CDD460);
  __cxa_atexit(sub_200E190, &qword_2CDD460, &off_2B25620);
  v6 = j__strlen("disable outlining indirect calls.");
  qword_2CDD3A0 = &off_2C758B0;
  *(_QWORD *)&dword_2CDD3A8 = dword_2CDD3A8 & 0x80000000;
  qword_2CDD3E0[1] = 0x100000000LL;
  unk_2CDD3B0 = 0;
  unk_2CDD3B8 = 0;
  unk_2CDD3C0 = 0;
  unk_2CDD3C8 = 0;
  unk_2CDD3D0 = 0;
  unk_2CDD3D8 = 0;
  qword_2CDD3E0[0] = &qword_2CDD3E0[2];
  qword_2CDD3E0[3] = &qword_2CDD3E0[6];
  qword_2CDD3E0[4] = 1;
  LODWORD(qword_2CDD3E0[5]) = 0;
  BYTE4(qword_2CDD3E0[5]) = 1;
  v7 = sub_2210FF0("disable outlining indirect calls.", &qword_2CDD460);
  v8 = LODWORD(qword_2CDD3E0[1]);
  v9 = _mm_load_si128(&v14);
  if ( (unsigned __int64)LODWORD(qword_2CDD3E0[1]) + 1 > HIDWORD(qword_2CDD3E0[1]) )
  {
    v14.m128i_i64[0] = v7;
    v15 = v9;
    sub_2237220(qword_2CDD3E0, &qword_2CDD3E0[2], LODWORD(qword_2CDD3E0[1]) + 1LL, 8);
    v8 = LODWORD(qword_2CDD3E0[1]);
    v9 = _mm_load_si128(&v15);
    v7 = v14.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CDD3E0[0] + 8 * v8) = v7;
  LOWORD(qword_2CDD3E0[9]) = 0;
  qword_2CDD3E0[8] = off_2C714E8;
  ++LODWORD(qword_2CDD3E0[1]);
  qword_2CDD3A0 = off_2C75848;
  LOBYTE(qword_2CDD3E0[7]) = 0;
  qword_2CDD3E0[10] = off_2BEAB08;
  *(__m128i *)&qword_2CDD3E0[13] = v9;
  v10 = j__strlen("no-ir-sim-indirect-calls");
  sub_2217250(&qword_2CDD3A0, "no-ir-sim-indirect-calls", v10);
  unk_2CDD3C8 = v6;
  LOBYTE(qword_2CDD3E0[7]) = 0;
  LOWORD(qword_2CDD3E0[9]) = 256;
  BYTE2(dword_2CDD3A8) = BYTE2(dword_2CDD3A8) & 0x9F | 0x40;
  unk_2CDD3C0 = "disable outlining indirect calls.";
  sub_2218140(&qword_2CDD3A0);
  __cxa_atexit(sub_200E190, &qword_2CDD3A0, &off_2B25620);
  v11 = j__strlen("only allow matching call instructions if the name and type signature match.");
  v18 = &v16;
  v20 = v11;
  v19 = "only allow matching call instructions if the name and type signature match.";
  v17 = 2;
  v16 = 0;
  sub_20132A0(&unk_2CDD2E0, "ir-sim-calls-by-name", &v18, &v17, &v19);
  __cxa_atexit(sub_200E190, &unk_2CDD2E0, &off_2B25620);
  v12 = j__strlen("Don't match or outline intrinsics");
  v18 = &v16;
  v20 = v12;
  v19 = "Don't match or outline intrinsics";
  v17 = 2;
  v16 = 0;
  sub_20132A0(&unk_2CDD220, "no-ir-sim-intrinsics", &v18, &v17, &v19);
  return __cxa_atexit(sub_200E190, &unk_2CDD220, &off_2B25620);
}
