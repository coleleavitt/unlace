int __fastcall sub_336EE0(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v4; // [rsp+8h] [rbp-20h]

  unk_2CFEF50 = 0;
  qword_2CFEF40 = &off_2C758B0;
  *(_QWORD *)&dword_2CFEF48 = dword_2CFEF48 & 0x80000000;
  qword_2CFEF80[1] = 0x100000000LL;
  unk_2CFEF58 = 0;
  unk_2CFEF60 = 0;
  unk_2CFEF68 = 0;
  unk_2CFEF70 = 0;
  unk_2CFEF78 = 0;
  qword_2CFEF80[0] = &qword_2CFEF80[2];
  qword_2CFEF80[3] = &qword_2CFEF80[6];
  qword_2CFEF80[4] = 1;
  LODWORD(qword_2CFEF80[5]) = 0;
  BYTE4(qword_2CFEF80[5]) = 1;
  v1 = sub_2210FF0(a1);
  v2 = LODWORD(qword_2CFEF80[1]);
  if ( (unsigned __int64)LODWORD(qword_2CFEF80[1]) + 1 > HIDWORD(qword_2CFEF80[1]) )
  {
    v4 = v1;
    sub_2237220(qword_2CFEF80, &qword_2CFEF80[2], LODWORD(qword_2CFEF80[1]) + 1LL, 8);
    v2 = LODWORD(qword_2CFEF80[1]);
    v1 = v4;
  }
  *(_QWORD *)(qword_2CFEF80[0] + 8 * v2) = v1;
  ++LODWORD(qword_2CFEF80[1]);
  LODWORD(qword_2CFEF80[7]) = 0;
  qword_2CFEF80[8] = off_2C712D0;
  LODWORD(qword_2CFEF80[9]) = 0;
  BYTE4(qword_2CFEF80[9]) = 0;
  qword_2CFEF40 = off_2C75710;
  *(__m128 *)&qword_2CFEF80[13] = _mm_loadh_ps((const double *)off_2C784F8);
  qword_2CFEF80[10] = off_2BEAB98;
  sub_2217250(&qword_2CFEF40, "asm-macro-max-nesting-depth", 27);
  LODWORD(qword_2CFEF80[7]) = 20;
  BYTE4(qword_2CFEF80[9]) = 1;
  unk_2CFEF68 = 54;
  LODWORD(qword_2CFEF80[9]) = 20;
  BYTE2(dword_2CFEF48) = BYTE2(dword_2CFEF48) & 0x9F | 0x20;
  unk_2CFEF60 = "The maximum nesting depth allowed for assembly macros.";
  sub_2218140(&qword_2CFEF40);
  return __cxa_atexit(sub_1FED260, &qword_2CFEF40, &off_2B25620);
}
