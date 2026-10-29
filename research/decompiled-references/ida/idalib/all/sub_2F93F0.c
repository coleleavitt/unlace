int __fastcall sub_2F93F0(__int64 a1, __int64 a2)
{
  size_t v2; // rbx
  size_t v3; // rax
  size_t v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __m128 v9; // xmm0
  size_t v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  void *v13; // rsi
  char *v15; // [rsp+8h] [rbp-90h] BYREF
  int *v16; // [rsp+10h] [rbp-88h]
  _QWORD *v17; // [rsp+18h] [rbp-80h]
  int v18; // [rsp+24h] [rbp-74h] BYREF
  __int64 *v19; // [rsp+28h] [rbp-70h] BYREF
  __int64 *v20; // [rsp+30h] [rbp-68h] BYREF
  __int64 v21; // [rsp+38h] [rbp-60h] BYREF
  void *v22; // [rsp+40h] [rbp-58h] BYREF
  size_t v23; // [rsp+48h] [rbp-50h]
  _BYTE v24[72]; // [rsp+50h] [rbp-48h] BYREF

  v2 = j__strlen(&byte_22F0C30);
  v3 = j__strlen("IR2Vec Options");
  qword_2CDD218 = v2;
  qword_2CDD208 = v3;
  qword_2CDD200 = (__int64)"IR2Vec Options";
  qword_2CDD210 = (__int64)&byte_22F0C30;
  sub_22106F0(&qword_2CDD200);
  v4 = j__strlen("Path to the vocabulary file for IR2Vec");
  qword_2CDD140 = (__int64)&unk_2CDD150;
  v5 = v4;
  qword_2CDD110 = 0;
  qword_2CDD118 = 0;
  qword_2CDD120 = 0;
  qword_2CDD100 = (__int64)&off_2C758B0;
  qword_2CDD108 = (unsigned int)qword_2CDD108 & 0x80000000;
  qword_2CDD148 = 0x100000000LL;
  qword_2CDD128 = 0;
  qword_2CDD130 = 0;
  qword_2CDD138 = 0;
  qword_2CDD158 = (__int64)&unk_2CDD170;
  qword_2CDD160 = 1;
  dword_2CDD168 = 0;
  byte_2CDD16C = 1;
  v6 = sub_2210FF0("Path to the vocabulary file for IR2Vec", a2);
  v7 = (unsigned int)qword_2CDD148;
  v8 = (unsigned int)qword_2CDD148 + 1LL;
  if ( v8 > HIDWORD(qword_2CDD148) )
  {
    v15 = (char *)v6;
    sub_2237220((char *)&unk_2CDD150 - 16, &unk_2CDD150, v8, 8);
    v7 = (unsigned int)qword_2CDD148;
    v6 = (__int64)v15;
  }
  *(_QWORD *)(qword_2CDD140 + 8 * v7) = v6;
  qword_2CDD178 = (__int64)&byte_2CDD188;
  LODWORD(qword_2CDD148) = qword_2CDD148 + 1;
  v15 = &byte_2CDD1B0;
  qword_2CDD180 = 0;
  byte_2CDD188 = 0;
  v9 = _mm_loadh_ps((const double *)&v15);
  qword_2CDD100 = (__int64)off_2C757E0;
  xmmword_2CDD198 = (__int128)v9;
  byte_2CDD1B0 = 0;
  qword_2CDD1C8 = (__int64)off_2BEAC58;
  xmmword_2CDD1E0 = (__int128)_mm_loadh_ps((const double *)off_2C77938);
  qword_2CDD1A8 = 0;
  byte_2CDD1C0 = 0;
  sub_2217250(&qword_2CDD100, "ir2vec-vocab-path", 17);
  qword_2CDD128 = v5;
  qword_2CDD120 = (__int64)"Path to the vocabulary file for IR2Vec";
  BYTE2(qword_2CDD108) &= 0xF8u;
  v22 = v24;
  sub_2012C90(&v22, &byte_22F0C30);
  sub_9EE8A0(&qword_2CDD178, &v22);
  byte_2CDD1C0 = 1;
  sub_9EE8A0((char *)&xmmword_2CDD198 + 8, &v22);
  if ( v22 != v24 )
    operator delete(v22);
  sub_22107D0(&qword_2CDD100, &qword_2CDD200);
  sub_2218140(&qword_2CDD100);
  __cxa_atexit(sub_1FED2E0, &qword_2CDD100, &off_2B25620);
  v19 = &qword_2CDD200;
  v10 = j__strlen("Weight for opcode embeddings");
  v20 = &v21;
  v23 = v10;
  v22 = (void *)"Weight for opcode embeddings";
  v21 = 0x3FF0000000000000LL;
  v16 = &v18;
  v18 = 0;
  sub_2012D50(&unk_2CDD040, "ir2vec-opc-weight", &v18, &v20, &v22, &v19);
  __cxa_atexit(sub_2012C10, &unk_2CDD040, &off_2B25620);
  v15 = (char *)j__strlen("Weight for type embeddings");
  unk_2CDCF90 = 0;
  qword_2CDCFC0[0] = &qword_2CDCFC0[2];
  qword_2CDCF80 = &off_2C758B0;
  *(_QWORD *)&dword_2CDCF88 = dword_2CDCF88 & 0x80000000;
  qword_2CDCFC0[1] = 0x100000000LL;
  unk_2CDCF98 = 0;
  unk_2CDCFA0 = 0;
  unk_2CDCFA8 = 0;
  unk_2CDCFB0 = 0;
  unk_2CDCFB8 = 0;
  qword_2CDCFC0[3] = &qword_2CDCFC0[6];
  qword_2CDCFC0[4] = 1;
  LODWORD(qword_2CDCFC0[5]) = 0;
  BYTE4(qword_2CDCFC0[5]) = 1;
  v17 = &qword_2CDCFC0[2];
  v11 = sub_2210FF0("Weight for type embeddings", &qword_2CDCFC0[2]);
  v12 = LODWORD(qword_2CDCFC0[1]);
  v13 = v17;
  if ( (unsigned __int64)LODWORD(qword_2CDCFC0[1]) + 1 > HIDWORD(qword_2CDCFC0[1]) )
  {
    v17 = (_QWORD *)v11;
    sub_2237220(qword_2CDCFC0, v13, LODWORD(qword_2CDCFC0[1]) + 1LL, 8);
    v12 = LODWORD(qword_2CDCFC0[1]);
    v11 = (__int64)v17;
  }
  *(_QWORD *)(qword_2CDCFC0[0] + 8 * v12) = v11;
  ++LODWORD(qword_2CDCFC0[1]);
  LODWORD(qword_2CDCFC0[7]) = 0;
  qword_2CDCFC0[8] = off_2C719C8;
  LODWORD(qword_2CDCFC0[9]) = 0;
  BYTE4(qword_2CDCFC0[9]) = 0;
  qword_2CDCF80 = off_2C719E8;
  *(__m128 *)&qword_2CDCFC0[13] = _mm_loadh_ps((const double *)off_2C780C0);
  qword_2CDCFC0[10] = off_2BEAC28;
  sub_2217250(&qword_2CDCF80, "ir2vec-type-weight", 18);
  BYTE2(dword_2CDCF88) &= 0xF8u;
  unk_2CDCFA0 = "Weight for type embeddings";
  BYTE4(qword_2CDCFC0[9]) = 1;
  unk_2CDCFA8 = v15;
  LODWORD(qword_2CDCFC0[7]) = 1056964608;
  LODWORD(qword_2CDCFC0[9]) = 1056964608;
  sub_22107D0(&qword_2CDCF80, &qword_2CDD200);
  sub_2218140(&qword_2CDCF80);
  __cxa_atexit(sub_2012C10, &qword_2CDCF80, &off_2B25620);
  v19 = &qword_2CDD200;
  v23 = j__strlen("Weight for argument embeddings");
  v22 = (void *)"Weight for argument embeddings";
  v20 = &v21;
  v21 = 0x3FC999999999999ALL;
  v18 = 0;
  sub_2012D50(&unk_2CDCEC0, "ir2vec-arg-weight", v16, &v20, &v22, &v19);
  return __cxa_atexit(sub_2012C10, &unk_2CDCEC0, &off_2B25620);
}
