int sub_58C760()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  __int64 v3; // [rsp+8h] [rbp-60h]
  char v4; // [rsp+13h] [rbp-55h] BYREF
  int v5; // [rsp+14h] [rbp-54h] BYREF
  char *v6; // [rsp+18h] [rbp-50h] BYREF
  const char *v7; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+28h] [rbp-40h]

  v7 = "Disable critical edge splitting during PHI elimination";
  v8 = 54;
  v5 = 1;
  v4 = 0;
  v6 = &v4;
  sub_31BAFA0(qword_4AF5920, "disable-phi-elim-edge-splitting", &v6, &v5, &v7);
  __cxa_atexit(sub_1F6C9D0, qword_4AF5920, &off_47CFE00);
  qword_4AF5870 = 0;
  qword_4AF5878 = 0;
  qword_4AF5880 = 0;
  qword_4AF5860 = (__int64)&off_4A6E058;
  qword_4AF5868 = (unsigned int)qword_4AF5868 & 0x80000000;
  qword_4AF5888 = 0;
  qword_4AF58A8 = 0x100000000LL;
  qword_4AF5890 = 0;
  qword_4AF5898 = 0;
  qword_4AF58A0 = (__int64)&qword_4AF58B0;
  qword_4AF58B8 = (__int64)&qword_4AF58D0;
  qword_4AF58C0 = 1;
  dword_4AF58C8 = 0;
  byte_4AF58CC = 1;
  v0 = sub_259AC30(sub_1F6C9D0, &qword_4AF58B0);
  v1 = (unsigned int)qword_4AF58A8;
  if ( HIDWORD(qword_4AF58A8) < (unsigned __int64)(unsigned int)qword_4AF58A8 + 1 )
  {
    v3 = v0;
    sub_25D6060(&qword_4AF58B0 - 2, &qword_4AF58B0, (unsigned int)qword_4AF58A8 + 1LL, 8);
    v1 = (unsigned int)qword_4AF58A8;
    v0 = v3;
  }
  *(_QWORD *)(qword_4AF58A0 + 8 * v1) = v0;
  word_4AF58E8 = 0;
  xmmword_4AF58F8 = 0;
  LODWORD(qword_4AF58A8) = qword_4AF58A8 + 1;
  qword_4AF58E0 = (__int64)&off_4A64730;
  byte_4AF58D8 = 0;
  qword_4AF5860 = (__int64)off_4A6DFF0;
  qword_4AF58F0 = (__int64)off_49D9168;
  xmmword_4AF5908 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E9FF0),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AF5860, "phi-elim-split-all-critical-edges", 33);
  word_4AF58E8 = 256;
  byte_4AF58D8 = 0;
  qword_4AF5888 = 47;
  BYTE2(qword_4AF5868) = BYTE2(qword_4AF5868) & 0x9F | 0x20;
  qword_4AF5880 = (__int64)"Split all critical edges during PHI elimination";
  sub_259EC40(&qword_4AF5860);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF5860, &off_47CFE00);
  v6 = &v4;
  v7 = "Do not use an early exit if isLiveOutPastPHIs returns true.";
  v8 = 59;
  v5 = 1;
  v4 = 0;
  sub_31BAFA0(qword_4AF57A0, "no-phi-elim-live-out-early-exit", &v6, &v5, &v7);
  return __cxa_atexit(sub_1F6C9D0, qword_4AF57A0, &off_47CFE00);
}

