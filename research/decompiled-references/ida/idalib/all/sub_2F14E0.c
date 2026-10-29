__int64 sub_2F14E0()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  _QWORD *v3; // [rsp+8h] [rbp-40h] BYREF
  char *v4; // [rsp+18h] [rbp-30h] BYREF
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = "standalone";
  v5[0] = "The name of the executor to use.";
  unk_2CD9370 = 0;
  unk_2CD9378 = 0;
  qword_2CD9360 = &off_2C758B0;
  *(_QWORD *)&dword_2CD9368 = dword_2CD9368 & 0x80000000;
  qword_2CD93A0[1] = 0x100000000LL;
  unk_2CD9380 = 0;
  unk_2CD9388 = 0;
  unk_2CD9390 = 0;
  unk_2CD9398 = 0;
  qword_2CD93A0[0] = &qword_2CD93A0[2];
  qword_2CD93A0[3] = &qword_2CD93A0[6];
  qword_2CD93A0[4] = 1;
  LODWORD(qword_2CD93A0[5]) = 0;
  BYTE4(qword_2CD93A0[5]) = 1;
  v5[1] = 32;
  v0 = sub_2210FF0();
  v1 = LODWORD(qword_2CD93A0[1]);
  if ( (unsigned __int64)LODWORD(qword_2CD93A0[1]) + 1 > HIDWORD(qword_2CD93A0[1]) )
  {
    v3 = (_QWORD *)v0;
    sub_2237220(qword_2CD93A0, &qword_2CD93A0[2], LODWORD(qword_2CD93A0[1]) + 1LL, 8);
    v1 = LODWORD(qword_2CD93A0[1]);
    v0 = (__int64)v3;
  }
  *(_QWORD *)(qword_2CD93A0[0] + 8 * v1) = v0;
  qword_2CD93A0[7] = &qword_2CD93A0[9];
  ++LODWORD(qword_2CD93A0[1]);
  v3 = &qword_2CD93A0[14];
  qword_2CD93A0[8] = 0;
  LOBYTE(qword_2CD93A0[9]) = 0;
  qword_2CD9360 = off_2C757E0;
  *(__m128 *)&qword_2CD93A0[11] = _mm_loadh_ps((const double *)&v3);
  LOBYTE(qword_2CD93A0[14]) = 0;
  qword_2CD93A0[17] = off_2BEAC58;
  qword_2CD93A0[13] = 0;
  LOBYTE(qword_2CD93A0[16]) = 0;
  *(__m128 *)&qword_2CD93A0[20] = _mm_loadh_ps((const double *)off_2C77938);
  sub_1FF5450(&qword_2CD9360, "executor", v5, &v4);
  sub_2218140(&qword_2CD9360);
  __cxa_atexit(sub_1FED2E0, &qword_2CD9360, &off_2B25620);
  return unk_2CD90E4;
}
