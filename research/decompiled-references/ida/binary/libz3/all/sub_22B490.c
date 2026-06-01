_QWORD *__fastcall sub_22B490(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  int v7; // r13d
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  _OWORD *v11; // rax
  void *v13; // [rsp+0h] [rbp-38h]
  int v14[2]; // [rsp+8h] [rbp-30h] BYREF

  v5 = (_QWORD *)sub_186B270(0x70u);
  v5[2] = a4;
  v6 = v5;
  v5[3] = a4 + 104;
  v7 = (_DWORD)v5 + 56;
  v5[1] = a2;
  *v5 = &off_1C5F510;
  sub_16744A0(v5 + 4, a2);
  *(_QWORD *)v14 = 0;
  sub_14B7810(v7, a2, (int)v14, v8, v9, v10, v13);
  sub_18572D0(v14);
  v11 = (_OWORD *)sub_186B270(0x80u);
  v6[9] = v11;
  *v11 = 0;
  v11[1] = 0;
  v11[2] = 0;
  v11[3] = 0;
  v11[4] = 0;
  v11[5] = 0;
  v11[6] = 0;
  v11[7] = 0;
  v6[10] = 8;
  *((_DWORD *)v6 + 22) = 0;
  *((_OWORD *)v6 + 6) = 0;
  return v6;
}

