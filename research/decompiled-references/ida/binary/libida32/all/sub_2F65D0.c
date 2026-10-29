int __fastcall sub_2F65D0(__int64 a1, __int64 a2)
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
  unk_2CB3550 = 0;
  qword_2CB3540 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CB3548 = dword_2CB3548 & 0x80000000;
  qword_2CB3580[1] = 0x100000000LL;
  unk_2CB3558 = 0;
  unk_2CB3560 = 0;
  unk_2CB3568 = 0;
  unk_2CB3570 = 0;
  unk_2CB3578 = 0;
  qword_2CB3580[0] = &qword_2CB3580[2];
  qword_2CB3580[3] = &qword_2CB3580[6];
  qword_2CB3580[4] = 1;
  LODWORD(qword_2CB3580[5]) = 0;
  BYTE4(qword_2CB3580[5]) = 1;
  v3 = sub_21ED2B0("disable similarity matching, and outlining, across branches for debugging purposes.", a2);
  v4 = LODWORD(qword_2CB3580[1]);
  if ( (unsigned __int64)LODWORD(qword_2CB3580[1]) + 1 > HIDWORD(qword_2CB3580[1]) )
  {
    v14.m128i_i64[0] = v3;
    sub_22134E0(qword_2CB3580, &qword_2CB3580[2], LODWORD(qword_2CB3580[1]) + 1LL, 8);
    v4 = LODWORD(qword_2CB3580[1]);
    v3 = v14.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CB3580[0] + 8 * v4) = v3;
  qword_2CB3580[8] = off_2C474E8;
  ++LODWORD(qword_2CB3580[1]);
  qword_2CB3540 = off_2C4B848;
  LOWORD(qword_2CB3580[9]) = 0;
  LOBYTE(qword_2CB3580[7]) = 0;
  qword_2CB3580[10] = off_2BC0B68;
  *(__m128 *)&qword_2CB3580[13] = _mm_loadh_ps((const double *)off_2C4E368);
  v14 = *(__m128i *)&qword_2CB3580[13];
  v5 = j__strlen("no-ir-sim-branch-matching");
  sub_21F3510(&qword_2CB3540, "no-ir-sim-branch-matching", v5);
  unk_2CB3568 = v2;
  LOBYTE(qword_2CB3580[7]) = 0;
  LOWORD(qword_2CB3580[9]) = 256;
  BYTE2(dword_2CB3548) = BYTE2(dword_2CB3548) & 0x9F | 0x40;
  unk_2CB3560 = "disable similarity matching, and outlining, across branches for debugging purposes.";
  sub_21F4400(&qword_2CB3540);
  __cxa_atexit(sub_1FEA450, &qword_2CB3540, &off_2AFC540);
  v6 = j__strlen("disable outlining indirect calls.");
  qword_2CB3480 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CB3488 = dword_2CB3488 & 0x80000000;
  qword_2CB34C0[1] = 0x100000000LL;
  unk_2CB3490 = 0;
  unk_2CB3498 = 0;
  unk_2CB34A0 = 0;
  unk_2CB34A8 = 0;
  unk_2CB34B0 = 0;
  unk_2CB34B8 = 0;
  qword_2CB34C0[0] = &qword_2CB34C0[2];
  qword_2CB34C0[3] = &qword_2CB34C0[6];
  qword_2CB34C0[4] = 1;
  LODWORD(qword_2CB34C0[5]) = 0;
  BYTE4(qword_2CB34C0[5]) = 1;
  v7 = sub_21ED2B0("disable outlining indirect calls.", &qword_2CB3540);
  v8 = LODWORD(qword_2CB34C0[1]);
  v9 = _mm_load_si128(&v14);
  if ( (unsigned __int64)LODWORD(qword_2CB34C0[1]) + 1 > HIDWORD(qword_2CB34C0[1]) )
  {
    v14.m128i_i64[0] = v7;
    v15 = v9;
    sub_22134E0(qword_2CB34C0, &qword_2CB34C0[2], LODWORD(qword_2CB34C0[1]) + 1LL, 8);
    v8 = LODWORD(qword_2CB34C0[1]);
    v9 = _mm_load_si128(&v15);
    v7 = v14.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CB34C0[0] + 8 * v8) = v7;
  LOWORD(qword_2CB34C0[9]) = 0;
  qword_2CB34C0[8] = off_2C474E8;
  ++LODWORD(qword_2CB34C0[1]);
  qword_2CB3480 = off_2C4B848;
  LOBYTE(qword_2CB34C0[7]) = 0;
  qword_2CB34C0[10] = off_2BC0B68;
  *(__m128i *)&qword_2CB34C0[13] = v9;
  v10 = j__strlen("no-ir-sim-indirect-calls");
  sub_21F3510(&qword_2CB3480, "no-ir-sim-indirect-calls", v10);
  unk_2CB34A8 = v6;
  LOBYTE(qword_2CB34C0[7]) = 0;
  LOWORD(qword_2CB34C0[9]) = 256;
  BYTE2(dword_2CB3488) = BYTE2(dword_2CB3488) & 0x9F | 0x40;
  unk_2CB34A0 = "disable outlining indirect calls.";
  sub_21F4400(&qword_2CB3480);
  __cxa_atexit(sub_1FEA450, &qword_2CB3480, &off_2AFC540);
  v11 = j__strlen("only allow matching call instructions if the name and type signature match.");
  v18 = &v16;
  v20 = v11;
  v19 = "only allow matching call instructions if the name and type signature match.";
  v17 = 2;
  v16 = 0;
  sub_1FEF560(&unk_2CB33C0, "ir-sim-calls-by-name", &v18, &v17, &v19);
  __cxa_atexit(sub_1FEA450, &unk_2CB33C0, &off_2AFC540);
  v12 = j__strlen("Don't match or outline intrinsics");
  v18 = &v16;
  v20 = v12;
  v19 = "Don't match or outline intrinsics";
  v17 = 2;
  v16 = 0;
  sub_1FEF560(&unk_2CB3300, "no-ir-sim-intrinsics", &v18, &v17, &v19);
  return __cxa_atexit(sub_1FEA450, &unk_2CB3300, &off_2AFC540);
}

