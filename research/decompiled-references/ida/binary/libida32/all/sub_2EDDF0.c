_QWORD *sub_2EDDF0()
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
  sub_1FCADB0(&unk_2CAF2E0, "filter", v9, &v8);
  __cxa_atexit(sub_1FC95A0, &unk_2CAF2E0, &off_2AFC540);
  v0 = j__strlen(
         "The number of threads used to process all files in parallel. Set to 0 for hardware concurrency. This flag only "
         "applies to all-TUs.");
  unk_2CAF230 = 0;
  unk_2CAF238 = 0;
  qword_2CAF220 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CAF228 = dword_2CAF228 & 0x80000000;
  qword_2CAF260[1] = 0x100000000LL;
  unk_2CAF240 = 0;
  unk_2CAF248 = 0;
  unk_2CAF250 = 0;
  unk_2CAF258 = 0;
  qword_2CAF260[0] = &qword_2CAF260[2];
  qword_2CAF260[3] = &qword_2CAF260[6];
  qword_2CAF260[4] = 1;
  LODWORD(qword_2CAF260[5]) = 0;
  BYTE4(qword_2CAF260[5]) = 1;
  v1 = sub_21ED2B0();
  v2 = LODWORD(qword_2CAF260[1]);
  if ( (unsigned __int64)LODWORD(qword_2CAF260[1]) + 1 > HIDWORD(qword_2CAF260[1]) )
  {
    v7 = v1;
    sub_22134E0(qword_2CAF260, &qword_2CAF260[2], LODWORD(qword_2CAF260[1]) + 1LL, 8);
    v2 = LODWORD(qword_2CAF260[1]);
    v1 = v7;
  }
  *(_QWORD *)(qword_2CAF260[0] + 8 * v2) = v1;
  ++LODWORD(qword_2CAF260[1]);
  LODWORD(qword_2CAF260[7]) = 0;
  qword_2CAF260[8] = off_2C472D0;
  LODWORD(qword_2CAF260[9]) = 0;
  BYTE4(qword_2CAF260[9]) = 0;
  qword_2CAF220 = off_2C4B710;
  *(__m128 *)&qword_2CAF260[13] = _mm_loadh_ps((const double *)off_2C4E4F8);
  qword_2CAF260[10] = off_2BC0BF8;
  sub_21F3510(&qword_2CAF220, "execute-concurrency", 19);
  unk_2CAF248 = v0;
  unk_2CAF240 = "The number of threads used to process all files in parallel. Set to 0 for hardware concurrency. This fla"
                "g only applies to all-TUs.";
  LODWORD(qword_2CAF260[7]) = 0;
  BYTE4(qword_2CAF260[9]) = 1;
  LODWORD(qword_2CAF260[9]) = 0;
  sub_21F4400(&qword_2CAF220);
  __cxa_atexit(sub_1FC9520, &qword_2CAF220, &off_2AFC540);
  v3 = j__strlen("Runs FrontendActions on all TUs in the compilation database. Tool results are stored in memory.");
  v4 = j__strlen("all-TUs");
  qword_2CAF1F8 = v3;
  qword_2CAF1E8 = v4;
  qword_2CAF1F0 = (__int64)"Runs FrontendActions on all TUs in the compilation database. Tool results are stored in memory.";
  qword_2CAF200 = (__int64)sub_1FC8EF0;
  qword_2CAF210 = (__int64)&qword_2CAF1E0;
  result = &qword_2CAF530;
  qword_2CAF1E0 = (__int64)"all-TUs";
  qword_2CAF208 = 0;
  v6 = (_QWORD *)qword_2CAF530;
  if ( !qword_2CAF530 )
    v6 = &unk_2CAF538;
  *v6 = &qword_2CAF208;
  qword_2CAF530 = &qword_2CAF208;
  return result;
}

