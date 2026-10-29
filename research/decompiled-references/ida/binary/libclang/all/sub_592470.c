int __fastcall sub_592470(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm5
  __int64 v5; // r15
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __m128i v8; // xmm6
  __int64 v9; // rax
  __int64 v10; // rdx
  __m128i v11; // xmm7
  __int64 v12; // rax
  __int64 v13; // rdx
  __m128i v14; // xmm3
  __int64 v15; // rax
  __int64 v16; // rdx
  __m128i v17; // xmm4
  __int64 v18; // r12
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __m128i v21; // xmm5
  __m128i v23; // [rsp+0h] [rbp-68h] BYREF
  __m128i v24; // [rsp+10h] [rbp-58h] BYREF
  __int64 v25; // [rsp+28h] [rbp-40h]

  qword_4AF8900 = (__int64)&qword_4AF8910;
  qword_4AF88D0 = 0;
  qword_4AF88D8 = 0;
  qword_4AF88C0 = (__int64)&off_4A6E058;
  qword_4AF88C8 = (unsigned int)qword_4AF88C8 & 0x80000000;
  qword_4AF8918 = (__int64)&qword_4AF8930;
  v24 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EAFF8), (__m128i)(unsigned __int64)nullsub_266);
  v23 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB000), (__m128i)(unsigned __int64)nullsub_267);
  qword_4AF88E0 = 0;
  qword_4AF88E8 = 0;
  qword_4AF88F0 = 0;
  qword_4AF88F8 = 0;
  qword_4AF8908 = 0x100000000LL;
  dword_4AF8928 = 0;
  qword_4AF8920 = 1;
  byte_4AF892C = 1;
  v1 = sub_259AC30(a1, &qword_4AF8910);
  v2 = (unsigned int)qword_4AF8908;
  v3 = (unsigned int)qword_4AF8908 + 1LL;
  if ( HIDWORD(qword_4AF8908) < v3 )
  {
    sub_25D6060(&qword_4AF8910 - 2, &qword_4AF8910, v3, 8);
    v2 = (unsigned int)qword_4AF8908;
  }
  v4 = _mm_load_si128(&v24);
  *(_QWORD *)(qword_4AF8900 + 8 * v2) = v1;
  word_4AF8948 = 0;
  xmmword_4AF8958 = 0;
  qword_4AF8940 = (__int64)&off_4A64730;
  xmmword_4AF8968 = (__int128)v4;
  LODWORD(qword_4AF8908) = qword_4AF8908 + 1;
  qword_4AF88C0 = (__int64)off_4A6DFF0;
  byte_4AF8938 = 0;
  qword_4AF8950 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF88C0, "jump-is-expensive", 17);
  byte_4AF8938 = 0;
  qword_4AF88E8 = 55;
  word_4AF8948 = 256;
  qword_4AF88E0 = (__int64)"Do not create extra branches to split comparison logic.";
  BYTE2(qword_4AF88C8) = BYTE2(qword_4AF88C8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF88C0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF88C0, &off_47CFE00);
  qword_4AF8810 = 0;
  qword_4AF8800 = (__int64)&off_4A6E058;
  qword_4AF8808 = (unsigned int)qword_4AF8808 & 0x80000000;
  qword_4AF8840 = (__int64)&qword_4AF8850;
  qword_4AF8818 = 0;
  qword_4AF8820 = 0;
  qword_4AF8828 = 0;
  qword_4AF8830 = 0;
  qword_4AF8838 = 0;
  qword_4AF8848 = 0x100000000LL;
  qword_4AF8858 = (__int64)&qword_4AF8870;
  qword_4AF8860 = 1;
  dword_4AF8868 = 0;
  byte_4AF886C = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4AF8850);
  v6 = (unsigned int)qword_4AF8848;
  v7 = (unsigned int)qword_4AF8848 + 1LL;
  if ( HIDWORD(qword_4AF8848) < v7 )
  {
    sub_25D6060(&qword_4AF8850 - 2, &qword_4AF8850, v7, 8);
    v6 = (unsigned int)qword_4AF8848;
  }
  v8 = _mm_load_si128(&v23);
  *(_QWORD *)(qword_4AF8840 + 8 * v6) = v5;
  xmmword_4AF8898 = 0;
  xmmword_4AF88A8 = (__int128)v8;
  qword_4AF8880 = (__int64)&off_4A64710;
  LODWORD(qword_4AF8848) = qword_4AF8848 + 1;
  byte_4AF888C = 0;
  qword_4AF8800 = (__int64)off_4A6DEB8;
  dword_4AF8878 = 0;
  dword_4AF8888 = 0;
  qword_4AF8890 = (__int64)off_49D9228;
  sub_259F400(&qword_4AF8800, "min-jump-table-entries", 22);
  dword_4AF8878 = 4;
  byte_4AF888C = 1;
  dword_4AF8888 = 4;
  qword_4AF8828 = 50;
  BYTE2(qword_4AF8808) = BYTE2(qword_4AF8808) & 0x9F | 0x20;
  qword_4AF8820 = (__int64)"Set minimum number of entries to use a jump table.";
  sub_259EC40(&qword_4AF8800);
  __cxa_atexit(sub_1F6C940, &qword_4AF8800, &off_47CFE00);
  qword_4AF8750 = 0;
  qword_4AF8740 = (__int64)&off_4A6E058;
  qword_4AF8748 = (unsigned int)qword_4AF8748 & 0x80000000;
  qword_4AF8780 = (__int64)&qword_4AF8790;
  qword_4AF8758 = 0;
  qword_4AF8760 = 0;
  qword_4AF8768 = 0;
  qword_4AF8770 = 0;
  qword_4AF8778 = 0;
  qword_4AF8788 = 0x100000000LL;
  qword_4AF8798 = (__int64)&qword_4AF87B0;
  qword_4AF87A0 = 1;
  dword_4AF87A8 = 0;
  byte_4AF87AC = 1;
  v9 = sub_259AC30(sub_1F6C940, &qword_4AF8790);
  v10 = (unsigned int)qword_4AF8788;
  if ( HIDWORD(qword_4AF8788) < (unsigned __int64)(unsigned int)qword_4AF8788 + 1 )
  {
    v25 = v9;
    sub_25D6060(&qword_4AF8790 - 2, &qword_4AF8790, (unsigned int)qword_4AF8788 + 1LL, 8);
    v10 = (unsigned int)qword_4AF8788;
    v9 = v25;
  }
  v11 = _mm_load_si128(&v23);
  *(_QWORD *)(qword_4AF8780 + 8 * v10) = v9;
  xmmword_4AF87D8 = 0;
  xmmword_4AF87E8 = (__int128)v11;
  qword_4AF87C0 = (__int64)&off_4A64710;
  LODWORD(qword_4AF8788) = qword_4AF8788 + 1;
  byte_4AF87CC = 0;
  qword_4AF8740 = (__int64)off_4A6DEB8;
  dword_4AF87B8 = 0;
  dword_4AF87C8 = 0;
  qword_4AF87D0 = (__int64)off_49D9228;
  sub_259F400(&qword_4AF8740, "max-jump-table-size", 19);
  dword_4AF87B8 = -1;
  byte_4AF87CC = 1;
  dword_4AF87C8 = -1;
  qword_4AF8768 = 32;
  BYTE2(qword_4AF8748) = BYTE2(qword_4AF8748) & 0x9F | 0x20;
  qword_4AF8760 = (__int64)"Set maximum size of jump tables.";
  sub_259EC40(&qword_4AF8740);
  __cxa_atexit(sub_1F6C940, &qword_4AF8740, &off_47CFE00);
  qword_4AF8690 = 0;
  qword_4AF8680 = (__int64)&off_4A6E058;
  qword_4AF8688 = (unsigned int)qword_4AF8688 & 0x80000000;
  qword_4AF86C0 = (__int64)&qword_4AF86D0;
  qword_4AF8698 = 0;
  qword_4AF86A0 = 0;
  qword_4AF86A8 = 0;
  qword_4AF86B0 = 0;
  qword_4AF86B8 = 0;
  qword_4AF86C8 = 0x100000000LL;
  qword_4AF86D8 = (__int64)&qword_4AF86F0;
  qword_4AF86E0 = 1;
  dword_4AF86E8 = 0;
  byte_4AF86EC = 1;
  v12 = sub_259AC30(sub_1F6C940, &qword_4AF86D0);
  v13 = (unsigned int)qword_4AF86C8;
  if ( HIDWORD(qword_4AF86C8) < (unsigned __int64)(unsigned int)qword_4AF86C8 + 1 )
  {
    v25 = v12;
    sub_25D6060(&qword_4AF86D0 - 2, &qword_4AF86D0, (unsigned int)qword_4AF86C8 + 1LL, 8);
    v13 = (unsigned int)qword_4AF86C8;
    v12 = v25;
  }
  v14 = _mm_load_si128(&v23);
  *(_QWORD *)(qword_4AF86C0 + 8 * v13) = v12;
  xmmword_4AF8718 = 0;
  xmmword_4AF8728 = (__int128)v14;
  qword_4AF8700 = (__int64)&off_4A64710;
  LODWORD(qword_4AF86C8) = qword_4AF86C8 + 1;
  byte_4AF870C = 0;
  qword_4AF8680 = (__int64)off_4A6DEB8;
  dword_4AF86F8 = 0;
  dword_4AF8708 = 0;
  qword_4AF8710 = (__int64)off_49D9228;
  sub_259F400(&qword_4AF8680, "jump-table-density", 18);
  dword_4AF86F8 = 10;
  byte_4AF870C = 1;
  dword_4AF8708 = 10;
  qword_4AF86A8 = 62;
  BYTE2(qword_4AF8688) = BYTE2(qword_4AF8688) & 0x9F | 0x20;
  qword_4AF86A0 = (__int64)"Minimum density for building a jump table in a normal function";
  sub_259EC40(&qword_4AF8680);
  __cxa_atexit(sub_1F6C940, &qword_4AF8680, &off_47CFE00);
  qword_4AF85D0 = 0;
  qword_4AF85C0 = (__int64)&off_4A6E058;
  qword_4AF85C8 = (unsigned int)qword_4AF85C8 & 0x80000000;
  qword_4AF8600 = (__int64)&qword_4AF8610;
  qword_4AF85D8 = 0;
  qword_4AF85E0 = 0;
  qword_4AF85E8 = 0;
  qword_4AF85F0 = 0;
  qword_4AF85F8 = 0;
  qword_4AF8608 = 0x100000000LL;
  qword_4AF8618 = (__int64)&qword_4AF8630;
  qword_4AF8620 = 1;
  dword_4AF8628 = 0;
  byte_4AF862C = 1;
  v15 = sub_259AC30(sub_1F6C940, &qword_4AF8610);
  v16 = (unsigned int)qword_4AF8608;
  if ( HIDWORD(qword_4AF8608) < (unsigned __int64)(unsigned int)qword_4AF8608 + 1 )
  {
    v25 = v15;
    sub_25D6060(&qword_4AF8610 - 2, &qword_4AF8610, (unsigned int)qword_4AF8608 + 1LL, 8);
    v16 = (unsigned int)qword_4AF8608;
    v15 = v25;
  }
  v17 = _mm_load_si128(&v23);
  *(_QWORD *)(qword_4AF8600 + 8 * v16) = v15;
  xmmword_4AF8658 = 0;
  xmmword_4AF8668 = (__int128)v17;
  qword_4AF8640 = (__int64)&off_4A64710;
  LODWORD(qword_4AF8608) = qword_4AF8608 + 1;
  byte_4AF864C = 0;
  qword_4AF85C0 = (__int64)off_4A6DEB8;
  dword_4AF8638 = 0;
  dword_4AF8648 = 0;
  qword_4AF8650 = (__int64)off_49D9228;
  sub_259F400(&qword_4AF85C0, "optsize-jump-table-density", 26);
  dword_4AF8638 = 40;
  byte_4AF864C = 1;
  dword_4AF8648 = 40;
  qword_4AF85E8 = 64;
  BYTE2(qword_4AF85C8) = BYTE2(qword_4AF85C8) & 0x9F | 0x20;
  qword_4AF85E0 = (__int64)"Minimum density for building a jump table in an optsize function";
  sub_259EC40(&qword_4AF85C0);
  __cxa_atexit(sub_1F6C940, &qword_4AF85C0, &off_47CFE00);
  qword_4AF8548 = 0x100000000LL;
  qword_4AF8500 = (__int64)&off_4A6E058;
  qword_4AF8508 = (unsigned int)qword_4AF8508 & 0x80000000;
  qword_4AF8540 = (__int64)&qword_4AF8550;
  qword_4AF8510 = 0;
  qword_4AF8518 = 0;
  qword_4AF8520 = 0;
  qword_4AF8528 = 0;
  qword_4AF8530 = 0;
  qword_4AF8538 = 0;
  qword_4AF8558 = (__int64)&qword_4AF8570;
  qword_4AF8560 = 1;
  dword_4AF8568 = 0;
  byte_4AF856C = 1;
  v18 = sub_259AC30(sub_1F6C940, &qword_4AF8550);
  v19 = (unsigned int)qword_4AF8548;
  v20 = (unsigned int)qword_4AF8548 + 1LL;
  if ( HIDWORD(qword_4AF8548) < v20 )
  {
    sub_25D6060(&qword_4AF8550 - 2, &qword_4AF8550, v20, 8);
    v19 = (unsigned int)qword_4AF8548;
  }
  v21 = _mm_load_si128(&v24);
  *(_QWORD *)(qword_4AF8540 + 8 * v19) = v18;
  word_4AF8588 = 0;
  xmmword_4AF8598 = 0;
  xmmword_4AF85A8 = (__int128)v21;
  qword_4AF8580 = (__int64)&off_4A64730;
  LODWORD(qword_4AF8548) = qword_4AF8548 + 1;
  byte_4AF8578 = 0;
  qword_4AF8500 = (__int64)off_4A6DFF0;
  qword_4AF8590 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF8500, "disable-strictnode-mutation", 27);
  qword_4AF8528 = 49;
  qword_4AF8520 = (__int64)"Don't mutate strict-float node to a legalize node";
  byte_4AF8578 = 0;
  word_4AF8588 = 256;
  BYTE2(qword_4AF8508) = BYTE2(qword_4AF8508) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF8500);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AF8500, &off_47CFE00);
}

