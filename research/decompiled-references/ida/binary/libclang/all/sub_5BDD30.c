int __fastcall sub_5BDD30(__int64 a1)
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

  qword_4B0D1F0 = 0;
  qword_4B0D1F8 = 0;
  qword_4B0D200 = 0;
  qword_4B0D1E0 = (__int64)&off_4A6E058;
  qword_4B0D1E8 = (unsigned int)qword_4B0D1E8 & 0x80000000;
  qword_4B0D208 = 0;
  qword_4B0D228 = 0x100000000LL;
  qword_4B0D210 = 0;
  qword_4B0D218 = 0;
  qword_4B0D220 = (__int64)&qword_4B0D230;
  qword_4B0D238 = (__int64)&qword_4B0D250;
  qword_4B0D240 = 1;
  dword_4B0D248 = 0;
  byte_4B0D24C = 1;
  v1 = sub_259AC30(a1, &qword_4B0D230);
  v2 = (unsigned int)qword_4B0D228;
  v3 = (unsigned int)qword_4B0D228 + 1LL;
  if ( HIDWORD(qword_4B0D228) < v3 )
  {
    sub_25D6060(&qword_4B0D230 - 2, &qword_4B0D230, v3, 8);
    v2 = (unsigned int)qword_4B0D228;
  }
  *(_QWORD *)(qword_4B0D220 + 8 * v2) = v1;
  xmmword_4B0D278 = 0;
  LODWORD(qword_4B0D228) = qword_4B0D228 + 1;
  qword_4B0D260 = (__int64)&off_4A64730;
  qword_4B0D258 = 0;
  byte_4B0D269 = 0;
  qword_4B0D1E0 = (__int64)off_4A6D260;
  qword_4B0D270 = (__int64)off_49D9168;
  xmmword_4B0D288 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EC280),
                                (__m128i)(unsigned __int64)nullsub_329);
  sub_259F400(&qword_4B0D1E0, "verify-loop-info", 16);
  if ( qword_4B0D258 )
  {
    v6 = sub_26260E0(&qword_4B0D1E0, "verify-loop-info", v4, v5);
    v10 = 259;
    v9 = "cl::location(x) specified more than once!";
    sub_2598800(&qword_4B0D1E0, &v9, 0, 0, v6, v7);
  }
  else
  {
    byte_4B0D269 = 1;
    qword_4B0D258 = (__int64)&byte_4B0D298;
    byte_4B0D268 = byte_4B0D298;
  }
  qword_4B0D208 = 33;
  BYTE2(qword_4B0D1E8) = BYTE2(qword_4B0D1E8) & 0x9F | 0x20;
  qword_4B0D200 = (__int64)"Verify loop info (time consuming)";
  sub_259EC40(&qword_4B0D1E0);
  return __cxa_atexit(sub_23D25A0, &qword_4B0D1E0, &off_47CFE00);
}

