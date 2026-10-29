char __fastcall sub_AEA150(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  _OWORD *v3; // rax
  unsigned int v4; // eax
  __int64 v5; // rax
  __m128 v6; // xmm0
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  _BYTE *v10; // rdx
  bool v11; // al
  char result; // al
  _BYTE v13[48]; // [rsp+0h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a2 + 104);
  *(_WORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 16) = v2;
  *(_QWORD *)(a1 + 72) = 0;
  *(__m128i *)a1 = _mm_unpacklo_epi64((__m128i)a2, (__m128i)v2);
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = v2;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  v3 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 96) = v3;
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  *(_QWORD *)(a1 + 104) = 8;
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = qword_1C7A350;
  sub_16511B0(a1 + 128);
  *(_QWORD *)(a1 + 176) = v2;
  *(_QWORD *)(a1 + 120) = &off_1C63D10;
  sub_16669D0(a1 + 184, v2);
  sub_16744A0(a1 + 200, v2);
  sub_1684300(a1 + 224, v2);
  sub_15C5470(a1 + 240, v2);
  *(_QWORD *)(a1 + 304) = v2;
  sub_180C5A0(v13, "seq");
  v4 = sub_15DA4C0(v2 + 560, v13);
  v5 = sub_15D2690(v2, v4);
  *(__m128 *)(a1 + 312) = _mm_loadh_ps((const double *)(v5 + 88));
  LODWORD(v5) = *(_DWORD *)(v5 + 16);
  *(_QWORD *)(a1 + 384) = 0;
  v6 = _mm_loadh_ps((const double *)(a1 + 304));
  *(_DWORD *)(a1 + 328) = v5;
  *(_DWORD *)(a1 + 352) = v5;
  *(_DWORD *)(a1 + 376) = v5;
  v7 = *(_QWORD *)(a1 + 304);
  *(_QWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 392) = v7;
  *(_QWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 416) = 0;
  *(_QWORD *)(a1 + 424) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 432) = 0;
  *(__m128 *)(a1 + 336) = v6;
  *(__m128 *)(a1 + 360) = v6;
  sub_15F01E0(a1 + 440, v2);
  sub_1624F90(a1 + 464, v2);
  *(_QWORD *)(a1 + 504) = 0;
  *(_DWORD *)(a1 + 496) = 0;
  *(_QWORD *)(a1 + 520) = 0;
  *(_DWORD *)(a1 + 512) = 0;
  *(_QWORD *)(a1 + 536) = 0;
  *(_DWORD *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 552) = 0;
  *(_QWORD *)(a1 + 560) = 0;
  *(_QWORD *)(a1 + 568) = v2;
  *(_QWORD *)(a1 + 576) = 0;
  *(_QWORD *)(a1 + 584) = 0;
  sub_15C0990(a1 + 592, v2);
  v8 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 816) = 0;
  *(_OWORD *)(a1 + 792) = 0;
  v9 = *(_QWORD *)(a2 + 112);
  *(_QWORD *)(a1 + 808) = v8;
  v10 = *(_BYTE **)(v9 + 568);
  *(_QWORD *)(a1 + 824) = v8;
  *(_QWORD *)(a1 + 840) = v8;
  *(_QWORD *)(a1 + 856) = v8;
  v11 = 0;
  *(_QWORD *)(a1 + 832) = 0;
  *(_QWORD *)(a1 + 848) = 0;
  if ( v10 && ((unsigned __int8)v10 & 7) != 1 )
    v11 = *v10 != 0;
  *(_BYTE *)(a1 + 41) = v11;
  result = *(_BYTE *)(v9 + 564) | v11;
  *(_BYTE *)(a1 + 40) = result;
  return result;
}

