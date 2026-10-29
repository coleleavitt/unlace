__int64 __fastcall sub_BAC210(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  int v4; // eax
  __int64 v5; // r14
  unsigned int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rsi
  __m128 v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 result; // rax
  _QWORD v13[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *(_QWORD *)(a2 + 104);
  sub_180C5A0(v13, "char");
  v4 = sub_15DA4C0(v3 + 560, v13);
  sub_966710(a1, a2, v4);
  v5 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)a1 = off_1C737A0;
  *(_QWORD *)(a1 + 56) = v5;
  sub_180C5A0(v13, "seq");
  v6 = sub_15DA4C0(v5 + 560, v13);
  v7 = sub_15D2690(v5, v6);
  v8 = *(_QWORD *)(a1 + 24);
  *(__m128 *)(a1 + 64) = _mm_loadh_ps((const double *)(v7 + 88));
  LODWORD(v7) = *(_DWORD *)(v7 + 16);
  *(_QWORD *)(a1 + 160) = 0;
  v9 = _mm_loadh_ps((const double *)(a1 + 56));
  *(_DWORD *)(a1 + 80) = v7;
  *(_DWORD *)(a1 + 104) = v7;
  *(_DWORD *)(a1 + 128) = v7;
  v10 = *(_QWORD *)(a1 + 56);
  *(__m128 *)(a1 + 88) = v9;
  *(__m128 *)(a1 + 112) = v9;
  *(_QWORD *)(a1 + 144) = v10;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  *(_OWORD *)(a1 + 208) = 0;
  v11 = *(_QWORD *)(a2 + 112);
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  sub_FD7470(a1 + 224, v8, v11 + 38);
  *(_QWORD *)(a1 + 496) = 0;
  *(_DWORD *)(a1 + 504) = 0;
  *(_OWORD *)(a1 + 512) = 0;
  sub_180C5A0(v13, "bits2char");
  result = v13[0];
  *(_QWORD *)(a1 + 512) = v13[0];
  return result;
}

