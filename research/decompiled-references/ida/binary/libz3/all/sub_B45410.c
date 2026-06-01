_OWORD *__fastcall sub_B45410(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // r13
  unsigned int v6; // eax
  __int64 v7; // rax
  __m128 v8; // xmm0
  __int64 v9; // rax
  _OWORD *result; // rax
  _BYTE v11[48]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a2 + 104);
  sub_180C5A0(v11, "datatype");
  v3 = sub_15DA4C0(v2 + 560, v11);
  sub_966710(a1, a2, v3);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)a1 = off_1C72790;
  sub_15F01E0(a1 + 56, v4);
  sub_1684300(a1 + 80, *(_QWORD *)(a1 + 24));
  v5 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 96) = v5;
  sub_180C5A0(v11, "seq");
  v6 = sub_15DA4C0(v5 + 560, v11);
  v7 = sub_15D2690(v5, v6);
  *(__m128 *)(a1 + 104) = _mm_loadh_ps((const double *)(v7 + 88));
  LODWORD(v7) = *(_DWORD *)(v7 + 16);
  *(_QWORD *)(a1 + 176) = 0;
  v8 = _mm_loadh_ps((const double *)(a1 + 96));
  *(_DWORD *)(a1 + 120) = v7;
  *(_DWORD *)(a1 + 144) = v7;
  *(_DWORD *)(a1 + 168) = v7;
  v9 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 184) = v9;
  *(_QWORD *)(a1 + 216) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 248) = a1 + 296;
  *(_QWORD *)(a1 + 280) = off_1C57330;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = a1;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 288) = a1 + 240;
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  *(__m128 *)(a1 + 128) = v8;
  *(__m128 *)(a1 + 152) = v8;
  sub_180C0A0(a1 + 312);
  *(_DWORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 400) = 0;
  *(_OWORD *)(a1 + 360) = 0;
  *(_OWORD *)(a1 + 384) = 0;
  result = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 408) = result;
  *(_QWORD *)(a1 + 416) = 8;
  *(_DWORD *)(a1 + 424) = 0;
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[7] = 0;
  *(_OWORD *)(a1 + 432) = 0;
  *(_OWORD *)(a1 + 448) = 0;
  return result;
}

