__int64 (__fastcall **__fastcall sub_5C8F60(__int64 a1, unsigned __int64 *a2, int a3))()
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rax
  _OWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // r12
  _QWORD *v13; // rbp
  _QWORD *v14; // rbp
  _QWORD v16[6]; // [rsp+8h] [rbp-30h] BYREF

  v5 = a1 + 48;
  v6 = *a2;
  *(_QWORD *)(v5 - 48) = &off_1C52578;
  *(_QWORD *)(v5 - 8) = a2 + 11;
  *(_DWORD *)(v5 - 40) = a3;
  *(_QWORD *)(v5 - 24) = v6;
  *(_BYTE *)(v5 - 36) = 0;
  *(_QWORD *)(v5 - 32) = 0;
  *(_QWORD *)(v5 - 16) = a2;
  sub_16669D0(v5, v6);
  v7 = *a2;
  *(__m128i *)(a1 + 64) = _mm_unpacklo_epi64((__m128i)*a2, (__m128i)(unsigned __int64)a2);
  sub_FA3A80(a1 + 80, v7);
  v8 = *(_QWORD *)(a1 + 64);
  *(_DWORD *)(a1 + 240) = 1;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 208) = v8;
  *(_DWORD *)(a1 + 256) = 1;
  *(_BYTE *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 280) = v8;
  *(_QWORD *)(a1 + 288) = v8;
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  v9 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 328) = v9;
  *v9 = 0;
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 0;
  v10 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 336) = 8;
  *(_DWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 352) = v10;
  *(_QWORD *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 368) = v10;
  *(_QWORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 384) = v10;
  *(_QWORD *)(a1 + 392) = 0;
  *(_QWORD *)(a1 + 400) = 0;
  v11 = sub_186B270(0xF8u);
  v12 = *(_QWORD *)(a1 + 24);
  v13 = (_QWORD *)v11;
  *(_DWORD *)(v11 + 16) = 256;
  *(_WORD *)(v11 + 20) = 0;
  *(_DWORD *)(v11 + 36) = 0;
  *(__m128i *)v11 = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
  *(_QWORD *)(v11 + 80) = v11 + 96;
  *(_OWORD *)(v11 + 48) = 0;
  *(_OWORD *)(v11 + 64) = 0;
  v16[0] = 0;
  *(_QWORD *)(v11 + 88) = 0x1000000000LL;
  sub_14DC230(v11 + 8, v16);
  sub_18572D0(v16);
  v13[28] = v12;
  v13[29] = 0;
  v13[30] = v12;
  *(_QWORD *)(a1 + 408) = v13;
  v14 = (_QWORD *)sub_186B270(0x218u);
  sub_5CCE70(v14, *(_QWORD *)(a1 + 24), 0, *(_QWORD *)(a1 + 408));
  *(_QWORD *)(a1 + 416) = v14;
  *v14 = &off_1C52558;
  return &off_1C52558;
}

