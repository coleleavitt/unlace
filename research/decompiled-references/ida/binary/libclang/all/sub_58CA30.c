int __fastcall sub_58CA30(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AF59F0 = 0;
  qword_4AF59F8 = 0;
  qword_4AF5A00 = 0;
  qword_4AF59E0 = (__int64)&off_4A6E058;
  qword_4AF59E8 = (unsigned int)qword_4AF59E8 & 0x80000000;
  qword_4AF5A08 = 0;
  qword_4AF5A28 = 0x100000000LL;
  qword_4AF5A10 = 0;
  qword_4AF5A18 = 0;
  qword_4AF5A20 = (__int64)&qword_4AF5A30;
  qword_4AF5A38 = (__int64)&qword_4AF5A50;
  qword_4AF5A40 = 1;
  dword_4AF5A48 = 0;
  byte_4AF5A4C = 1;
  v1 = sub_259AC30(a1, &qword_4AF5A30);
  v2 = (unsigned int)qword_4AF5A28;
  v3 = (unsigned int)qword_4AF5A28 + 1LL;
  if ( HIDWORD(qword_4AF5A28) < v3 )
  {
    sub_25D6060(&qword_4AF5A30 - 2, &qword_4AF5A30, v3, 8);
    v2 = (unsigned int)qword_4AF5A28;
  }
  *(_QWORD *)(qword_4AF5A20 + 8 * v2) = v1;
  xmmword_4AF5A80 = 0;
  LODWORD(qword_4AF5A28) = qword_4AF5A28 + 1;
  qword_4AF5A60 = (__int64)off_4A7CC80;
  qword_4AF5A58 = 0;
  byte_4AF5A70 = 0;
  qword_4AF59E0 = (__int64)off_4A7CCA0;
  qword_4AF5A68 = 0;
  qword_4AF5A78 = (__int64)off_49D91F8;
  xmmword_4AF5A90 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E9FF8),
                                (__m128i)(unsigned __int64)nullsub_556);
  sub_259F400(&qword_4AF59E0, "mem-intrinsic-expand-size", 25);
  qword_4AF5A08 = 46;
  qword_4AF5A00 = (__int64)"Set minimum mem intrinsic size to expand in IR";
  qword_4AF5A58 = -1;
  byte_4AF5A70 = 1;
  qword_4AF5A68 = -1;
  BYTE2(qword_4AF59E8) = BYTE2(qword_4AF59E8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF59E0);
  return __cxa_atexit(sub_31C2950, &qword_4AF59E0, &off_47CFE00);
}

