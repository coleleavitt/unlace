int __fastcall sub_589460(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AF3E30 = 0;
  qword_4AF3E38 = 0;
  qword_4AF3E40 = 0;
  qword_4AF3E20 = (__int64)&off_4A6E058;
  qword_4AF3E28 = (unsigned int)qword_4AF3E28 & 0x80000000;
  qword_4AF3E48 = 0;
  qword_4AF3E68 = 0x100000000LL;
  qword_4AF3E50 = 0;
  qword_4AF3E58 = 0;
  qword_4AF3E60 = (__int64)&qword_4AF3E70;
  qword_4AF3E78 = (__int64)&qword_4AF3E90;
  qword_4AF3E80 = 1;
  dword_4AF3E88 = 0;
  byte_4AF3E8C = 1;
  v1 = sub_259AC30(a1, &qword_4AF3E70);
  v2 = (unsigned int)qword_4AF3E68;
  v3 = (unsigned int)qword_4AF3E68 + 1LL;
  if ( HIDWORD(qword_4AF3E68) < v3 )
  {
    sub_25D6060(&qword_4AF3E70 - 2, &qword_4AF3E70, v3, 8);
    v2 = (unsigned int)qword_4AF3E68;
  }
  *(_QWORD *)(qword_4AF3E60 + 8 * v2) = v1;
  xmmword_4AF3EB8 = 0;
  LODWORD(qword_4AF3E68) = qword_4AF3E68 + 1;
  qword_4AF3EA0 = (__int64)&off_4A692B8;
  dword_4AF3E98 = 0;
  byte_4AF3EAC = 0;
  qword_4AF3E20 = (__int64)off_4A6DF20;
  dword_4AF3EA8 = 0;
  qword_4AF3EB0 = (__int64)off_49D91C8;
  xmmword_4AF3EC8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E9C20),
                                (__m128i)(unsigned __int64)nullsub_291);
  sub_259F400(&qword_4AF3E20, "print-regmask-num-regs", 22);
  qword_4AF3E48 = 90;
  qword_4AF3E40 = (__int64)"Number of registers to limit to when printing regmask operands in IR dumps. unlimited = -1";
  dword_4AF3E98 = 32;
  byte_4AF3EAC = 1;
  dword_4AF3EA8 = 32;
  BYTE2(qword_4AF3E28) = BYTE2(qword_4AF3E28) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF3E20);
  return __cxa_atexit(sub_20B86E0, &qword_4AF3E20, &off_47CFE00);
}

