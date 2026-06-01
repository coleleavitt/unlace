int __fastcall sub_332B80(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v4; // [rsp+8h] [rbp-20h]

  unk_2CD4950 = 0;
  qword_2CD4940 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CD4948 = dword_2CD4948 & 0x80000000;
  qword_2CD4980[1] = 0x100000000LL;
  unk_2CD4958 = 0;
  unk_2CD4960 = 0;
  unk_2CD4968 = 0;
  unk_2CD4970 = 0;
  unk_2CD4978 = 0;
  qword_2CD4980[0] = &qword_2CD4980[2];
  qword_2CD4980[3] = &qword_2CD4980[6];
  qword_2CD4980[4] = 1;
  LODWORD(qword_2CD4980[5]) = 0;
  BYTE4(qword_2CD4980[5]) = 1;
  v1 = sub_21ED2B0(a1);
  v2 = LODWORD(qword_2CD4980[1]);
  if ( (unsigned __int64)LODWORD(qword_2CD4980[1]) + 1 > HIDWORD(qword_2CD4980[1]) )
  {
    v4 = v1;
    sub_22134E0(qword_2CD4980, &qword_2CD4980[2], LODWORD(qword_2CD4980[1]) + 1LL, 8);
    v2 = LODWORD(qword_2CD4980[1]);
    v1 = v4;
  }
  *(_QWORD *)(qword_2CD4980[0] + 8 * v2) = v1;
  LOWORD(qword_2CD4980[9]) = 0;
  ++LODWORD(qword_2CD4980[1]);
  LOBYTE(qword_2CD4980[7]) = 0;
  qword_2CD4980[8] = off_2C474E8;
  *(__m128 *)&qword_2CD4980[13] = _mm_loadh_ps((const double *)off_2C4E368);
  qword_2CD4940 = off_2C4B848;
  qword_2CD4980[10] = off_2BC0B68;
  sub_21F3510(&qword_2CD4940, "use-dereferenceable-at-point-semantics", 38);
  LOBYTE(qword_2CD4980[7]) = 0;
  unk_2CD4968 = 60;
  LOWORD(qword_2CD4980[9]) = 256;
  BYTE2(dword_2CD4948) = BYTE2(dword_2CD4948) & 0x9F | 0x20;
  unk_2CD4960 = "Deref attributes and metadata infer facts at definition only";
  sub_21F4400(&qword_2CD4940);
  return __cxa_atexit(sub_1FEA450, &qword_2CD4940, &off_2AFC540);
}

