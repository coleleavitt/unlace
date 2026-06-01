__int64 __fastcall sub_393320(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rbp
  _QWORD *v6; // rax
  _QWORD *v7; // rbp
  _QWORD *v8; // rax
  _QWORD *v9; // rbp
  _QWORD *v10; // rax
  _QWORD *v11; // rbp

  v2 = sub_186B270(0x90u);
  *(_OWORD *)v2 = 0;
  v3 = v2;
  *(_QWORD *)(v2 + 16) = v2 + 8;
  sub_17F9A60(v2 + 24, "fp");
  *(_QWORD *)(v3 + 32) = a1;
  sub_3932D0((_QWORD *)(v3 + 40));
  *(_QWORD *)(v3 + 56) = a2;
  *(_DWORD *)(v3 + 64) = 0;
  *(_OWORD *)(v3 + 72) = 0;
  *(_OWORD *)(v3 + 88) = 0;
  sub_180C0A0(v3 + 104);
  v4 = (_QWORD *)sub_186B270(0x40u);
  *v4 = off_1C4CCD0;
  v5 = v4;
  sub_180C5A0(v4 + 1, "rule");
  ++*(_DWORD *)(v3 + 64);
  v5[3] = v3;
  *v5 = &off_1C4DFD0;
  v5[2] = 0;
  *((_DWORD *)v5 + 8) = 0;
  *((_DWORD *)v5 + 14) = -1;
  *(_OWORD *)(v5 + 5) = 0;
  sub_DF7FD0(a1, v5);
  v6 = (_QWORD *)sub_186B270(0x48u);
  *v6 = off_1C4CCD0;
  v7 = v6;
  sub_180C5A0(v6 + 1, "query");
  ++*(_DWORD *)(v3 + 64);
  v7[7] = v3;
  *v7 = &off_1C64F80;
  v7[2] = 0;
  v7[8] = 0;
  *(_OWORD *)(v7 + 3) = 0;
  *(_OWORD *)(v7 + 5) = 0;
  sub_DF7FD0(a1, v7);
  v8 = (_QWORD *)sub_186B270(0x40u);
  *v8 = off_1C4CCD0;
  v9 = v8;
  sub_180C5A0(v8 + 1, "declare-rel");
  ++*(_DWORD *)(v3 + 64);
  v9[3] = v3;
  *v9 = &off_1C4E0C0;
  v9[2] = 0;
  v9[7] = 0;
  *(_OWORD *)(v9 + 5) = 0;
  sub_DF7FD0(a1, v9);
  v10 = (_QWORD *)sub_186B270(0x38u);
  *v10 = off_1C4CCD0;
  v11 = v10;
  sub_180C5A0(v10 + 1, "declare-var");
  ++*(_DWORD *)(v3 + 64);
  v11[2] = 0;
  *v11 = &off_1C4E1B0;
  *((_DWORD *)v11 + 6) = 0;
  v11[4] = 0;
  v11[6] = v3;
  return sub_DF7FD0(a1, v11);
}

