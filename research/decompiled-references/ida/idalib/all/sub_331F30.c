int sub_331F30()
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

  v0 = j__strlen("Use ConstantInt's native fixed-length vector splat support.");
  qword_2CFCD30 = 0;
  v1 = v0;
  qword_2CFCD38 = 0;
  qword_2CFCD40 = 0;
  qword_2CFCD20 = (__int64)&off_2C758B0;
  qword_2CFCD28 = (unsigned int)qword_2CFCD28 & 0x80000000;
  qword_2CFCD68 = 0x100000000LL;
  qword_2CFCD48 = 0;
  qword_2CFCD50 = 0;
  qword_2CFCD58 = 0;
  qword_2CFCD60 = (__int64)&unk_2CFCD70;
  qword_2CFCD78 = (__int64)&unk_2CFCD90;
  qword_2CFCD80 = 1;
  dword_2CFCD88 = 0;
  byte_2CFCD8C = 1;
  v2 = sub_2210FF0("Use ConstantInt's native fixed-length vector splat support.");
  v3 = (unsigned int)qword_2CFCD68;
  v4 = (unsigned int)qword_2CFCD68 + 1LL;
  if ( v4 > HIDWORD(qword_2CFCD68) )
  {
    v28.m128i_i64[0] = v2;
    sub_2237220((char *)&unk_2CFCD70 - 16, &unk_2CFCD70, v4, 8);
    v3 = (unsigned int)qword_2CFCD68;
    v2 = v28.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CFCD60 + 8 * v3) = v2;
  qword_2CFCDA0 = (__int64)off_2C714E8;
  qword_2CFCD20 = (__int64)off_2C75848;
  v28 = (__m128i)_mm_loadh_ps((const double *)off_2C78368);
  word_2CFCDA8 = 0;
  xmmword_2CFCDC8 = (__int128)v28;
  LODWORD(qword_2CFCD68) = qword_2CFCD68 + 1;
  byte_2CFCD98 = 0;
  qword_2CFCDB0 = (__int64)off_2BEAB08;
  v5 = j__strlen("use-constant-int-for-fixed-length-splat");
  sub_2217250(&qword_2CFCD20, "use-constant-int-for-fixed-length-splat", v5);
  word_2CFCDA8 = 256;
  qword_2CFCD48 = v1;
  byte_2CFCD98 = 0;
  BYTE2(qword_2CFCD28) = BYTE2(qword_2CFCD28) & 0x9F | 0x20;
  qword_2CFCD40 = (__int64)"Use ConstantInt's native fixed-length vector splat support.";
  sub_2218140(&qword_2CFCD20);
  __cxa_atexit(sub_200E190, &qword_2CFCD20, &off_2B25620);
  v6 = j__strlen("Use ConstantFP's native fixed-length vector splat support.");
  qword_2CFCCA0 = (__int64)&unk_2CFCCB0;
  v7 = v6;
  qword_2CFCC70 = 0;
  qword_2CFCC60 = (__int64)&off_2C758B0;
  qword_2CFCC68 = (unsigned int)qword_2CFCC68 & 0x80000000;
  qword_2CFCCA8 = 0x100000000LL;
  qword_2CFCC78 = 0;
  qword_2CFCC80 = 0;
  qword_2CFCC88 = 0;
  qword_2CFCC90 = 0;
  qword_2CFCC98 = 0;
  qword_2CFCCB8 = (__int64)&unk_2CFCCD0;
  qword_2CFCCC0 = 1;
  dword_2CFCCC8 = 0;
  byte_2CFCCCC = 1;
  v8 = sub_2210FF0("Use ConstantFP's native fixed-length vector splat support.");
  v9 = (unsigned int)qword_2CFCCA8;
  v10 = (unsigned int)qword_2CFCCA8 + 1LL;
  if ( v10 > HIDWORD(qword_2CFCCA8) )
  {
    v29 = v8;
    sub_2237220((char *)&unk_2CFCCB0 - 16, &unk_2CFCCB0, v10, 8);
    v9 = (unsigned int)qword_2CFCCA8;
    v8 = v29;
  }
  v11 = _mm_load_si128(&v28);
  *(_QWORD *)(qword_2CFCCA0 + 8 * v9) = v8;
  qword_2CFCCE0 = (__int64)off_2C714E8;
  word_2CFCCE8 = 0;
  qword_2CFCC60 = (__int64)off_2C75848;
  xmmword_2CFCD08 = (__int128)v11;
  LODWORD(qword_2CFCCA8) = qword_2CFCCA8 + 1;
  byte_2CFCCD8 = 0;
  qword_2CFCCF0 = (__int64)off_2BEAB08;
  v12 = j__strlen("use-constant-fp-for-fixed-length-splat");
  sub_2217250(&qword_2CFCC60, "use-constant-fp-for-fixed-length-splat", v12);
  word_2CFCCE8 = 256;
  qword_2CFCC88 = v7;
  byte_2CFCCD8 = 0;
  BYTE2(qword_2CFCC68) = BYTE2(qword_2CFCC68) & 0x9F | 0x20;
  qword_2CFCC80 = (__int64)"Use ConstantFP's native fixed-length vector splat support.";
  sub_2218140(&qword_2CFCC60);
  __cxa_atexit(sub_200E190, &qword_2CFCC60, &off_2B25620);
  v13 = j__strlen("Use ConstantInt's native scalable vector splat support.");
  qword_2CFCBE0 = (__int64)&unk_2CFCBF0;
  v14 = v13;
  qword_2CFCBB0 = 0;
  qword_2CFCBA0 = (__int64)&off_2C758B0;
  qword_2CFCBA8 = (unsigned int)qword_2CFCBA8 & 0x80000000;
  qword_2CFCBE8 = 0x100000000LL;
  qword_2CFCBB8 = 0;
  qword_2CFCBC0 = 0;
  qword_2CFCBC8 = 0;
  qword_2CFCBD0 = 0;
  qword_2CFCBD8 = 0;
  qword_2CFCBF8 = (__int64)&unk_2CFCC10;
  qword_2CFCC00 = 1;
  dword_2CFCC08 = 0;
  byte_2CFCC0C = 1;
  v15 = sub_2210FF0("Use ConstantInt's native scalable vector splat support.");
  v16 = (unsigned int)qword_2CFCBE8;
  v17 = (unsigned int)qword_2CFCBE8 + 1LL;
  if ( v17 > HIDWORD(qword_2CFCBE8) )
  {
    v29 = v15;
    sub_2237220((char *)&unk_2CFCBF0 - 16, &unk_2CFCBF0, v17, 8);
    v16 = (unsigned int)qword_2CFCBE8;
    v15 = v29;
  }
  v18 = _mm_load_si128(&v28);
  *(_QWORD *)(qword_2CFCBE0 + 8 * v16) = v15;
  qword_2CFCC20 = (__int64)off_2C714E8;
  qword_2CFCBA0 = (__int64)off_2C75848;
  word_2CFCC28 = 0;
  xmmword_2CFCC48 = (__int128)v18;
  LODWORD(qword_2CFCBE8) = qword_2CFCBE8 + 1;
  byte_2CFCC18 = 0;
  qword_2CFCC30 = (__int64)off_2BEAB08;
  v19 = j__strlen("use-constant-int-for-scalable-splat");
  sub_2217250(&qword_2CFCBA0, "use-constant-int-for-scalable-splat", v19);
  word_2CFCC28 = 256;
  qword_2CFCBC8 = v14;
  byte_2CFCC18 = 0;
  BYTE2(qword_2CFCBA8) = BYTE2(qword_2CFCBA8) & 0x9F | 0x20;
  qword_2CFCBC0 = (__int64)"Use ConstantInt's native scalable vector splat support.";
  sub_2218140(&qword_2CFCBA0);
  __cxa_atexit(sub_200E190, &qword_2CFCBA0, &off_2B25620);
  v20 = j__strlen("Use ConstantFP's native scalable vector splat support.");
  byte_2CFCB4C = 1;
  qword_2CFCAF0 = 0;
  v21 = v20;
  qword_2CFCAE0 = (__int64)&off_2C758B0;
  qword_2CFCAE8 = (unsigned int)qword_2CFCAE8 & 0x80000000;
  qword_2CFCB28 = 0x100000000LL;
  qword_2CFCAF8 = 0;
  qword_2CFCB00 = 0;
  qword_2CFCB08 = 0;
  qword_2CFCB10 = 0;
  qword_2CFCB18 = 0;
  qword_2CFCB20 = (__int64)&unk_2CFCB30;
  qword_2CFCB38 = (__int64)&unk_2CFCB50;
  qword_2CFCB40 = 1;
  dword_2CFCB48 = 0;
  v22 = sub_2210FF0("Use ConstantFP's native scalable vector splat support.");
  v23 = (unsigned int)qword_2CFCB28;
  v24 = (unsigned int)qword_2CFCB28 + 1LL;
  if ( v24 > HIDWORD(qword_2CFCB28) )
  {
    v29 = v22;
    sub_2237220((char *)&unk_2CFCB30 - 16, &unk_2CFCB30, v24, 8);
    v23 = (unsigned int)qword_2CFCB28;
    v22 = v29;
  }
  v25 = _mm_load_si128(&v28);
  *(_QWORD *)(qword_2CFCB20 + 8 * v23) = v22;
  word_2CFCB68 = 0;
  qword_2CFCB60 = (__int64)off_2C714E8;
  qword_2CFCAE0 = (__int64)off_2C75848;
  xmmword_2CFCB88 = (__int128)v25;
  LODWORD(qword_2CFCB28) = qword_2CFCB28 + 1;
  byte_2CFCB58 = 0;
  qword_2CFCB70 = (__int64)off_2BEAB08;
  v26 = j__strlen("use-constant-fp-for-scalable-splat");
  sub_2217250(&qword_2CFCAE0, "use-constant-fp-for-scalable-splat", v26);
  word_2CFCB68 = 256;
  qword_2CFCB08 = v21;
  byte_2CFCB58 = 0;
  BYTE2(qword_2CFCAE8) = BYTE2(qword_2CFCAE8) & 0x9F | 0x20;
  qword_2CFCB00 = (__int64)"Use ConstantFP's native scalable vector splat support.";
  sub_2218140(&qword_2CFCAE0);
  return __cxa_atexit(sub_200E190, &qword_2CFCAE0, &off_2B25620);
}
