int __fastcall sub_2F0300(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __m128i si128; // xmm0
  unsigned __int64 v8; // rdx
  __int128 v10; // [rsp+0h] [rbp-48h] BYREF
  __m128i v11[3]; // [rsp+10h] [rbp-38h] BYREF

  qword_2CB0090 = 0;
  qword_2CB0098 = 0;
  qword_2CB00A0 = 0;
  qword_2CB0080 = (__int64)&off_2C4B8B0;
  qword_2CB0088 = (unsigned int)qword_2CB0088 & 0x80000000;
  qword_2CB00C8 = 0x100000000LL;
  qword_2CB00A8 = 0;
  qword_2CB00B0 = 0;
  qword_2CB00B8 = 0;
  qword_2CB00C0 = (__int64)&unk_2CB00D0;
  qword_2CB00D8 = (__int64)&unk_2CB00F0;
  qword_2CB00E0 = 1;
  dword_2CB00E8 = 0;
  byte_2CB00EC = 1;
  v2 = sub_21ED2B0(a1, a2);
  v3 = (unsigned int)qword_2CB00C8;
  v4 = (unsigned int)qword_2CB00C8 + 1LL;
  if ( v4 > HIDWORD(qword_2CB00C8) )
  {
    *(_QWORD *)&v10 = v2;
    sub_22134E0((char *)&unk_2CB00D0 - 16, &unk_2CB00D0, v4, 8);
    v3 = (unsigned int)qword_2CB00C8;
    v2 = v10;
  }
  *(_QWORD *)(qword_2CB00C0 + 8 * v3) = v2;
  qword_2CB0100 = (__int64)off_2C474E8;
  qword_2CB0080 = (__int64)off_2C4B848;
  word_2CB0108 = 0;
  xmmword_2CB0128 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  v10 = xmmword_2CB0128;
  LODWORD(qword_2CB00C8) = qword_2CB00C8 + 1;
  qword_2CB0110 = (__int64)off_2BC0B68;
  byte_2CB00F8 = 0;
  sub_21F3510(&qword_2CB0080, "basic-aa-recphi", 15);
  word_2CB0108 = 257;
  byte_2CB00F8 = 1;
  BYTE2(qword_2CB0088) = BYTE2(qword_2CB0088) & 0x9F | 0x20;
  sub_21F4400(&qword_2CB0080);
  __cxa_atexit(sub_1FEA450, &qword_2CB0080, &off_2AFC540);
  qword_2CAFFD0 = 0;
  qword_2CAFFC0 = (__int64)&off_2C4B8B0;
  qword_2CAFFC8 = (unsigned int)qword_2CAFFC8 & 0x80000000;
  qword_2CB0008 = 0x100000000LL;
  qword_2CAFFD8 = 0;
  qword_2CAFFE0 = 0;
  qword_2CAFFE8 = 0;
  qword_2CAFFF0 = 0;
  qword_2CAFFF8 = 0;
  qword_2CB0000 = (__int64)&unk_2CB0010;
  qword_2CB0018 = (__int64)&unk_2CB0030;
  qword_2CB0020 = 1;
  dword_2CB0028 = 0;
  byte_2CB002C = 1;
  v5 = sub_21ED2B0(sub_1FEA450, &qword_2CB0080);
  v6 = (unsigned int)qword_2CB0008;
  si128 = _mm_load_si128((const __m128i *)&v10);
  v8 = (unsigned int)qword_2CB0008 + 1LL;
  if ( v8 > HIDWORD(qword_2CB0008) )
  {
    *(_QWORD *)&v10 = v5;
    v11[0] = si128;
    sub_22134E0((char *)&unk_2CB0010 - 16, &unk_2CB0010, v8, 8);
    v6 = (unsigned int)qword_2CB0008;
    si128 = _mm_load_si128(v11);
    v5 = v10;
  }
  *(_QWORD *)(qword_2CB0000 + 8 * v6) = v5;
  word_2CB0048 = 0;
  qword_2CB0040 = (__int64)off_2C474E8;
  qword_2CAFFC0 = (__int64)off_2C4B848;
  qword_2CB0050 = (__int64)off_2BC0B68;
  xmmword_2CB0068 = (__int128)si128;
  LODWORD(qword_2CB0008) = qword_2CB0008 + 1;
  byte_2CB0038 = 0;
  sub_21F3510(&qword_2CAFFC0, "basic-aa-separate-storage", 25);
  word_2CB0048 = 257;
  byte_2CB0038 = 1;
  BYTE2(qword_2CAFFC8) = BYTE2(qword_2CAFFC8) & 0x9F | 0x20;
  sub_21F4400(&qword_2CAFFC0);
  return __cxa_atexit(sub_1FEA450, &qword_2CAFFC0, &off_2AFC540);
}

