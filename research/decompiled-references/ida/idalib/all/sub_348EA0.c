int sub_348EA0()
{
  size_t v0; // rbx
  size_t v1; // rax
  size_t v2; // rbx
  size_t v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  size_t v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __m128i si128; // xmm0
  unsigned __int64 v11; // rdx
  size_t v12; // rax
  __int128 v14; // [rsp+0h] [rbp-48h] BYREF
  __m128i v15[3]; // [rsp+10h] [rbp-38h] BYREF

  v0 = j__strlen("Controls which instructions are value numbered");
  v1 = j__strlen("newgvn-vn");
  dword_2D08638 = sub_21E91E0("newgvn-vn", v1, "Controls which instructions are value numbered", v0);
  v2 = j__strlen("Controls which instructions we create phi of ops for");
  v3 = j__strlen("newgvn-phi");
  sub_21E91E0("newgvn-phi", v3, "Controls which instructions we create phi of ops for", v2);
  qword_2D08590 = 0;
  qword_2D08598 = 0;
  qword_2D085A0 = 0;
  qword_2D08580 = (__int64)&off_2C758B0;
  qword_2D08588 = (unsigned int)qword_2D08588 & 0x80000000;
  qword_2D085C8 = 0x100000000LL;
  qword_2D085A8 = 0;
  qword_2D085B0 = 0;
  qword_2D085B8 = 0;
  qword_2D085C0 = (__int64)&unk_2D085D0;
  qword_2D085D8 = (__int64)&unk_2D085F0;
  qword_2D085E0 = 1;
  dword_2D085E8 = 0;
  byte_2D085EC = 1;
  v4 = sub_2210FF0("newgvn-phi");
  v5 = (unsigned int)qword_2D085C8;
  v6 = (unsigned int)qword_2D085C8 + 1LL;
  if ( v6 > HIDWORD(qword_2D085C8) )
  {
    *(_QWORD *)&v14 = v4;
    sub_2237220((char *)&unk_2D085D0 - 16, &unk_2D085D0, v6, 8);
    v5 = (unsigned int)qword_2D085C8;
    v4 = v14;
  }
  *(_QWORD *)(qword_2D085C0 + 8 * v5) = v4;
  qword_2D08600 = (__int64)off_2C714E8;
  qword_2D08580 = (__int64)off_2C75848;
  word_2D08608 = 0;
  xmmword_2D08628 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  v14 = xmmword_2D08628;
  LODWORD(qword_2D085C8) = qword_2D085C8 + 1;
  byte_2D085F8 = 0;
  qword_2D08610 = (__int64)off_2BEAB08;
  v7 = j__strlen("enable-store-refinement");
  sub_2217250(&qword_2D08580, "enable-store-refinement", v7);
  word_2D08608 = 256;
  byte_2D085F8 = 0;
  BYTE2(qword_2D08588) = BYTE2(qword_2D08588) & 0x9F | 0x20;
  sub_2218140(&qword_2D08580);
  __cxa_atexit(sub_200E190, &qword_2D08580, &off_2B25620);
  qword_2D084D0 = 0;
  qword_2D084C0 = (__int64)&off_2C758B0;
  qword_2D084C8 = (unsigned int)qword_2D084C8 & 0x80000000;
  qword_2D08508 = 0x100000000LL;
  qword_2D084D8 = 0;
  qword_2D084E0 = 0;
  qword_2D084E8 = 0;
  qword_2D084F0 = 0;
  qword_2D084F8 = 0;
  qword_2D08500 = (__int64)&unk_2D08510;
  qword_2D08518 = (__int64)&unk_2D08530;
  qword_2D08520 = 1;
  dword_2D08528 = 0;
  byte_2D0852C = 1;
  v8 = sub_2210FF0((const char *)sub_200E190);
  v9 = (unsigned int)qword_2D08508;
  si128 = _mm_load_si128((const __m128i *)&v14);
  v11 = (unsigned int)qword_2D08508 + 1LL;
  if ( v11 > HIDWORD(qword_2D08508) )
  {
    *(_QWORD *)&v14 = v8;
    v15[0] = si128;
    sub_2237220((char *)&unk_2D08510 - 16, &unk_2D08510, v11, 8);
    v9 = (unsigned int)qword_2D08508;
    si128 = _mm_load_si128(v15);
    v8 = v14;
  }
  *(_QWORD *)(qword_2D08500 + 8 * v9) = v8;
  word_2D08548 = 0;
  qword_2D08540 = (__int64)off_2C714E8;
  qword_2D084C0 = (__int64)off_2C75848;
  xmmword_2D08568 = (__int128)si128;
  LODWORD(qword_2D08508) = qword_2D08508 + 1;
  byte_2D08538 = 0;
  qword_2D08550 = (__int64)off_2BEAB08;
  v12 = j__strlen("enable-phi-of-ops");
  sub_2217250(&qword_2D084C0, "enable-phi-of-ops", v12);
  word_2D08548 = 257;
  byte_2D08538 = 1;
  BYTE2(qword_2D084C8) = BYTE2(qword_2D084C8) & 0x9F | 0x20;
  sub_2218140(&qword_2D084C0);
  return __cxa_atexit(sub_200E190, &qword_2D084C0, &off_2B25620);
}
