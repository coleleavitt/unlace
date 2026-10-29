int __fastcall sub_352370(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v4; // [rsp+8h] [rbp-20h]

  unk_2CE4C50 = 0;
  qword_2CE4C40 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CE4C48 = dword_2CE4C48 & 0x80000000;
  qword_2CE4C80[1] = 0x100000000LL;
  unk_2CE4C58 = 0;
  unk_2CE4C60 = 0;
  unk_2CE4C68 = 0;
  unk_2CE4C70 = 0;
  unk_2CE4C78 = 0;
  qword_2CE4C80[0] = &qword_2CE4C80[2];
  qword_2CE4C80[3] = &qword_2CE4C80[6];
  qword_2CE4C80[4] = 1;
  LODWORD(qword_2CE4C80[5]) = 0;
  BYTE4(qword_2CE4C80[5]) = 1;
  v1 = sub_21ED2B0(a1);
  v2 = LODWORD(qword_2CE4C80[1]);
  if ( (unsigned __int64)LODWORD(qword_2CE4C80[1]) + 1 > HIDWORD(qword_2CE4C80[1]) )
  {
    v4 = v1;
    sub_22134E0(qword_2CE4C80, &qword_2CE4C80[2], LODWORD(qword_2CE4C80[1]) + 1LL, 8);
    v2 = LODWORD(qword_2CE4C80[1]);
    v1 = v4;
  }
  *(_QWORD *)(qword_2CE4C80[0] + 8 * v2) = v1;
  ++LODWORD(qword_2CE4C80[1]);
  LODWORD(qword_2CE4C80[7]) = 0;
  qword_2CE4C80[8] = off_2C472D0;
  LODWORD(qword_2CE4C80[9]) = 0;
  BYTE4(qword_2CE4C80[9]) = 0;
  qword_2CE4C40 = off_2C4B710;
  *(__m128 *)&qword_2CE4C80[13] = _mm_loadh_ps((const double *)off_2C4E4F8);
  qword_2CE4C80[10] = off_2BC0BF8;
  sub_21F3510(&qword_2CE4C40, "scev-cheap-expansion-budget", 27);
  LODWORD(qword_2CE4C80[7]) = 4;
  BYTE4(qword_2CE4C80[9]) = 1;
  unk_2CE4C68 = 121;
  LODWORD(qword_2CE4C80[9]) = 4;
  BYTE2(dword_2CE4C48) = BYTE2(dword_2CE4C48) & 0x9F | 0x20;
  unk_2CE4C60 = "When performing SCEV expansion only if it is cheap to do, this controls the budget that is considered ch"
                "eap (default = 4)";
  sub_21F4400(&qword_2CE4C40);
  return __cxa_atexit(sub_1FC9520, &qword_2CE4C40, &off_2AFC540);
}

