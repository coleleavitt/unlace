_QWORD *__fastcall sub_22BAF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbx

  v5 = (_QWORD *)sub_186B270(0x250u);
  v5[2] = a4;
  v6 = v5;
  v5[1] = a2;
  v5[3] = a4 + 104;
  *v5 = &off_1C4C3C0;
  sub_C16870(v5 + 4, a2, *(_DWORD *)(a2 + 712) != 0, v5 + 71);
  v6[72] = a2;
  v6[4] = &off_1C4C338;
  *((_BYTE *)v6 + 584) = 1;
  v6[71] = off_1C61D70;
  return v6;
}

