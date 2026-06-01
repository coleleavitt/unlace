int sub_348C80()
{
  size_t v0; // rax
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  size_t v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __m128i v15; // xmm2
  size_t v16; // rax
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __m128i v21; // xmm3
  size_t v22; // rax
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __m128i v27; // xmm4
  size_t v28; // rax
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  __m128i v33; // xmm5
  size_t v34; // rax
  __int64 v35; // r14
  __int64 v36; // rax
  __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  __m128i v39; // xmm6
  size_t v40; // rax
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  __m128i v45; // xmm7
  size_t v46; // rax
  __int64 v47; // r14
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  __m128i v51; // xmm2
  __m128i v53; // [rsp+0h] [rbp-58h] BYREF
  __int64 v54; // [rsp+18h] [rbp-40h]

  v0 = j__strlen("Control the number of bonus instructions (default = 1)");
  qword_2CE0230 = 0;
  v1 = v0;
  qword_2CE0238 = 0;
  qword_2CE0240 = 0;
  qword_2CE0220 = (__int64)&off_2C4B8B0;
  qword_2CE0228 = (unsigned int)qword_2CE0228 & 0x80000000;
  qword_2CE0268 = 0x100000000LL;
  qword_2CE0248 = 0;
  qword_2CE0250 = 0;
  qword_2CE0258 = 0;
  qword_2CE0260 = (__int64)&unk_2CE0270;
  qword_2CE0278 = (__int64)&unk_2CE0290;
  qword_2CE0280 = 1;
  dword_2CE0288 = 0;
  byte_2CE028C = 1;
  v2 = sub_21ED2B0("Control the number of bonus instructions (default = 1)");
  v3 = (unsigned int)qword_2CE0268;
  v4 = (unsigned int)qword_2CE0268 + 1LL;
  if ( v4 > HIDWORD(qword_2CE0268) )
  {
    v53.m128i_i64[0] = v2;
    sub_22134E0((char *)&unk_2CE0270 - 16, &unk_2CE0270, v4, 8);
    v3 = (unsigned int)qword_2CE0268;
    v2 = v53.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CE0260 + 8 * v3) = v2;
  xmmword_2CE02C8 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  LODWORD(qword_2CE0268) = qword_2CE0268 + 1;
  qword_2CE02A0 = (__int64)off_2C472D0;
  dword_2CE0298 = 0;
  byte_2CE02AC = 0;
  qword_2CE0220 = (__int64)off_2C4B710;
  dword_2CE02A8 = 0;
  qword_2CE02B0 = (__int64)off_2BC0BF8;
  sub_21F3510(&qword_2CE0220, "bonus-inst-threshold", 20);
  dword_2CE0298 = 1;
  byte_2CE02AC = 1;
  qword_2CE0248 = v1;
  dword_2CE02A8 = 1;
  BYTE2(qword_2CE0228) = BYTE2(qword_2CE0228) & 0x9F | 0x20;
  qword_2CE0240 = (__int64)"Control the number of bonus instructions (default = 1)";
  sub_21F4400(&qword_2CE0220);
  __cxa_atexit(sub_1FC9520, &qword_2CE0220, &off_2AFC540);
  v5 = j__strlen("Preserve canonical loop structure (default = true)");
  qword_2CE01A0 = (__int64)&unk_2CE01B0;
  v6 = v5;
  qword_2CE0170 = 0;
  qword_2CE0160 = (__int64)&off_2C4B8B0;
  qword_2CE0168 = (unsigned int)qword_2CE0168 & 0x80000000;
  qword_2CE01A8 = 0x100000000LL;
  qword_2CE0178 = 0;
  qword_2CE0180 = 0;
  qword_2CE0188 = 0;
  qword_2CE0190 = 0;
  qword_2CE0198 = 0;
  qword_2CE01B8 = (__int64)&unk_2CE01D0;
  qword_2CE01C0 = 1;
  dword_2CE01C8 = 0;
  byte_2CE01CC = 1;
  v7 = sub_21ED2B0("Preserve canonical loop structure (default = true)");
  v8 = (unsigned int)qword_2CE01A8;
  v9 = (unsigned int)qword_2CE01A8 + 1LL;
  if ( v9 > HIDWORD(qword_2CE01A8) )
  {
    v53.m128i_i64[0] = v7;
    sub_22134E0((char *)&unk_2CE01B0 - 16, &unk_2CE01B0, v9, 8);
    v8 = (unsigned int)qword_2CE01A8;
    v7 = v53.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CE01A0 + 8 * v8) = v7;
  word_2CE01E8 = 0;
  qword_2CE01E0 = (__int64)off_2C474E8;
  qword_2CE0160 = (__int64)off_2C4B848;
  v53 = (__m128i)_mm_loadh_ps((const double *)off_2C4E368);
  xmmword_2CE0208 = (__int128)v53;
  qword_2CE01F0 = (__int64)off_2BC0B68;
  LODWORD(qword_2CE01A8) = qword_2CE01A8 + 1;
  byte_2CE01D8 = 0;
  sub_21F3510(&qword_2CE0160, "keep-loops", 10);
  qword_2CE0188 = v6;
  byte_2CE01D8 = 1;
  BYTE2(qword_2CE0168) = BYTE2(qword_2CE0168) & 0x9F | 0x20;
  word_2CE01E8 = 257;
  qword_2CE0180 = (__int64)"Preserve canonical loop structure (default = true)";
  sub_21F4400(&qword_2CE0160);
  __cxa_atexit(sub_1FEA450, &qword_2CE0160, &off_2AFC540);
  v10 = j__strlen("Convert switches into an integer range comparison (default = false)");
  qword_2CE00E0 = (__int64)&unk_2CE00F0;
  v11 = v10;
  qword_2CE00B0 = 0;
  qword_2CE00A0 = (__int64)&off_2C4B8B0;
  qword_2CE00A8 = (unsigned int)qword_2CE00A8 & 0x80000000;
  qword_2CE00E8 = 0x100000000LL;
  qword_2CE00B8 = 0;
  qword_2CE00C0 = 0;
  qword_2CE00C8 = 0;
  qword_2CE00D0 = 0;
  qword_2CE00D8 = 0;
  qword_2CE00F8 = (__int64)&unk_2CE0110;
  qword_2CE0100 = 1;
  dword_2CE0108 = 0;
  byte_2CE010C = 1;
  v12 = sub_21ED2B0("Convert switches into an integer range comparison (default = false)");
  v13 = (unsigned int)qword_2CE00E8;
  v14 = (unsigned int)qword_2CE00E8 + 1LL;
  if ( v14 > HIDWORD(qword_2CE00E8) )
  {
    v54 = v12;
    sub_22134E0((char *)&unk_2CE00F0 - 16, &unk_2CE00F0, v14, 8);
    v13 = (unsigned int)qword_2CE00E8;
    v12 = v54;
  }
  v15 = _mm_load_si128(&v53);
  *(_QWORD *)(qword_2CE00E0 + 8 * v13) = v12;
  word_2CE0128 = 0;
  qword_2CE0120 = (__int64)off_2C474E8;
  qword_2CE00A0 = (__int64)off_2C4B848;
  xmmword_2CE0148 = (__int128)v15;
  qword_2CE0130 = (__int64)off_2BC0B68;
  LODWORD(qword_2CE00E8) = qword_2CE00E8 + 1;
  byte_2CE0118 = 0;
  sub_21F3510(&qword_2CE00A0, "switch-range-to-icmp", 20);
  qword_2CE00C8 = v11;
  byte_2CE0118 = 0;
  BYTE2(qword_2CE00A8) = BYTE2(qword_2CE00A8) & 0x9F | 0x20;
  word_2CE0128 = 256;
  qword_2CE00C0 = (__int64)"Convert switches into an integer range comparison (default = false)";
  sub_21F4400(&qword_2CE00A0);
  __cxa_atexit(sub_1FEA450, &qword_2CE00A0, &off_2AFC540);
  v16 = j__strlen("Convert switches to lookup tables (default = false)");
  qword_2CE0020 = (__int64)&unk_2CE0030;
  v17 = v16;
  qword_2CDFFF0 = 0;
  qword_2CDFFE0 = (__int64)&off_2C4B8B0;
  qword_2CDFFE8 = (unsigned int)qword_2CDFFE8 & 0x80000000;
  qword_2CE0028 = 0x100000000LL;
  qword_2CDFFF8 = 0;
  qword_2CE0000 = 0;
  qword_2CE0008 = 0;
  qword_2CE0010 = 0;
  qword_2CE0018 = 0;
  qword_2CE0038 = (__int64)&unk_2CE0050;
  qword_2CE0040 = 1;
  dword_2CE0048 = 0;
  byte_2CE004C = 1;
  v18 = sub_21ED2B0("Convert switches to lookup tables (default = false)");
  v19 = (unsigned int)qword_2CE0028;
  v20 = (unsigned int)qword_2CE0028 + 1LL;
  if ( v20 > HIDWORD(qword_2CE0028) )
  {
    v54 = v18;
    sub_22134E0((char *)&unk_2CE0030 - 16, &unk_2CE0030, v20, 8);
    v19 = (unsigned int)qword_2CE0028;
    v18 = v54;
  }
  v21 = _mm_load_si128(&v53);
  *(_QWORD *)(qword_2CE0020 + 8 * v19) = v18;
  word_2CE0068 = 0;
  qword_2CE0060 = (__int64)off_2C474E8;
  qword_2CDFFE0 = (__int64)off_2C4B848;
  xmmword_2CE0088 = (__int128)v21;
  qword_2CE0070 = (__int64)off_2BC0B68;
  LODWORD(qword_2CE0028) = qword_2CE0028 + 1;
  byte_2CE0058 = 0;
  sub_21F3510(&qword_2CDFFE0, "switch-to-lookup", 16);
  qword_2CE0008 = v17;
  byte_2CE0058 = 0;
  BYTE2(qword_2CDFFE8) = BYTE2(qword_2CDFFE8) & 0x9F | 0x20;
  word_2CE0068 = 256;
  qword_2CE0000 = (__int64)"Convert switches to lookup tables (default = false)";
  sub_21F4400(&qword_2CDFFE0);
  __cxa_atexit(sub_1FEA450, &qword_2CDFFE0, &off_2AFC540);
  v22 = j__strlen("Forward switch condition to phi ops (default = false)");
  qword_2CDFF60 = (__int64)&unk_2CDFF70;
  v23 = v22;
  qword_2CDFF30 = 0;
  qword_2CDFF20 = (__int64)&off_2C4B8B0;
  qword_2CDFF28 = (unsigned int)qword_2CDFF28 & 0x80000000;
  qword_2CDFF68 = 0x100000000LL;
  qword_2CDFF38 = 0;
  qword_2CDFF40 = 0;
  qword_2CDFF48 = 0;
  qword_2CDFF50 = 0;
  qword_2CDFF58 = 0;
  qword_2CDFF78 = (__int64)&unk_2CDFF90;
  qword_2CDFF80 = 1;
  dword_2CDFF88 = 0;
  byte_2CDFF8C = 1;
  v24 = sub_21ED2B0("Forward switch condition to phi ops (default = false)");
  v25 = (unsigned int)qword_2CDFF68;
  v26 = (unsigned int)qword_2CDFF68 + 1LL;
  if ( v26 > HIDWORD(qword_2CDFF68) )
  {
    v54 = v24;
    sub_22134E0((char *)&unk_2CDFF70 - 16, &unk_2CDFF70, v26, 8);
    v25 = (unsigned int)qword_2CDFF68;
    v24 = v54;
  }
  v27 = _mm_load_si128(&v53);
  *(_QWORD *)(qword_2CDFF60 + 8 * v25) = v24;
  qword_2CDFFA0 = (__int64)off_2C474E8;
  qword_2CDFF20 = (__int64)off_2C4B848;
  word_2CDFFA8 = 0;
  xmmword_2CDFFC8 = (__int128)v27;
  qword_2CDFFB0 = (__int64)off_2BC0B68;
  LODWORD(qword_2CDFF68) = qword_2CDFF68 + 1;
  byte_2CDFF98 = 0;
  sub_21F3510(&qword_2CDFF20, "forward-switch-cond", 19);
  word_2CDFFA8 = 256;
  qword_2CDFF48 = v23;
  byte_2CDFF98 = 0;
  BYTE2(qword_2CDFF28) = BYTE2(qword_2CDFF28) & 0x9F | 0x20;
  qword_2CDFF40 = (__int64)"Forward switch condition to phi ops (default = false)";
  sub_21F4400(&qword_2CDFF20);
  __cxa_atexit(sub_1FEA450, &qword_2CDFF20, &off_2AFC540);
  v28 = j__strlen("hoist common instructions (default = false)");
  qword_2CDFEA0 = (__int64)&unk_2CDFEB0;
  v29 = v28;
  qword_2CDFE70 = 0;
  qword_2CDFE60 = (__int64)&off_2C4B8B0;
  qword_2CDFE68 = (unsigned int)qword_2CDFE68 & 0x80000000;
  qword_2CDFEA8 = 0x100000000LL;
  qword_2CDFE78 = 0;
  qword_2CDFE80 = 0;
  qword_2CDFE88 = 0;
  qword_2CDFE90 = 0;
  qword_2CDFE98 = 0;
  qword_2CDFEB8 = (__int64)&unk_2CDFED0;
  qword_2CDFEC0 = 1;
  dword_2CDFEC8 = 0;
  byte_2CDFECC = 1;
  v30 = sub_21ED2B0("hoist common instructions (default = false)");
  v31 = (unsigned int)qword_2CDFEA8;
  v32 = (unsigned int)qword_2CDFEA8 + 1LL;
  if ( v32 > HIDWORD(qword_2CDFEA8) )
  {
    v54 = v30;
    sub_22134E0((char *)&unk_2CDFEB0 - 16, &unk_2CDFEB0, v32, 8);
    v31 = (unsigned int)qword_2CDFEA8;
    v30 = v54;
  }
  v33 = _mm_load_si128(&v53);
  *(_QWORD *)(qword_2CDFEA0 + 8 * v31) = v30;
  qword_2CDFEE0 = (__int64)off_2C474E8;
  qword_2CDFE60 = (__int64)off_2C4B848;
  word_2CDFEE8 = 0;
  xmmword_2CDFF08 = (__int128)v33;
  qword_2CDFEF0 = (__int64)off_2BC0B68;
  LODWORD(qword_2CDFEA8) = qword_2CDFEA8 + 1;
  byte_2CDFED8 = 0;
  sub_21F3510(&qword_2CDFE60, "hoist-common-insts", 18);
  word_2CDFEE8 = 256;
  qword_2CDFE88 = v29;
  byte_2CDFED8 = 0;
  BYTE2(qword_2CDFE68) = BYTE2(qword_2CDFE68) & 0x9F | 0x20;
  qword_2CDFE80 = (__int64)"hoist common instructions (default = false)";
  sub_21F4400(&qword_2CDFE60);
  __cxa_atexit(sub_1FEA450, &qword_2CDFE60, &off_2AFC540);
  v34 = j__strlen("Hoist loads/stores if the target supports conditional faulting (default = false)");
  qword_2CDFDE0 = (__int64)&unk_2CDFDF0;
  v35 = v34;
  qword_2CDFDB0 = 0;
  qword_2CDFDA0 = (__int64)&off_2C4B8B0;
  qword_2CDFDA8 = (unsigned int)qword_2CDFDA8 & 0x80000000;
  qword_2CDFDE8 = 0x100000000LL;
  qword_2CDFDB8 = 0;
  qword_2CDFDC0 = 0;
  qword_2CDFDC8 = 0;
  qword_2CDFDD0 = 0;
  qword_2CDFDD8 = 0;
  qword_2CDFDF8 = (__int64)&unk_2CDFE10;
  qword_2CDFE00 = 1;
  dword_2CDFE08 = 0;
  byte_2CDFE0C = 1;
  v36 = sub_21ED2B0("Hoist loads/stores if the target supports conditional faulting (default = false)");
  v37 = (unsigned int)qword_2CDFDE8;
  v38 = (unsigned int)qword_2CDFDE8 + 1LL;
  if ( v38 > HIDWORD(qword_2CDFDE8) )
  {
    v54 = v36;
    sub_22134E0((char *)&unk_2CDFDF0 - 16, &unk_2CDFDF0, v38, 8);
    v37 = (unsigned int)qword_2CDFDE8;
    v36 = v54;
  }
  v39 = _mm_load_si128(&v53);
  *(_QWORD *)(qword_2CDFDE0 + 8 * v37) = v36;
  qword_2CDFE20 = (__int64)off_2C474E8;
  word_2CDFE28 = 0;
  qword_2CDFDA0 = (__int64)off_2C4B848;
  xmmword_2CDFE48 = (__int128)v39;
  qword_2CDFE30 = (__int64)off_2BC0B68;
  LODWORD(qword_2CDFDE8) = qword_2CDFDE8 + 1;
  byte_2CDFE18 = 0;
  sub_21F3510(&qword_2CDFDA0, "hoist-loads-stores-with-cond-faulting", 37);
  word_2CDFE28 = 256;
  qword_2CDFDC8 = v35;
  byte_2CDFE18 = 0;
  BYTE2(qword_2CDFDA8) = BYTE2(qword_2CDFDA8) & 0x9F | 0x20;
  qword_2CDFDC0 = (__int64)"Hoist loads/stores if the target supports conditional faulting (default = false)";
  sub_21F4400(&qword_2CDFDA0);
  __cxa_atexit(sub_1FEA450, &qword_2CDFDA0, &off_2AFC540);
  v40 = j__strlen("Sink common instructions (default = false)");
  qword_2CDFD20 = (__int64)&unk_2CDFD30;
  v41 = v40;
  qword_2CDFCF0 = 0;
  qword_2CDFCE0 = (__int64)&off_2C4B8B0;
  qword_2CDFCE8 = (unsigned int)qword_2CDFCE8 & 0x80000000;
  qword_2CDFD28 = 0x100000000LL;
  qword_2CDFCF8 = 0;
  qword_2CDFD00 = 0;
  qword_2CDFD08 = 0;
  qword_2CDFD10 = 0;
  qword_2CDFD18 = 0;
  qword_2CDFD38 = (__int64)&unk_2CDFD50;
  qword_2CDFD40 = 1;
  dword_2CDFD48 = 0;
  byte_2CDFD4C = 1;
  v42 = sub_21ED2B0("Sink common instructions (default = false)");
  v43 = (unsigned int)qword_2CDFD28;
  v44 = (unsigned int)qword_2CDFD28 + 1LL;
  if ( v44 > HIDWORD(qword_2CDFD28) )
  {
    v54 = v42;
    sub_22134E0((char *)&unk_2CDFD30 - 16, &unk_2CDFD30, v44, 8);
    v43 = (unsigned int)qword_2CDFD28;
    v42 = v54;
  }
  v45 = _mm_load_si128(&v53);
  *(_QWORD *)(qword_2CDFD20 + 8 * v43) = v42;
  qword_2CDFD60 = (__int64)off_2C474E8;
  qword_2CDFCE0 = (__int64)off_2C4B848;
  word_2CDFD68 = 0;
  xmmword_2CDFD88 = (__int128)v45;
  qword_2CDFD70 = (__int64)off_2BC0B68;
  LODWORD(qword_2CDFD28) = qword_2CDFD28 + 1;
  byte_2CDFD58 = 0;
  sub_21F3510(&qword_2CDFCE0, "sink-common-insts", 17);
  word_2CDFD68 = 256;
  qword_2CDFD08 = v41;
  byte_2CDFD58 = 0;
  BYTE2(qword_2CDFCE8) = BYTE2(qword_2CDFCE8) & 0x9F | 0x20;
  qword_2CDFD00 = (__int64)"Sink common instructions (default = false)";
  sub_21F4400(&qword_2CDFCE0);
  __cxa_atexit(sub_1FEA450, &qword_2CDFCE0, &off_2AFC540);
  v46 = j__strlen("Speculate unpredictable branches (default = false)");
  byte_2CDFC8C = 1;
  qword_2CDFC30 = 0;
  v47 = v46;
  qword_2CDFC20 = (__int64)&off_2C4B8B0;
  qword_2CDFC28 = (unsigned int)qword_2CDFC28 & 0x80000000;
  qword_2CDFC68 = 0x100000000LL;
  qword_2CDFC38 = 0;
  qword_2CDFC40 = 0;
  qword_2CDFC48 = 0;
  qword_2CDFC50 = 0;
  qword_2CDFC58 = 0;
  qword_2CDFC60 = (__int64)&unk_2CDFC70;
  qword_2CDFC78 = (__int64)&unk_2CDFC90;
  qword_2CDFC80 = 1;
  dword_2CDFC88 = 0;
  v48 = sub_21ED2B0("Speculate unpredictable branches (default = false)");
  v49 = (unsigned int)qword_2CDFC68;
  v50 = (unsigned int)qword_2CDFC68 + 1LL;
  if ( v50 > HIDWORD(qword_2CDFC68) )
  {
    v54 = v48;
    sub_22134E0((char *)&unk_2CDFC70 - 16, &unk_2CDFC70, v50, 8);
    v49 = (unsigned int)qword_2CDFC68;
    v48 = v54;
  }
  v51 = _mm_load_si128(&v53);
  *(_QWORD *)(qword_2CDFC60 + 8 * v49) = v48;
  word_2CDFCA8 = 0;
  qword_2CDFCA0 = (__int64)off_2C474E8;
  qword_2CDFC20 = (__int64)off_2C4B848;
  qword_2CDFCB0 = (__int64)off_2BC0B68;
  xmmword_2CDFCC8 = (__int128)v51;
  LODWORD(qword_2CDFC68) = qword_2CDFC68 + 1;
  byte_2CDFC98 = 0;
  sub_21F3510(&qword_2CDFC20, "speculate-unpredictables", 24);
  word_2CDFCA8 = 256;
  qword_2CDFC48 = v47;
  byte_2CDFC98 = 0;
  BYTE2(qword_2CDFC28) = BYTE2(qword_2CDFC28) & 0x9F | 0x20;
  qword_2CDFC40 = (__int64)"Speculate unpredictable branches (default = false)";
  sub_21F4400(&qword_2CDFC20);
  return __cxa_atexit(sub_1FEA450, &qword_2CDFC20, &off_2AFC540);
}

