int __fastcall sub_5A47E0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // rdx

  qword_4B02600 = (__int64)&off_4A6E058;
  qword_4B02608 = (unsigned int)qword_4B02608 & 0x80000000;
  qword_4B02610 = 0;
  qword_4B02618 = 0;
  qword_4B02620 = 0;
  qword_4B02628 = 0;
  qword_4B02630 = 0;
  qword_4B02638 = 0;
  qword_4B02640 = (__int64)&qword_4B02650;
  qword_4B02648 = 0x100000000LL;
  qword_4B02658 = (__int64)&qword_4B02670;
  qword_4B02660 = 1;
  dword_4B02668 = 0;
  byte_4B0266C = 1;
  v1 = sub_259AC30(a1, &qword_4B02650);
  v2 = (unsigned int)qword_4B02648;
  v3 = (unsigned int)qword_4B02648 + 1LL;
  if ( HIDWORD(qword_4B02648) < v3 )
  {
    sub_25D6060(&qword_4B02650 - 2, &qword_4B02650, v3, 8);
    v2 = (unsigned int)qword_4B02648;
  }
  *(_QWORD *)(qword_4B02640 + 8 * v2) = v1;
  word_4B02688 = 0;
  xmmword_4B02698 = 0;
  LODWORD(qword_4B02648) = qword_4B02648 + 1;
  qword_4B02680 = (__int64)&off_4A64730;
  byte_4B02678 = 0;
  qword_4B02600 = (__int64)off_4A6DFF0;
  qword_4B02690 = (__int64)off_49D9168;
  xmmword_4B026A8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB690),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B02600, "no-stack-slot-sharing", 21);
  word_4B02688 = 256;
  byte_4B02678 = 0;
  qword_4B02628 = 43;
  BYTE2(qword_4B02608) = BYTE2(qword_4B02608) & 0x9F | 0x20;
  qword_4B02620 = (__int64)"Suppress slot sharing during stack coloring";
  sub_259EC40(&qword_4B02600);
  __cxa_atexit(sub_1F6C9D0, &qword_4B02600, &off_47CFE00);
  qword_4B025A0 = 1;
  qword_4B02540 = (__int64)&off_4A6E058;
  qword_4B02548 = (unsigned int)qword_4B02548 & 0x80000000;
  qword_4B02580 = (__int64)&qword_4B02590;
  qword_4B02550 = 0;
  qword_4B02558 = 0;
  qword_4B02560 = 0;
  qword_4B02568 = 0;
  qword_4B02570 = 0;
  qword_4B02578 = 0;
  qword_4B02588 = 0x100000000LL;
  qword_4B02598 = (__int64)&qword_4B025B0;
  dword_4B025A8 = 0;
  byte_4B025AC = 1;
  v4 = sub_259AC30(sub_1F6C9D0, &qword_4B02590);
  v5 = (unsigned int)qword_4B02588;
  v6 = (unsigned int)qword_4B02588 + 1LL;
  if ( HIDWORD(qword_4B02588) < v6 )
  {
    sub_25D6060(&qword_4B02590 - 2, &qword_4B02590, v6, 8);
    v5 = (unsigned int)qword_4B02588;
  }
  *(_QWORD *)(qword_4B02580 + 8 * v5) = v4;
  xmmword_4B025D8 = 0;
  LODWORD(qword_4B02588) = qword_4B02588 + 1;
  qword_4B025C0 = (__int64)&off_4A692B8;
  dword_4B025B8 = 0;
  byte_4B025CC = 0;
  qword_4B02540 = (__int64)off_4A6DF20;
  dword_4B025C8 = 0;
  qword_4B025D0 = (__int64)off_49D91C8;
  xmmword_4B025E8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB698),
                                (__m128i)(unsigned __int64)nullsub_291);
  sub_259F400(&qword_4B02540, "ssc-dce-limit", 13);
  dword_4B025B8 = -1;
  byte_4B025CC = 1;
  dword_4B025C8 = -1;
  BYTE2(qword_4B02548) = BYTE2(qword_4B02548) & 0x9F | 0x20;
  sub_259EC40(&qword_4B02540);
  return __cxa_atexit(sub_20B86E0, &qword_4B02540, &off_47CFE00);
}

