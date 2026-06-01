int sub_348620()
{
  size_t v0; // rbx
  __m128i si128; // xmm1
  size_t v2; // rax
  size_t v3; // rbx
  size_t v4; // rax
  size_t v5; // rax
  __int64 v6; // r9
  __m128i v7; // xmm1
  size_t v8; // rax
  size_t v9; // rax
  __int64 v10; // r9
  __m128i v11; // xmm1
  size_t v12; // rax
  __m128i v13; // xmm2
  size_t v14; // rax
  __m128 v16; // [rsp+0h] [rbp-128h] BYREF
  int **v17; // [rsp+10h] [rbp-118h]
  size_t v18; // [rsp+18h] [rbp-110h]
  int v19; // [rsp+24h] [rbp-104h] BYREF
  int *v20; // [rsp+28h] [rbp-100h] BYREF
  _QWORD v21[2]; // [rsp+30h] [rbp-F8h] BYREF
  void *ptr; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v23; // [rsp+48h] [rbp-E0h]
  _QWORD v24[2]; // [rsp+50h] [rbp-D8h] BYREF
  int v25; // [rsp+60h] [rbp-C8h]
  const char *v26; // [rsp+68h] [rbp-C0h]
  __int64 v27; // [rsp+70h] [rbp-B8h]
  const char *v28; // [rsp+78h] [rbp-B0h]
  __int64 v29; // [rsp+80h] [rbp-A8h]
  int v30; // [rsp+88h] [rbp-A0h]
  const char *v31; // [rsp+90h] [rbp-98h]
  __int64 v32; // [rsp+98h] [rbp-90h]

  v16 = _mm_loadh_ps((const double *)off_2C78368);
  v0 = j__strlen("Enable/disable fusing matrix instructions.");
  sub_200F820(&qword_2D08340, 0, 0);
  si128 = _mm_load_si128((const __m128i *)&v16);
  word_2D083C8 = 0;
  xmmword_2D083E8 = (__int128)si128;
  byte_2D083B8 = 0;
  qword_2D083C0 = (__int64)off_2C714E8;
  qword_2D08340 = (__int64)off_2C75848;
  qword_2D083D0 = (__int64)off_2BEAB08;
  v2 = j__strlen("fuse-matrix");
  sub_2217250(&qword_2D08340, "fuse-matrix", v2);
  word_2D083C8 = 257;
  qword_2D08368 = v0;
  byte_2D083B8 = 1;
  byte_2D0834A = byte_2D0834A & 0x9F | 0x20;
  qword_2D08360 = (__int64)"Enable/disable fusing matrix instructions.";
  sub_2218140(&qword_2D08340);
  __cxa_atexit(sub_200E190, &qword_2D08340, &off_2B25620);
  v3 = j__strlen("Tile size for matrix instruction fusion using square-shaped tiles.");
  sub_200F820(&qword_2D08280, 0, 0);
  dword_2D082F8 = 0;
  dword_2D08308 = 0;
  qword_2D08300 = (__int64)off_2C712D0;
  xmmword_2D08328 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  byte_2D0830C = 0;
  qword_2D08280 = (__int64)off_2C75710;
  qword_2D08310 = (__int64)off_2BEAB98;
  v4 = j__strlen("fuse-matrix-tile-size");
  sub_2217250(&qword_2D08280, "fuse-matrix-tile-size", v4);
  qword_2D082A8 = v3;
  byte_2D0830C = 1;
  dword_2D082F8 = 4;
  dword_2D08308 = 4;
  byte_2D0828A = byte_2D0828A & 0x9F | 0x20;
  qword_2D082A0 = (__int64)"Tile size for matrix instruction fusion using square-shaped tiles.";
  sub_2218140(&qword_2D08280);
  __cxa_atexit(sub_1FED260, &qword_2D08280, &off_2B25620);
  v5 = j__strlen("Generate loop nest for tiling.");
  ptr = (void *)"Generate loop nest for tiling.";
  v23 = v5;
  v17 = &v20;
  LODWORD(v20) = 1;
  LOBYTE(v19) = 0;
  v21[0] = &v19;
  sub_21ED0D0(&unk_2D081C0, "fuse-matrix-use-loops", v21, &v20, &ptr, v6, v16.m128_u64[0], v16.m128_u64[1]);
  __cxa_atexit(sub_200E190, &unk_2D081C0, &off_2B25620);
  v18 = j__strlen("Force matrix instruction fusion even if not profitable.");
  sub_200F820(&qword_2D08100, 0, 0);
  v7 = _mm_load_si128((const __m128i *)&v16);
  qword_2D08100 = (__int64)off_2C75848;
  word_2D08188 = 0;
  xmmword_2D081A8 = (__int128)v7;
  byte_2D08178 = 0;
  qword_2D08180 = (__int64)off_2C714E8;
  qword_2D08190 = (__int64)off_2BEAB08;
  v8 = j__strlen("force-fuse-matrix");
  sub_2217250(&qword_2D08100, "force-fuse-matrix", v8);
  word_2D08188 = 256;
  byte_2D08178 = 0;
  qword_2D08120 = (__int64)"Force matrix instruction fusion even if not profitable.";
  byte_2D0810A = byte_2D0810A & 0x9F | 0x20;
  qword_2D08128 = v18;
  sub_2218140(&qword_2D08100);
  __cxa_atexit(sub_200E190, &qword_2D08100, &off_2B25620);
  v9 = j__strlen(
         "Allow the use of FMAs if available and profitable. This may result in different results, due to less rounding error.");
  LOBYTE(v19) = 0;
  v23 = v9;
  ptr = (void *)"Allow the use of FMAs if available and profitable. This may result in different results, due to less rounding error.";
  LODWORD(v20) = 1;
  v21[0] = &v19;
  sub_21ED0D0(&unk_2D08040, "matrix-allow-contract", v21, v17, &ptr, v10, v16.m128_u64[0], v16.m128_u64[1]);
  __cxa_atexit(sub_200E190, &unk_2D08040, &off_2B25620);
  v18 = j__strlen("Enable/disable matrix shape verification.");
  sub_200F820(&qword_2D07F80, 0, 0);
  v11 = _mm_load_si128((const __m128i *)&v16);
  word_2D08008 = 0;
  xmmword_2D08028 = (__int128)v11;
  qword_2D07F80 = (__int64)off_2C75848;
  byte_2D07FF8 = 0;
  qword_2D08000 = (__int64)off_2C714E8;
  qword_2D08010 = (__int64)off_2BEAB08;
  v12 = j__strlen("verify-matrix-shapes");
  sub_2217250(&qword_2D07F80, "verify-matrix-shapes", v12);
  qword_2D07FA0 = (__int64)"Enable/disable matrix shape verification.";
  word_2D08008 = 256;
  qword_2D07FA8 = v18;
  byte_2D07F8A = byte_2D07F8A & 0x9F | 0x20;
  byte_2D07FF8 = 0;
  sub_2218140(&qword_2D07F80);
  __cxa_atexit(sub_200E190, &qword_2D07F80, &off_2B25620);
  ptr = v24;
  v24[0] = "column-major";
  v26 = "Use column-major layout";
  v28 = "row-major";
  v31 = "Use row-major layout";
  v23 = 0x400000002LL;
  v24[1] = 12;
  v25 = 0;
  v27 = 23;
  v29 = 9;
  v30 = 1;
  v32 = 20;
  v21[1] = j__strlen("Sets the default matrix layout");
  v21[0] = "Sets the default matrix layout";
  v19 = 0;
  v20 = &v19;
  sub_21ED1B0(&unk_2D07D20, "matrix-default-layout", v17, v21, &ptr);
  if ( ptr != v24 )
    free(ptr);
  __cxa_atexit(sub_21ED030, &unk_2D07D20, &off_2B25620);
  sub_200F820(&qword_2D07C60, 0, 0);
  v13 = _mm_load_si128((const __m128i *)&v16);
  word_2D07CE8 = 0;
  xmmword_2D07D08 = (__int128)v13;
  byte_2D07CD8 = 0;
  qword_2D07CE0 = (__int64)off_2C714E8;
  qword_2D07C60 = (__int64)off_2C75848;
  qword_2D07CF0 = (__int64)off_2BEAB08;
  v14 = j__strlen("matrix-print-after-transpose-opt");
  sub_2217250(&qword_2D07C60, "matrix-print-after-transpose-opt", v14);
  byte_2D07CD8 = 0;
  word_2D07CE8 = 256;
  sub_2218140(&qword_2D07C60);
  return __cxa_atexit(sub_200E190, &qword_2D07C60, &off_2B25620);
}
