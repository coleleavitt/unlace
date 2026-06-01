__int64 __fastcall sub_B56940(__int64 **a1, unsigned __int64 a2)
{
  __m128i *v3; // rax
  unsigned __int64 v4; // rsi
  __int64 *v5; // rbx
  int v6; // r15d
  __int64 v7; // rsi
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rax
  _OWORD *v12; // rax
  __int64 v13; // rax
  _OWORD *v14; // rax
  _OWORD *v15; // rax
  __int64 v16; // rsi
  __int64 result; // rax
  void *v18; // [rsp+0h] [rbp-58h]
  int v19[2]; // [rsp+18h] [rbp-40h] BYREF

  v3 = (__m128i *)sub_186B270(0x110u);
  v4 = *(_QWORD *)(a2 + 24);
  v5 = (__int64 *)v3;
  v6 = (_DWORD)v3 + 48;
  *v3 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)a2);
  sub_16669D0(&v3[1], v4);
  sub_1684300(v5 + 4, *v5);
  v7 = *v5;
  *(_QWORD *)v19 = 0;
  sub_14B7810(v6, v7, (int)v19, v8, v9, v10, v18);
  sub_18572D0(v19);
  sub_BE4A80(v5 + 8, *v5);
  v11 = *v5;
  v5[20] = 0;
  v5[19] = v11;
  v12 = (_OWORD *)sub_186B270(0x80u);
  v5[21] = (__int64)v12;
  *((_DWORD *)v5 + 46) = 0;
  v5[22] = 8;
  *v12 = 0;
  v12[1] = 0;
  v12[2] = 0;
  v12[3] = 0;
  v12[4] = 0;
  v12[5] = 0;
  v12[6] = 0;
  v12[7] = 0;
  v13 = sub_186B270(0x140u);
  *(_QWORD *)v13 = 0;
  *(_QWORD *)(v13 + 224) = 1;
  *(_QWORD *)(v13 + 8) = 0;
  *(_QWORD *)(v13 + 16) = 0;
  *(_QWORD *)(v13 + 24) = 1;
  *(_QWORD *)(v13 + 32) = 0;
  *(_QWORD *)(v13 + 40) = 0;
  *(_QWORD *)(v13 + 48) = 0;
  *(_QWORD *)(v13 + 56) = 0;
  *(_QWORD *)(v13 + 64) = 1;
  *(_QWORD *)(v13 + 72) = 0;
  *(_QWORD *)(v13 + 80) = 0;
  *(_QWORD *)(v13 + 88) = 0;
  *(_QWORD *)(v13 + 96) = 0;
  *(_QWORD *)(v13 + 104) = 1;
  *(_QWORD *)(v13 + 112) = 0;
  *(_QWORD *)(v13 + 120) = 0;
  *(_QWORD *)(v13 + 128) = 0;
  *(_QWORD *)(v13 + 136) = 0;
  *(_QWORD *)(v13 + 144) = 1;
  *(_QWORD *)(v13 + 152) = 0;
  *(_QWORD *)(v13 + 160) = 0;
  *(_QWORD *)(v13 + 168) = 0;
  *(_QWORD *)(v13 + 176) = 0;
  *(_QWORD *)(v13 + 184) = 1;
  *(_QWORD *)(v13 + 192) = 0;
  *(_QWORD *)(v13 + 200) = 0;
  *(_QWORD *)(v13 + 208) = 0;
  *(_QWORD *)(v13 + 216) = 0;
  *(_BYTE *)(v13 + 228) = 0;
  *(_QWORD *)(v13 + 248) = 0;
  *(_OWORD *)(v13 + 232) = 0;
  *(_QWORD *)(v13 + 256) = 0;
  *(_QWORD *)(v13 + 264) = 1;
  *(_QWORD *)(v13 + 272) = 0;
  *(_QWORD *)(v13 + 280) = 0;
  *(_QWORD *)(v13 + 288) = 0;
  *(_QWORD *)(v13 + 296) = 0;
  *(_QWORD *)(v13 + 304) = 1;
  *(_QWORD *)(v13 + 312) = 0;
  v5[24] = v13;
  v5[25] = 8;
  *((_DWORD *)v5 + 52) = 0;
  v14 = (_OWORD *)sub_186B270(0xC0u);
  v5[27] = (__int64)v14;
  v5[28] = 8;
  *((_DWORD *)v5 + 58) = 0;
  *v14 = 0;
  v14[1] = 0;
  v14[2] = 0;
  v14[3] = 0;
  v14[4] = 0;
  v14[5] = 0;
  v14[6] = 0;
  v14[7] = 0;
  v14[8] = 0;
  v14[9] = 0;
  v14[10] = 0;
  v14[11] = 0;
  v15 = (_OWORD *)sub_186B270(0x80u);
  v5[30] = (__int64)v15;
  v16 = *(_QWORD *)(a2 + 16);
  v5[31] = 8;
  *((_DWORD *)v5 + 64) = 0;
  *v15 = 0;
  v15[1] = 0;
  v15[2] = 0;
  v15[3] = 0;
  v15[4] = 0;
  v15[5] = 0;
  v15[6] = 0;
  v15[7] = 0;
  result = sub_BE4AC0(v5 + 8, v16);
  *((_DWORD *)v5 + 66) = 4;
  *a1 = v5;
  return result;
}

