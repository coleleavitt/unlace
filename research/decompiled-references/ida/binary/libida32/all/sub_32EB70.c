int sub_32EB70()
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
  qword_2CD2E10 = 0;
  v1 = v0;
  qword_2CD2E18 = 0;
  qword_2CD2E20 = 0;
  qword_2CD2E00 = (__int64)&off_2C4B8B0;
  qword_2CD2E08 = (unsigned int)qword_2CD2E08 & 0x80000000;
  qword_2CD2E48 = 0x100000000LL;
  qword_2CD2E28 = 0;
  qword_2CD2E30 = 0;
  qword_2CD2E38 = 0;
  qword_2CD2E40 = (__int64)&unk_2CD2E50;
  qword_2CD2E58 = (__int64)&unk_2CD2E70;
  qword_2CD2E60 = 1;
  dword_2CD2E68 = 0;
  byte_2CD2E6C = 1;
  v2 = sub_21ED2B0("Use ConstantInt's native fixed-length vector splat support.");
  v3 = (unsigned int)qword_2CD2E48;
  v4 = (unsigned int)qword_2CD2E48 + 1LL;
  if ( v4 > HIDWORD(qword_2CD2E48) )
  {
    v28.m128i_i64[0] = v2;
    sub_22134E0((char *)&unk_2CD2E50 - 16, &unk_2CD2E50, v4, 8);
    v3 = (unsigned int)qword_2CD2E48;
    v2 = v28.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CD2E40 + 8 * v3) = v2;
  qword_2CD2E80 = (__int64)off_2C474E8;
  qword_2CD2E00 = (__int64)off_2C4B848;
  v28 = (__m128i)_mm_loadh_ps((const double *)off_2C4E368);
  word_2CD2E88 = 0;
  xmmword_2CD2EA8 = (__int128)v28;
  LODWORD(qword_2CD2E48) = qword_2CD2E48 + 1;
  byte_2CD2E78 = 0;
  qword_2CD2E90 = (__int64)off_2BC0B68;
  v5 = j__strlen("use-constant-int-for-fixed-length-splat");
  sub_21F3510(&qword_2CD2E00, "use-constant-int-for-fixed-length-splat", v5);
  word_2CD2E88 = 256;
  qword_2CD2E28 = v1;
  byte_2CD2E78 = 0;
  BYTE2(qword_2CD2E08) = BYTE2(qword_2CD2E08) & 0x9F | 0x20;
  qword_2CD2E20 = (__int64)"Use ConstantInt's native fixed-length vector splat support.";
  sub_21F4400(&qword_2CD2E00);
  __cxa_atexit(sub_1FEA450, &qword_2CD2E00, &off_2AFC540);
  v6 = j__strlen("Use ConstantFP's native fixed-length vector splat support.");
  qword_2CD2D80 = (__int64)&unk_2CD2D90;
  v7 = v6;
  qword_2CD2D50 = 0;
  qword_2CD2D40 = (__int64)&off_2C4B8B0;
  qword_2CD2D48 = (unsigned int)qword_2CD2D48 & 0x80000000;
  qword_2CD2D88 = 0x100000000LL;
  qword_2CD2D58 = 0;
  qword_2CD2D60 = 0;
  qword_2CD2D68 = 0;
  qword_2CD2D70 = 0;
  qword_2CD2D78 = 0;
  qword_2CD2D98 = (__int64)&unk_2CD2DB0;
  qword_2CD2DA0 = 1;
  dword_2CD2DA8 = 0;
  byte_2CD2DAC = 1;
  v8 = sub_21ED2B0("Use ConstantFP's native fixed-length vector splat support.");
  v9 = (unsigned int)qword_2CD2D88;
  v10 = (unsigned int)qword_2CD2D88 + 1LL;
  if ( v10 > HIDWORD(qword_2CD2D88) )
  {
    v29 = v8;
    sub_22134E0((char *)&unk_2CD2D90 - 16, &unk_2CD2D90, v10, 8);
    v9 = (unsigned int)qword_2CD2D88;
    v8 = v29;
  }
  v11 = _mm_load_si128(&v28);
  *(_QWORD *)(qword_2CD2D80 + 8 * v9) = v8;
  qword_2CD2DC0 = (__int64)off_2C474E8;
  word_2CD2DC8 = 0;
  qword_2CD2D40 = (__int64)off_2C4B848;
  xmmword_2CD2DE8 = (__int128)v11;
  LODWORD(qword_2CD2D88) = qword_2CD2D88 + 1;
  byte_2CD2DB8 = 0;
  qword_2CD2DD0 = (__int64)off_2BC0B68;
  v12 = j__strlen("use-constant-fp-for-fixed-length-splat");
  sub_21F3510(&qword_2CD2D40, "use-constant-fp-for-fixed-length-splat", v12);
  word_2CD2DC8 = 256;
  qword_2CD2D68 = v7;
  byte_2CD2DB8 = 0;
  BYTE2(qword_2CD2D48) = BYTE2(qword_2CD2D48) & 0x9F | 0x20;
  qword_2CD2D60 = (__int64)"Use ConstantFP's native fixed-length vector splat support.";
  sub_21F4400(&qword_2CD2D40);
  __cxa_atexit(sub_1FEA450, &qword_2CD2D40, &off_2AFC540);
  v13 = j__strlen("Use ConstantInt's native scalable vector splat support.");
  qword_2CD2CC0 = (__int64)&unk_2CD2CD0;
  v14 = v13;
  qword_2CD2C90 = 0;
  qword_2CD2C80 = (__int64)&off_2C4B8B0;
  qword_2CD2C88 = (unsigned int)qword_2CD2C88 & 0x80000000;
  qword_2CD2CC8 = 0x100000000LL;
  qword_2CD2C98 = 0;
  qword_2CD2CA0 = 0;
  qword_2CD2CA8 = 0;
  qword_2CD2CB0 = 0;
  qword_2CD2CB8 = 0;
  qword_2CD2CD8 = (__int64)&unk_2CD2CF0;
  qword_2CD2CE0 = 1;
  dword_2CD2CE8 = 0;
  byte_2CD2CEC = 1;
  v15 = sub_21ED2B0("Use ConstantInt's native scalable vector splat support.");
  v16 = (unsigned int)qword_2CD2CC8;
  v17 = (unsigned int)qword_2CD2CC8 + 1LL;
  if ( v17 > HIDWORD(qword_2CD2CC8) )
  {
    v29 = v15;
    sub_22134E0((char *)&unk_2CD2CD0 - 16, &unk_2CD2CD0, v17, 8);
    v16 = (unsigned int)qword_2CD2CC8;
    v15 = v29;
  }
  v18 = _mm_load_si128(&v28);
  *(_QWORD *)(qword_2CD2CC0 + 8 * v16) = v15;
  qword_2CD2D00 = (__int64)off_2C474E8;
  qword_2CD2C80 = (__int64)off_2C4B848;
  word_2CD2D08 = 0;
  xmmword_2CD2D28 = (__int128)v18;
  LODWORD(qword_2CD2CC8) = qword_2CD2CC8 + 1;
  byte_2CD2CF8 = 0;
  qword_2CD2D10 = (__int64)off_2BC0B68;
  v19 = j__strlen("use-constant-int-for-scalable-splat");
  sub_21F3510(&qword_2CD2C80, "use-constant-int-for-scalable-splat", v19);
  word_2CD2D08 = 256;
  qword_2CD2CA8 = v14;
  byte_2CD2CF8 = 0;
  BYTE2(qword_2CD2C88) = BYTE2(qword_2CD2C88) & 0x9F | 0x20;
  qword_2CD2CA0 = (__int64)"Use ConstantInt's native scalable vector splat support.";
  sub_21F4400(&qword_2CD2C80);
  __cxa_atexit(sub_1FEA450, &qword_2CD2C80, &off_2AFC540);
  v20 = j__strlen("Use ConstantFP's native scalable vector splat support.");
  byte_2CD2C2C = 1;
  qword_2CD2BD0 = 0;
  v21 = v20;
  qword_2CD2BC0 = (__int64)&off_2C4B8B0;
  qword_2CD2BC8 = (unsigned int)qword_2CD2BC8 & 0x80000000;
  qword_2CD2C08 = 0x100000000LL;
  qword_2CD2BD8 = 0;
  qword_2CD2BE0 = 0;
  qword_2CD2BE8 = 0;
  qword_2CD2BF0 = 0;
  qword_2CD2BF8 = 0;
  qword_2CD2C00 = (__int64)&unk_2CD2C10;
  qword_2CD2C18 = (__int64)&unk_2CD2C30;
  qword_2CD2C20 = 1;
  dword_2CD2C28 = 0;
  v22 = sub_21ED2B0("Use ConstantFP's native scalable vector splat support.");
  v23 = (unsigned int)qword_2CD2C08;
  v24 = (unsigned int)qword_2CD2C08 + 1LL;
  if ( v24 > HIDWORD(qword_2CD2C08) )
  {
    v29 = v22;
    sub_22134E0((char *)&unk_2CD2C10 - 16, &unk_2CD2C10, v24, 8);
    v23 = (unsigned int)qword_2CD2C08;
    v22 = v29;
  }
  v25 = _mm_load_si128(&v28);
  *(_QWORD *)(qword_2CD2C00 + 8 * v23) = v22;
  word_2CD2C48 = 0;
  qword_2CD2C40 = (__int64)off_2C474E8;
  qword_2CD2BC0 = (__int64)off_2C4B848;
  xmmword_2CD2C68 = (__int128)v25;
  LODWORD(qword_2CD2C08) = qword_2CD2C08 + 1;
  byte_2CD2C38 = 0;
  qword_2CD2C50 = (__int64)off_2BC0B68;
  v26 = j__strlen("use-constant-fp-for-scalable-splat");
  sub_21F3510(&qword_2CD2BC0, "use-constant-fp-for-scalable-splat", v26);
  word_2CD2C48 = 256;
  qword_2CD2BE8 = v21;
  byte_2CD2C38 = 0;
  BYTE2(qword_2CD2BC8) = BYTE2(qword_2CD2BC8) & 0x9F | 0x20;
  qword_2CD2BE0 = (__int64)"Use ConstantFP's native scalable vector splat support.";
  sub_21F4400(&qword_2CD2BC0);
  return __cxa_atexit(sub_1FEA450, &qword_2CD2BC0, &off_2AFC540);
}

