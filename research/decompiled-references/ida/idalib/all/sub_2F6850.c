int __fastcall sub_2F6850(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v5; // [rsp+8h] [rbp-20h]

  unk_2CDB6F0 = 0;
  qword_2CDB6E0 = &off_2C758B0;
  *(_QWORD *)&dword_2CDB6E8 = dword_2CDB6E8 & 0x80000000;
  qword_2CDB720[1] = 0x100000000LL;
  unk_2CDB6F8 = 0;
  unk_2CDB700 = 0;
  unk_2CDB708 = 0;
  unk_2CDB710 = 0;
  unk_2CDB718 = 0;
  qword_2CDB720[0] = &qword_2CDB720[2];
  qword_2CDB720[3] = &qword_2CDB720[6];
  qword_2CDB720[4] = 1;
  LODWORD(qword_2CDB720[5]) = 0;
  BYTE4(qword_2CDB720[5]) = 1;
  v2 = sub_2210FF0(a1, a2);
  v3 = LODWORD(qword_2CDB720[1]);
  if ( (unsigned __int64)LODWORD(qword_2CDB720[1]) + 1 > HIDWORD(qword_2CDB720[1]) )
  {
    v5 = v2;
    sub_2237220(qword_2CDB720, &qword_2CDB720[2], LODWORD(qword_2CDB720[1]) + 1LL, 8);
    v3 = LODWORD(qword_2CDB720[1]);
    v2 = v5;
  }
  *(_QWORD *)(qword_2CDB720[0] + 8 * v3) = v2;
  ++LODWORD(qword_2CDB720[1]);
  LODWORD(qword_2CDB720[7]) = 0;
  qword_2CDB720[8] = off_2C712D0;
  LODWORD(qword_2CDB720[9]) = 0;
  BYTE4(qword_2CDB720[9]) = 0;
  qword_2CDB6E0 = off_2C75710;
  *(__m128 *)&qword_2CDB720[13] = _mm_loadh_ps((const double *)off_2C784F8);
  qword_2CDB720[10] = off_2BEAB98;
  sub_2217250(&qword_2CDB6E0, "max-devirt-iterations", 21);
  LODWORD(qword_2CDB720[7]) = 4;
  BYTE4(qword_2CDB720[9]) = 1;
  LODWORD(qword_2CDB720[9]) = 4;
  BYTE2(dword_2CDB6E8) = BYTE2(dword_2CDB6E8) & 0x9F | 0x40;
  sub_2218140(&qword_2CDB6E0);
  return __cxa_atexit(sub_1FED260, &qword_2CDB6E0, &off_2B25620);
}
