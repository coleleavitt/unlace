int sub_331490()
{
  size_t v0; // rax
  __int64 v1; // r13
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  size_t v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm1
  size_t v12; // rax
  size_t v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __m128i v18; // xmm2
  size_t v19; // rax
  __m128i v21; // [rsp+0h] [rbp-58h] BYREF
  __int64 v22; // [rsp+18h] [rbp-40h]

  v0 = j__strlen("Print addresses of instructions when dumping");
  qword_2CFC810 = 0;
  v1 = v0;
  qword_2CFC818 = 0;
  qword_2CFC820 = 0;
  qword_2CFC800 = (__int64)&off_2C758B0;
  qword_2CFC808 = (unsigned int)qword_2CFC808 & 0x80000000;
  qword_2CFC848 = 0x100000000LL;
  qword_2CFC828 = 0;
  qword_2CFC830 = 0;
  qword_2CFC838 = 0;
  qword_2CFC840 = (__int64)&unk_2CFC850;
  qword_2CFC858 = (__int64)&unk_2CFC870;
  qword_2CFC860 = 1;
  dword_2CFC868 = 0;
  byte_2CFC86C = 1;
  v2 = sub_2210FF0("Print addresses of instructions when dumping");
  v3 = (unsigned int)qword_2CFC848;
  v4 = (unsigned int)qword_2CFC848 + 1LL;
  if ( v4 > HIDWORD(qword_2CFC848) )
  {
    v21.m128i_i64[0] = v2;
    sub_2237220((char *)&unk_2CFC850 - 16, &unk_2CFC850, v4, 8);
    v3 = (unsigned int)qword_2CFC848;
    v2 = v21.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CFC840 + 8 * v3) = v2;
  qword_2CFC880 = (__int64)off_2C714E8;
  qword_2CFC800 = (__int64)off_2C75848;
  word_2CFC888 = 0;
  v21 = (__m128i)_mm_loadh_ps((const double *)off_2C78368);
  xmmword_2CFC8A8 = (__int128)v21;
  LODWORD(qword_2CFC848) = qword_2CFC848 + 1;
  byte_2CFC878 = 0;
  qword_2CFC890 = (__int64)off_2BEAB08;
  v5 = j__strlen("print-inst-addrs");
  sub_2217250(&qword_2CFC800, "print-inst-addrs", v5);
  qword_2CFC828 = v1;
  BYTE2(qword_2CFC808) = BYTE2(qword_2CFC808) & 0x9F | 0x20;
  qword_2CFC820 = (__int64)"Print addresses of instructions when dumping";
  sub_2218140(&qword_2CFC800);
  __cxa_atexit(sub_200E190, &qword_2CFC800, &off_2B25620);
  v6 = j__strlen("Pretty print debug locations of instructions when dumping");
  qword_2CFC780 = (__int64)&unk_2CFC790;
  v7 = v6;
  qword_2CFC750 = 0;
  qword_2CFC740 = (__int64)&off_2C758B0;
  qword_2CFC748 = (unsigned int)qword_2CFC748 & 0x80000000;
  qword_2CFC788 = 0x100000000LL;
  qword_2CFC758 = 0;
  qword_2CFC760 = 0;
  qword_2CFC768 = 0;
  qword_2CFC770 = 0;
  qword_2CFC778 = 0;
  qword_2CFC798 = (__int64)&unk_2CFC7B0;
  qword_2CFC7A0 = 1;
  dword_2CFC7A8 = 0;
  byte_2CFC7AC = 1;
  v8 = sub_2210FF0("Pretty print debug locations of instructions when dumping");
  v9 = (unsigned int)qword_2CFC788;
  v10 = (unsigned int)qword_2CFC788 + 1LL;
  if ( v10 > HIDWORD(qword_2CFC788) )
  {
    v22 = v8;
    sub_2237220((char *)&unk_2CFC790 - 16, &unk_2CFC790, v10, 8);
    v9 = (unsigned int)qword_2CFC788;
    v8 = v22;
  }
  v11 = _mm_load_si128(&v21);
  *(_QWORD *)(qword_2CFC780 + 8 * v9) = v8;
  qword_2CFC7C0 = (__int64)off_2C714E8;
  qword_2CFC740 = (__int64)off_2C75848;
  xmmword_2CFC7E8 = (__int128)v11;
  LODWORD(qword_2CFC788) = qword_2CFC788 + 1;
  word_2CFC7C8 = 0;
  byte_2CFC7B8 = 0;
  qword_2CFC7D0 = (__int64)off_2BEAB08;
  v12 = j__strlen("print-inst-debug-locs");
  sub_2217250(&qword_2CFC740, "print-inst-debug-locs", v12);
  qword_2CFC768 = v7;
  BYTE2(qword_2CFC748) = BYTE2(qword_2CFC748) & 0x9F | 0x20;
  qword_2CFC760 = (__int64)"Pretty print debug locations of instructions when dumping";
  sub_2218140(&qword_2CFC740);
  __cxa_atexit(sub_200E190, &qword_2CFC740, &off_2B25620);
  v13 = j__strlen("Pretty print perf data (branch weights, etc) when dumping");
  byte_2CFC6EC = 1;
  qword_2CFC690 = 0;
  v14 = v13;
  qword_2CFC680 = (__int64)&off_2C758B0;
  qword_2CFC688 = (unsigned int)qword_2CFC688 & 0x80000000;
  qword_2CFC6C8 = 0x100000000LL;
  qword_2CFC698 = 0;
  qword_2CFC6A0 = 0;
  qword_2CFC6A8 = 0;
  qword_2CFC6B0 = 0;
  qword_2CFC6B8 = 0;
  qword_2CFC6C0 = (__int64)&unk_2CFC6D0;
  qword_2CFC6D8 = (__int64)&unk_2CFC6F0;
  qword_2CFC6E0 = 1;
  dword_2CFC6E8 = 0;
  v15 = sub_2210FF0("Pretty print perf data (branch weights, etc) when dumping");
  v16 = (unsigned int)qword_2CFC6C8;
  v17 = (unsigned int)qword_2CFC6C8 + 1LL;
  if ( v17 > HIDWORD(qword_2CFC6C8) )
  {
    v22 = v15;
    sub_2237220((char *)&unk_2CFC6D0 - 16, &unk_2CFC6D0, v17, 8);
    v16 = (unsigned int)qword_2CFC6C8;
    v15 = v22;
  }
  v18 = _mm_load_si128(&v21);
  *(_QWORD *)(qword_2CFC6C0 + 8 * v16) = v15;
  word_2CFC708 = 0;
  qword_2CFC700 = (__int64)off_2C714E8;
  qword_2CFC680 = (__int64)off_2C75848;
  xmmword_2CFC728 = (__int128)v18;
  LODWORD(qword_2CFC6C8) = qword_2CFC6C8 + 1;
  byte_2CFC6F8 = 0;
  qword_2CFC710 = (__int64)off_2BEAB08;
  v19 = j__strlen("print-prof-data");
  sub_2217250(&qword_2CFC680, "print-prof-data", v19);
  qword_2CFC6A8 = v14;
  BYTE2(qword_2CFC688) = BYTE2(qword_2CFC688) & 0x9F | 0x20;
  qword_2CFC6A0 = (__int64)"Pretty print perf data (branch weights, etc) when dumping";
  sub_2218140(&qword_2CFC680);
  return __cxa_atexit(sub_200E190, &qword_2CFC680, &off_2B25620);
}
