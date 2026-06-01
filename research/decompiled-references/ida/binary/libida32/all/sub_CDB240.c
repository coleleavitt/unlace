__int64 __fastcall sub_CDB240(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  __m128 v9; // xmm0
  double v11[4]; // [rsp+8h] [rbp-20h] BYREF

  *(_BYTE *)(a1 + 60) = 0;
  *(_QWORD *)&v11[0] = a3;
  *(_QWORD *)a1 = &unk_2BDABF0;
  v7 = a1 + 80;
  v8 = a1 + 384;
  *(_QWORD *)(v8 - 320) = v7;
  *(_QWORD *)(v8 - 312) = 0x200000000LL;
  v9 = _mm_loadh_ps(v11);
  *(_QWORD *)(v8 - 376) = 0;
  *(_QWORD *)(v8 - 368) = 0;
  *(_DWORD *)(v8 - 360) = 0;
  *(_QWORD *)(v8 - 352) = 0;
  *(_QWORD *)(v8 - 344) = 0;
  *(_DWORD *)(v8 - 336) = 0;
  *(_DWORD *)(v8 - 328) = 0;
  *(__m128 *)(v8 - 16) = v9;
  sub_DFDC10(v8, a4, a3, a5, a2, a1);
  *(_QWORD *)(a1 + 1048) = a2;
  *(_WORD *)(a1 + 1136) = 0;
  *(_QWORD *)(a1 + 1168) = a1 + 1184;
  *(_BYTE *)(a1 + 1112) = 0;
  *(_DWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1128) = 0;
  *(_BYTE *)(a1 + 1160) = 0;
  *(_QWORD *)(a1 + 1176) = 0x600000000LL;
  *(_QWORD *)(a1 + 1232) = 0;
  *(_QWORD *)(a1 + 1240) = 0;
  *(_QWORD *)(a1 + 1248) = 1;
  *(_DWORD *)(a1 + 1256) = 0;
  return 0x600000000LL;
}

