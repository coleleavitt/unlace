int sub_33E410()
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
  qword_2D023F0 = 0;
  v1 = v0;
  qword_2D023F8 = 0;
  qword_2D02400 = 0;
  qword_2D023E0 = (__int64)&off_2C758B0;
  qword_2D023E8 = (unsigned int)qword_2D023E8 & 0x80000000;
  qword_2D02428 = 0x100000000LL;
  qword_2D02408 = 0;
  qword_2D02410 = 0;
  qword_2D02418 = 0;
  qword_2D02420 = (__int64)&unk_2D02430;
  qword_2D02438 = (__int64)&unk_2D02450;
  qword_2D02440 = 1;
  dword_2D02448 = 0;
  byte_2D0244C = 1;
  v2 = sub_2210FF0("Max number of instructions to hoist (default unlimited = -1)");
  v3 = (unsigned int)qword_2D02428;
  v4 = (unsigned int)qword_2D02428 + 1LL;
  if ( v4 > HIDWORD(qword_2D02428) )
  {
    v28.m128i_i64[0] = v2;
    sub_2237220((char *)&unk_2D02430 - 16, &unk_2D02430, v4, 8);
    v3 = (unsigned int)qword_2D02428;
    v2 = v28.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D02420 + 8 * v3) = v2;
  qword_2D02460 = (__int64)off_2C71BB0;
  qword_2D023E0 = (__int64)off_2C75778;
  v28 = (__m128i)_mm_loadh_ps((const double *)&off_2C77900);
  xmmword_2D02488 = (__int128)v28;
  LODWORD(qword_2D02428) = qword_2D02428 + 1;
  dword_2D02458 = 0;
  dword_2D02468 = 0;
  byte_2D0246C = 0;
  qword_2D02470 = (__int64)off_2BEAB68;
  v5 = j__strlen("gvn-max-hoisted");
  sub_2217250(&qword_2D023E0, "gvn-max-hoisted", v5);
  qword_2D02408 = v1;
  dword_2D02458 = -1;
  byte_2D0246C = 1;
  dword_2D02468 = -1;
  BYTE2(qword_2D023E8) = BYTE2(qword_2D023E8) & 0x9F | 0x20;
  qword_2D02400 = (__int64)"Max number of instructions to hoist (default unlimited = -1)";
  sub_2218140(&qword_2D023E0);
  __cxa_atexit(sub_20141D0, &qword_2D023E0, &off_2B25620);
  v6 = j__strlen("Max number of basic blocks on the path between hoisting locations (default = 4, unlimited = -1)");
  qword_2D02360 = (__int64)&unk_2D02370;
  v7 = v6;
  qword_2D02330 = 0;
  qword_2D02320 = (__int64)&off_2C758B0;
  qword_2D02328 = (unsigned int)qword_2D02328 & 0x80000000;
  qword_2D02368 = 0x100000000LL;
  qword_2D02338 = 0;
  qword_2D02340 = 0;
  qword_2D02348 = 0;
  qword_2D02350 = 0;
  qword_2D02358 = 0;
  qword_2D02378 = (__int64)&unk_2D02390;
  qword_2D02380 = 1;
  dword_2D02388 = 0;
  byte_2D0238C = 1;
  v8 = sub_2210FF0("Max number of basic blocks on the path between hoisting locations (default = 4, unlimited = -1)");
  v9 = (unsigned int)qword_2D02368;
  v10 = (unsigned int)qword_2D02368 + 1LL;
  if ( v10 > HIDWORD(qword_2D02368) )
  {
    v29 = v8;
    sub_2237220((char *)&unk_2D02370 - 16, &unk_2D02370, v10, 8);
    v9 = (unsigned int)qword_2D02368;
    v8 = v29;
  }
  v11 = _mm_load_si128(&v28);
  *(_QWORD *)(qword_2D02360 + 8 * v9) = v8;
  qword_2D023A0 = (__int64)off_2C71BB0;
  qword_2D02320 = (__int64)off_2C75778;
  xmmword_2D023C8 = (__int128)v11;
  LODWORD(qword_2D02368) = qword_2D02368 + 1;
  dword_2D02398 = 0;
  dword_2D023A8 = 0;
  byte_2D023AC = 0;
  qword_2D023B0 = (__int64)off_2BEAB68;
  v12 = j__strlen("gvn-hoist-max-bbs");
  sub_2217250(&qword_2D02320, "gvn-hoist-max-bbs", v12);
  qword_2D02348 = v7;
  dword_2D02398 = 4;
  byte_2D023AC = 1;
  dword_2D023A8 = 4;
  BYTE2(qword_2D02328) = BYTE2(qword_2D02328) & 0x9F | 0x20;
  qword_2D02340 = (__int64)"Max number of basic blocks on the path between hoisting locations (default = 4, unlimited = -1)";
  sub_2218140(&qword_2D02320);
  __cxa_atexit(sub_20141D0, &qword_2D02320, &off_2B25620);
  v13 = j__strlen(
          "Hoist instructions from the beginning of the BB up to the maximum specified depth (default = 100, unlimited = -1)");
  qword_2D022A0 = (__int64)&unk_2D022B0;
  v14 = v13;
  qword_2D02270 = 0;
  qword_2D02260 = (__int64)&off_2C758B0;
  qword_2D02268 = (unsigned int)qword_2D02268 & 0x80000000;
  qword_2D022A8 = 0x100000000LL;
  qword_2D02278 = 0;
  qword_2D02280 = 0;
  qword_2D02288 = 0;
  qword_2D02290 = 0;
  qword_2D02298 = 0;
  qword_2D022B8 = (__int64)&unk_2D022D0;
  qword_2D022C0 = 1;
  dword_2D022C8 = 0;
  byte_2D022CC = 1;
  v15 = sub_2210FF0(
          "Hoist instructions from the beginning of the BB up to the maximum specified depth (default = 100, unlimited = -1)");
  v16 = (unsigned int)qword_2D022A8;
  v17 = (unsigned int)qword_2D022A8 + 1LL;
  if ( v17 > HIDWORD(qword_2D022A8) )
  {
    v29 = v15;
    sub_2237220((char *)&unk_2D022B0 - 16, &unk_2D022B0, v17, 8);
    v16 = (unsigned int)qword_2D022A8;
    v15 = v29;
  }
  v18 = _mm_load_si128(&v28);
  *(_QWORD *)(qword_2D022A0 + 8 * v16) = v15;
  qword_2D022E0 = (__int64)off_2C71BB0;
  qword_2D02260 = (__int64)off_2C75778;
  xmmword_2D02308 = (__int128)v18;
  LODWORD(qword_2D022A8) = qword_2D022A8 + 1;
  dword_2D022D8 = 0;
  dword_2D022E8 = 0;
  byte_2D022EC = 0;
  qword_2D022F0 = (__int64)off_2BEAB68;
  v19 = j__strlen("gvn-hoist-max-depth");
  sub_2217250(&qword_2D02260, "gvn-hoist-max-depth", v19);
  qword_2D02288 = v14;
  dword_2D022D8 = 100;
  byte_2D022EC = 1;
  dword_2D022E8 = 100;
  BYTE2(qword_2D02268) = BYTE2(qword_2D02268) & 0x9F | 0x20;
  qword_2D02280 = (__int64)"Hoist instructions from the beginning of the BB up to the maximum specified depth (default = "
                           "100, unlimited = -1)";
  sub_2218140(&qword_2D02260);
  __cxa_atexit(sub_20141D0, &qword_2D02260, &off_2B25620);
  v20 = j__strlen("Maximum length of dependent chains to hoist (default = 10, unlimited = -1)");
  byte_2D0220C = 1;
  qword_2D021B0 = 0;
  v21 = v20;
  qword_2D021A0 = (__int64)&off_2C758B0;
  qword_2D021A8 = (unsigned int)qword_2D021A8 & 0x80000000;
  qword_2D021E8 = 0x100000000LL;
  qword_2D021B8 = 0;
  qword_2D021C0 = 0;
  qword_2D021C8 = 0;
  qword_2D021D0 = 0;
  qword_2D021D8 = 0;
  qword_2D021E0 = (__int64)&unk_2D021F0;
  qword_2D021F8 = (__int64)&unk_2D02210;
  qword_2D02200 = 1;
  dword_2D02208 = 0;
  v22 = sub_2210FF0("Maximum length of dependent chains to hoist (default = 10, unlimited = -1)");
  v23 = (unsigned int)qword_2D021E8;
  v24 = (unsigned int)qword_2D021E8 + 1LL;
  if ( v24 > HIDWORD(qword_2D021E8) )
  {
    v29 = v22;
    sub_2237220((char *)&unk_2D021F0 - 16, &unk_2D021F0, v24, 8);
    v23 = (unsigned int)qword_2D021E8;
    v22 = v29;
  }
  v25 = _mm_load_si128(&v28);
  *(_QWORD *)(qword_2D021E0 + 8 * v23) = v22;
  qword_2D02220 = (__int64)off_2C71BB0;
  qword_2D021A0 = (__int64)off_2C75778;
  xmmword_2D02248 = (__int128)v25;
  LODWORD(qword_2D021E8) = qword_2D021E8 + 1;
  dword_2D02218 = 0;
  dword_2D02228 = 0;
  byte_2D0222C = 0;
  qword_2D02230 = (__int64)off_2BEAB68;
  v26 = j__strlen("gvn-hoist-max-chain-length");
  sub_2217250(&qword_2D021A0, "gvn-hoist-max-chain-length", v26);
  qword_2D021C8 = v21;
  dword_2D02218 = 10;
  byte_2D0222C = 1;
  dword_2D02228 = 10;
  BYTE2(qword_2D021A8) = BYTE2(qword_2D021A8) & 0x9F | 0x20;
  qword_2D021C0 = (__int64)"Maximum length of dependent chains to hoist (default = 10, unlimited = -1)";
  sub_2218140(&qword_2D021A0);
  return __cxa_atexit(sub_20141D0, &qword_2D021A0, &off_2B25620);
}
