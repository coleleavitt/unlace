int __fastcall sub_5A35B0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r9
  const char *v9; // [rsp+0h] [rbp-48h] BYREF
  __int16 v10; // [rsp+20h] [rbp-28h]

  qword_4B01BF0 = 0;
  qword_4B01BF8 = 0;
  qword_4B01C00 = 0;
  qword_4B01BE0 = (__int64)&off_4A6E058;
  qword_4B01BE8 = (unsigned int)qword_4B01BE8 & 0x80000000;
  qword_4B01C08 = 0;
  qword_4B01C28 = 0x100000000LL;
  qword_4B01C10 = 0;
  qword_4B01C18 = 0;
  qword_4B01C20 = (__int64)&qword_4B01C30;
  qword_4B01C38 = (__int64)&qword_4B01C50;
  qword_4B01C40 = 1;
  dword_4B01C48 = 0;
  byte_4B01C4C = 1;
  v1 = sub_259AC30(a1, &qword_4B01C30);
  v2 = (unsigned int)qword_4B01C28;
  v3 = (unsigned int)qword_4B01C28 + 1LL;
  if ( HIDWORD(qword_4B01C28) < v3 )
  {
    sub_25D6060(&qword_4B01C30 - 2, &qword_4B01C30, v3, 8);
    v2 = (unsigned int)qword_4B01C28;
  }
  *(_QWORD *)(qword_4B01C20 + 8 * v2) = v1;
  xmmword_4B01C78 = 0;
  LODWORD(qword_4B01C28) = qword_4B01C28 + 1;
  qword_4B01C60 = (__int64)&off_4A64730;
  qword_4B01C58 = 0;
  byte_4B01C69 = 0;
  qword_4B01BE0 = (__int64)off_4A6D260;
  qword_4B01C70 = (__int64)off_49D9168;
  xmmword_4B01C88 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB548),
                                (__m128i)(unsigned __int64)nullsub_329);
  sub_259F400(&qword_4B01BE0, "verify-regalloc", 15);
  if ( qword_4B01C58 )
  {
    v6 = sub_26260E0(&qword_4B01BE0, "verify-regalloc", v4, v5);
    v10 = 259;
    v9 = "cl::location(x) specified more than once!";
    sub_2598800(&qword_4B01BE0, &v9, 0, 0, v6, v7);
  }
  else
  {
    byte_4B01C69 = 1;
    qword_4B01C58 = (__int64)byte_4B01BC5;
    byte_4B01C68 = byte_4B01BC5[0];
  }
  qword_4B01C08 = 33;
  BYTE2(qword_4B01BE8) = BYTE2(qword_4B01BE8) & 0x9F | 0x20;
  qword_4B01C00 = (__int64)"Verify during register allocation";
  sub_259EC40(&qword_4B01BE0);
  return __cxa_atexit(sub_23D25A0, &qword_4B01BE0, &off_47CFE00);
}

