int __fastcall sub_2F8620(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  size_t v7; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __m128i v12; // xmm2
  size_t v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  size_t v18; // rax
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __m128i v23; // xmm3
  size_t v24; // rax
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __m128 v29; // xmm0
  __m128i v31; // [rsp+0h] [rbp-58h] BYREF
  __int64 v32; // [rsp+18h] [rbp-40h]

  v2 = j__strlen("Enable adding inline-remark attribute to callsites processed by inliner but decided to be not inlined");
  qword_2CB5170 = 0;
  v3 = v2;
  qword_2CB5178 = 0;
  qword_2CB5180 = 0;
  qword_2CB5160 = (__int64)&off_2C4B8B0;
  qword_2CB5168 = (unsigned int)qword_2CB5168 & 0x80000000;
  qword_2CB51A8 = 0x100000000LL;
  qword_2CB5188 = 0;
  qword_2CB5190 = 0;
  qword_2CB5198 = 0;
  qword_2CB51A0 = (__int64)&unk_2CB51B0;
  qword_2CB51B8 = (__int64)&unk_2CB51D0;
  qword_2CB51C0 = 1;
  dword_2CB51C8 = 0;
  byte_2CB51CC = 1;
  v4 = sub_21ED2B0(
         "Enable adding inline-remark attribute to callsites processed by inliner but decided to be not inlined",
         a2);
  v5 = (unsigned int)qword_2CB51A8;
  v6 = (unsigned int)qword_2CB51A8 + 1LL;
  if ( v6 > HIDWORD(qword_2CB51A8) )
  {
    v31.m128i_i64[0] = v4;
    sub_22134E0((char *)&unk_2CB51B0 - 16, &unk_2CB51B0, v6, 8);
    v5 = (unsigned int)qword_2CB51A8;
    v4 = v31.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CB51A0 + 8 * v5) = v4;
  qword_2CB51E0 = (__int64)off_2C474E8;
  word_2CB51E8 = 0;
  qword_2CB5160 = (__int64)off_2C4B848;
  v31 = (__m128i)_mm_loadh_ps((const double *)off_2C4E368);
  xmmword_2CB5208 = (__int128)v31;
  qword_2CB51F0 = (__int64)off_2BC0B68;
  LODWORD(qword_2CB51A8) = qword_2CB51A8 + 1;
  byte_2CB51D8 = 0;
  sub_21F3510(&qword_2CB5160, "inline-remark-attribute", 23);
  word_2CB51E8 = 256;
  qword_2CB5188 = v3;
  byte_2CB51D8 = 0;
  BYTE2(qword_2CB5168) = BYTE2(qword_2CB5168) & 0x9F | 0x20;
  qword_2CB5180 = (__int64)"Enable adding inline-remark attribute to callsites processed by inliner but decided to be not inlined";
  sub_21F4400(&qword_2CB5160);
  __cxa_atexit(sub_1FEA450, &qword_2CB5160, &off_2AFC540);
  v7 = j__strlen("Enable deferred inlining");
  qword_2CB50E0 = (__int64)&unk_2CB50F0;
  v8 = v7;
  qword_2CB50B0 = 0;
  qword_2CB50A0 = (__int64)&off_2C4B8B0;
  qword_2CB50A8 = (unsigned int)qword_2CB50A8 & 0x80000000;
  qword_2CB50E8 = 0x100000000LL;
  qword_2CB50B8 = 0;
  qword_2CB50C0 = 0;
  qword_2CB50C8 = 0;
  qword_2CB50D0 = 0;
  qword_2CB50D8 = 0;
  qword_2CB50F8 = (__int64)&unk_2CB5110;
  qword_2CB5100 = 1;
  dword_2CB5108 = 0;
  byte_2CB510C = 1;
  v9 = sub_21ED2B0("Enable deferred inlining", &qword_2CB5160);
  v10 = (unsigned int)qword_2CB50E8;
  v11 = (unsigned int)qword_2CB50E8 + 1LL;
  if ( v11 > HIDWORD(qword_2CB50E8) )
  {
    v32 = v9;
    sub_22134E0((char *)&unk_2CB50F0 - 16, &unk_2CB50F0, v11, 8);
    v10 = (unsigned int)qword_2CB50E8;
    v9 = v32;
  }
  v12 = _mm_load_si128(&v31);
  *(_QWORD *)(qword_2CB50E0 + 8 * v10) = v9;
  qword_2CB5120 = (__int64)off_2C474E8;
  qword_2CB50A0 = (__int64)off_2C4B848;
  word_2CB5128 = 0;
  xmmword_2CB5148 = (__int128)v12;
  qword_2CB5130 = (__int64)off_2BC0B68;
  LODWORD(qword_2CB50E8) = qword_2CB50E8 + 1;
  byte_2CB5118 = 0;
  sub_21F3510(&qword_2CB50A0, "inline-deferral", 15);
  word_2CB5128 = 256;
  qword_2CB50C8 = v8;
  byte_2CB5118 = 0;
  BYTE2(qword_2CB50A8) = BYTE2(qword_2CB50A8) & 0x9F | 0x20;
  qword_2CB50C0 = (__int64)"Enable deferred inlining";
  sub_21F4400(&qword_2CB50A0);
  __cxa_atexit(sub_1FEA450, &qword_2CB50A0, &off_2AFC540);
  v13 = j__strlen("Scale to limit the cost of inline deferral");
  qword_2CB5020 = (__int64)&unk_2CB5030;
  v14 = v13;
  qword_2CB4FF0 = 0;
  qword_2CB4FE0 = (__int64)&off_2C4B8B0;
  qword_2CB4FE8 = (unsigned int)qword_2CB4FE8 & 0x80000000;
  qword_2CB5028 = 0x100000000LL;
  qword_2CB4FF8 = 0;
  qword_2CB5000 = 0;
  qword_2CB5008 = 0;
  qword_2CB5010 = 0;
  qword_2CB5018 = 0;
  qword_2CB5038 = (__int64)&unk_2CB5050;
  qword_2CB5040 = 1;
  dword_2CB5048 = 0;
  byte_2CB504C = 1;
  v15 = sub_21ED2B0("Scale to limit the cost of inline deferral", &qword_2CB50A0);
  v16 = (unsigned int)qword_2CB5028;
  v17 = (unsigned int)qword_2CB5028 + 1LL;
  if ( v17 > HIDWORD(qword_2CB5028) )
  {
    v32 = v15;
    sub_22134E0((char *)&unk_2CB5030 - 16, &unk_2CB5030, v17, 8);
    v16 = (unsigned int)qword_2CB5028;
    v15 = v32;
  }
  *(_QWORD *)(qword_2CB5020 + 8 * v16) = v15;
  xmmword_2CB5088 = (__int128)_mm_loadh_ps((const double *)&off_2C4D900);
  LODWORD(qword_2CB5028) = qword_2CB5028 + 1;
  qword_2CB5060 = (__int64)off_2C47BB0;
  dword_2CB5058 = 0;
  byte_2CB506C = 0;
  qword_2CB4FE0 = (__int64)off_2C4B778;
  dword_2CB5068 = 0;
  qword_2CB5070 = (__int64)off_2BC0BC8;
  sub_21F3510(&qword_2CB4FE0, "inline-deferral-scale", 21);
  qword_2CB5008 = v14;
  qword_2CB5000 = (__int64)"Scale to limit the cost of inline deferral";
  dword_2CB5058 = 2;
  byte_2CB506C = 1;
  dword_2CB5068 = 2;
  BYTE2(qword_2CB4FE8) = BYTE2(qword_2CB4FE8) & 0x9F | 0x20;
  sub_21F4400(&qword_2CB4FE0);
  __cxa_atexit(sub_1FF0490, &qword_2CB4FE0, &off_2AFC540);
  v18 = j__strlen("If true, annotate inline advisor remarks with LTO and pass information.");
  qword_2CB4F60 = (__int64)&unk_2CB4F70;
  v19 = v18;
  qword_2CB4F30 = 0;
  qword_2CB4F20 = (__int64)&off_2C4B8B0;
  qword_2CB4F28 = (unsigned int)qword_2CB4F28 & 0x80000000;
  qword_2CB4F68 = 0x100000000LL;
  qword_2CB4F38 = 0;
  qword_2CB4F40 = 0;
  qword_2CB4F48 = 0;
  qword_2CB4F50 = 0;
  qword_2CB4F58 = 0;
  qword_2CB4F78 = (__int64)&unk_2CB4F90;
  qword_2CB4F80 = 1;
  dword_2CB4F88 = 0;
  byte_2CB4F8C = 1;
  v20 = sub_21ED2B0("If true, annotate inline advisor remarks with LTO and pass information.", &qword_2CB4FE0);
  v21 = (unsigned int)qword_2CB4F68;
  v22 = (unsigned int)qword_2CB4F68 + 1LL;
  if ( v22 > HIDWORD(qword_2CB4F68) )
  {
    v32 = v20;
    sub_22134E0((char *)&unk_2CB4F70 - 16, &unk_2CB4F70, v22, 8);
    v21 = (unsigned int)qword_2CB4F68;
    v20 = v32;
  }
  v23 = _mm_load_si128(&v31);
  *(_QWORD *)(qword_2CB4F60 + 8 * v21) = v20;
  word_2CB4FA8 = 0;
  qword_2CB4FA0 = (__int64)off_2C474E8;
  qword_2CB4F20 = (__int64)off_2C4B848;
  xmmword_2CB4FC8 = (__int128)v23;
  qword_2CB4FB0 = (__int64)off_2BC0B68;
  LODWORD(qword_2CB4F68) = qword_2CB4F68 + 1;
  byte_2CB4F98 = 0;
  sub_21F3510(&qword_2CB4F20, "annotate-inline-phase", 21);
  word_2CB4FA8 = 256;
  byte_2CB4F98 = 0;
  qword_2CB4F48 = v19;
  BYTE2(qword_2CB4F28) = BYTE2(qword_2CB4F28) & 0x9F | 0x20;
  qword_2CB4F40 = (__int64)"If true, annotate inline advisor remarks with LTO and pass information.";
  sub_21F4400(&qword_2CB4F20);
  __cxa_atexit(sub_1FEA450, &qword_2CB4F20, &off_2AFC540);
  v24 = j__strlen("Vocab file for IR2Vec; Setting this enables configuring the model to use IR2Vec embeddings.");
  byte_2CB4E8C = 1;
  qword_2CB4E30 = 0;
  v25 = v24;
  qword_2CB4E20 = (__int64)&off_2C4B8B0;
  qword_2CB4E28 = (unsigned int)qword_2CB4E28 & 0x80000000;
  qword_2CB4E68 = 0x100000000LL;
  qword_2CB4E38 = 0;
  qword_2CB4E40 = 0;
  qword_2CB4E48 = 0;
  qword_2CB4E50 = 0;
  qword_2CB4E58 = 0;
  qword_2CB4E60 = (__int64)&unk_2CB4E70;
  qword_2CB4E78 = (__int64)&unk_2CB4E90;
  qword_2CB4E80 = 1;
  dword_2CB4E88 = 0;
  v26 = sub_21ED2B0(
          "Vocab file for IR2Vec; Setting this enables configuring the model to use IR2Vec embeddings.",
          &qword_2CB4F20);
  v27 = (unsigned int)qword_2CB4E68;
  v28 = (unsigned int)qword_2CB4E68 + 1LL;
  if ( v28 > HIDWORD(qword_2CB4E68) )
  {
    v31.m128i_i64[0] = v26;
    sub_22134E0((char *)&unk_2CB4E70 - 16, &unk_2CB4E70, v28, 8);
    v27 = (unsigned int)qword_2CB4E68;
    v26 = v31.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CB4E60 + 8 * v27) = v26;
  qword_2CB4E98 = (__int64)&byte_2CB4EA8;
  LODWORD(qword_2CB4E68) = qword_2CB4E68 + 1;
  v31.m128i_i64[0] = (__int64)&byte_2CB4ED0;
  qword_2CB4EA0 = 0;
  byte_2CB4EA8 = 0;
  v29 = _mm_loadh_ps((const double *)v31.m128i_i64);
  qword_2CB4E20 = (__int64)off_2C4B7E0;
  xmmword_2CB4EB8 = (__int128)v29;
  byte_2CB4ED0 = 0;
  qword_2CB4EE8 = (__int64)off_2BC0CB8;
  xmmword_2CB4F00 = (__int128)_mm_loadh_ps((const double *)off_2C4D938);
  qword_2CB4EC8 = 0;
  byte_2CB4EE0 = 0;
  sub_21F3510(&qword_2CB4E20, "ml-inliner-ir2vec-vocab-file", 28);
  qword_2CB4E48 = v25;
  BYTE2(qword_2CB4E28) = BYTE2(qword_2CB4E28) & 0x9F | 0x20;
  qword_2CB4E40 = (__int64)"Vocab file for IR2Vec; Setting this enables configuring the model to use IR2Vec embeddings.";
  sub_21F4400(&qword_2CB4E20);
  return __cxa_atexit(sub_1FC95A0, &qword_2CB4E20, &off_2AFC540);
}

