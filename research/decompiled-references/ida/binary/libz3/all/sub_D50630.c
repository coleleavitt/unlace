__int64 __fastcall sub_D50630(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rax
  __m128 v4; // xmm0
  __int64 v5; // rax
  __m128 v6; // xmm0
  _OWORD *v7; // rax
  _OWORD *v8; // rax
  _OWORD *v9; // rax
  _OWORD *v10; // rax
  unsigned int v11; // eax
  __int64 result; // rax
  __int64 v13; // [rsp-8h] [rbp-48h] BYREF
  _QWORD v14[8]; // [rsp+0h] [rbp-40h] BYREF

  *(_QWORD *)a1 = &off_1C5A780;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 24) = 256;
  *(_WORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_QWORD *)(a1 + 88) = a1 + 104;
  *(_QWORD *)(a1 + 96) = 0x1000000000LL;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  v14[0] = 0;
  sub_14DC230(a1 + 16, v14);
  sub_18572D0(v14);
  sub_16744A0(a1 + 232, a2);
  sub_16669D0(a1 + 256, a2);
  sub_15F01E0(a1 + 272, a2);
  *(_QWORD *)(a1 + 296) = a2;
  sub_180C5A0(v14, "seq");
  v2 = sub_15DA4C0(a2 + 560, v14);
  v3 = sub_15D2690(a2, v2);
  *(__m128 *)(a1 + 304) = _mm_loadh_ps((const double *)(v3 + 88));
  LODWORD(v3) = *(_DWORD *)(v3 + 16);
  *(_QWORD *)(a1 + 376) = 0;
  v4 = _mm_loadh_ps((const double *)(a1 + 296));
  *(_DWORD *)(a1 + 320) = v3;
  *(_DWORD *)(a1 + 344) = v3;
  *(_DWORD *)(a1 + 368) = v3;
  v5 = *(_QWORD *)(a1 + 296);
  *(_QWORD *)(a1 + 392) = 0;
  *(_QWORD *)(a1 + 384) = v5;
  *(_QWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 416) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 424) = 0;
  *(__m128 *)(a1 + 328) = v4;
  *(__m128 *)(a1 + 352) = v4;
  sub_15C5470(a1 + 432, a2);
  v6 = _mm_loadh_ps((const double *)(*(_QWORD *)(a1 + 440) + 752LL));
  *(_BYTE *)(a1 + 520) = 1;
  *(__m128 *)(a1 + 496) = v6;
  v7 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 528) = v7;
  *(_DWORD *)(a1 + 544) = 0;
  *(_QWORD *)(a1 + 536) = 8;
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[6] = 0;
  v7[7] = 0;
  v8 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 552) = v8;
  *(_QWORD *)(a1 + 560) = 8;
  *(_DWORD *)(a1 + 568) = 0;
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  v9 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 576) = v9;
  *(_QWORD *)(a1 + 584) = 8;
  *(_DWORD *)(a1 + 592) = 0;
  *v9 = 0;
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 0;
  v9[4] = 0;
  v9[5] = 0;
  v9[6] = 0;
  v9[7] = 0;
  v10 = (_OWORD *)sub_186B270(0xC0u);
  *(_QWORD *)(a1 + 600) = v10;
  *(_QWORD *)(a1 + 608) = 8;
  *(_DWORD *)(a1 + 616) = 0;
  *(_QWORD *)(a1 + 624) = a2;
  *(_QWORD *)(a1 + 632) = 0;
  *v10 = 0;
  v10[1] = 0;
  v10[2] = 0;
  v10[3] = 0;
  v10[4] = 0;
  v10[5] = 0;
  v10[6] = 0;
  v10[7] = 0;
  v10[8] = 0;
  v10[9] = 0;
  v10[10] = 0;
  v10[11] = 0;
  sub_180C5A0(&v13, "fpa");
  v11 = sub_15DA4C0(a2 + 560, &v13);
  result = sub_15D2690(a2, v11);
  *(_QWORD *)(a1 + 512) = result;
  return result;
}

