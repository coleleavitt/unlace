__int64 __fastcall sub_655A10(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rax
  __m128 v4; // xmm0
  __int64 v5; // rax
  _BYTE v7[48]; // [rsp+8h] [rbp-30h] BYREF

  *(_QWORD *)a1 = qword_1C7A350;
  sub_16511B0(a1 + 8);
  *(_QWORD *)(a1 + 56) = a2;
  *(_QWORD *)a1 = &off_1C63D10;
  sub_16669D0(a1 + 64, a2);
  sub_16744A0(a1 + 80, a2);
  sub_1684300(a1 + 104, a2);
  sub_15C5470(a1 + 120, a2);
  *(_QWORD *)(a1 + 184) = a2;
  sub_180C5A0(v7, "seq");
  v2 = sub_15DA4C0(a2 + 560, v7);
  v3 = sub_15D2690(a2, v2);
  *(__m128 *)(a1 + 192) = _mm_loadh_ps((const double *)(v3 + 88));
  LODWORD(v3) = *(_DWORD *)(v3 + 16);
  *(_QWORD *)(a1 + 264) = 0;
  v4 = _mm_loadh_ps((const double *)(a1 + 184));
  *(_DWORD *)(a1 + 208) = v3;
  *(_DWORD *)(a1 + 232) = v3;
  *(_DWORD *)(a1 + 256) = v3;
  v5 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 272) = v5;
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 304) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 312) = 0;
  *(__m128 *)(a1 + 216) = v4;
  *(__m128 *)(a1 + 240) = v4;
  sub_15F01E0(a1 + 320, a2);
  return sub_1624F90(a1 + 344, a2);
}

