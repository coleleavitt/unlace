int __fastcall sub_5BFDF0(__int64 a1)
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

  qword_4B0DF70 = 0;
  qword_4B0DF78 = 0;
  qword_4B0DF80 = 0;
  qword_4B0DF60 = (__int64)&off_4A6E058;
  qword_4B0DF68 = (unsigned int)qword_4B0DF68 & 0x80000000;
  qword_4B0DF88 = 0;
  qword_4B0DFA8 = 0x100000000LL;
  qword_4B0DF90 = 0;
  qword_4B0DF98 = 0;
  qword_4B0DFA0 = (__int64)&qword_4B0DFB0;
  qword_4B0DFB8 = (__int64)&qword_4B0DFD0;
  qword_4B0DFC0 = 1;
  dword_4B0DFC8 = 0;
  byte_4B0DFCC = 1;
  v1 = sub_259AC30(a1, &qword_4B0DFB0);
  v2 = (unsigned int)qword_4B0DFA8;
  v3 = (unsigned int)qword_4B0DFA8 + 1LL;
  if ( HIDWORD(qword_4B0DFA8) < v3 )
  {
    sub_25D6060(&qword_4B0DFB0 - 2, &qword_4B0DFB0, v3, 8);
    v2 = (unsigned int)qword_4B0DFA8;
  }
  *(_QWORD *)(qword_4B0DFA0 + 8 * v2) = v1;
  xmmword_4B0DFF8 = 0;
  LODWORD(qword_4B0DFA8) = qword_4B0DFA8 + 1;
  qword_4B0DFE0 = (__int64)&off_4A64730;
  qword_4B0DFD8 = 0;
  byte_4B0DFE9 = 0;
  qword_4B0DF60 = (__int64)off_4A6D260;
  qword_4B0DFF0 = (__int64)off_49D9168;
  xmmword_4B0E008 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EC398),
                                (__m128i)(unsigned __int64)nullsub_329);
  sub_259F400(&qword_4B0DF60, "enable-objc-arc-opts", 20);
  qword_4B0DF88 = 36;
  qword_4B0DF80 = (__int64)"enable/disable all ARC Optimizations";
  if ( qword_4B0DFD8 )
  {
    v6 = sub_26260E0(&qword_4B0DF60, "enable-objc-arc-opts", v4, v5);
    v10 = 259;
    v9 = "cl::location(x) specified more than once!";
    sub_2598800(&qword_4B0DF60, &v9, 0, 0, v6, v7);
  }
  else
  {
    qword_4B0DFD8 = (__int64)byte_4B0E018;
  }
  *(_BYTE *)qword_4B0DFD8 = 1;
  *(_WORD *)&byte_4B0DFE8 = 257;
  BYTE2(qword_4B0DF68) = BYTE2(qword_4B0DF68) & 0x9F | 0x20;
  sub_259EC40(&qword_4B0DF60);
  return __cxa_atexit(sub_23D25A0, &qword_4B0DF60, &off_47CFE00);
}

