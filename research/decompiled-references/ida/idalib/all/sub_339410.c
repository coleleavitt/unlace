int __fastcall sub_339410(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __m128i si128; // xmm0
  unsigned __int64 v7; // rdx
  __int128 v9; // [rsp+0h] [rbp-48h] BYREF
  __m128i v10[3]; // [rsp+10h] [rbp-38h] BYREF

  qword_2D00530 = 0;
  qword_2D00538 = 0;
  qword_2D00540 = 0;
  qword_2D00520 = (__int64)&off_2C758B0;
  qword_2D00528 = (unsigned int)qword_2D00528 & 0x80000000;
  qword_2D00568 = 0x100000000LL;
  qword_2D00548 = 0;
  qword_2D00550 = 0;
  qword_2D00558 = 0;
  qword_2D00560 = (__int64)&unk_2D00570;
  qword_2D00578 = (__int64)&unk_2D00590;
  qword_2D00580 = 1;
  dword_2D00588 = 0;
  byte_2D0058C = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2D00568;
  v3 = (unsigned int)qword_2D00568 + 1LL;
  if ( v3 > HIDWORD(qword_2D00568) )
  {
    *(_QWORD *)&v9 = v1;
    sub_2237220((char *)&unk_2D00570 - 16, &unk_2D00570, v3, 8);
    v2 = (unsigned int)qword_2D00568;
    v1 = v9;
  }
  *(_QWORD *)(qword_2D00560 + 8 * v2) = v1;
  qword_2D005A0 = (__int64)off_2C714E8;
  qword_2D00520 = (__int64)off_2C75848;
  word_2D005A8 = 0;
  xmmword_2D005C8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  v9 = xmmword_2D005C8;
  LODWORD(qword_2D00568) = qword_2D00568 + 1;
  qword_2D005B0 = (__int64)off_2BEAB08;
  byte_2D00598 = 0;
  sub_2217250(&qword_2D00520, "adce-remove-control-flow", 24);
  word_2D005A8 = 257;
  byte_2D00598 = 1;
  BYTE2(qword_2D00528) = BYTE2(qword_2D00528) & 0x9F | 0x20;
  sub_2218140(&qword_2D00520);
  __cxa_atexit(sub_200E190, &qword_2D00520, &off_2B25620);
  qword_2D00470 = 0;
  qword_2D00460 = (__int64)&off_2C758B0;
  qword_2D00468 = (unsigned int)qword_2D00468 & 0x80000000;
  qword_2D004A8 = 0x100000000LL;
  qword_2D00478 = 0;
  qword_2D00480 = 0;
  qword_2D00488 = 0;
  qword_2D00490 = 0;
  qword_2D00498 = 0;
  qword_2D004A0 = (__int64)&unk_2D004B0;
  qword_2D004B8 = (__int64)&unk_2D004D0;
  qword_2D004C0 = 1;
  dword_2D004C8 = 0;
  byte_2D004CC = 1;
  v4 = sub_2210FF0((const char *)sub_200E190);
  v5 = (unsigned int)qword_2D004A8;
  si128 = _mm_load_si128((const __m128i *)&v9);
  v7 = (unsigned int)qword_2D004A8 + 1LL;
  if ( v7 > HIDWORD(qword_2D004A8) )
  {
    *(_QWORD *)&v9 = v4;
    v10[0] = si128;
    sub_2237220((char *)&unk_2D004B0 - 16, &unk_2D004B0, v7, 8);
    v5 = (unsigned int)qword_2D004A8;
    si128 = _mm_load_si128(v10);
    v4 = v9;
  }
  *(_QWORD *)(qword_2D004A0 + 8 * v5) = v4;
  word_2D004E8 = 0;
  qword_2D004E0 = (__int64)off_2C714E8;
  qword_2D00460 = (__int64)off_2C75848;
  qword_2D004F0 = (__int64)off_2BEAB08;
  xmmword_2D00508 = (__int128)si128;
  LODWORD(qword_2D004A8) = qword_2D004A8 + 1;
  byte_2D004D8 = 0;
  sub_2217250(&qword_2D00460, "adce-remove-loops", 17);
  word_2D004E8 = 256;
  byte_2D004D8 = 0;
  BYTE2(qword_2D00468) = BYTE2(qword_2D00468) & 0x9F | 0x20;
  sub_2218140(&qword_2D00460);
  return __cxa_atexit(sub_200E190, &qword_2D00460, &off_2B25620);
}
