_QWORD *__fastcall sub_22B9A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbx

  v5 = (_QWORD *)sub_186B270(0x28u);
  v5[2] = a4;
  v6 = v5;
  v5[1] = a2;
  v5[3] = a4 + 104;
  *v5 = &off_1C4C270;
  sub_13ACB90(v5 + 4, a2);
  return v6;
}

