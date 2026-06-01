int __fastcall sub_2F3490(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v5; // [rsp+8h] [rbp-20h]

  unk_2CB17D0 = 0;
  qword_2CB17C0 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CB17C8 = dword_2CB17C8 & 0x80000000;
  qword_2CB1800[1] = 0x100000000LL;
  unk_2CB17D8 = 0;
  unk_2CB17E0 = 0;
  unk_2CB17E8 = 0;
  unk_2CB17F0 = 0;
  unk_2CB17F8 = 0;
  qword_2CB1800[0] = &qword_2CB1800[2];
  qword_2CB1800[3] = &qword_2CB1800[6];
  qword_2CB1800[4] = 1;
  LODWORD(qword_2CB1800[5]) = 0;
  BYTE4(qword_2CB1800[5]) = 1;
  v2 = sub_21ED2B0(a1, a2);
  v3 = LODWORD(qword_2CB1800[1]);
  if ( (unsigned __int64)LODWORD(qword_2CB1800[1]) + 1 > HIDWORD(qword_2CB1800[1]) )
  {
    v5 = v2;
    sub_22134E0(qword_2CB1800, &qword_2CB1800[2], LODWORD(qword_2CB1800[1]) + 1LL, 8);
    v3 = LODWORD(qword_2CB1800[1]);
    v2 = v5;
  }
  *(_QWORD *)(qword_2CB1800[0] + 8 * v3) = v2;
  ++LODWORD(qword_2CB1800[1]);
  LODWORD(qword_2CB1800[7]) = 0;
  qword_2CB1800[8] = off_2C472D0;
  LODWORD(qword_2CB1800[9]) = 0;
  BYTE4(qword_2CB1800[9]) = 0;
  qword_2CB17C0 = off_2C4B710;
  *(__m128 *)&qword_2CB1800[13] = _mm_loadh_ps((const double *)off_2C4E4F8);
  qword_2CB1800[10] = off_2BC0BF8;
  sub_21F3510(&qword_2CB17C0, "max-devirt-iterations", 21);
  LODWORD(qword_2CB1800[7]) = 4;
  BYTE4(qword_2CB1800[9]) = 1;
  LODWORD(qword_2CB1800[9]) = 4;
  BYTE2(dword_2CB17C8) = BYTE2(dword_2CB17C8) & 0x9F | 0x40;
  sub_21F4400(&qword_2CB17C0);
  return __cxa_atexit(sub_1FC9520, &qword_2CB17C0, &off_2AFC540);
}

