int __fastcall sub_5BED40(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v14; // [rsp+8h] [rbp-70h]
  void *v15[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v16; // [rsp+20h] [rbp-58h] BYREF
  __int16 v17; // [rsp+30h] [rbp-48h]

  qword_4B0DA50 = 0;
  qword_4B0DA58 = 0;
  qword_4B0DA60 = 0;
  qword_4B0DA40 = (__int64)&off_4A6E058;
  qword_4B0DA48 = (unsigned int)qword_4B0DA48 & 0x80000000;
  qword_4B0DA68 = 0;
  qword_4B0DA70 = 0;
  qword_4B0DA78 = 0;
  qword_4B0DA80 = (__int64)&qword_4B0DA90;
  qword_4B0DA88 = 0x100000000LL;
  qword_4B0DA98 = (__int64)&qword_4B0DAB0;
  qword_4B0DAA0 = 1;
  dword_4B0DAA8 = 0;
  byte_4B0DAAC = 1;
  v1 = sub_259AC30(a1, &qword_4B0DA90);
  v2 = (unsigned int)qword_4B0DA88;
  v3 = (unsigned int)qword_4B0DA88 + 1LL;
  if ( HIDWORD(qword_4B0DA88) < v3 )
  {
    sub_25D6060(&qword_4B0DA90 - 2, &qword_4B0DA90, v3, 8);
    v2 = (unsigned int)qword_4B0DA88;
  }
  *(_QWORD *)(qword_4B0DA80 + 8 * v2) = v1;
  qword_4B0DAB8 = (__int64)&byte_4B0DAC8;
  LODWORD(qword_4B0DA88) = qword_4B0DA88 + 1;
  qword_4B0DAC0 = 0;
  qword_4B0DA40 = (__int64)&off_4A6DF88;
  xmmword_4B0DAD8 = (__int128)_mm_unpacklo_epi64(
                                (__m128i)(unsigned __int64)&off_49D9118,
                                (__m128i)(unsigned __int64)&byte_4B0DAF0);
  xmmword_4B0DB10 = 0;
  qword_4B0DB08 = (__int64)off_49D92E8;
  byte_4B0DAC8 = 0;
  byte_4B0DAF0 = 0;
  xmmword_4B0DB20 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EC340),
                                (__m128i)(unsigned __int64)nullsub_294);
  qword_4B0DAE8 = 0;
  byte_4B0DB00 = 0;
  sub_259F400(&qword_4B0DA40, "dot-cfg-mssa", 12);
  qword_4B0DA70 = (__int64)"file name for generated dot file";
  qword_4B0DA60 = (__int64)"file name for generated dot file";
  qword_4B0DA78 = 32;
  qword_4B0DA68 = 32;
  v15[0] = &v16;
  v15[1] = nullptr;
  LOBYTE(v16) = 0;
  std::string::_M_assign();
  byte_4B0DB00 = 1;
  std::string::_M_assign();
  sub_259EC40(&qword_4B0DA40);
  __cxa_atexit(sub_2283FB0, &qword_4B0DA40, &off_47CFE00);
  qword_4B0D990 = 0;
  qword_4B0D980 = (__int64)&off_4A6E058;
  qword_4B0D988 = (unsigned int)qword_4B0D988 & 0x80000000;
  qword_4B0D9C0 = (__int64)&qword_4B0D9D0;
  qword_4B0D998 = 0;
  qword_4B0D9A0 = 0;
  qword_4B0D9A8 = 0;
  qword_4B0D9B0 = 0;
  qword_4B0D9B8 = 0;
  qword_4B0D9C8 = 0x100000000LL;
  qword_4B0D9D8 = (__int64)&qword_4B0D9F0;
  qword_4B0D9E0 = 1;
  dword_4B0D9E8 = 0;
  byte_4B0D9EC = 1;
  v4 = sub_259AC30(sub_2283FB0, &qword_4B0D9D0);
  v5 = (unsigned int)qword_4B0D9C8;
  if ( HIDWORD(qword_4B0D9C8) < (unsigned __int64)(unsigned int)qword_4B0D9C8 + 1 )
  {
    v14 = v4;
    sub_25D6060(&qword_4B0D9D0 - 2, &qword_4B0D9D0, (unsigned int)qword_4B0D9C8 + 1LL, 8);
    v5 = (unsigned int)qword_4B0D9C8;
    v4 = v14;
  }
  *(_QWORD *)(qword_4B0D9C0 + 8 * v5) = v4;
  xmmword_4B0DA18 = 0;
  LODWORD(qword_4B0D9C8) = qword_4B0D9C8 + 1;
  qword_4B0DA00 = (__int64)&off_4A64710;
  dword_4B0D9F8 = 0;
  byte_4B0DA0C = 0;
  qword_4B0D980 = (__int64)off_4A6DEB8;
  dword_4B0DA08 = 0;
  qword_4B0DA10 = (__int64)off_49D9228;
  xmmword_4B0DA28 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EC348),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4B0D980, "memssa-check-limit", 18);
  dword_4B0D9F8 = 100;
  byte_4B0DA0C = 1;
  dword_4B0DA08 = 100;
  qword_4B0D9A8 = 92;
  BYTE2(qword_4B0D988) = BYTE2(qword_4B0D988) & 0x9F | 0x20;
  qword_4B0D9A0 = (__int64)"The maximum number of stores/phis MemorySSAwill consider trying to walk past (default = 100)";
  sub_259EC40(&qword_4B0D980);
  __cxa_atexit(sub_1F6C940, &qword_4B0D980, &off_47CFE00);
  qword_4B0D908 = 0x100000000LL;
  qword_4B0D8C0 = (__int64)&off_4A6E058;
  qword_4B0D8C8 = (unsigned int)qword_4B0D8C8 & 0x80000000;
  qword_4B0D900 = (__int64)&qword_4B0D910;
  qword_4B0D8D0 = 0;
  qword_4B0D8D8 = 0;
  qword_4B0D8E0 = 0;
  qword_4B0D8E8 = 0;
  qword_4B0D8F0 = 0;
  qword_4B0D8F8 = 0;
  qword_4B0D918 = (__int64)&qword_4B0D930;
  qword_4B0D920 = 1;
  dword_4B0D928 = 0;
  byte_4B0D92C = 1;
  v6 = sub_259AC30(sub_1F6C940, &qword_4B0D910);
  v7 = (unsigned int)qword_4B0D908;
  v8 = (unsigned int)qword_4B0D908 + 1LL;
  if ( HIDWORD(qword_4B0D908) < v8 )
  {
    sub_25D6060(&qword_4B0D910 - 2, &qword_4B0D910, v8, 8);
    v7 = (unsigned int)qword_4B0D908;
  }
  *(_QWORD *)(qword_4B0D900 + 8 * v7) = v6;
  xmmword_4B0D958 = 0;
  LODWORD(qword_4B0D908) = qword_4B0D908 + 1;
  qword_4B0D940 = (__int64)&off_4A64730;
  qword_4B0D938 = 0;
  byte_4B0D949 = 0;
  qword_4B0D8C0 = (__int64)off_4A6D260;
  qword_4B0D950 = (__int64)off_49D9168;
  xmmword_4B0D968 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EC350),
                                (__m128i)(unsigned __int64)nullsub_329);
  sub_259F400(&qword_4B0D8C0, "verify-memoryssa", 16);
  if ( qword_4B0D938 )
  {
    v11 = sub_26260E0(&qword_4B0D8C0, "verify-memoryssa", v9, v10);
    v17 = 259;
    v15[0] = "cl::location(x) specified more than once!";
    sub_2598800(&qword_4B0D8C0, v15, 0, 0, v11, v12);
  }
  else
  {
    byte_4B0D949 = 1;
    qword_4B0D938 = (__int64)&qword_4B0D978;
    byte_4B0D948 = qword_4B0D978;
  }
  qword_4B0D8E8 = 33;
  BYTE2(qword_4B0D8C8) = BYTE2(qword_4B0D8C8) & 0x9F | 0x20;
  qword_4B0D8E0 = (__int64)"Enable verification of MemorySSA.";
  sub_259EC40(&qword_4B0D8C0);
  return __cxa_atexit(sub_23D25A0, &qword_4B0D8C0, &off_47CFE00);
}

