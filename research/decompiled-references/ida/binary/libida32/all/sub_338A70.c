int sub_338A70()
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
  sub_21C5B60(&unk_2CD7740, "dfa-jump-view-cfg-before", &v18, &v16, &v17);
  __cxa_atexit(sub_1FEA450, &unk_2CD7740, &off_2AFC540);
  v17 = &v15;
  v15 = 1;
  v16 = 1;
  v1 = j__strlen("Exit early if an unpredictable value come from the same loop");
  v18 = "Exit early if an unpredictable value come from the same loop";
  v19 = v1;
  sub_21C5B60(&unk_2CD7680, "dfa-early-exit-heuristic", &v18, &v16, &v17);
  __cxa_atexit(sub_1FEA450, &unk_2CD7680, &off_2AFC540);
  v2 = j__strlen("Max number of blocks searched to find a threading path");
  sub_1FEBAE0(&qword_2CD75C0, 0, 0);
  dword_2CD7638 = 0;
  dword_2CD7648 = 0;
  v14 = (__m128i)_mm_loadh_ps((const double *)off_2C4E4F8);
  xmmword_2CD7668 = (__int128)v14;
  qword_2CD7640 = (__int64)off_2C472D0;
  qword_2CD75C0 = (__int64)off_2C4B710;
  qword_2CD7650 = (__int64)off_2BC0BF8;
  byte_2CD764C = 0;
  v3 = j__strlen("dfa-max-path-length");
  sub_21F3510(&qword_2CD75C0, "dfa-max-path-length", v3);
  qword_2CD75E8 = v2;
  qword_2CD75E0 = (__int64)"Max number of blocks searched to find a threading path";
  dword_2CD7638 = 20;
  byte_2CD764C = 1;
  dword_2CD7648 = 20;
  byte_2CD75CA = byte_2CD75CA & 0x9F | 0x20;
  sub_21F4400(&qword_2CD75C0);
  __cxa_atexit(sub_1FC9520, &qword_2CD75C0, &off_2AFC540);
  v4 = j__strlen("Max number of blocks visited while enumerating paths around a switch");
  sub_1FEBAE0(&qword_2CD7500, 0, 0);
  v5 = _mm_load_si128(&v14);
  qword_2CD7580 = (__int64)off_2C472D0;
  qword_2CD7500 = (__int64)off_2C4B710;
  xmmword_2CD75A8 = (__int128)v5;
  qword_2CD7590 = (__int64)off_2BC0BF8;
  dword_2CD7578 = 0;
  dword_2CD7588 = 0;
  byte_2CD758C = 0;
  v6 = j__strlen("dfa-max-num-visited-paths");
  sub_21F3510(&qword_2CD7500, "dfa-max-num-visited-paths", v6);
  qword_2CD7528 = v4;
  qword_2CD7520 = (__int64)"Max number of blocks visited while enumerating paths around a switch";
  dword_2CD7578 = 2500;
  byte_2CD758C = 1;
  dword_2CD7588 = 2500;
  byte_2CD750A = byte_2CD750A & 0x9F | 0x20;
  sub_21F4400(&qword_2CD7500);
  __cxa_atexit(sub_1FC9520, &qword_2CD7500, &off_2AFC540);
  v7 = j__strlen("Max number of paths enumerated around a switch");
  sub_1FEBAE0(&qword_2CD7440, 0, 0);
  v8 = _mm_load_si128(&v14);
  qword_2CD74C0 = (__int64)off_2C472D0;
  qword_2CD7440 = (__int64)off_2C4B710;
  xmmword_2CD74E8 = (__int128)v8;
  qword_2CD74D0 = (__int64)off_2BC0BF8;
  dword_2CD74B8 = 0;
  dword_2CD74C8 = 0;
  byte_2CD74CC = 0;
  v9 = j__strlen("dfa-max-num-paths");
  sub_21F3510(&qword_2CD7440, "dfa-max-num-paths", v9);
  qword_2CD7468 = v7;
  qword_2CD7460 = (__int64)"Max number of paths enumerated around a switch";
  dword_2CD74B8 = 200;
  byte_2CD74CC = 1;
  dword_2CD74C8 = 200;
  byte_2CD744A = byte_2CD744A & 0x9F | 0x20;
  sub_21F4400(&qword_2CD7440);
  __cxa_atexit(sub_1FC9520, &qword_2CD7440, &off_2AFC540);
  v10 = j__strlen("Maximum cost accepted for the transformation");
  sub_1FEBAE0(&qword_2CD7380, 0, 0);
  v11 = _mm_load_si128(&v14);
  qword_2CD7400 = (__int64)off_2C472D0;
  qword_2CD7380 = (__int64)off_2C4B710;
  xmmword_2CD7428 = (__int128)v11;
  qword_2CD7410 = (__int64)off_2BC0BF8;
  dword_2CD73F8 = 0;
  dword_2CD7408 = 0;
  byte_2CD740C = 0;
  v12 = j__strlen("dfa-cost-threshold");
  sub_21F3510(&qword_2CD7380, "dfa-cost-threshold", v12);
  qword_2CD73A8 = v10;
  qword_2CD73A0 = (__int64)"Maximum cost accepted for the transformation";
  dword_2CD73F8 = 50;
  byte_2CD740C = 1;
  dword_2CD7408 = 50;
  byte_2CD738A = byte_2CD738A & 0x9F | 0x20;
  sub_21F4400(&qword_2CD7380);
  return __cxa_atexit(sub_1FC9520, &qword_2CD7380, &off_2AFC540);
}

