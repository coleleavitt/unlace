int __fastcall sub_2FD540(__int64 a1, __int64 a2)
{
  size_t v2; // r15
  __int64 v3; // rax
  __int64 v4; // rcx
  size_t v5; // r15
  __int64 v6; // rax
  __int64 v7; // rcx
  __m128i si128; // xmm0
  size_t v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  size_t v12; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __m128i v16; // xmm2
  size_t v17; // r15
  __int64 v18; // rax
  __int64 v19; // rcx
  __m128i v20; // xmm3
  __m128i v22; // [rsp+0h] [rbp-58h] BYREF
  __m128i v23[4]; // [rsp+10h] [rbp-48h] BYREF

  v2 = j__strlen("Report total allocation sizes of hinted allocations");
  unk_2CB6E30 = 0;
  qword_2CB6E20 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CB6E28 = dword_2CB6E28 & 0x80000000;
  qword_2CB6E60[1] = 0x100000000LL;
  unk_2CB6E38 = 0;
  unk_2CB6E40 = 0;
  unk_2CB6E48 = 0;
  unk_2CB6E50 = 0;
  unk_2CB6E58 = 0;
  qword_2CB6E60[0] = &qword_2CB6E60[2];
  qword_2CB6E60[3] = &qword_2CB6E60[6];
  qword_2CB6E60[4] = 1;
  LODWORD(qword_2CB6E60[5]) = 0;
  BYTE4(qword_2CB6E60[5]) = 1;
  v3 = sub_21ED2B0("Report total allocation sizes of hinted allocations", a2);
  v4 = LODWORD(qword_2CB6E60[1]);
  if ( (unsigned __int64)LODWORD(qword_2CB6E60[1]) + 1 > HIDWORD(qword_2CB6E60[1]) )
  {
    v22.m128i_i64[0] = v3;
    sub_22134E0(qword_2CB6E60, &qword_2CB6E60[2], LODWORD(qword_2CB6E60[1]) + 1LL, 8);
    v4 = LODWORD(qword_2CB6E60[1]);
    v3 = v22.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CB6E60[0] + 8 * v4) = v3;
  qword_2CB6E60[8] = off_2C474E8;
  qword_2CB6E20 = off_2C4B848;
  ++LODWORD(qword_2CB6E60[1]);
  LOWORD(qword_2CB6E60[9]) = 0;
  qword_2CB6E60[10] = off_2BC0B68;
  LOBYTE(qword_2CB6E60[7]) = 0;
  *(__m128 *)&qword_2CB6E60[13] = _mm_loadh_ps((const double *)off_2C4E368);
  v22 = *(__m128i *)&qword_2CB6E60[13];
  sub_21F3510(&qword_2CB6E20, "memprof-report-hinted-sizes", 27);
  unk_2CB6E48 = v2;
  LOBYTE(qword_2CB6E60[7]) = 0;
  LOWORD(qword_2CB6E60[9]) = 256;
  BYTE2(dword_2CB6E28) = BYTE2(dword_2CB6E28) & 0x9F | 0x20;
  unk_2CB6E40 = "Report total allocation sizes of hinted allocations";
  sub_21F4400(&qword_2CB6E20);
  __cxa_atexit(sub_1FEA450, &qword_2CB6E20, &off_2AFC540);
  v5 = j__strlen("Keep all non-cold contexts (increases cloning overheads)");
  qword_2CB6D60 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CB6D68 = dword_2CB6D68 & 0x80000000;
  qword_2CB6DA0[1] = 0x100000000LL;
  unk_2CB6D70 = 0;
  unk_2CB6D78 = 0;
  unk_2CB6D80 = 0;
  unk_2CB6D88 = 0;
  unk_2CB6D90 = 0;
  unk_2CB6D98 = 0;
  qword_2CB6DA0[0] = &qword_2CB6DA0[2];
  qword_2CB6DA0[3] = &qword_2CB6DA0[6];
  qword_2CB6DA0[4] = 1;
  LODWORD(qword_2CB6DA0[5]) = 0;
  BYTE4(qword_2CB6DA0[5]) = 1;
  v6 = sub_21ED2B0("Keep all non-cold contexts (increases cloning overheads)", &qword_2CB6E20);
  v7 = LODWORD(qword_2CB6DA0[1]);
  si128 = _mm_load_si128(&v22);
  if ( (unsigned __int64)LODWORD(qword_2CB6DA0[1]) + 1 > HIDWORD(qword_2CB6DA0[1]) )
  {
    v22.m128i_i64[0] = v6;
    v23[0] = si128;
    sub_22134E0(qword_2CB6DA0, &qword_2CB6DA0[2], LODWORD(qword_2CB6DA0[1]) + 1LL, 8);
    v7 = LODWORD(qword_2CB6DA0[1]);
    si128 = _mm_load_si128(v23);
    v6 = v22.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CB6DA0[0] + 8 * v7) = v6;
  LOWORD(qword_2CB6DA0[9]) = 0;
  qword_2CB6DA0[8] = off_2C474E8;
  qword_2CB6D60 = off_2C4B848;
  ++LODWORD(qword_2CB6DA0[1]);
  LOBYTE(qword_2CB6DA0[7]) = 0;
  qword_2CB6DA0[10] = off_2BC0B68;
  *(__m128i *)&qword_2CB6DA0[13] = si128;
  sub_21F3510(&qword_2CB6D60, "memprof-keep-all-not-cold-contexts", 34);
  unk_2CB6D88 = v5;
  LOBYTE(qword_2CB6DA0[7]) = 0;
  LOWORD(qword_2CB6DA0[9]) = 256;
  BYTE2(dword_2CB6D68) = BYTE2(dword_2CB6D68) & 0x9F | 0x20;
  unk_2CB6D80 = "Keep all non-cold contexts (increases cloning overheads)";
  sub_21F4400(&qword_2CB6D60);
  __cxa_atexit(sub_1FEA450, &qword_2CB6D60, &off_2AFC540);
  v9 = j__strlen("Min percent of cold bytes to hint alloc cold during cloning");
  qword_2CB6CA0 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CB6CA8 = dword_2CB6CA8 & 0x80000000;
  qword_2CB6CE0[1] = 0x100000000LL;
  unk_2CB6CB0 = 0;
  unk_2CB6CB8 = 0;
  unk_2CB6CC0 = 0;
  unk_2CB6CC8 = 0;
  unk_2CB6CD0 = 0;
  unk_2CB6CD8 = 0;
  qword_2CB6CE0[0] = &qword_2CB6CE0[2];
  qword_2CB6CE0[3] = &qword_2CB6CE0[6];
  qword_2CB6CE0[4] = 1;
  LODWORD(qword_2CB6CE0[5]) = 0;
  BYTE4(qword_2CB6CE0[5]) = 1;
  v10 = sub_21ED2B0("Min percent of cold bytes to hint alloc cold during cloning", &qword_2CB6D60);
  v11 = LODWORD(qword_2CB6CE0[1]);
  if ( (unsigned __int64)LODWORD(qword_2CB6CE0[1]) + 1 > HIDWORD(qword_2CB6CE0[1]) )
  {
    v22.m128i_i64[0] = v10;
    sub_22134E0(qword_2CB6CE0, &qword_2CB6CE0[2], LODWORD(qword_2CB6CE0[1]) + 1LL, 8);
    v11 = LODWORD(qword_2CB6CE0[1]);
    v10 = v22.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CB6CE0[0] + 8 * v11) = v10;
  qword_2CB6CE0[8] = off_2C472D0;
  ++LODWORD(qword_2CB6CE0[1]);
  qword_2CB6CA0 = off_2C4B710;
  qword_2CB6CE0[10] = off_2BC0BF8;
  LODWORD(qword_2CB6CE0[7]) = 0;
  LODWORD(qword_2CB6CE0[9]) = 0;
  BYTE4(qword_2CB6CE0[9]) = 0;
  *(__m128 *)&qword_2CB6CE0[13] = _mm_loadh_ps((const double *)off_2C4E4F8);
  v22 = *(__m128i *)&qword_2CB6CE0[13];
  sub_21F3510(&qword_2CB6CA0, "memprof-cloning-cold-threshold", 30);
  unk_2CB6CC8 = v9;
  LODWORD(qword_2CB6CE0[7]) = 100;
  BYTE4(qword_2CB6CE0[9]) = 1;
  LODWORD(qword_2CB6CE0[9]) = 100;
  BYTE2(dword_2CB6CA8) = BYTE2(dword_2CB6CA8) & 0x9F | 0x20;
  unk_2CB6CC0 = "Min percent of cold bytes to hint alloc cold during cloning";
  sub_21F4400(&qword_2CB6CA0);
  __cxa_atexit(sub_1FC9520, &qword_2CB6CA0, &off_2AFC540);
  v12 = j__strlen("Min percent of cold bytes at a callsite to discard non-cold contexts");
  qword_2CB6BE0 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CB6BE8 = dword_2CB6BE8 & 0x80000000;
  qword_2CB6C20[1] = 0x100000000LL;
  qword_2CB6C20[0] = &qword_2CB6C20[2];
  unk_2CB6BF0 = 0;
  unk_2CB6BF8 = 0;
  unk_2CB6C00 = 0;
  unk_2CB6C08 = 0;
  unk_2CB6C10 = 0;
  unk_2CB6C18 = 0;
  qword_2CB6C20[3] = &qword_2CB6C20[6];
  qword_2CB6C20[4] = 1;
  LODWORD(qword_2CB6C20[5]) = 0;
  BYTE4(qword_2CB6C20[5]) = 1;
  v23[0].m128i_i64[0] = (__int64)&qword_2CB6C20[2];
  v13 = sub_21ED2B0("Min percent of cold bytes at a callsite to discard non-cold contexts", &qword_2CB6C20[2]);
  v14 = LODWORD(qword_2CB6C20[1]);
  v15 = v23[0].m128i_i64[0];
  if ( (unsigned __int64)LODWORD(qword_2CB6C20[1]) + 1 > HIDWORD(qword_2CB6C20[1]) )
  {
    v23[0].m128i_i64[0] = v13;
    sub_22134E0(qword_2CB6C20, v15, LODWORD(qword_2CB6C20[1]) + 1LL, 8);
    v14 = LODWORD(qword_2CB6C20[1]);
    v13 = v23[0].m128i_i64[0];
  }
  v16 = _mm_load_si128(&v22);
  *(_QWORD *)(qword_2CB6C20[0] + 8 * v14) = v13;
  qword_2CB6C20[8] = off_2C472D0;
  qword_2CB6BE0 = off_2C4B710;
  ++LODWORD(qword_2CB6C20[1]);
  qword_2CB6C20[10] = off_2BC0BF8;
  LODWORD(qword_2CB6C20[7]) = 0;
  LODWORD(qword_2CB6C20[9]) = 0;
  BYTE4(qword_2CB6C20[9]) = 0;
  *(__m128i *)&qword_2CB6C20[13] = v16;
  sub_21F3510(&qword_2CB6BE0, "memprof-callsite-cold-threshold", 31);
  unk_2CB6C08 = v12;
  LODWORD(qword_2CB6C20[7]) = 100;
  BYTE4(qword_2CB6C20[9]) = 1;
  LODWORD(qword_2CB6C20[9]) = 100;
  BYTE2(dword_2CB6BE8) = BYTE2(dword_2CB6BE8) & 0x9F | 0x20;
  unk_2CB6C00 = "Min percent of cold bytes at a callsite to discard non-cold contexts";
  sub_21F4400(&qword_2CB6BE0);
  __cxa_atexit(sub_1FC9520, &qword_2CB6BE0, &off_2AFC540);
  v17 = j__strlen("Min percent of max cold bytes for critical cold context");
  qword_2CB6B20 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CB6B28 = dword_2CB6B28 & 0x80000000;
  qword_2CB6B60[1] = 0x100000000LL;
  unk_2CB6B30 = 0;
  unk_2CB6B38 = 0;
  unk_2CB6B40 = 0;
  unk_2CB6B48 = 0;
  unk_2CB6B50 = 0;
  unk_2CB6B58 = 0;
  qword_2CB6B60[0] = &qword_2CB6B60[2];
  qword_2CB6B60[3] = &qword_2CB6B60[6];
  qword_2CB6B60[4] = 1;
  LODWORD(qword_2CB6B60[5]) = 0;
  BYTE4(qword_2CB6B60[5]) = 1;
  v18 = sub_21ED2B0("Min percent of max cold bytes for critical cold context", &qword_2CB6BE0);
  v19 = LODWORD(qword_2CB6B60[1]);
  if ( (unsigned __int64)LODWORD(qword_2CB6B60[1]) + 1 > HIDWORD(qword_2CB6B60[1]) )
  {
    v23[0].m128i_i64[0] = v18;
    sub_22134E0(qword_2CB6B60, &qword_2CB6B60[2], LODWORD(qword_2CB6B60[1]) + 1LL, 8);
    v19 = LODWORD(qword_2CB6B60[1]);
    v18 = v23[0].m128i_i64[0];
  }
  v20 = _mm_load_si128(&v22);
  *(_QWORD *)(qword_2CB6B60[0] + 8 * v19) = v18;
  qword_2CB6B60[8] = off_2C472D0;
  qword_2CB6B20 = off_2C4B710;
  ++LODWORD(qword_2CB6B60[1]);
  qword_2CB6B60[10] = off_2BC0BF8;
  LODWORD(qword_2CB6B60[7]) = 0;
  LODWORD(qword_2CB6B60[9]) = 0;
  BYTE4(qword_2CB6B60[9]) = 0;
  *(__m128i *)&qword_2CB6B60[13] = v20;
  sub_21F3510(&qword_2CB6B20, "memprof-min-percent-max-cold-size", 33);
  unk_2CB6B48 = v17;
  LODWORD(qword_2CB6B60[7]) = 100;
  BYTE4(qword_2CB6B60[9]) = 1;
  LODWORD(qword_2CB6B60[9]) = 100;
  BYTE2(dword_2CB6B28) = BYTE2(dword_2CB6B28) & 0x9F | 0x20;
  unk_2CB6B40 = "Min percent of max cold bytes for critical cold context";
  sub_21F4400(&qword_2CB6B20);
  return __cxa_atexit(sub_1FC9520, &qword_2CB6B20, &off_2AFC540);
}

