int sub_336370()
{
  size_t v0; // rax
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  size_t v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t v11; // rax
  __int64 v13; // [rsp+8h] [rbp-20h]
  __int64 v14; // [rsp+8h] [rbp-20h]

  v0 = j__strlen("Use optimistic attributes describing 'as-if' properties of runtime calls.");
  qword_2CFEB30 = 0;
  v1 = v0;
  qword_2CFEB38 = 0;
  qword_2CFEB40 = 0;
  qword_2CFEB20 = (__int64)&off_2C758B0;
  qword_2CFEB28 = (unsigned int)qword_2CFEB28 & 0x80000000;
  qword_2CFEB68 = 0x100000000LL;
  qword_2CFEB48 = 0;
  qword_2CFEB50 = 0;
  qword_2CFEB58 = 0;
  qword_2CFEB60 = (__int64)&unk_2CFEB70;
  qword_2CFEB78 = (__int64)&unk_2CFEB90;
  qword_2CFEB80 = 1;
  dword_2CFEB88 = 0;
  byte_2CFEB8C = 1;
  v2 = sub_2210FF0("Use optimistic attributes describing 'as-if' properties of runtime calls.");
  v3 = (unsigned int)qword_2CFEB68;
  v4 = (unsigned int)qword_2CFEB68 + 1LL;
  if ( v4 > HIDWORD(qword_2CFEB68) )
  {
    v13 = v2;
    sub_2237220((char *)&unk_2CFEB70 - 16, &unk_2CFEB70, v4, 8);
    v3 = (unsigned int)qword_2CFEB68;
    v2 = v13;
  }
  *(_QWORD *)(qword_2CFEB60 + 8 * v3) = v2;
  word_2CFEBA8 = 0;
  xmmword_2CFEBC8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2CFEB68) = qword_2CFEB68 + 1;
  qword_2CFEBA0 = (__int64)off_2C714E8;
  byte_2CFEB98 = 0;
  qword_2CFEB20 = (__int64)off_2C75848;
  qword_2CFEBB0 = (__int64)off_2BEAB08;
  v5 = j__strlen("openmp-ir-builder-optimistic-attributes");
  sub_2217250(&qword_2CFEB20, "openmp-ir-builder-optimistic-attributes", v5);
  word_2CFEBA8 = 256;
  qword_2CFEB48 = v1;
  byte_2CFEB98 = 0;
  BYTE2(qword_2CFEB28) = BYTE2(qword_2CFEB28) & 0x9F | 0x20;
  qword_2CFEB40 = (__int64)"Use optimistic attributes describing 'as-if' properties of runtime calls.";
  sub_2218140(&qword_2CFEB20);
  __cxa_atexit(sub_200E190, &qword_2CFEB20, &off_2B25620);
  v6 = j__strlen("Factor for the unroll threshold to account for code simplifications still taking place");
  byte_2CFEACC = 1;
  qword_2CFEA70 = 0;
  v7 = v6;
  qword_2CFEA60 = (__int64)&off_2C758B0;
  qword_2CFEA68 = (unsigned int)qword_2CFEA68 & 0x80000000;
  qword_2CFEAA8 = 0x100000000LL;
  qword_2CFEA78 = 0;
  qword_2CFEA80 = 0;
  qword_2CFEA88 = 0;
  qword_2CFEA90 = 0;
  qword_2CFEA98 = 0;
  qword_2CFEAA0 = (__int64)&unk_2CFEAB0;
  qword_2CFEAB8 = (__int64)&unk_2CFEAD0;
  qword_2CFEAC0 = 1;
  dword_2CFEAC8 = 0;
  v8 = sub_2210FF0("Factor for the unroll threshold to account for code simplifications still taking place");
  v9 = (unsigned int)qword_2CFEAA8;
  v10 = (unsigned int)qword_2CFEAA8 + 1LL;
  if ( v10 > HIDWORD(qword_2CFEAA8) )
  {
    v14 = v8;
    sub_2237220((char *)&unk_2CFEAB0 - 16, &unk_2CFEAB0, v10, 8);
    v9 = (unsigned int)qword_2CFEAA8;
    v8 = v14;
  }
  *(_QWORD *)(qword_2CFEAA0 + 8 * v9) = v8;
  xmmword_2CFEB10 = (__int128)_mm_loadh_ps((const double *)off_2C77C00);
  LODWORD(qword_2CFEAA8) = qword_2CFEAA8 + 1;
  qword_2CFEAE0 = (__int64)off_2C716B8;
  qword_2CFEAD8 = 0;
  byte_2CFEAF0 = 0;
  qword_2CFEA60 = (__int64)off_2C716D8;
  qword_2CFEAE8 = 0;
  qword_2CFEAF8 = (__int64)off_2BEABF8;
  v11 = j__strlen("openmp-ir-builder-unroll-threshold-factor");
  sub_2217250(&qword_2CFEA60, "openmp-ir-builder-unroll-threshold-factor", v11);
  qword_2CFEA88 = v7;
  qword_2CFEAD8 = 0x3FF8000000000000LL;
  byte_2CFEAF0 = 1;
  BYTE2(qword_2CFEA68) = BYTE2(qword_2CFEA68) & 0x9F | 0x20;
  qword_2CFEA80 = (__int64)"Factor for the unroll threshold to account for code simplifications still taking place";
  qword_2CFEAE8 = 0x3FF8000000000000LL;
  sub_2218140(&qword_2CFEA60);
  return __cxa_atexit(sub_20102F0, &qword_2CFEA60, &off_2B25620);
}
