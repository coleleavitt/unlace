_QWORD *sub_2F11B0()
{
  size_t v0; // r12
  __int64 v1; // rax
  __int64 v2; // rcx
  size_t v3; // rbx
  size_t v4; // rax
  _QWORD *result; // rax
  _QWORD *v6; // rcx
  __int64 v7; // [rsp+8h] [rbp-40h]
  char *v8; // [rsp+18h] [rbp-30h] BYREF
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v8 = ".*";
  v9[1] = j__strlen("Only process files that match this filter. This flag only applies to all-TUs.");
  v9[0] = "Only process files that match this filter. This flag only applies to all-TUs.";
  sub_1FEEAF0(&unk_2CD9200, "filter", v9, &v8);
  __cxa_atexit(sub_1FED2E0, &unk_2CD9200, &off_2B25620);
  v0 = j__strlen(
         "The number of threads used to process all files in parallel. Set to 0 for hardware concurrency. This flag only "
         "applies to all-TUs.");
  unk_2CD9150 = 0;
  unk_2CD9158 = 0;
  qword_2CD9140 = &off_2C758B0;
  *(_QWORD *)&dword_2CD9148 = dword_2CD9148 & 0x80000000;
  qword_2CD9180[1] = 0x100000000LL;
  unk_2CD9160 = 0;
  unk_2CD9168 = 0;
  unk_2CD9170 = 0;
  unk_2CD9178 = 0;
  qword_2CD9180[0] = &qword_2CD9180[2];
  qword_2CD9180[3] = &qword_2CD9180[6];
  qword_2CD9180[4] = 1;
  LODWORD(qword_2CD9180[5]) = 0;
  BYTE4(qword_2CD9180[5]) = 1;
  v1 = sub_2210FF0();
  v2 = LODWORD(qword_2CD9180[1]);
  if ( (unsigned __int64)LODWORD(qword_2CD9180[1]) + 1 > HIDWORD(qword_2CD9180[1]) )
  {
    v7 = v1;
    sub_2237220(qword_2CD9180, &qword_2CD9180[2], LODWORD(qword_2CD9180[1]) + 1LL, 8);
    v2 = LODWORD(qword_2CD9180[1]);
    v1 = v7;
  }
  *(_QWORD *)(qword_2CD9180[0] + 8 * v2) = v1;
  ++LODWORD(qword_2CD9180[1]);
  LODWORD(qword_2CD9180[7]) = 0;
  qword_2CD9180[8] = off_2C712D0;
  LODWORD(qword_2CD9180[9]) = 0;
  BYTE4(qword_2CD9180[9]) = 0;
  qword_2CD9140 = off_2C75710;
  *(__m128 *)&qword_2CD9180[13] = _mm_loadh_ps((const double *)off_2C784F8);
  qword_2CD9180[10] = off_2BEAB98;
  sub_2217250(&qword_2CD9140, "execute-concurrency", 19);
  unk_2CD9168 = v0;
  unk_2CD9160 = "The number of threads used to process all files in parallel. Set to 0 for hardware concurrency. This fla"
                "g only applies to all-TUs.";
  LODWORD(qword_2CD9180[7]) = 0;
  BYTE4(qword_2CD9180[9]) = 1;
  LODWORD(qword_2CD9180[9]) = 0;
  sub_2218140(&qword_2CD9140);
  __cxa_atexit(sub_1FED260, &qword_2CD9140, &off_2B25620);
  v3 = j__strlen("Runs FrontendActions on all TUs in the compilation database. Tool results are stored in memory.");
  v4 = j__strlen("all-TUs");
  qword_2CD9118 = v3;
  qword_2CD9108 = v4;
  qword_2CD9110 = (__int64)"Runs FrontendActions on all TUs in the compilation database. Tool results are stored in memory.";
  qword_2CD9120 = (__int64)sub_1FECC30;
  qword_2CD9130 = (__int64)&qword_2CD9100;
  result = &qword_2CD9450;
  qword_2CD9100 = (__int64)"all-TUs";
  qword_2CD9128 = 0;
  v6 = (_QWORD *)qword_2CD9450;
  if ( !qword_2CD9450 )
    v6 = &unk_2CD9458;
  *v6 = &qword_2CD9128;
  qword_2CD9450 = &qword_2CD9128;
  return result;
}
