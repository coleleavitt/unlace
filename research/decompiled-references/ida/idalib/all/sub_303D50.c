int __fastcall sub_303D50(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  size_t v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __m128i si128; // xmm0
  unsigned __int64 v13; // rdx
  size_t v14; // rax
  __int128 v16; // [rsp+0h] [rbp-48h] BYREF
  __m128i v17[3]; // [rsp+10h] [rbp-38h] BYREF

  qword_2CE2DD0 = 0;
  qword_2CE2DD8 = 0;
  qword_2CE2DE0 = 0;
  qword_2CE2DC0 = (__int64)&off_2C758B0;
  qword_2CE2DC8 = (unsigned int)qword_2CE2DC8 & 0x80000000;
  qword_2CE2E08 = 0x100000000LL;
  qword_2CE2DE8 = 0;
  qword_2CE2DF0 = 0;
  qword_2CE2DF8 = 0;
  qword_2CE2E00 = (__int64)&unk_2CE2E10;
  qword_2CE2E18 = (__int64)&unk_2CE2E30;
  qword_2CE2E20 = 1;
  dword_2CE2E28 = 0;
  byte_2CE2E2C = 1;
  v2 = sub_2210FF0(a1, a2);
  v3 = (unsigned int)qword_2CE2E08;
  v4 = (unsigned int)qword_2CE2E08 + 1LL;
  if ( v4 > HIDWORD(qword_2CE2E08) )
  {
    *(_QWORD *)&v16 = v2;
    sub_2237220((char *)&unk_2CE2E10 - 16, &unk_2CE2E10, v4, 8);
    v3 = (unsigned int)qword_2CE2E08;
    v2 = v16;
  }
  *(_QWORD *)(qword_2CE2E00 + 8 * v3) = v2;
  xmmword_2CE2E68 = (__int128)_mm_loadh_ps((const double *)&off_2C77900);
  LODWORD(qword_2CE2E08) = qword_2CE2E08 + 1;
  qword_2CE2E40 = (__int64)off_2C71BB0;
  dword_2CE2E38 = 0;
  byte_2CE2E4C = 0;
  qword_2CE2DC0 = (__int64)off_2C75778;
  dword_2CE2E48 = 0;
  qword_2CE2E50 = (__int64)off_2BEAB68;
  v5 = j__strlen("stack-safety-max-iterations");
  sub_2217250(&qword_2CE2DC0, "stack-safety-max-iterations", v5);
  dword_2CE2E38 = 20;
  byte_2CE2E4C = 1;
  dword_2CE2E48 = 20;
  BYTE2(qword_2CE2DC8) = BYTE2(qword_2CE2DC8) & 0x9F | 0x20;
  sub_2218140(&qword_2CE2DC0);
  __cxa_atexit(sub_20141D0, &qword_2CE2DC0, &off_2B25620);
  qword_2CE2D10 = 0;
  qword_2CE2D00 = (__int64)&off_2C758B0;
  qword_2CE2D08 = (unsigned int)qword_2CE2D08 & 0x80000000;
  qword_2CE2D48 = 0x100000000LL;
  qword_2CE2D18 = 0;
  qword_2CE2D20 = 0;
  qword_2CE2D28 = 0;
  qword_2CE2D30 = 0;
  qword_2CE2D38 = 0;
  qword_2CE2D40 = (__int64)&unk_2CE2D50;
  qword_2CE2D58 = (__int64)&unk_2CE2D70;
  qword_2CE2D60 = 1;
  dword_2CE2D68 = 0;
  byte_2CE2D6C = 1;
  v6 = sub_2210FF0(sub_20141D0, &qword_2CE2DC0);
  v7 = (unsigned int)qword_2CE2D48;
  v8 = (unsigned int)qword_2CE2D48 + 1LL;
  if ( v8 > HIDWORD(qword_2CE2D48) )
  {
    *(_QWORD *)&v16 = v6;
    sub_2237220((char *)&unk_2CE2D50 - 16, &unk_2CE2D50, v8, 8);
    v7 = (unsigned int)qword_2CE2D48;
    v6 = v16;
  }
  *(_QWORD *)(qword_2CE2D40 + 8 * v7) = v6;
  qword_2CE2D80 = (__int64)off_2C714E8;
  qword_2CE2D00 = (__int64)off_2C75848;
  word_2CE2D88 = 0;
  xmmword_2CE2DA8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  v16 = xmmword_2CE2DA8;
  LODWORD(qword_2CE2D48) = qword_2CE2D48 + 1;
  byte_2CE2D78 = 0;
  qword_2CE2D90 = (__int64)off_2BEAB08;
  v9 = j__strlen("stack-safety-print");
  sub_2217250(&qword_2CE2D00, "stack-safety-print", v9);
  word_2CE2D88 = 256;
  byte_2CE2D78 = 0;
  BYTE2(qword_2CE2D08) = BYTE2(qword_2CE2D08) & 0x9F | 0x20;
  sub_2218140(&qword_2CE2D00);
  __cxa_atexit(sub_200E190, &qword_2CE2D00, &off_2B25620);
  qword_2CE2C50 = 0;
  qword_2CE2C40 = (__int64)&off_2C758B0;
  qword_2CE2C48 = (unsigned int)qword_2CE2C48 & 0x80000000;
  qword_2CE2C88 = 0x100000000LL;
  qword_2CE2C58 = 0;
  qword_2CE2C60 = 0;
  qword_2CE2C68 = 0;
  qword_2CE2C70 = 0;
  qword_2CE2C78 = 0;
  qword_2CE2C80 = (__int64)&unk_2CE2C90;
  qword_2CE2C98 = (__int64)&unk_2CE2CB0;
  qword_2CE2CA0 = 1;
  dword_2CE2CA8 = 0;
  byte_2CE2CAC = 1;
  v10 = sub_2210FF0(sub_200E190, &qword_2CE2D00);
  v11 = (unsigned int)qword_2CE2C88;
  si128 = _mm_load_si128((const __m128i *)&v16);
  v13 = (unsigned int)qword_2CE2C88 + 1LL;
  if ( v13 > HIDWORD(qword_2CE2C88) )
  {
    *(_QWORD *)&v16 = v10;
    v17[0] = si128;
    sub_2237220((char *)&unk_2CE2C90 - 16, &unk_2CE2C90, v13, 8);
    v11 = (unsigned int)qword_2CE2C88;
    si128 = _mm_load_si128(v17);
    v10 = v16;
  }
  *(_QWORD *)(qword_2CE2C80 + 8 * v11) = v10;
  word_2CE2CC8 = 0;
  qword_2CE2CC0 = (__int64)off_2C714E8;
  qword_2CE2C40 = (__int64)off_2C75848;
  xmmword_2CE2CE8 = (__int128)si128;
  LODWORD(qword_2CE2C88) = qword_2CE2C88 + 1;
  byte_2CE2CB8 = 0;
  qword_2CE2CD0 = (__int64)off_2BEAB08;
  v14 = j__strlen("stack-safety-run");
  sub_2217250(&qword_2CE2C40, "stack-safety-run", v14);
  word_2CE2CC8 = 256;
  byte_2CE2CB8 = 0;
  BYTE2(qword_2CE2C48) = BYTE2(qword_2CE2C48) & 0x9F | 0x20;
  sub_2218140(&qword_2CE2C40);
  return __cxa_atexit(sub_200E190, &qword_2CE2C40, &off_2B25620);
}
