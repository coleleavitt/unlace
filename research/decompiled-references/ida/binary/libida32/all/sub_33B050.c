int sub_33B050()
{
  size_t v0; // rax
  __int64 v1; // r13
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  size_t v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm1
  size_t v12; // rax
  size_t v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __m128i v18; // xmm2
  size_t v19; // rax
  size_t v20; // rax
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __m128i v25; // xmm3
  size_t v26; // rax
  __m128i v28; // [rsp+0h] [rbp-58h] BYREF
  __int64 v29; // [rsp+18h] [rbp-40h]

  v0 = j__strlen("Max number of instructions to hoist (default unlimited = -1)");
  qword_2CD84D0 = 0;
  v1 = v0;
  qword_2CD84D8 = 0;
  qword_2CD84E0 = 0;
  qword_2CD84C0 = (__int64)&off_2C4B8B0;
  qword_2CD84C8 = (unsigned int)qword_2CD84C8 & 0x80000000;
  qword_2CD8508 = 0x100000000LL;
  qword_2CD84E8 = 0;
  qword_2CD84F0 = 0;
  qword_2CD84F8 = 0;
  qword_2CD8500 = (__int64)&unk_2CD8510;
  qword_2CD8518 = (__int64)&unk_2CD8530;
  qword_2CD8520 = 1;
  dword_2CD8528 = 0;
  byte_2CD852C = 1;
  v2 = sub_21ED2B0("Max number of instructions to hoist (default unlimited = -1)");
  v3 = (unsigned int)qword_2CD8508;
  v4 = (unsigned int)qword_2CD8508 + 1LL;
  if ( v4 > HIDWORD(qword_2CD8508) )
  {
    v28.m128i_i64[0] = v2;
    sub_22134E0((char *)&unk_2CD8510 - 16, &unk_2CD8510, v4, 8);
    v3 = (unsigned int)qword_2CD8508;
    v2 = v28.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CD8500 + 8 * v3) = v2;
  qword_2CD8540 = (__int64)off_2C47BB0;
  qword_2CD84C0 = (__int64)off_2C4B778;
  v28 = (__m128i)_mm_loadh_ps((const double *)&off_2C4D900);
  xmmword_2CD8568 = (__int128)v28;
  LODWORD(qword_2CD8508) = qword_2CD8508 + 1;
  dword_2CD8538 = 0;
  dword_2CD8548 = 0;
  byte_2CD854C = 0;
  qword_2CD8550 = (__int64)off_2BC0BC8;
  v5 = j__strlen("gvn-max-hoisted");
  sub_21F3510(&qword_2CD84C0, "gvn-max-hoisted", v5);
  qword_2CD84E8 = v1;
  dword_2CD8538 = -1;
  byte_2CD854C = 1;
  dword_2CD8548 = -1;
  BYTE2(qword_2CD84C8) = BYTE2(qword_2CD84C8) & 0x9F | 0x20;
  qword_2CD84E0 = (__int64)"Max number of instructions to hoist (default unlimited = -1)";
  sub_21F4400(&qword_2CD84C0);
  __cxa_atexit(sub_1FF0490, &qword_2CD84C0, &off_2AFC540);
  v6 = j__strlen("Max number of basic blocks on the path between hoisting locations (default = 4, unlimited = -1)");
  qword_2CD8440 = (__int64)&unk_2CD8450;
  v7 = v6;
  qword_2CD8410 = 0;
  qword_2CD8400 = (__int64)&off_2C4B8B0;
  qword_2CD8408 = (unsigned int)qword_2CD8408 & 0x80000000;
  qword_2CD8448 = 0x100000000LL;
  qword_2CD8418 = 0;
  qword_2CD8420 = 0;
  qword_2CD8428 = 0;
  qword_2CD8430 = 0;
  qword_2CD8438 = 0;
  qword_2CD8458 = (__int64)&unk_2CD8470;
  qword_2CD8460 = 1;
  dword_2CD8468 = 0;
  byte_2CD846C = 1;
  v8 = sub_21ED2B0("Max number of basic blocks on the path between hoisting locations (default = 4, unlimited = -1)");
  v9 = (unsigned int)qword_2CD8448;
  v10 = (unsigned int)qword_2CD8448 + 1LL;
  if ( v10 > HIDWORD(qword_2CD8448) )
  {
    v29 = v8;
    sub_22134E0((char *)&unk_2CD8450 - 16, &unk_2CD8450, v10, 8);
    v9 = (unsigned int)qword_2CD8448;
    v8 = v29;
  }
  v11 = _mm_load_si128(&v28);
  *(_QWORD *)(qword_2CD8440 + 8 * v9) = v8;
  qword_2CD8480 = (__int64)off_2C47BB0;
  qword_2CD8400 = (__int64)off_2C4B778;
  xmmword_2CD84A8 = (__int128)v11;
  LODWORD(qword_2CD8448) = qword_2CD8448 + 1;
  dword_2CD8478 = 0;
  dword_2CD8488 = 0;
  byte_2CD848C = 0;
  qword_2CD8490 = (__int64)off_2BC0BC8;
  v12 = j__strlen("gvn-hoist-max-bbs");
  sub_21F3510(&qword_2CD8400, "gvn-hoist-max-bbs", v12);
  qword_2CD8428 = v7;
  dword_2CD8478 = 4;
  byte_2CD848C = 1;
  dword_2CD8488 = 4;
  BYTE2(qword_2CD8408) = BYTE2(qword_2CD8408) & 0x9F | 0x20;
  qword_2CD8420 = (__int64)"Max number of basic blocks on the path between hoisting locations (default = 4, unlimited = -1)";
  sub_21F4400(&qword_2CD8400);
  __cxa_atexit(sub_1FF0490, &qword_2CD8400, &off_2AFC540);
  v13 = j__strlen(
          "Hoist instructions from the beginning of the BB up to the maximum specified depth (default = 100, unlimited = -1)");
  qword_2CD8380 = (__int64)&unk_2CD8390;
  v14 = v13;
  qword_2CD8350 = 0;
  qword_2CD8340 = (__int64)&off_2C4B8B0;
  qword_2CD8348 = (unsigned int)qword_2CD8348 & 0x80000000;
  qword_2CD8388 = 0x100000000LL;
  qword_2CD8358 = 0;
  qword_2CD8360 = 0;
  qword_2CD8368 = 0;
  qword_2CD8370 = 0;
  qword_2CD8378 = 0;
  qword_2CD8398 = (__int64)&unk_2CD83B0;
  qword_2CD83A0 = 1;
  dword_2CD83A8 = 0;
  byte_2CD83AC = 1;
  v15 = sub_21ED2B0(
          "Hoist instructions from the beginning of the BB up to the maximum specified depth (default = 100, unlimited = -1)");
  v16 = (unsigned int)qword_2CD8388;
  v17 = (unsigned int)qword_2CD8388 + 1LL;
  if ( v17 > HIDWORD(qword_2CD8388) )
  {
    v29 = v15;
    sub_22134E0((char *)&unk_2CD8390 - 16, &unk_2CD8390, v17, 8);
    v16 = (unsigned int)qword_2CD8388;
    v15 = v29;
  }
  v18 = _mm_load_si128(&v28);
  *(_QWORD *)(qword_2CD8380 + 8 * v16) = v15;
  qword_2CD83C0 = (__int64)off_2C47BB0;
  qword_2CD8340 = (__int64)off_2C4B778;
  xmmword_2CD83E8 = (__int128)v18;
  LODWORD(qword_2CD8388) = qword_2CD8388 + 1;
  dword_2CD83B8 = 0;
  dword_2CD83C8 = 0;
  byte_2CD83CC = 0;
  qword_2CD83D0 = (__int64)off_2BC0BC8;
  v19 = j__strlen("gvn-hoist-max-depth");
  sub_21F3510(&qword_2CD8340, "gvn-hoist-max-depth", v19);
  qword_2CD8368 = v14;
  dword_2CD83B8 = 100;
  byte_2CD83CC = 1;
  dword_2CD83C8 = 100;
  BYTE2(qword_2CD8348) = BYTE2(qword_2CD8348) & 0x9F | 0x20;
  qword_2CD8360 = (__int64)"Hoist instructions from the beginning of the BB up to the maximum specified depth (default = "
                           "100, unlimited = -1)";
  sub_21F4400(&qword_2CD8340);
  __cxa_atexit(sub_1FF0490, &qword_2CD8340, &off_2AFC540);
  v20 = j__strlen("Maximum length of dependent chains to hoist (default = 10, unlimited = -1)");
  byte_2CD82EC = 1;
  qword_2CD8290 = 0;
  v21 = v20;
  qword_2CD8280 = (__int64)&off_2C4B8B0;
  qword_2CD8288 = (unsigned int)qword_2CD8288 & 0x80000000;
  qword_2CD82C8 = 0x100000000LL;
  qword_2CD8298 = 0;
  qword_2CD82A0 = 0;
  qword_2CD82A8 = 0;
  qword_2CD82B0 = 0;
  qword_2CD82B8 = 0;
  qword_2CD82C0 = (__int64)&unk_2CD82D0;
  qword_2CD82D8 = (__int64)&unk_2CD82F0;
  qword_2CD82E0 = 1;
  dword_2CD82E8 = 0;
  v22 = sub_21ED2B0("Maximum length of dependent chains to hoist (default = 10, unlimited = -1)");
  v23 = (unsigned int)qword_2CD82C8;
  v24 = (unsigned int)qword_2CD82C8 + 1LL;
  if ( v24 > HIDWORD(qword_2CD82C8) )
  {
    v29 = v22;
    sub_22134E0((char *)&unk_2CD82D0 - 16, &unk_2CD82D0, v24, 8);
    v23 = (unsigned int)qword_2CD82C8;
    v22 = v29;
  }
  v25 = _mm_load_si128(&v28);
  *(_QWORD *)(qword_2CD82C0 + 8 * v23) = v22;
  qword_2CD8300 = (__int64)off_2C47BB0;
  qword_2CD8280 = (__int64)off_2C4B778;
  xmmword_2CD8328 = (__int128)v25;
  LODWORD(qword_2CD82C8) = qword_2CD82C8 + 1;
  dword_2CD82F8 = 0;
  dword_2CD8308 = 0;
  byte_2CD830C = 0;
  qword_2CD8310 = (__int64)off_2BC0BC8;
  v26 = j__strlen("gvn-hoist-max-chain-length");
  sub_21F3510(&qword_2CD8280, "gvn-hoist-max-chain-length", v26);
  qword_2CD82A8 = v21;
  dword_2CD82F8 = 10;
  byte_2CD830C = 1;
  dword_2CD8308 = 10;
  BYTE2(qword_2CD8288) = BYTE2(qword_2CD8288) & 0x9F | 0x20;
  qword_2CD82A0 = (__int64)"Maximum length of dependent chains to hoist (default = 10, unlimited = -1)";
  sub_21F4400(&qword_2CD8280);
  return __cxa_atexit(sub_1FF0490, &qword_2CD8280, &off_2AFC540);
}

