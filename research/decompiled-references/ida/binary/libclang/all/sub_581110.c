int __fastcall sub_581110(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // r15
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __m128i v7; // xmm4
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm5
  __int64 v12; // r9
  __m128i v14; // [rsp+0h] [rbp-78h] BYREF
  int v15; // [rsp+1Ch] [rbp-5Ch] BYREF
  __int64 (__fastcall *v16)(); // [rsp+20h] [rbp-58h] BYREF
  __int64 (__fastcall **v17)(); // [rsp+28h] [rbp-50h] BYREF
  _QWORD v18[9]; // [rsp+30h] [rbp-48h] BYREF

  qword_4AEF360 = (__int64)&qword_4AEF370;
  qword_4AEF330 = 0;
  qword_4AEF338 = 0;
  qword_4AEF320 = (__int64)&off_4A6E058;
  qword_4AEF328 = (unsigned int)qword_4AEF328 & 0x80000000;
  qword_4AEF378 = (__int64)&qword_4AEF390;
  v14 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49E8FD8), (__m128i)(unsigned __int64)nullsub_266);
  qword_4AEF340 = 0;
  qword_4AEF348 = 0;
  qword_4AEF350 = 0;
  qword_4AEF358 = 0;
  qword_4AEF368 = 0x100000000LL;
  qword_4AEF380 = 1;
  dword_4AEF388 = 0;
  byte_4AEF38C = 1;
  v1 = sub_259AC30(a1, &qword_4AEF370);
  v2 = (unsigned int)qword_4AEF368;
  v3 = (unsigned int)qword_4AEF368 + 1LL;
  if ( HIDWORD(qword_4AEF368) < v3 )
  {
    sub_25D6060(&qword_4AEF370 - 2, &qword_4AEF370, v3, 8);
    v2 = (unsigned int)qword_4AEF368;
  }
  *(_QWORD *)(qword_4AEF360 + 8 * v2) = v1;
  xmmword_4AEF3B8 = 0;
  LODWORD(qword_4AEF368) = qword_4AEF368 + 1;
  qword_4AEF3A0 = (__int64)&off_4A692B8;
  dword_4AEF398 = 0;
  byte_4AEF3AC = 0;
  qword_4AEF320 = (__int64)off_4A6DF20;
  dword_4AEF3A8 = 0;
  qword_4AEF3B0 = (__int64)off_49D91C8;
  xmmword_4AEF3C8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E8FE0),
                                (__m128i)(unsigned __int64)nullsub_291);
  sub_259F400(&qword_4AEF320, "fast-isel-abort", 15);
  qword_4AEF348 = 238;
  BYTE2(qword_4AEF328) = BYTE2(qword_4AEF328) & 0x9F | 0x20;
  qword_4AEF340 = (__int64)"Enable abort calls when \"fast\" instruction selection fails to lower an instruction: 0 disab"
                           "le the abort, 1 will abort but for args, calls and terminators, 2 will also abort for argumen"
                           "t lowering, and 3 will never fallback to SelectionDAG.";
  sub_259EC40(&qword_4AEF320);
  __cxa_atexit(sub_20B86E0, &qword_4AEF320, &off_47CFE00);
  qword_4AEF270 = 0;
  qword_4AEF260 = (__int64)&off_4A6E058;
  qword_4AEF268 = (unsigned int)qword_4AEF268 & 0x80000000;
  qword_4AEF2A0 = (__int64)&qword_4AEF2B0;
  qword_4AEF278 = 0;
  qword_4AEF280 = 0;
  qword_4AEF288 = 0;
  qword_4AEF290 = 0;
  qword_4AEF298 = 0;
  qword_4AEF2A8 = 0x100000000LL;
  qword_4AEF2B8 = (__int64)&qword_4AEF2D0;
  qword_4AEF2C0 = 1;
  dword_4AEF2C8 = 0;
  byte_4AEF2CC = 1;
  v4 = sub_259AC30(sub_20B86E0, &qword_4AEF2B0);
  v5 = (unsigned int)qword_4AEF2A8;
  v6 = (unsigned int)qword_4AEF2A8 + 1LL;
  if ( HIDWORD(qword_4AEF2A8) < v6 )
  {
    sub_25D6060(&qword_4AEF2B0 - 2, &qword_4AEF2B0, v6, 8);
    v5 = (unsigned int)qword_4AEF2A8;
  }
  v7 = _mm_load_si128(&v14);
  *(_QWORD *)(qword_4AEF2A0 + 8 * v5) = v4;
  word_4AEF2E8 = 0;
  xmmword_4AEF2F8 = 0;
  qword_4AEF2E0 = (__int64)&off_4A64730;
  xmmword_4AEF308 = (__int128)v7;
  LODWORD(qword_4AEF2A8) = qword_4AEF2A8 + 1;
  qword_4AEF260 = (__int64)off_4A6DFF0;
  byte_4AEF2D8 = 0;
  qword_4AEF2F0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AEF260, "fast-isel-report-on-fallback", 28);
  qword_4AEF288 = 79;
  BYTE2(qword_4AEF268) = BYTE2(qword_4AEF268) & 0x9F | 0x20;
  qword_4AEF280 = (__int64)"Emit a diagnostic when \"fast\" instruction selection falls back to SelectionDAG.";
  sub_259EC40(&qword_4AEF260);
  __cxa_atexit(sub_1F6C9D0, &qword_4AEF260, &off_47CFE00);
  qword_4AEF1E8 = 0x100000000LL;
  qword_4AEF1A0 = (__int64)&off_4A6E058;
  qword_4AEF1A8 = (unsigned int)qword_4AEF1A8 & 0x80000000;
  qword_4AEF1E0 = (__int64)&qword_4AEF1F0;
  qword_4AEF1B0 = 0;
  qword_4AEF1B8 = 0;
  qword_4AEF1C0 = 0;
  qword_4AEF1C8 = 0;
  qword_4AEF1D0 = 0;
  qword_4AEF1D8 = 0;
  qword_4AEF1F8 = (__int64)&qword_4AEF210;
  qword_4AEF200 = 1;
  dword_4AEF208 = 0;
  byte_4AEF20C = 1;
  v8 = sub_259AC30(sub_1F6C9D0, &qword_4AEF1F0);
  v9 = (unsigned int)qword_4AEF1E8;
  v10 = (unsigned int)qword_4AEF1E8 + 1LL;
  if ( HIDWORD(qword_4AEF1E8) < v10 )
  {
    sub_25D6060(&qword_4AEF1F0 - 2, &qword_4AEF1F0, v10, 8);
    v9 = (unsigned int)qword_4AEF1E8;
  }
  v11 = _mm_load_si128(&v14);
  *(_QWORD *)(qword_4AEF1E0 + 8 * v9) = v8;
  word_4AEF228 = 0;
  qword_4AEF220 = (__int64)&off_4A64730;
  xmmword_4AEF238 = 0;
  xmmword_4AEF248 = (__int128)v11;
  qword_4AEF1A0 = (__int64)off_4A6DFF0;
  LODWORD(qword_4AEF1E8) = qword_4AEF1E8 + 1;
  byte_4AEF218 = 0;
  qword_4AEF230 = (__int64)off_49D9168;
  sub_259F400(&qword_4AEF1A0, "use-mbpi", 8);
  qword_4AEF1C0 = (__int64)"use Machine Branch Probability Info";
  word_4AEF228 = 257;
  byte_4AEF218 = 1;
  qword_4AEF1C8 = 35;
  BYTE2(qword_4AEF1A8) = BYTE2(qword_4AEF1A8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AEF1A0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AEF1A0, &off_47CFE00);
  v18[1] = 62;
  v18[0] = "Instruction schedulers available (before register allocation):";
  v16 = sub_2E11AD0;
  v17 = &v16;
  v15 = 1;
  sub_2E1D640(qword_4AEEEE0, "pre-RA-sched", &v17, &v15, v18, v12, v14.m128i_i64[0], v14.m128i_i64[1]);
  __cxa_atexit(sub_2E12520, qword_4AEEEE0, &off_47CFE00);
  qword_4AEEEA8 = (__int64)"default";
  qword_4AEEEC8 = (__int64)sub_2E11AD0;
  qword_4AEEEA0 = 0;
  qword_4AEEEB0 = 7;
  qword_4AEEEB8 = (__int64)"Best scheduler for the target";
  qword_4AEEEC0 = 29;
  sub_2E1D380(qword_4AEF180, &qword_4AEEEA0);
  return __cxa_atexit(sub_2E11E00, &qword_4AEEEA0, &off_47CFE00);
}

