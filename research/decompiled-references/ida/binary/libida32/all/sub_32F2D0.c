__m128i *sub_32F2D0()
{
  size_t v0; // r15
  __int64 v1; // rax
  __int64 v2; // rcx
  size_t v3; // rax
  size_t v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  __m128i si128; // xmm0
  size_t v8; // rax
  __m128i v10; // [rsp+0h] [rbp-58h] BYREF
  __m128i v11[4]; // [rsp+10h] [rbp-48h] BYREF

  v0 = j__strlen("Enable adding flow sensitive discriminators");
  unk_2CD2FB0 = 0;
  qword_2CD2FA0 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CD2FA8 = dword_2CD2FA8 & 0x80000000;
  qword_2CD2FE0[1] = 0x100000000LL;
  unk_2CD2FB8 = 0;
  unk_2CD2FC0 = 0;
  unk_2CD2FC8 = 0;
  unk_2CD2FD0 = 0;
  unk_2CD2FD8 = 0;
  qword_2CD2FE0[0] = &qword_2CD2FE0[2];
  qword_2CD2FE0[3] = &qword_2CD2FE0[6];
  qword_2CD2FE0[4] = 1;
  LODWORD(qword_2CD2FE0[5]) = 0;
  BYTE4(qword_2CD2FE0[5]) = 1;
  v1 = sub_21ED2B0("Enable adding flow sensitive discriminators");
  v2 = LODWORD(qword_2CD2FE0[1]);
  if ( (unsigned __int64)LODWORD(qword_2CD2FE0[1]) + 1 > HIDWORD(qword_2CD2FE0[1]) )
  {
    v10.m128i_i64[0] = v1;
    sub_22134E0(qword_2CD2FE0, &qword_2CD2FE0[2], LODWORD(qword_2CD2FE0[1]) + 1LL, 8);
    v2 = LODWORD(qword_2CD2FE0[1]);
    v1 = v10.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CD2FE0[0] + 8 * v2) = v1;
  qword_2CD2FE0[8] = off_2C474E8;
  ++LODWORD(qword_2CD2FE0[1]);
  qword_2CD2FA0 = off_2C4B848;
  LOWORD(qword_2CD2FE0[9]) = 0;
  LOBYTE(qword_2CD2FE0[7]) = 0;
  qword_2CD2FE0[10] = off_2BC0B68;
  *(__m128 *)&qword_2CD2FE0[13] = _mm_loadh_ps((const double *)off_2C4E368);
  v10 = *(__m128i *)&qword_2CD2FE0[13];
  v3 = j__strlen("enable-fs-discriminator");
  sub_21F3510(&qword_2CD2FA0, "enable-fs-discriminator", v3);
  unk_2CD2FC8 = v0;
  BYTE2(dword_2CD2FA8) = BYTE2(dword_2CD2FA8) & 0x9F | 0x20;
  unk_2CD2FC0 = "Enable adding flow sensitive discriminators";
  sub_21F4400(&qword_2CD2FA0);
  __cxa_atexit(sub_1FEA450, &qword_2CD2FA0, &off_2AFC540);
  v4 = j__strlen("Preserve line and column number when merging locations.");
  qword_2CD2EE0 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CD2EE8 = dword_2CD2EE8 & 0x80000000;
  qword_2CD2F20[1] = 0x100000000LL;
  unk_2CD2EF0 = 0;
  unk_2CD2EF8 = 0;
  unk_2CD2F00 = 0;
  unk_2CD2F08 = 0;
  unk_2CD2F10 = 0;
  unk_2CD2F18 = 0;
  qword_2CD2F20[0] = &qword_2CD2F20[2];
  qword_2CD2F20[3] = &qword_2CD2F20[6];
  qword_2CD2F20[4] = 1;
  LODWORD(qword_2CD2F20[5]) = 0;
  BYTE4(qword_2CD2F20[5]) = 1;
  v5 = sub_21ED2B0("Preserve line and column number when merging locations.");
  v6 = LODWORD(qword_2CD2F20[1]);
  si128 = _mm_load_si128(&v10);
  if ( (unsigned __int64)LODWORD(qword_2CD2F20[1]) + 1 > HIDWORD(qword_2CD2F20[1]) )
  {
    v10.m128i_i64[0] = v5;
    v11[0] = si128;
    sub_22134E0(qword_2CD2F20, &qword_2CD2F20[2], LODWORD(qword_2CD2F20[1]) + 1LL, 8);
    v6 = LODWORD(qword_2CD2F20[1]);
    si128 = _mm_load_si128(v11);
    v5 = v10.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CD2F20[0] + 8 * v6) = v5;
  LOWORD(qword_2CD2F20[9]) = 0;
  qword_2CD2F20[8] = off_2C474E8;
  ++LODWORD(qword_2CD2F20[1]);
  qword_2CD2EE0 = off_2C4B848;
  LOBYTE(qword_2CD2F20[7]) = 0;
  qword_2CD2F20[10] = off_2BC0B68;
  *(__m128i *)&qword_2CD2F20[13] = si128;
  v8 = j__strlen("pick-merged-source-locations");
  sub_21F3510(&qword_2CD2EE0, "pick-merged-source-locations", v8);
  unk_2CD2F08 = v4;
  LOBYTE(qword_2CD2F20[7]) = 0;
  LOWORD(qword_2CD2F20[9]) = 256;
  BYTE2(dword_2CD2EE8) = BYTE2(dword_2CD2EE8) & 0x9F | 0x20;
  unk_2CD2F00 = "Preserve line and column number when merging locations.";
  sub_21F4400(&qword_2CD2EE0);
  __cxa_atexit(sub_1FEA450, &qword_2CD2EE0, &off_2AFC540);
  xmmword_2CD2EC0[0] = _mm_load_si128((const __m128i *)&xmmword_23843A0);
  return xmmword_2CD2EC0;
}

