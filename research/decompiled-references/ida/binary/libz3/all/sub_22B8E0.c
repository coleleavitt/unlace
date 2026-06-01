_QWORD *__fastcall sub_22B8E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // r12

  v5 = (_QWORD *)sub_186B270(0x270u);
  v5[2] = a4;
  v6 = v5;
  v5[3] = a4 + 104;
  v7 = v5 + 4;
  v5[1] = a2;
  *v5 = &off_1C4C208;
  sub_13A2DE0(v5 + 4, a2, "z3name");
  sub_C16A50(v6 + 6, a2, *(_DWORD *)(a2 + 712) != 0, v6 + 73);
  v6[74] = a2;
  v6[6] = &off_1C4C1E8;
  v6[73] = &off_1C4C1A8;
  v6[75] = v7;
  v6[76] = 0;
  v6[77] = 0;
  return v6;
}

