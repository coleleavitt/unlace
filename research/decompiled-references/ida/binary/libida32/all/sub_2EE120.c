__int64 sub_2EE120()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  _QWORD *v3; // [rsp+8h] [rbp-40h] BYREF
  char *v4; // [rsp+18h] [rbp-30h] BYREF
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = "standalone";
  v5[0] = "The name of the executor to use.";
  unk_2CAF450 = 0;
  unk_2CAF458 = 0;
  qword_2CAF440 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CAF448 = dword_2CAF448 & 0x80000000;
  qword_2CAF480[1] = 0x100000000LL;
  unk_2CAF460 = 0;
  unk_2CAF468 = 0;
  unk_2CAF470 = 0;
  unk_2CAF478 = 0;
  qword_2CAF480[0] = &qword_2CAF480[2];
  qword_2CAF480[3] = &qword_2CAF480[6];
  qword_2CAF480[4] = 1;
  LODWORD(qword_2CAF480[5]) = 0;
  BYTE4(qword_2CAF480[5]) = 1;
  v5[1] = 32;
  v0 = sub_21ED2B0();
  v1 = LODWORD(qword_2CAF480[1]);
  if ( (unsigned __int64)LODWORD(qword_2CAF480[1]) + 1 > HIDWORD(qword_2CAF480[1]) )
  {
    v3 = (_QWORD *)v0;
    sub_22134E0(qword_2CAF480, &qword_2CAF480[2], LODWORD(qword_2CAF480[1]) + 1LL, 8);
    v1 = LODWORD(qword_2CAF480[1]);
    v0 = (__int64)v3;
  }
  *(_QWORD *)(qword_2CAF480[0] + 8 * v1) = v0;
  qword_2CAF480[7] = &qword_2CAF480[9];
  ++LODWORD(qword_2CAF480[1]);
  v3 = &qword_2CAF480[14];
  qword_2CAF480[8] = 0;
  LOBYTE(qword_2CAF480[9]) = 0;
  qword_2CAF440 = off_2C4B7E0;
  *(__m128 *)&qword_2CAF480[11] = _mm_loadh_ps((const double *)&v3);
  LOBYTE(qword_2CAF480[14]) = 0;
  qword_2CAF480[17] = off_2BC0CB8;
  qword_2CAF480[13] = 0;
  LOBYTE(qword_2CAF480[16]) = 0;
  *(__m128 *)&qword_2CAF480[20] = _mm_loadh_ps((const double *)off_2C4D938);
  sub_1FD1710(&qword_2CAF440, "executor", v5, &v4);
  sub_21F4400(&qword_2CAF440);
  __cxa_atexit(sub_1FC95A0, &qword_2CAF440, &off_2AFC540);
  return unk_2CAF1C4;
}

