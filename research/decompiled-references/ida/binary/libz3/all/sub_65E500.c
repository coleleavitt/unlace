__int64 __fastcall sub_65E500(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  _OWORD *v7; // rax
  _OWORD *v8; // rax

  v6 = a1 + 32;
  *(_QWORD *)(v6 - 32) = a2;
  *(_QWORD *)(v6 - 24) = a3;
  *(_QWORD *)(v6 - 16) = a4;
  *(_QWORD *)(v6 - 8) = a5;
  sub_15F01E0(v6, a2);
  sub_1624F90(a1 + 56, a2);
  sub_16669D0(a1 + 88, a2);
  sub_16744A0(a1 + 104, a2);
  sub_1684300(a1 + 128, a2);
  sub_162A710(a1 + 144, a2);
  *(_BYTE *)(a1 + 168) = 0;
  v7 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 184) = v7;
  *(_DWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 192) = 8;
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[6] = 0;
  v7[7] = 0;
  v8 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 208) = v8;
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  *(_QWORD *)(a1 + 216) = 8;
  *(_DWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_WORD *)(a1 + 256) = 256;
  *(_OWORD *)(a1 + 232) = 0;
  return 256;
}

