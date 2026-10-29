_QWORD *__fastcall sub_22C0B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _OWORD *v8; // rax
  _BYTE v10[48]; // [rsp+8h] [rbp-30h] BYREF

  v6 = (_QWORD *)sub_186B270(0x78u);
  v6[2] = a4;
  v7 = v6;
  v6[1] = a2;
  v6[3] = a4 + 104;
  v6[4] = a2;
  *v6 = &off_1C4C428;
  v8 = (_OWORD *)sub_186B270(0x80u);
  v7[8] = a2;
  v7[10] = a2;
  v7[5] = v8;
  v7[6] = 8;
  *((_DWORD *)v7 + 14) = 0;
  v7[9] = 0;
  v7[11] = 0;
  v7[12] = 0;
  v7[13] = 0;
  *((_DWORD *)v7 + 28) = 0;
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  sub_17F9A60(v10, "tactic");
  *((_DWORD *)v7 + 28) = sub_1859980(a3, "randomizer.seed", v10, 0);
  sub_18572D0(v10);
  return v7;
}

