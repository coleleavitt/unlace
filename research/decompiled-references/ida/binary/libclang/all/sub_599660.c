int __fastcall sub_599660(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm7
  __m128i v5; // xmm4
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __m128i v9; // xmm5
  __m128i v10; // xmm6
  __m128i v12; // [rsp+0h] [rbp-88h] BYREF
  __m128i v13; // [rsp+10h] [rbp-78h] BYREF
  __m128i v14; // [rsp+20h] [rbp-68h] BYREF
  void *v15; // [rsp+30h] [rbp-58h]
  __int64 v16; // [rsp+38h] [rbp-50h]
  _QWORD v17[9]; // [rsp+40h] [rbp-48h] BYREF

  qword_4AFC960 = (__int64)&qword_4AFC970;
  qword_4AFC930 = 0;
  qword_4AFC938 = 0;
  v12 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB158), (__m128i)(unsigned __int64)nullsub_294);
  qword_4AFC940 = 0;
  v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_49D9118, (__m128i)(unsigned __int64)&byte_4AFC8D0);
  v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_49D9118, (__m128i)(unsigned __int64)&byte_4AFC9D0);
  qword_4AFC920 = (__int64)&off_4A6E058;
  qword_4AFC928 = (unsigned int)qword_4AFC928 & 0x80000000;
  qword_4AFC948 = 0;
  qword_4AFC950 = 0;
  qword_4AFC958 = 0;
  qword_4AFC968 = 0x100000000LL;
  qword_4AFC978 = (__int64)&qword_4AFC990;
  dword_4AFC988 = 0;
  qword_4AFC980 = 1;
  byte_4AFC98C = 1;
  v1 = sub_259AC30(a1, &qword_4AFC970);
  v2 = (unsigned int)qword_4AFC968;
  v3 = (unsigned int)qword_4AFC968 + 1LL;
  if ( HIDWORD(qword_4AFC968) < v3 )
  {
    sub_25D6060(&qword_4AFC970 - 2, &qword_4AFC970, v3, 8);
    v2 = (unsigned int)qword_4AFC968;
  }
  v4 = _mm_load_si128(&v14);
  v5 = _mm_load_si128(&v12);
  *(_QWORD *)(qword_4AFC960 + 8 * v2) = v1;
  qword_4AFC998 = (__int64)&byte_4AFC9A8;
  xmmword_4AFC9B8 = (__int128)v4;
  xmmword_4AFC9F0 = 0;
  qword_4AFC920 = (__int64)&off_4A6DF88;
  xmmword_4AFCA00 = (__int128)v5;
  LODWORD(qword_4AFC968) = qword_4AFC968 + 1;
  qword_4AFC9E8 = (__int64)off_49D92E8;
  qword_4AFC9A0 = 0;
  byte_4AFC9A8 = 0;
  qword_4AFC9C8 = 0;
  byte_4AFC9D0 = 0;
  byte_4AFC9E0 = 0;
  sub_259F400(&qword_4AFC920, "expandvp-override-evl-transform", 31);
  v15 = v17;
  v16 = 0;
  LOBYTE(v17[0]) = 0;
  std::string::_M_assign();
  byte_4AFC9E0 = 1;
  std::string::_M_assign();
  if ( v15 != v17 )
    operator delete(v15, v17[0] + 1LL);
  qword_4AFC948 = 157;
  BYTE2(qword_4AFC928) = BYTE2(qword_4AFC928) & 0x9F | 0x20;
  qword_4AFC940 = (__int64)"Options: <empty>|Legal|Discard|Convert. If non-empty, ignore TargetTransformInfo and always u"
                           "se this transformation for the %evl parameter (Used in testing).";
  sub_259EC40(&qword_4AFC920);
  __cxa_atexit(sub_2283FB0, &qword_4AFC920, &off_47CFE00);
  qword_4AFC868 = 0x100000000LL;
  qword_4AFC860 = (__int64)&qword_4AFC870;
  qword_4AFC830 = 0;
  qword_4AFC820 = (__int64)&off_4A6E058;
  qword_4AFC828 = (unsigned int)qword_4AFC828 & 0x80000000;
  qword_4AFC838 = 0;
  qword_4AFC840 = 0;
  qword_4AFC848 = 0;
  qword_4AFC850 = 0;
  qword_4AFC858 = 0;
  qword_4AFC878 = (__int64)&qword_4AFC890;
  qword_4AFC880 = 1;
  dword_4AFC888 = 0;
  byte_4AFC88C = 1;
  v6 = sub_259AC30(sub_2283FB0, &qword_4AFC870);
  v7 = (unsigned int)qword_4AFC868;
  v8 = (unsigned int)qword_4AFC868 + 1LL;
  if ( HIDWORD(qword_4AFC868) < v8 )
  {
    sub_25D6060(&qword_4AFC870 - 2, &qword_4AFC870, v8, 8);
    v7 = (unsigned int)qword_4AFC868;
  }
  v9 = _mm_load_si128(&v13);
  v10 = _mm_load_si128(&v12);
  *(_QWORD *)(qword_4AFC860 + 8 * v7) = v6;
  qword_4AFC898 = (__int64)&byte_4AFC8A8;
  xmmword_4AFC8B8 = (__int128)v9;
  xmmword_4AFC8F0 = 0;
  qword_4AFC820 = (__int64)&off_4A6DF88;
  xmmword_4AFC900 = (__int128)v10;
  LODWORD(qword_4AFC868) = qword_4AFC868 + 1;
  qword_4AFC8E8 = (__int64)off_49D92E8;
  qword_4AFC8A0 = 0;
  byte_4AFC8A8 = 0;
  qword_4AFC8C8 = 0;
  byte_4AFC8D0 = 0;
  byte_4AFC8E0 = 0;
  sub_259F400(&qword_4AFC820, "expandvp-override-mask-transform", 32);
  v15 = v17;
  v16 = 0;
  LOBYTE(v17[0]) = 0;
  std::string::_M_assign();
  byte_4AFC8E0 = 1;
  std::string::_M_assign();
  if ( v15 != v17 )
    operator delete(v15, v17[0] + 1LL);
  qword_4AFC848 = 158;
  BYTE2(qword_4AFC828) = BYTE2(qword_4AFC828) & 0x9F | 0x20;
  qword_4AFC840 = (__int64)"Options: <empty>|Legal|Discard|Convert. If non-empty, Ignore TargetTransformInfo and always u"
                           "se this transformation for the %mask parameter (Used in testing).";
  sub_259EC40(&qword_4AFC820);
  return __cxa_atexit(sub_2283FB0, &qword_4AFC820, &off_47CFE00);
}

