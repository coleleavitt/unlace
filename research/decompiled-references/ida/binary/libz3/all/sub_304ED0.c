__int64 __fastcall sub_304ED0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rbx

  v2 = (_QWORD *)sub_186B270(0x50u);
  *v2 = off_1C4CCD0;
  v3 = v2;
  sub_180C5A0(v2 + 1, "assert-soft");
  v3[9] = a2;
  *(_OWORD *)(v3 + 3) = 0;
  *v3 = &off_1C64248;
  v3[2] = 0;
  *((_DWORD *)v3 + 14) = 0;
  v3[8] = 0;
  *(_OWORD *)(v3 + 5) = 0;
  sub_DF7FD0(a1, v3);
  v4 = (_QWORD *)sub_186B270(0x28u);
  *v4 = off_1C4CCD0;
  v5 = v4;
  sub_180C5A0(v4 + 1, "maximize");
  *v5 = off_1C4D3A8;
  v5[4] = a2;
  v5[2] = 0;
  *((_BYTE *)v5 + 24) = 1;
  sub_DF7FD0(a1, v5);
  v6 = (_QWORD *)sub_186B270(0x28u);
  *v6 = off_1C4CCD0;
  v7 = v6;
  sub_180C5A0(v6 + 1, "minimize");
  *v7 = off_1C4D3A8;
  v7[4] = a2;
  v7[2] = 0;
  *((_BYTE *)v7 + 24) = 0;
  sub_DF7FD0(a1, v7);
  v8 = (_QWORD *)sub_186B270(0x20u);
  *v8 = off_1C4CCD0;
  v9 = v8;
  sub_180C5A0(v8 + 1, "get-objectives");
  v9[3] = a2;
  v9[2] = 0;
  *v9 = off_1C4D498;
  return sub_DF7FD0(a1, v9);
}

