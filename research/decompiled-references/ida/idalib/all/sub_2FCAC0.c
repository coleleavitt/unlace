int __fastcall sub_2FCAC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v5; // [rsp+8h] [rbp-20h]

  unk_2CDF5F0 = 0;
  qword_2CDF5E0 = &off_2C758B0;
  *(_QWORD *)&dword_2CDF5E8 = dword_2CDF5E8 & 0x80000000;
  qword_2CDF620[1] = 0x100000000LL;
  unk_2CDF5F8 = 0;
  unk_2CDF600 = 0;
  unk_2CDF608 = 0;
  unk_2CDF610 = 0;
  unk_2CDF618 = 0;
  qword_2CDF620[0] = &qword_2CDF620[2];
  qword_2CDF620[3] = &qword_2CDF620[6];
  qword_2CDF620[4] = 1;
  LODWORD(qword_2CDF620[5]) = 0;
  BYTE4(qword_2CDF620[5]) = 1;
  v2 = sub_2210FF0(a1, a2);
  v3 = LODWORD(qword_2CDF620[1]);
  if ( (unsigned __int64)LODWORD(qword_2CDF620[1]) + 1 > HIDWORD(qword_2CDF620[1]) )
  {
    v5 = v2;
    sub_2237220(qword_2CDF620, &qword_2CDF620[2], LODWORD(qword_2CDF620[1]) + 1LL, 8);
    v3 = LODWORD(qword_2CDF620[1]);
    v2 = v5;
  }
  *(_QWORD *)(qword_2CDF620[0] + 8 * v3) = v2;
  ++LODWORD(qword_2CDF620[1]);
  LODWORD(qword_2CDF620[7]) = 0;
  qword_2CDF620[8] = off_2C712D0;
  LODWORD(qword_2CDF620[9]) = 0;
  BYTE4(qword_2CDF620[9]) = 0;
  qword_2CDF5E0 = off_2C75710;
  *(__m128 *)&qword_2CDF620[13] = _mm_loadh_ps((const double *)off_2C784F8);
  qword_2CDF620[10] = off_2BEAB98;
  sub_2217250(&qword_2CDF5E0, "available-load-scan-limit", 25);
  LODWORD(qword_2CDF620[7]) = 6;
  BYTE4(qword_2CDF620[9]) = 1;
  unk_2CDF608 = 147;
  LODWORD(qword_2CDF620[9]) = 6;
  BYTE2(dword_2CDF5E8) = BYTE2(dword_2CDF5E8) & 0x9F | 0x20;
  unk_2CDF600 = "Use this to specify the default maximum number of instructions to scan backward from a given instruction"
                ", when searching for available loaded value";
  sub_2218140(&qword_2CDF5E0);
  return __cxa_atexit(sub_1FED260, &qword_2CDF5E0, &off_2B25620);
}
