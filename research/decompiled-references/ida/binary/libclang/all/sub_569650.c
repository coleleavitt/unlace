int __fastcall sub_569650(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // rdx

  qword_4ADF560 = (__int64)&off_4A6E058;
  qword_4ADF568 = (unsigned int)qword_4ADF568 & 0x80000000;
  qword_4ADF570 = 0;
  qword_4ADF578 = 0;
  qword_4ADF580 = 0;
  qword_4ADF588 = 0;
  qword_4ADF590 = 0;
  qword_4ADF598 = 0;
  qword_4ADF5A0 = (__int64)&qword_4ADF5B0;
  qword_4ADF5A8 = 0x100000000LL;
  qword_4ADF5B8 = (__int64)&qword_4ADF5D0;
  qword_4ADF5C0 = 1;
  dword_4ADF5C8 = 0;
  byte_4ADF5CC = 1;
  v1 = sub_259AC30(a1, &qword_4ADF5B0);
  v2 = (unsigned int)qword_4ADF5A8;
  v3 = (unsigned int)qword_4ADF5A8 + 1LL;
  if ( HIDWORD(qword_4ADF5A8) < v3 )
  {
    sub_25D6060(&qword_4ADF5B0 - 2, &qword_4ADF5B0, v3, 8);
    v2 = (unsigned int)qword_4ADF5A8;
  }
  *(_QWORD *)(qword_4ADF5A0 + 8 * v2) = v1;
  word_4ADF5E8 = 0;
  qword_4ADF5E0 = (__int64)&off_4A64730;
  xmmword_4ADF5F8 = 0;
  LODWORD(qword_4ADF5A8) = qword_4ADF5A8 + 1;
  qword_4ADF560 = (__int64)off_4A6DFF0;
  byte_4ADF5D8 = 0;
  qword_4ADF5F0 = (__int64)off_49D9168;
  xmmword_4ADF608 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49CBBD0),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4ADF560, "x86-disable-avoid-SFB", 21);
  word_4ADF5E8 = 256;
  byte_4ADF5D8 = 0;
  qword_4ADF588 = 43;
  BYTE2(qword_4ADF568) = BYTE2(qword_4ADF568) & 0x9F | 0x20;
  qword_4ADF580 = (__int64)"X86: Disable Store Forwarding Blocks fixup.";
  sub_259EC40(&qword_4ADF560);
  __cxa_atexit(sub_1F6C9D0, &qword_4ADF560, &off_47CFE00);
  qword_4ADF500 = 1;
  qword_4ADF4A0 = (__int64)&off_4A6E058;
  qword_4ADF4A8 = (unsigned int)qword_4ADF4A8 & 0x80000000;
  qword_4ADF4E0 = (__int64)&qword_4ADF4F0;
  qword_4ADF4B0 = 0;
  qword_4ADF4B8 = 0;
  qword_4ADF4C0 = 0;
  qword_4ADF4C8 = 0;
  qword_4ADF4D0 = 0;
  qword_4ADF4D8 = 0;
  qword_4ADF4E8 = 0x100000000LL;
  qword_4ADF4F8 = (__int64)&qword_4ADF510;
  dword_4ADF508 = 0;
  byte_4ADF50C = 1;
  v4 = sub_259AC30(sub_1F6C9D0, &qword_4ADF4F0);
  v5 = (unsigned int)qword_4ADF4E8;
  v6 = (unsigned int)qword_4ADF4E8 + 1LL;
  if ( HIDWORD(qword_4ADF4E8) < v6 )
  {
    sub_25D6060(&qword_4ADF4F0 - 2, &qword_4ADF4F0, v6, 8);
    v5 = (unsigned int)qword_4ADF4E8;
  }
  *(_QWORD *)(qword_4ADF4E0 + 8 * v5) = v4;
  qword_4ADF520 = (__int64)&off_4A64710;
  xmmword_4ADF538 = 0;
  LODWORD(qword_4ADF4E8) = qword_4ADF4E8 + 1;
  qword_4ADF4A0 = (__int64)off_4A6DEB8;
  dword_4ADF518 = 0;
  byte_4ADF52C = 0;
  qword_4ADF530 = (__int64)off_49D9228;
  dword_4ADF528 = 0;
  xmmword_4ADF548 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49CBBD8),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4ADF4A0, "x86-sfb-inspection-limit", 24);
  qword_4ADF4C8 = 76;
  qword_4ADF4C0 = (__int64)"X86: Number of instructions backward to inspect for store forwarding blocks.";
  dword_4ADF518 = 20;
  byte_4ADF52C = 1;
  dword_4ADF528 = 20;
  BYTE2(qword_4ADF4A8) = BYTE2(qword_4ADF4A8) & 0x9F | 0x20;
  sub_259EC40(&qword_4ADF4A0);
  return __cxa_atexit(sub_1F6C940, &qword_4ADF4A0, &off_47CFE00);
}

