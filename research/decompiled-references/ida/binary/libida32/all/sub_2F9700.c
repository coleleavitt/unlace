int __fastcall sub_2F9700(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v5; // [rsp+8h] [rbp-20h]

  unk_2CB56D0 = 0;
  qword_2CB56C0 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CB56C8 = dword_2CB56C8 & 0x80000000;
  qword_2CB5700[1] = 0x100000000LL;
  unk_2CB56D8 = 0;
  unk_2CB56E0 = 0;
  unk_2CB56E8 = 0;
  unk_2CB56F0 = 0;
  unk_2CB56F8 = 0;
  qword_2CB5700[0] = &qword_2CB5700[2];
  qword_2CB5700[3] = &qword_2CB5700[6];
  qword_2CB5700[4] = 1;
  LODWORD(qword_2CB5700[5]) = 0;
  BYTE4(qword_2CB5700[5]) = 1;
  v2 = sub_21ED2B0(a1, a2);
  v3 = LODWORD(qword_2CB5700[1]);
  if ( (unsigned __int64)LODWORD(qword_2CB5700[1]) + 1 > HIDWORD(qword_2CB5700[1]) )
  {
    v5 = v2;
    sub_22134E0(qword_2CB5700, &qword_2CB5700[2], LODWORD(qword_2CB5700[1]) + 1LL, 8);
    v3 = LODWORD(qword_2CB5700[1]);
    v2 = v5;
  }
  *(_QWORD *)(qword_2CB5700[0] + 8 * v3) = v2;
  ++LODWORD(qword_2CB5700[1]);
  LODWORD(qword_2CB5700[7]) = 0;
  qword_2CB5700[8] = off_2C472D0;
  LODWORD(qword_2CB5700[9]) = 0;
  BYTE4(qword_2CB5700[9]) = 0;
  qword_2CB56C0 = off_2C4B710;
  *(__m128 *)&qword_2CB5700[13] = _mm_loadh_ps((const double *)off_2C4E4F8);
  qword_2CB5700[10] = off_2BC0BF8;
  sub_21F3510(&qword_2CB56C0, "available-load-scan-limit", 25);
  LODWORD(qword_2CB5700[7]) = 6;
  BYTE4(qword_2CB5700[9]) = 1;
  unk_2CB56E8 = 147;
  LODWORD(qword_2CB5700[9]) = 6;
  BYTE2(dword_2CB56C8) = BYTE2(dword_2CB56C8) & 0x9F | 0x20;
  unk_2CB56E0 = "Use this to specify the default maximum number of instructions to scan backward from a given instruction"
                ", when searching for available loaded value";
  sub_21F4400(&qword_2CB56C0);
  return __cxa_atexit(sub_1FC9520, &qword_2CB56C0, &off_2AFC540);
}

