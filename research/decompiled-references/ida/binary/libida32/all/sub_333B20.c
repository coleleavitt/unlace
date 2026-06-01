int __fastcall sub_333B20(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v4; // [rsp+8h] [rbp-20h]

  unk_2CD5030 = 0;
  qword_2CD5020 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CD5028 = dword_2CD5028 & 0x80000000;
  qword_2CD5060[1] = 0x100000000LL;
  unk_2CD5038 = 0;
  unk_2CD5040 = 0;
  unk_2CD5048 = 0;
  unk_2CD5050 = 0;
  unk_2CD5058 = 0;
  qword_2CD5060[0] = &qword_2CD5060[2];
  qword_2CD5060[3] = &qword_2CD5060[6];
  qword_2CD5060[4] = 1;
  LODWORD(qword_2CD5060[5]) = 0;
  BYTE4(qword_2CD5060[5]) = 1;
  v1 = sub_21ED2B0(a1);
  v2 = LODWORD(qword_2CD5060[1]);
  if ( (unsigned __int64)LODWORD(qword_2CD5060[1]) + 1 > HIDWORD(qword_2CD5060[1]) )
  {
    v4 = v1;
    sub_22134E0(qword_2CD5060, &qword_2CD5060[2], LODWORD(qword_2CD5060[1]) + 1LL, 8);
    v2 = LODWORD(qword_2CD5060[1]);
    v1 = v4;
  }
  *(_QWORD *)(qword_2CD5060[0] + 8 * v2) = v1;
  ++LODWORD(qword_2CD5060[1]);
  LODWORD(qword_2CD5060[7]) = 0;
  qword_2CD5060[8] = off_2C472D0;
  LODWORD(qword_2CD5060[9]) = 0;
  BYTE4(qword_2CD5060[9]) = 0;
  qword_2CD5020 = off_2C4B710;
  *(__m128 *)&qword_2CD5060[13] = _mm_loadh_ps((const double *)off_2C4E4F8);
  qword_2CD5060[10] = off_2BC0BF8;
  sub_21F3510(&qword_2CD5020, "asm-macro-max-nesting-depth", 27);
  LODWORD(qword_2CD5060[7]) = 20;
  BYTE4(qword_2CD5060[9]) = 1;
  unk_2CD5048 = 54;
  LODWORD(qword_2CD5060[9]) = 20;
  BYTE2(dword_2CD5028) = BYTE2(dword_2CD5028) & 0x9F | 0x20;
  unk_2CD5040 = "The maximum nesting depth allowed for assembly macros.";
  sub_21F4400(&qword_2CD5020);
  return __cxa_atexit(sub_1FC9520, &qword_2CD5020, &off_2AFC540);
}

