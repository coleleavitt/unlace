int __fastcall sub_2FB9E0(__int64 a1, __int64 a2)
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
  qword_2CDF090 = 0;
  v3 = v2;
  qword_2CDF098 = 0;
  qword_2CDF0A0 = 0;
  qword_2CDF080 = (__int64)&off_2C758B0;
  qword_2CDF088 = (unsigned int)qword_2CDF088 & 0x80000000;
  qword_2CDF0C8 = 0x100000000LL;
  qword_2CDF0A8 = 0;
  qword_2CDF0B0 = 0;
  qword_2CDF0B8 = 0;
  qword_2CDF0C0 = (__int64)&unk_2CDF0D0;
  qword_2CDF0D8 = (__int64)&unk_2CDF0F0;
  qword_2CDF0E0 = 1;
  dword_2CDF0E8 = 0;
  byte_2CDF0EC = 1;
  v4 = sub_2210FF0(
         "Enable adding inline-remark attribute to callsites processed by inliner but decided to be not inlined",
         a2);
  v5 = (unsigned int)qword_2CDF0C8;
  v6 = (unsigned int)qword_2CDF0C8 + 1LL;
  if ( v6 > HIDWORD(qword_2CDF0C8) )
  {
    v31.m128i_i64[0] = v4;
    sub_2237220((char *)&unk_2CDF0D0 - 16, &unk_2CDF0D0, v6, 8);
    v5 = (unsigned int)qword_2CDF0C8;
    v4 = v31.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CDF0C0 + 8 * v5) = v4;
  qword_2CDF100 = (__int64)off_2C714E8;
  word_2CDF108 = 0;
  qword_2CDF080 = (__int64)off_2C75848;
  v31 = (__m128i)_mm_loadh_ps((const double *)off_2C78368);
  xmmword_2CDF128 = (__int128)v31;
  qword_2CDF110 = (__int64)off_2BEAB08;
  LODWORD(qword_2CDF0C8) = qword_2CDF0C8 + 1;
  byte_2CDF0F8 = 0;
  sub_2217250(&qword_2CDF080, "inline-remark-attribute", 23);
  word_2CDF108 = 256;
  qword_2CDF0A8 = v3;
  byte_2CDF0F8 = 0;
  BYTE2(qword_2CDF088) = BYTE2(qword_2CDF088) & 0x9F | 0x20;
  qword_2CDF0A0 = (__int64)"Enable adding inline-remark attribute to callsites processed by inliner but decided to be not inlined";
  sub_2218140(&qword_2CDF080);
  __cxa_atexit(sub_200E190, &qword_2CDF080, &off_2B25620);
  v7 = j__strlen("Enable deferred inlining");
  qword_2CDF000 = (__int64)&unk_2CDF010;
  v8 = v7;
  qword_2CDEFD0 = 0;
  qword_2CDEFC0 = (__int64)&off_2C758B0;
  qword_2CDEFC8 = (unsigned int)qword_2CDEFC8 & 0x80000000;
  qword_2CDF008 = 0x100000000LL;
  qword_2CDEFD8 = 0;
  qword_2CDEFE0 = 0;
  qword_2CDEFE8 = 0;
  qword_2CDEFF0 = 0;
  qword_2CDEFF8 = 0;
  qword_2CDF018 = (__int64)&unk_2CDF030;
  qword_2CDF020 = 1;
  dword_2CDF028 = 0;
  byte_2CDF02C = 1;
  v9 = sub_2210FF0("Enable deferred inlining", &qword_2CDF080);
  v10 = (unsigned int)qword_2CDF008;
  v11 = (unsigned int)qword_2CDF008 + 1LL;
  if ( v11 > HIDWORD(qword_2CDF008) )
  {
    v32 = v9;
    sub_2237220((char *)&unk_2CDF010 - 16, &unk_2CDF010, v11, 8);
    v10 = (unsigned int)qword_2CDF008;
    v9 = v32;
  }
  v12 = _mm_load_si128(&v31);
  *(_QWORD *)(qword_2CDF000 + 8 * v10) = v9;
  qword_2CDF040 = (__int64)off_2C714E8;
  qword_2CDEFC0 = (__int64)off_2C75848;
  word_2CDF048 = 0;
  xmmword_2CDF068 = (__int128)v12;
  qword_2CDF050 = (__int64)off_2BEAB08;
  LODWORD(qword_2CDF008) = qword_2CDF008 + 1;
  byte_2CDF038 = 0;
  sub_2217250(&qword_2CDEFC0, "inline-deferral", 15);
  word_2CDF048 = 256;
  qword_2CDEFE8 = v8;
  byte_2CDF038 = 0;
  BYTE2(qword_2CDEFC8) = BYTE2(qword_2CDEFC8) & 0x9F | 0x20;
  qword_2CDEFE0 = (__int64)"Enable deferred inlining";
  sub_2218140(&qword_2CDEFC0);
  __cxa_atexit(sub_200E190, &qword_2CDEFC0, &off_2B25620);
  v13 = j__strlen("Scale to limit the cost of inline deferral");
  qword_2CDEF40 = (__int64)&unk_2CDEF50;
  v14 = v13;
  qword_2CDEF10 = 0;
  qword_2CDEF00 = (__int64)&off_2C758B0;
  qword_2CDEF08 = (unsigned int)qword_2CDEF08 & 0x80000000;
  qword_2CDEF48 = 0x100000000LL;
  qword_2CDEF18 = 0;
  qword_2CDEF20 = 0;
  qword_2CDEF28 = 0;
  qword_2CDEF30 = 0;
  qword_2CDEF38 = 0;
  qword_2CDEF58 = (__int64)&unk_2CDEF70;
  qword_2CDEF60 = 1;
  dword_2CDEF68 = 0;
  byte_2CDEF6C = 1;
  v15 = sub_2210FF0("Scale to limit the cost of inline deferral", &qword_2CDEFC0);
  v16 = (unsigned int)qword_2CDEF48;
  v17 = (unsigned int)qword_2CDEF48 + 1LL;
  if ( v17 > HIDWORD(qword_2CDEF48) )
  {
    v32 = v15;
    sub_2237220((char *)&unk_2CDEF50 - 16, &unk_2CDEF50, v17, 8);
    v16 = (unsigned int)qword_2CDEF48;
    v15 = v32;
  }
  *(_QWORD *)(qword_2CDEF40 + 8 * v16) = v15;
  xmmword_2CDEFA8 = (__int128)_mm_loadh_ps((const double *)&off_2C77900);
  LODWORD(qword_2CDEF48) = qword_2CDEF48 + 1;
  qword_2CDEF80 = (__int64)off_2C71BB0;
  dword_2CDEF78 = 0;
  byte_2CDEF8C = 0;
  qword_2CDEF00 = (__int64)off_2C75778;
  dword_2CDEF88 = 0;
  qword_2CDEF90 = (__int64)off_2BEAB68;
  sub_2217250(&qword_2CDEF00, "inline-deferral-scale", 21);
  qword_2CDEF28 = v14;
  qword_2CDEF20 = (__int64)"Scale to limit the cost of inline deferral";
  dword_2CDEF78 = 2;
  byte_2CDEF8C = 1;
  dword_2CDEF88 = 2;
  BYTE2(qword_2CDEF08) = BYTE2(qword_2CDEF08) & 0x9F | 0x20;
  sub_2218140(&qword_2CDEF00);
  __cxa_atexit(sub_20141D0, &qword_2CDEF00, &off_2B25620);
  v18 = j__strlen("If true, annotate inline advisor remarks with LTO and pass information.");
  qword_2CDEE80 = (__int64)&unk_2CDEE90;
  v19 = v18;
  qword_2CDEE50 = 0;
  qword_2CDEE40 = (__int64)&off_2C758B0;
  qword_2CDEE48 = (unsigned int)qword_2CDEE48 & 0x80000000;
  qword_2CDEE88 = 0x100000000LL;
  qword_2CDEE58 = 0;
  qword_2CDEE60 = 0;
  qword_2CDEE68 = 0;
  qword_2CDEE70 = 0;
  qword_2CDEE78 = 0;
  qword_2CDEE98 = (__int64)&unk_2CDEEB0;
  qword_2CDEEA0 = 1;
  dword_2CDEEA8 = 0;
  byte_2CDEEAC = 1;
  v20 = sub_2210FF0("If true, annotate inline advisor remarks with LTO and pass information.", &qword_2CDEF00);
  v21 = (unsigned int)qword_2CDEE88;
  v22 = (unsigned int)qword_2CDEE88 + 1LL;
  if ( v22 > HIDWORD(qword_2CDEE88) )
  {
    v32 = v20;
    sub_2237220((char *)&unk_2CDEE90 - 16, &unk_2CDEE90, v22, 8);
    v21 = (unsigned int)qword_2CDEE88;
    v20 = v32;
  }
  v23 = _mm_load_si128(&v31);
  *(_QWORD *)(qword_2CDEE80 + 8 * v21) = v20;
  word_2CDEEC8 = 0;
  qword_2CDEEC0 = (__int64)off_2C714E8;
  qword_2CDEE40 = (__int64)off_2C75848;
  xmmword_2CDEEE8 = (__int128)v23;
  qword_2CDEED0 = (__int64)off_2BEAB08;
  LODWORD(qword_2CDEE88) = qword_2CDEE88 + 1;
  byte_2CDEEB8 = 0;
  sub_2217250(&qword_2CDEE40, "annotate-inline-phase", 21);
  word_2CDEEC8 = 256;
  byte_2CDEEB8 = 0;
  qword_2CDEE68 = v19;
  BYTE2(qword_2CDEE48) = BYTE2(qword_2CDEE48) & 0x9F | 0x20;
  qword_2CDEE60 = (__int64)"If true, annotate inline advisor remarks with LTO and pass information.";
  sub_2218140(&qword_2CDEE40);
  __cxa_atexit(sub_200E190, &qword_2CDEE40, &off_2B25620);
  v24 = j__strlen("Vocab file for IR2Vec; Setting this enables configuring the model to use IR2Vec embeddings.");
  byte_2CDEDAC = 1;
  qword_2CDED50 = 0;
  v25 = v24;
  qword_2CDED40 = (__int64)&off_2C758B0;
  qword_2CDED48 = (unsigned int)qword_2CDED48 & 0x80000000;
  qword_2CDED88 = 0x100000000LL;
  qword_2CDED58 = 0;
  qword_2CDED60 = 0;
  qword_2CDED68 = 0;
  qword_2CDED70 = 0;
  qword_2CDED78 = 0;
  qword_2CDED80 = (__int64)&unk_2CDED90;
  qword_2CDED98 = (__int64)&unk_2CDEDB0;
  qword_2CDEDA0 = 1;
  dword_2CDEDA8 = 0;
  v26 = sub_2210FF0(
          "Vocab file for IR2Vec; Setting this enables configuring the model to use IR2Vec embeddings.",
          &qword_2CDEE40);
  v27 = (unsigned int)qword_2CDED88;
  v28 = (unsigned int)qword_2CDED88 + 1LL;
  if ( v28 > HIDWORD(qword_2CDED88) )
  {
    v31.m128i_i64[0] = v26;
    sub_2237220((char *)&unk_2CDED90 - 16, &unk_2CDED90, v28, 8);
    v27 = (unsigned int)qword_2CDED88;
    v26 = v31.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CDED80 + 8 * v27) = v26;
  qword_2CDEDB8 = (__int64)&byte_2CDEDC8;
  LODWORD(qword_2CDED88) = qword_2CDED88 + 1;
  v31.m128i_i64[0] = (__int64)&byte_2CDEDF0;
  qword_2CDEDC0 = 0;
  byte_2CDEDC8 = 0;
  v29 = _mm_loadh_ps((const double *)v31.m128i_i64);
  qword_2CDED40 = (__int64)off_2C757E0;
  xmmword_2CDEDD8 = (__int128)v29;
  byte_2CDEDF0 = 0;
  qword_2CDEE08 = (__int64)off_2BEAC58;
  xmmword_2CDEE20 = (__int128)_mm_loadh_ps((const double *)off_2C77938);
  qword_2CDEDE8 = 0;
  byte_2CDEE00 = 0;
  sub_2217250(&qword_2CDED40, "ml-inliner-ir2vec-vocab-file", 28);
  qword_2CDED68 = v25;
  BYTE2(qword_2CDED48) = BYTE2(qword_2CDED48) & 0x9F | 0x20;
  qword_2CDED60 = (__int64)"Vocab file for IR2Vec; Setting this enables configuring the model to use IR2Vec embeddings.";
  sub_2218140(&qword_2CDED40);
  return __cxa_atexit(sub_1FED2E0, &qword_2CDED40, &off_2B25620);
}
