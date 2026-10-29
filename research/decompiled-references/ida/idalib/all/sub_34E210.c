int sub_34E210()
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
  __m128i si128; // xmm0
  unsigned __int64 v11; // rdx
  size_t v12; // rax
  __int128 v14; // [rsp+0h] [rbp-48h] BYREF
  __m128i v15[3]; // [rsp+10h] [rbp-38h] BYREF

  v0 = j__strlen("Force whether the StructurizeCFG pass skips uniform regions");
  qword_2D0A510 = 0;
  v1 = v0;
  qword_2D0A518 = 0;
  qword_2D0A520 = 0;
  qword_2D0A500 = (__int64)&off_2C758B0;
  qword_2D0A508 = (unsigned int)qword_2D0A508 & 0x80000000;
  qword_2D0A548 = 0x100000000LL;
  qword_2D0A528 = 0;
  qword_2D0A530 = 0;
  qword_2D0A538 = 0;
  qword_2D0A540 = (__int64)&unk_2D0A550;
  qword_2D0A558 = (__int64)&unk_2D0A570;
  qword_2D0A560 = 1;
  dword_2D0A568 = 0;
  byte_2D0A56C = 1;
  v2 = sub_2210FF0("Force whether the StructurizeCFG pass skips uniform regions");
  v3 = (unsigned int)qword_2D0A548;
  v4 = (unsigned int)qword_2D0A548 + 1LL;
  if ( v4 > HIDWORD(qword_2D0A548) )
  {
    *(_QWORD *)&v14 = v2;
    sub_2237220((char *)&unk_2D0A550 - 16, &unk_2D0A550, v4, 8);
    v3 = (unsigned int)qword_2D0A548;
    v2 = v14;
  }
  *(_QWORD *)(qword_2D0A540 + 8 * v3) = v2;
  qword_2D0A580 = (__int64)off_2C714E8;
  qword_2D0A500 = (__int64)off_2C75848;
  word_2D0A588 = 0;
  xmmword_2D0A5A8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  v14 = xmmword_2D0A5A8;
  LODWORD(qword_2D0A548) = qword_2D0A548 + 1;
  byte_2D0A578 = 0;
  qword_2D0A590 = (__int64)off_2BEAB08;
  v5 = j__strlen("structurizecfg-skip-uniform-regions");
  sub_2217250(&qword_2D0A500, "structurizecfg-skip-uniform-regions", v5);
  qword_2D0A528 = v1;
  word_2D0A588 = 256;
  byte_2D0A578 = 0;
  BYTE2(qword_2D0A508) = BYTE2(qword_2D0A508) & 0x9F | 0x20;
  qword_2D0A520 = (__int64)"Force whether the StructurizeCFG pass skips uniform regions";
  sub_2218140(&qword_2D0A500);
  __cxa_atexit(sub_200E190, &qword_2D0A500, &off_2B25620);
  v6 = j__strlen("Allow relaxed uniform region checks");
  byte_2D0A4AC = 1;
  qword_2D0A450 = 0;
  v7 = v6;
  qword_2D0A440 = (__int64)&off_2C758B0;
  qword_2D0A448 = (unsigned int)qword_2D0A448 & 0x80000000;
  qword_2D0A488 = 0x100000000LL;
  qword_2D0A458 = 0;
  qword_2D0A460 = 0;
  qword_2D0A468 = 0;
  qword_2D0A470 = 0;
  qword_2D0A478 = 0;
  qword_2D0A480 = (__int64)&unk_2D0A490;
  qword_2D0A498 = (__int64)&unk_2D0A4B0;
  qword_2D0A4A0 = 1;
  dword_2D0A4A8 = 0;
  v8 = sub_2210FF0("Allow relaxed uniform region checks");
  v9 = (unsigned int)qword_2D0A488;
  si128 = _mm_load_si128((const __m128i *)&v14);
  v11 = (unsigned int)qword_2D0A488 + 1LL;
  if ( v11 > HIDWORD(qword_2D0A488) )
  {
    *(_QWORD *)&v14 = v8;
    v15[0] = si128;
    sub_2237220((char *)&unk_2D0A490 - 16, &unk_2D0A490, v11, 8);
    v9 = (unsigned int)qword_2D0A488;
    si128 = _mm_load_si128(v15);
    v8 = v14;
  }
  *(_QWORD *)(qword_2D0A480 + 8 * v9) = v8;
  word_2D0A4C8 = 0;
  qword_2D0A4C0 = (__int64)off_2C714E8;
  qword_2D0A440 = (__int64)off_2C75848;
  xmmword_2D0A4E8 = (__int128)si128;
  LODWORD(qword_2D0A488) = qword_2D0A488 + 1;
  byte_2D0A4B8 = 0;
  qword_2D0A4D0 = (__int64)off_2BEAB08;
  v12 = j__strlen("structurizecfg-relaxed-uniform-regions");
  sub_2217250(&qword_2D0A440, "structurizecfg-relaxed-uniform-regions", v12);
  qword_2D0A468 = v7;
  word_2D0A4C8 = 257;
  byte_2D0A4B8 = 1;
  BYTE2(qword_2D0A448) = BYTE2(qword_2D0A448) & 0x9F | 0x20;
  qword_2D0A460 = (__int64)"Allow relaxed uniform region checks";
  sub_2218140(&qword_2D0A440);
  return __cxa_atexit(sub_200E190, &qword_2D0A440, &off_2B25620);
}
