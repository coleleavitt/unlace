int sub_34B230()
{
  size_t v0; // rax
  __int64 v1; // r14
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __m128i si128; // xmm0
  unsigned __int64 v10; // rdx
  __int128 v12; // [rsp+0h] [rbp-48h] BYREF
  __m128i v13[3]; // [rsp+10h] [rbp-38h] BYREF

  v0 = j__strlen("Do not separate the constant offset from a GEP instruction");
  qword_2D09250 = 0;
  v1 = v0;
  qword_2D09258 = 0;
  qword_2D09260 = 0;
  qword_2D09240 = (__int64)&off_2C758B0;
  qword_2D09248 = (unsigned int)qword_2D09248 & 0x80000000;
  qword_2D09288 = 0x100000000LL;
  qword_2D09268 = 0;
  qword_2D09270 = 0;
  qword_2D09278 = 0;
  qword_2D09280 = (__int64)&unk_2D09290;
  qword_2D09298 = (__int64)&unk_2D092B0;
  qword_2D092A0 = 1;
  dword_2D092A8 = 0;
  byte_2D092AC = 1;
  v2 = sub_2210FF0("Do not separate the constant offset from a GEP instruction");
  v3 = (unsigned int)qword_2D09288;
  v4 = (unsigned int)qword_2D09288 + 1LL;
  if ( v4 > HIDWORD(qword_2D09288) )
  {
    *(_QWORD *)&v12 = v2;
    sub_2237220((char *)&unk_2D09290 - 16, &unk_2D09290, v4, 8);
    v3 = (unsigned int)qword_2D09288;
    v2 = v12;
  }
  *(_QWORD *)(qword_2D09280 + 8 * v3) = v2;
  qword_2D092C0 = (__int64)off_2C714E8;
  qword_2D09240 = (__int64)off_2C75848;
  word_2D092C8 = 0;
  xmmword_2D092E8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  v12 = xmmword_2D092E8;
  LODWORD(qword_2D09288) = qword_2D09288 + 1;
  qword_2D092D0 = (__int64)off_2BEAB08;
  byte_2D092B8 = 0;
  sub_2217250(&qword_2D09240, "disable-separate-const-offset-from-gep", 38);
  qword_2D09260 = (__int64)"Do not separate the constant offset from a GEP instruction";
  word_2D092C8 = 256;
  qword_2D09268 = v1;
  byte_2D092B8 = 0;
  BYTE2(qword_2D09248) = BYTE2(qword_2D09248) & 0x9F | 0x20;
  sub_2218140(&qword_2D09240);
  __cxa_atexit(sub_200E190, &qword_2D09240, &off_2B25620);
  v5 = j__strlen("Verify this pass produces no dead code");
  byte_2D091EC = 1;
  qword_2D09190 = 0;
  v6 = v5;
  qword_2D09180 = (__int64)&off_2C758B0;
  qword_2D09188 = (unsigned int)qword_2D09188 & 0x80000000;
  qword_2D091C8 = 0x100000000LL;
  qword_2D09198 = 0;
  qword_2D091A0 = 0;
  qword_2D091A8 = 0;
  qword_2D091B0 = 0;
  qword_2D091B8 = 0;
  qword_2D091C0 = (__int64)&unk_2D091D0;
  qword_2D091D8 = (__int64)&unk_2D091F0;
  qword_2D091E0 = 1;
  dword_2D091E8 = 0;
  v7 = sub_2210FF0("Verify this pass produces no dead code");
  v8 = (unsigned int)qword_2D091C8;
  si128 = _mm_load_si128((const __m128i *)&v12);
  v10 = (unsigned int)qword_2D091C8 + 1LL;
  if ( v10 > HIDWORD(qword_2D091C8) )
  {
    *(_QWORD *)&v12 = v7;
    v13[0] = si128;
    sub_2237220((char *)&unk_2D091D0 - 16, &unk_2D091D0, v10, 8);
    v8 = (unsigned int)qword_2D091C8;
    si128 = _mm_load_si128(v13);
    v7 = v12;
  }
  *(_QWORD *)(qword_2D091C0 + 8 * v8) = v7;
  word_2D09208 = 0;
  qword_2D09200 = (__int64)off_2C714E8;
  qword_2D09180 = (__int64)off_2C75848;
  qword_2D09210 = (__int64)off_2BEAB08;
  xmmword_2D09228 = (__int128)si128;
  LODWORD(qword_2D091C8) = qword_2D091C8 + 1;
  byte_2D091F8 = 0;
  sub_2217250(&qword_2D09180, "reassociate-geps-verify-no-dead-code", 36);
  qword_2D091A0 = (__int64)"Verify this pass produces no dead code";
  word_2D09208 = 256;
  qword_2D091A8 = v6;
  byte_2D091F8 = 0;
  BYTE2(qword_2D09188) = BYTE2(qword_2D09188) & 0x9F | 0x20;
  sub_2218140(&qword_2D09180);
  return __cxa_atexit(sub_200E190, &qword_2D09180, &off_2B25620);
}
