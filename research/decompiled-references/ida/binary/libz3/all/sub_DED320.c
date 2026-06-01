__int64 __fastcall sub_DED320(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rbp
  _QWORD *v3; // rax
  _QWORD *v4; // rbp
  _QWORD *v5; // rax
  _QWORD *v6; // rbp
  _QWORD *v7; // rax
  _QWORD *v8; // rbp
  _QWORD *v9; // rax
  _QWORD *v10; // rbp

  v1 = (_QWORD *)sub_186B270(0x28u);
  *v1 = off_1C4CCD0;
  v2 = v1;
  sub_180C5A0(v1 + 1, "declare-tactic");
  v2[2] = 0;
  *v2 = off_1C5AF80;
  *(_OWORD *)(v2 + 3) = 0;
  sub_DF7FD0(a1, v2);
  v3 = (_QWORD *)sub_186B270(0x18u);
  *v3 = off_1C4CCD0;
  v4 = v3;
  sub_180C5A0(v3 + 1, "get-user-tactics");
  *v4 = off_1C5B070;
  v4[2] = 0;
  sub_DF7FD0(a1, v4);
  v5 = (_QWORD *)sub_186B270(0x18u);
  *v5 = off_1C4CCD0;
  v6 = v5;
  sub_180C5A0(v5 + 1, "help-tactic");
  *v6 = off_1C5B160;
  v6[2] = 0;
  sub_DF7FD0(a1, v6);
  v7 = (_QWORD *)sub_186B270(0x40u);
  *v7 = off_1C4CCD0;
  v8 = v7;
  sub_180C5A0(v7 + 1, "check-sat-using");
  v8[2] = 0;
  *v8 = &off_1C754F8;
  *(_OWORD *)(v8 + 3) = 0;
  *(_OWORD *)(v8 + 5) = 0;
  sub_DF7FD0(a1, v8);
  v9 = (_QWORD *)sub_186B270(0x40u);
  *v9 = off_1C4CCD0;
  v10 = v9;
  sub_180C5A0(v9 + 1, "apply");
  v10[2] = 0;
  *v10 = &off_1C755F8;
  *(_OWORD *)(v10 + 3) = 0;
  *(_OWORD *)(v10 + 5) = 0;
  sub_DF7FD0(a1, v10);
  return sub_22C4F0(a1 + 8);
}

