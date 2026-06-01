int __fastcall sub_5DCE20(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4B22650 = 0;
  qword_4B22658 = 0;
  qword_4B22660 = 0;
  qword_4B22640 = (__int64)&off_4A6E058;
  qword_4B22648 = (unsigned int)qword_4B22648 & 0x80000000;
  qword_4B22668 = 0;
  qword_4B22688 = 0x100000000LL;
  qword_4B22670 = 0;
  qword_4B22678 = 0;
  qword_4B22680 = (__int64)&qword_4B22690;
  qword_4B22698 = (__int64)&qword_4B226B0;
  qword_4B226A0 = 1;
  dword_4B226A8 = 0;
  byte_4B226AC = 1;
  v1 = sub_259AC30(a1, &qword_4B22690);
  v2 = (unsigned int)qword_4B22688;
  v3 = (unsigned int)qword_4B22688 + 1LL;
  if ( HIDWORD(qword_4B22688) < v3 )
  {
    sub_25D6060(&qword_4B22690 - 2, &qword_4B22690, v3, 8);
    v2 = (unsigned int)qword_4B22688;
  }
  *(_QWORD *)(qword_4B22680 + 8 * v2) = v1;
  word_4B226C8 = 0;
  xmmword_4B226D8 = 0;
  LODWORD(qword_4B22688) = qword_4B22688 + 1;
  qword_4B226C0 = (__int64)&off_4A64730;
  byte_4B226B8 = 0;
  qword_4B22640 = (__int64)off_4A6DFF0;
  qword_4B226D0 = (__int64)off_49D9168;
  xmmword_4B226E8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EEBF8),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B22640, "enable-scoped-noalias", 21);
  word_4B226C8 = 257;
  byte_4B226B8 = 1;
  BYTE2(qword_4B22648) = BYTE2(qword_4B22648) & 0x9F | 0x20;
  sub_259EC40(&qword_4B22640);
  return __cxa_atexit(sub_1F6C9D0, &qword_4B22640, &off_47CFE00);
}

