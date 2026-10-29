int sub_33BE30()
{
  size_t v0; // rax
  size_t v1; // rax
  size_t v2; // r14
  size_t v3; // rax
  size_t v4; // r14
  __m128i v5; // xmm0
  size_t v6; // rax
  size_t v7; // r14
  __m128i v8; // xmm0
  size_t v9; // rax
  size_t v10; // r14
  __m128i v11; // xmm0
  size_t v12; // rax
  __m128i v14; // [rsp+0h] [rbp-58h] BYREF
  char v15; // [rsp+13h] [rbp-45h] BYREF
  int v16; // [rsp+14h] [rbp-44h] BYREF
  char *v17; // [rsp+18h] [rbp-40h] BYREF
  const char *v18; // [rsp+20h] [rbp-38h] BYREF
  size_t v19; // [rsp+28h] [rbp-30h]

  v15 = 0;
  v17 = &v15;
  v16 = 1;
  v0 = j__strlen("View the CFG before DFA Jump Threading");
  v18 = "View the CFG before DFA Jump Threading";
  v19 = v0;
  sub_21E98A0(&unk_2D01660, "dfa-jump-view-cfg-before", &v18, &v16, &v17);
  __cxa_atexit(sub_200E190, &unk_2D01660, &off_2B25620);
  v17 = &v15;
  v15 = 1;
  v16 = 1;
  v1 = j__strlen("Exit early if an unpredictable value come from the same loop");
  v18 = "Exit early if an unpredictable value come from the same loop";
  v19 = v1;
  sub_21E98A0(&unk_2D015A0, "dfa-early-exit-heuristic", &v18, &v16, &v17);
  __cxa_atexit(sub_200E190, &unk_2D015A0, &off_2B25620);
  v2 = j__strlen("Max number of blocks searched to find a threading path");
  sub_200F820(&qword_2D014E0, 0, 0);
  dword_2D01558 = 0;
  dword_2D01568 = 0;
  v14 = (__m128i)_mm_loadh_ps((const double *)off_2C784F8);
  xmmword_2D01588 = (__int128)v14;
  qword_2D01560 = (__int64)off_2C712D0;
  qword_2D014E0 = (__int64)off_2C75710;
  qword_2D01570 = (__int64)off_2BEAB98;
  byte_2D0156C = 0;
  v3 = j__strlen("dfa-max-path-length");
  sub_2217250(&qword_2D014E0, "dfa-max-path-length", v3);
  qword_2D01508 = v2;
  qword_2D01500 = (__int64)"Max number of blocks searched to find a threading path";
  dword_2D01558 = 20;
  byte_2D0156C = 1;
  dword_2D01568 = 20;
  byte_2D014EA = byte_2D014EA & 0x9F | 0x20;
  sub_2218140(&qword_2D014E0);
  __cxa_atexit(sub_1FED260, &qword_2D014E0, &off_2B25620);
  v4 = j__strlen("Max number of blocks visited while enumerating paths around a switch");
  sub_200F820(&qword_2D01420, 0, 0);
  v5 = _mm_load_si128(&v14);
  qword_2D014A0 = (__int64)off_2C712D0;
  qword_2D01420 = (__int64)off_2C75710;
  xmmword_2D014C8 = (__int128)v5;
  qword_2D014B0 = (__int64)off_2BEAB98;
  dword_2D01498 = 0;
  dword_2D014A8 = 0;
  byte_2D014AC = 0;
  v6 = j__strlen("dfa-max-num-visited-paths");
  sub_2217250(&qword_2D01420, "dfa-max-num-visited-paths", v6);
  qword_2D01448 = v4;
  qword_2D01440 = (__int64)"Max number of blocks visited while enumerating paths around a switch";
  dword_2D01498 = 2500;
  byte_2D014AC = 1;
  dword_2D014A8 = 2500;
  byte_2D0142A = byte_2D0142A & 0x9F | 0x20;
  sub_2218140(&qword_2D01420);
  __cxa_atexit(sub_1FED260, &qword_2D01420, &off_2B25620);
  v7 = j__strlen("Max number of paths enumerated around a switch");
  sub_200F820(&qword_2D01360, 0, 0);
  v8 = _mm_load_si128(&v14);
  qword_2D013E0 = (__int64)off_2C712D0;
  qword_2D01360 = (__int64)off_2C75710;
  xmmword_2D01408 = (__int128)v8;
  qword_2D013F0 = (__int64)off_2BEAB98;
  dword_2D013D8 = 0;
  dword_2D013E8 = 0;
  byte_2D013EC = 0;
  v9 = j__strlen("dfa-max-num-paths");
  sub_2217250(&qword_2D01360, "dfa-max-num-paths", v9);
  qword_2D01388 = v7;
  qword_2D01380 = (__int64)"Max number of paths enumerated around a switch";
  dword_2D013D8 = 200;
  byte_2D013EC = 1;
  dword_2D013E8 = 200;
  byte_2D0136A = byte_2D0136A & 0x9F | 0x20;
  sub_2218140(&qword_2D01360);
  __cxa_atexit(sub_1FED260, &qword_2D01360, &off_2B25620);
  v10 = j__strlen("Maximum cost accepted for the transformation");
  sub_200F820(&qword_2D012A0, 0, 0);
  v11 = _mm_load_si128(&v14);
  qword_2D01320 = (__int64)off_2C712D0;
  qword_2D012A0 = (__int64)off_2C75710;
  xmmword_2D01348 = (__int128)v11;
  qword_2D01330 = (__int64)off_2BEAB98;
  dword_2D01318 = 0;
  dword_2D01328 = 0;
  byte_2D0132C = 0;
  v12 = j__strlen("dfa-cost-threshold");
  sub_2217250(&qword_2D012A0, "dfa-cost-threshold", v12);
  qword_2D012C8 = v10;
  qword_2D012C0 = (__int64)"Maximum cost accepted for the transformation";
  dword_2D01318 = 50;
  byte_2D0132C = 1;
  dword_2D01328 = 50;
  byte_2D012AA = byte_2D012AA & 0x9F | 0x20;
  sub_2218140(&qword_2D012A0);
  return __cxa_atexit(sub_1FED260, &qword_2D012A0, &off_2B25620);
}
