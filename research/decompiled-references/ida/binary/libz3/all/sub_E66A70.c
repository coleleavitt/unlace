_QWORD *__fastcall sub_E66A70(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rbp

  v4 = (_QWORD *)sub_186B270(0x30u);
  v4[2] = a3;
  v5 = v4;
  v4[1] = a1;
  v4[3] = a3 + 104;
  *v4 = &off_1C5D1F8;
  v4[4] = 0;
  v6 = sub_186B270(0x940u);
  sub_E6ACF0(v6, a1, a2, 1);
  v5[5] = v6;
  sub_1863170(v5 + 4, a2);
  return v5;
}

