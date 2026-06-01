int sub_345260()
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

  v16 = _mm_loadh_ps((const double *)off_2C4E368);
  v0 = j__strlen("Enable/disable fusing matrix instructions.");
  sub_1FEBAE0(&qword_2CDE420, 0, 0);
  si128 = _mm_load_si128((const __m128i *)&v16);
  word_2CDE4A8 = 0;
  xmmword_2CDE4C8 = (__int128)si128;
  byte_2CDE498 = 0;
  qword_2CDE4A0 = (__int64)off_2C474E8;
  qword_2CDE420 = (__int64)off_2C4B848;
  qword_2CDE4B0 = (__int64)off_2BC0B68;
  v2 = j__strlen("fuse-matrix");
  sub_21F3510(&qword_2CDE420, "fuse-matrix", v2);
  word_2CDE4A8 = 257;
  qword_2CDE448 = v0;
  byte_2CDE498 = 1;
  byte_2CDE42A = byte_2CDE42A & 0x9F | 0x20;
  qword_2CDE440 = (__int64)"Enable/disable fusing matrix instructions.";
  sub_21F4400(&qword_2CDE420);
  __cxa_atexit(sub_1FEA450, &qword_2CDE420, &off_2AFC540);
  v3 = j__strlen("Tile size for matrix instruction fusion using square-shaped tiles.");
  sub_1FEBAE0(&qword_2CDE360, 0, 0);
  dword_2CDE3D8 = 0;
  dword_2CDE3E8 = 0;
  qword_2CDE3E0 = (__int64)off_2C472D0;
  xmmword_2CDE408 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  byte_2CDE3EC = 0;
  qword_2CDE360 = (__int64)off_2C4B710;
  qword_2CDE3F0 = (__int64)off_2BC0BF8;
  v4 = j__strlen("fuse-matrix-tile-size");
  sub_21F3510(&qword_2CDE360, "fuse-matrix-tile-size", v4);
  qword_2CDE388 = v3;
  byte_2CDE3EC = 1;
  dword_2CDE3D8 = 4;
  dword_2CDE3E8 = 4;
  byte_2CDE36A = byte_2CDE36A & 0x9F | 0x20;
  qword_2CDE380 = (__int64)"Tile size for matrix instruction fusion using square-shaped tiles.";
  sub_21F4400(&qword_2CDE360);
  __cxa_atexit(sub_1FC9520, &qword_2CDE360, &off_2AFC540);
  v5 = j__strlen("Generate loop nest for tiling.");
  ptr = (void *)"Generate loop nest for tiling.";
  v23 = v5;
  v17 = &v20;
  LODWORD(v20) = 1;
  LOBYTE(v19) = 0;
  v21[0] = &v19;
  sub_21C9390(&unk_2CDE2A0, "fuse-matrix-use-loops", v21, &v20, &ptr, v6, v16.m128_u64[0], v16.m128_u64[1]);
  __cxa_atexit(sub_1FEA450, &unk_2CDE2A0, &off_2AFC540);
  v18 = j__strlen("Force matrix instruction fusion even if not profitable.");
  sub_1FEBAE0(&qword_2CDE1E0, 0, 0);
  v7 = _mm_load_si128((const __m128i *)&v16);
  qword_2CDE1E0 = (__int64)off_2C4B848;
  word_2CDE268 = 0;
  xmmword_2CDE288 = (__int128)v7;
  byte_2CDE258 = 0;
  qword_2CDE260 = (__int64)off_2C474E8;
  qword_2CDE270 = (__int64)off_2BC0B68;
  v8 = j__strlen("force-fuse-matrix");
  sub_21F3510(&qword_2CDE1E0, "force-fuse-matrix", v8);
  word_2CDE268 = 256;
  byte_2CDE258 = 0;
  qword_2CDE200 = (__int64)"Force matrix instruction fusion even if not profitable.";
  byte_2CDE1EA = byte_2CDE1EA & 0x9F | 0x20;
  qword_2CDE208 = v18;
  sub_21F4400(&qword_2CDE1E0);
  __cxa_atexit(sub_1FEA450, &qword_2CDE1E0, &off_2AFC540);
  v9 = j__strlen(
         "Allow the use of FMAs if available and profitable. This may result in different results, due to less rounding error.");
  LOBYTE(v19) = 0;
  v23 = v9;
  ptr = (void *)"Allow the use of FMAs if available and profitable. This may result in different results, due to less rounding error.";
  LODWORD(v20) = 1;
  v21[0] = &v19;
  sub_21C9390(&unk_2CDE120, "matrix-allow-contract", v21, v17, &ptr, v10, v16.m128_u64[0], v16.m128_u64[1]);
  __cxa_atexit(sub_1FEA450, &unk_2CDE120, &off_2AFC540);
  v18 = j__strlen("Enable/disable matrix shape verification.");
  sub_1FEBAE0(&qword_2CDE060, 0, 0);
  v11 = _mm_load_si128((const __m128i *)&v16);
  word_2CDE0E8 = 0;
  xmmword_2CDE108 = (__int128)v11;
  qword_2CDE060 = (__int64)off_2C4B848;
  byte_2CDE0D8 = 0;
  qword_2CDE0E0 = (__int64)off_2C474E8;
  qword_2CDE0F0 = (__int64)off_2BC0B68;
  v12 = j__strlen("verify-matrix-shapes");
  sub_21F3510(&qword_2CDE060, "verify-matrix-shapes", v12);
  qword_2CDE080 = (__int64)"Enable/disable matrix shape verification.";
  word_2CDE0E8 = 256;
  qword_2CDE088 = v18;
  byte_2CDE06A = byte_2CDE06A & 0x9F | 0x20;
  byte_2CDE0D8 = 0;
  sub_21F4400(&qword_2CDE060);
  __cxa_atexit(sub_1FEA450, &qword_2CDE060, &off_2AFC540);
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
  sub_21C9470(&unk_2CDDE00, "matrix-default-layout", v17, v21, &ptr);
  if ( ptr != v24 )
    free(ptr);
  __cxa_atexit(sub_21C92F0, &unk_2CDDE00, &off_2AFC540);
  sub_1FEBAE0(&qword_2CDDD40, 0, 0);
  v13 = _mm_load_si128((const __m128i *)&v16);
  word_2CDDDC8 = 0;
  xmmword_2CDDDE8 = (__int128)v13;
  byte_2CDDDB8 = 0;
  qword_2CDDDC0 = (__int64)off_2C474E8;
  qword_2CDDD40 = (__int64)off_2C4B848;
  qword_2CDDDD0 = (__int64)off_2BC0B68;
  v14 = j__strlen("matrix-print-after-transpose-opt");
  sub_21F3510(&qword_2CDDD40, "matrix-print-after-transpose-opt", v14);
  byte_2CDDDB8 = 0;
  word_2CDDDC8 = 256;
  sub_21F4400(&qword_2CDDD40);
  return __cxa_atexit(sub_1FEA450, &qword_2CDDD40, &off_2AFC540);
}

