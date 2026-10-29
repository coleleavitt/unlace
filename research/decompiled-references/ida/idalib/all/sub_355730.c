int __fastcall sub_355730(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v4; // [rsp+8h] [rbp-20h]

  unk_2D0EB70 = 0;
  qword_2D0EB60 = &off_2C758B0;
  *(_QWORD *)&dword_2D0EB68 = dword_2D0EB68 & 0x80000000;
  qword_2D0EBA0[1] = 0x100000000LL;
  unk_2D0EB78 = 0;
  unk_2D0EB80 = 0;
  unk_2D0EB88 = 0;
  unk_2D0EB90 = 0;
  unk_2D0EB98 = 0;
  qword_2D0EBA0[0] = &qword_2D0EBA0[2];
  qword_2D0EBA0[3] = &qword_2D0EBA0[6];
  qword_2D0EBA0[4] = 1;
  LODWORD(qword_2D0EBA0[5]) = 0;
  BYTE4(qword_2D0EBA0[5]) = 1;
  v1 = sub_2210FF0(a1);
  v2 = LODWORD(qword_2D0EBA0[1]);
  if ( (unsigned __int64)LODWORD(qword_2D0EBA0[1]) + 1 > HIDWORD(qword_2D0EBA0[1]) )
  {
    v4 = v1;
    sub_2237220(qword_2D0EBA0, &qword_2D0EBA0[2], LODWORD(qword_2D0EBA0[1]) + 1LL, 8);
    v2 = LODWORD(qword_2D0EBA0[1]);
    v1 = v4;
  }
  *(_QWORD *)(qword_2D0EBA0[0] + 8 * v2) = v1;
  ++LODWORD(qword_2D0EBA0[1]);
  LODWORD(qword_2D0EBA0[7]) = 0;
  qword_2D0EBA0[8] = off_2C712D0;
  LODWORD(qword_2D0EBA0[9]) = 0;
  BYTE4(qword_2D0EBA0[9]) = 0;
  qword_2D0EB60 = off_2C75710;
  *(__m128 *)&qword_2D0EBA0[13] = _mm_loadh_ps((const double *)off_2C784F8);
  qword_2D0EBA0[10] = off_2BEAB98;
  sub_2217250(&qword_2D0EB60, "scev-cheap-expansion-budget", 27);
  LODWORD(qword_2D0EBA0[7]) = 4;
  BYTE4(qword_2D0EBA0[9]) = 1;
  unk_2D0EB88 = 121;
  LODWORD(qword_2D0EBA0[9]) = 4;
  BYTE2(dword_2D0EB68) = BYTE2(dword_2D0EB68) & 0x9F | 0x20;
  unk_2D0EB80 = "When performing SCEV expansion only if it is cheap to do, this controls the budget that is considered ch"
                "eap (default = 4)";
  sub_2218140(&qword_2D0EB60);
  return __cxa_atexit(sub_1FED260, &qword_2D0EB60, &off_2B25620);
}
