int __fastcall sub_2F6030(__int64 a1, __int64 a2)
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

  v2 = j__strlen(&byte_22CD811);
  v3 = j__strlen("IR2Vec Options");
  qword_2CB32F8 = v2;
  qword_2CB32E8 = v3;
  qword_2CB32E0 = (__int64)"IR2Vec Options";
  qword_2CB32F0 = (__int64)&byte_22CD811;
  sub_21EC9B0(&qword_2CB32E0);
  v4 = j__strlen("Path to the vocabulary file for IR2Vec");
  qword_2CB3220 = (__int64)&unk_2CB3230;
  v5 = v4;
  qword_2CB31F0 = 0;
  qword_2CB31F8 = 0;
  qword_2CB3200 = 0;
  qword_2CB31E0 = (__int64)&off_2C4B8B0;
  qword_2CB31E8 = (unsigned int)qword_2CB31E8 & 0x80000000;
  qword_2CB3228 = 0x100000000LL;
  qword_2CB3208 = 0;
  qword_2CB3210 = 0;
  qword_2CB3218 = 0;
  qword_2CB3238 = (__int64)&unk_2CB3250;
  qword_2CB3240 = 1;
  dword_2CB3248 = 0;
  byte_2CB324C = 1;
  v6 = sub_21ED2B0("Path to the vocabulary file for IR2Vec", a2);
  v7 = (unsigned int)qword_2CB3228;
  v8 = (unsigned int)qword_2CB3228 + 1LL;
  if ( v8 > HIDWORD(qword_2CB3228) )
  {
    v15 = (char *)v6;
    sub_22134E0((char *)&unk_2CB3230 - 16, &unk_2CB3230, v8, 8);
    v7 = (unsigned int)qword_2CB3228;
    v6 = (__int64)v15;
  }
  *(_QWORD *)(qword_2CB3220 + 8 * v7) = v6;
  qword_2CB3258 = (__int64)&byte_2CB3268;
  LODWORD(qword_2CB3228) = qword_2CB3228 + 1;
  v15 = &byte_2CB3290;
  qword_2CB3260 = 0;
  byte_2CB3268 = 0;
  v9 = _mm_loadh_ps((const double *)&v15);
  qword_2CB31E0 = (__int64)off_2C4B7E0;
  xmmword_2CB3278 = (__int128)v9;
  byte_2CB3290 = 0;
  qword_2CB32A8 = (__int64)off_2BC0CB8;
  xmmword_2CB32C0 = (__int128)_mm_loadh_ps((const double *)off_2C4D938);
  qword_2CB3288 = 0;
  byte_2CB32A0 = 0;
  sub_21F3510(&qword_2CB31E0, "ir2vec-vocab-path", 17);
  qword_2CB3208 = v5;
  qword_2CB3200 = (__int64)"Path to the vocabulary file for IR2Vec";
  BYTE2(qword_2CB31E8) &= 0xF8u;
  v22 = v24;
  sub_1FEEF50(&v22, &byte_22CD811);
  sub_9CAB60(&qword_2CB3258, &v22);
  byte_2CB32A0 = 1;
  sub_9CAB60((char *)&xmmword_2CB3278 + 8, &v22);
  if ( v22 != v24 )
    operator delete(v22);
  sub_21ECA90(&qword_2CB31E0, &qword_2CB32E0);
  sub_21F4400(&qword_2CB31E0);
  __cxa_atexit(sub_1FC95A0, &qword_2CB31E0, &off_2AFC540);
  v19 = &qword_2CB32E0;
  v10 = j__strlen("Weight for opcode embeddings");
  v20 = &v21;
  v23 = v10;
  v22 = (void *)"Weight for opcode embeddings";
  v21 = 0x3FF0000000000000LL;
  v16 = &v18;
  v18 = 0;
  sub_1FEF010(&unk_2CB3120, "ir2vec-opc-weight", &v18, &v20, &v22, &v19);
  __cxa_atexit(sub_1FEEED0, &unk_2CB3120, &off_2AFC540);
  v15 = (char *)j__strlen("Weight for type embeddings");
  unk_2CB3070 = 0;
  qword_2CB30A0[0] = &qword_2CB30A0[2];
  qword_2CB3060 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CB3068 = dword_2CB3068 & 0x80000000;
  qword_2CB30A0[1] = 0x100000000LL;
  unk_2CB3078 = 0;
  unk_2CB3080 = 0;
  unk_2CB3088 = 0;
  unk_2CB3090 = 0;
  unk_2CB3098 = 0;
  qword_2CB30A0[3] = &qword_2CB30A0[6];
  qword_2CB30A0[4] = 1;
  LODWORD(qword_2CB30A0[5]) = 0;
  BYTE4(qword_2CB30A0[5]) = 1;
  v17 = &qword_2CB30A0[2];
  v11 = sub_21ED2B0("Weight for type embeddings", &qword_2CB30A0[2]);
  v12 = LODWORD(qword_2CB30A0[1]);
  v13 = v17;
  if ( (unsigned __int64)LODWORD(qword_2CB30A0[1]) + 1 > HIDWORD(qword_2CB30A0[1]) )
  {
    v17 = (_QWORD *)v11;
    sub_22134E0(qword_2CB30A0, v13, LODWORD(qword_2CB30A0[1]) + 1LL, 8);
    v12 = LODWORD(qword_2CB30A0[1]);
    v11 = (__int64)v17;
  }
  *(_QWORD *)(qword_2CB30A0[0] + 8 * v12) = v11;
  ++LODWORD(qword_2CB30A0[1]);
  LODWORD(qword_2CB30A0[7]) = 0;
  qword_2CB30A0[8] = off_2C479C8;
  LODWORD(qword_2CB30A0[9]) = 0;
  BYTE4(qword_2CB30A0[9]) = 0;
  qword_2CB3060 = off_2C479E8;
  *(__m128 *)&qword_2CB30A0[13] = _mm_loadh_ps((const double *)off_2C4E0C0);
  qword_2CB30A0[10] = off_2BC0C88;
  sub_21F3510(&qword_2CB3060, "ir2vec-type-weight", 18);
  BYTE2(dword_2CB3068) &= 0xF8u;
  unk_2CB3080 = "Weight for type embeddings";
  BYTE4(qword_2CB30A0[9]) = 1;
  unk_2CB3088 = v15;
  LODWORD(qword_2CB30A0[7]) = 1056964608;
  LODWORD(qword_2CB30A0[9]) = 1056964608;
  sub_21ECA90(&qword_2CB3060, &qword_2CB32E0);
  sub_21F4400(&qword_2CB3060);
  __cxa_atexit(sub_1FEEED0, &qword_2CB3060, &off_2AFC540);
  v19 = &qword_2CB32E0;
  v23 = j__strlen("Weight for argument embeddings");
  v22 = (void *)"Weight for argument embeddings";
  v20 = &v21;
  v21 = 0x3FC999999999999ALL;
  v18 = 0;
  sub_1FEF010(&unk_2CB2FA0, "ir2vec-arg-weight", v16, &v20, &v22, &v19);
  return __cxa_atexit(sub_1FEEED0, &unk_2CB2FA0, &off_2AFC540);
}

