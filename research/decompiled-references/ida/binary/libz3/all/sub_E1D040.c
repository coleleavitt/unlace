__m128i *__fastcall sub_E1D040(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rbx
  void (***v3)(); // rax
  void (***v4)(); // rbx

  v1 = (_QWORD *)sub_186B270(0x40u);
  *v1 = off_1C4CCD0;
  v2 = v1;
  sub_180C5A0(v1 + 1, "set-simplifier");
  v2[2] = 0;
  *v2 = &off_1C75E98;
  v2[7] = 0;
  *(_OWORD *)(v2 + 3) = 0;
  *(_OWORD *)(v2 + 5) = 0;
  sub_DF7FD0(a1, (void (***)())v2);
  v3 = (void (***)())sub_186B270(0x18u);
  *v3 = (void (**)())off_1C4CCD0;
  v4 = v3;
  sub_180C5A0(v3 + 1, "help-simplifier");
  v4[2] = nullptr;
  *v4 = (void (**)())off_1C5CB98;
  return sub_DF7FD0(a1, v4);
}

