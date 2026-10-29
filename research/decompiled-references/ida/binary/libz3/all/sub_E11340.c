__int64 __fastcall sub_E11340(__int64 a1)
{
  void (***v1)(); // rax
  void (***v2)(); // rbp
  void (***v3)(); // rax
  void (***v4)(); // rbp
  _QWORD *v5; // rax
  _QWORD *v6; // rbp
  void (***v7)(); // rax
  void (***v8)(); // rbp
  void (***v9)(); // rax
  void (***v10)(); // rbp
  _QWORD *v11; // rax
  _QWORD *v12; // rbp
  void (***v13)(); // rax
  void (***v14)(); // rbp

  v1 = (void (***)())sub_186B270(0x20u);
  *v1 = (void (**)())off_1C4CCD0;
  v2 = v1;
  sub_180C5A0(v1 + 1, "help");
  *v2 = (void (**)())&off_1C5B3D8;
  v2[2] = nullptr;
  v2[3] = nullptr;
  sub_DF7FD0(a1, v2);
  v3 = (void (***)())sub_186B270(0x18u);
  *v3 = (void (**)())off_1C4CCD0;
  v4 = v3;
  sub_180C5A0(v3 + 1, "display");
  *v4 = (void (**)())off_1C5BF48;
  v4[2] = nullptr;
  sub_DF7FD0(a1, v4);
  v5 = (_QWORD *)sub_186B270(0x20u);
  *v5 = off_1C4CCD0;
  v6 = v5;
  sub_180C5A0(v5 + 1, "get-model");
  *v6 = off_1C5B5B8;
  v6[2] = 0;
  *((_DWORD *)v6 + 6) = 0;
  sub_DF7FD0(a1, (void (***)())v6);
  v7 = (void (***)())sub_186B270(0x18u);
  *v7 = (void (**)())off_1C4CCD0;
  v8 = v7;
  sub_180C5A0(v7 + 1, "echo");
  *v8 = (void (**)())off_1C5C038;
  v8[2] = nullptr;
  sub_DF7FD0(a1, v8);
  v9 = (void (***)())sub_186B270(0x18u);
  *v9 = (void (**)())off_1C4CCD0;
  v10 = v9;
  sub_180C5A0(v9 + 1, "labels");
  *v10 = (void (**)())off_1C5BB88;
  v10[2] = nullptr;
  sub_DF7FD0(a1, v10);
  v11 = (_QWORD *)sub_186B270(0x40u);
  *v11 = off_1C4CCD0;
  v12 = v11;
  sub_180C5A0(v11 + 1, "declare-map");
  v12[2] = 0;
  *v12 = &off_1C5C6C8;
  sub_180C5A0(v12 + 3, "Array");
  *((_DWORD *)v12 + 14) = -1;
  *((_OWORD *)v12 + 2) = 0;
  sub_DF7FD0(a1, (void (***)())v12);
  v13 = (void (***)())sub_186B270(0x28u);
  *v13 = (void (**)())off_1C4CCD0;
  v14 = v13;
  sub_180C5A0(v13 + 1, "reset");
  *v14 = (void (**)())off_1C5C8A8;
  v14[4] = (void (**)())"reset the shell (all declarations and assertions will be erased)";
  v14[2] = nullptr;
  v14[3] = nullptr;
  sub_DF7FD0(a1, v14);
  sub_E1BB60(a1, "simplify");
  return sub_E1AE50(a1);
}

