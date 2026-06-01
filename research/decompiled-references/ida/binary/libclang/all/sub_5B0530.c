int __fastcall sub_5B0530(__int64 a1)
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

  qword_4B06F70 = 0;
  qword_4B06F78 = 0;
  qword_4B06F80 = 0;
  qword_4B06F60 = (__int64)&off_4A6E058;
  qword_4B06F68 = (unsigned int)qword_4B06F68 & 0x80000000;
  qword_4B06F88 = 0;
  qword_4B06FA8 = 0x100000000LL;
  qword_4B06F90 = 0;
  qword_4B06F98 = 0;
  qword_4B06FA0 = (__int64)&qword_4B06FB0;
  qword_4B06FB8 = (__int64)&qword_4B06FD0;
  qword_4B06FC0 = 1;
  dword_4B06FC8 = 0;
  byte_4B06FCC = 1;
  v1 = sub_259AC30(a1, &qword_4B06FB0);
  v2 = (unsigned int)qword_4B06FA8;
  v3 = (unsigned int)qword_4B06FA8 + 1LL;
  if ( HIDWORD(qword_4B06FA8) < v3 )
  {
    sub_25D6060(&qword_4B06FB0 - 2, &qword_4B06FB0, v3, 8);
    v2 = (unsigned int)qword_4B06FA8;
  }
  *(_QWORD *)(qword_4B06FA0 + 8 * v2) = v1;
  xmmword_4B06FF8 = 0;
  LODWORD(qword_4B06FA8) = qword_4B06FA8 + 1;
  qword_4B06FE0 = (__int64)&off_4A64730;
  qword_4B06FD8 = 0;
  byte_4B06FE9 = 0;
  qword_4B06F60 = (__int64)off_4A6D260;
  qword_4B06FF0 = (__int64)off_49D9168;
  xmmword_4B07008 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EBB38),
                                (__m128i)(unsigned __int64)nullsub_329);
  sub_259F400(&qword_4B06F60, "verify-loop-lcssa", 17);
  if ( qword_4B06FD8 )
  {
    v6 = sub_26260E0(&qword_4B06F60, "verify-loop-lcssa", v4, v5);
    v10 = 259;
    v9 = "cl::location(x) specified more than once!";
    sub_2598800(&qword_4B06F60, &v9, 0, 0, v6, v7);
  }
  else
  {
    byte_4B06FE9 = 1;
    qword_4B06FD8 = (__int64)&byte_4B07018;
    byte_4B06FE8 = byte_4B07018;
  }
  qword_4B06F88 = 39;
  BYTE2(qword_4B06F68) = BYTE2(qword_4B06F68) & 0x9F | 0x20;
  qword_4B06F80 = (__int64)"Verify loop lcssa form (time consuming)";
  sub_259EC40(&qword_4B06F60);
  return __cxa_atexit(sub_23D25A0, &qword_4B06F60, &off_47CFE00);
}

