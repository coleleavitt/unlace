_QWORD *__fastcall sub_230BD0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  int v6; // r13d
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  _OWORD *v10; // rax
  void *v12; // [rsp+0h] [rbp-38h]
  int v13[2]; // [rsp+8h] [rbp-30h] BYREF

  v4 = (_QWORD *)sub_186B270(0x70u);
  v4[2] = a3;
  v5 = v4;
  v4[3] = a3 + 104;
  v6 = (_DWORD)v4 + 56;
  v4[1] = a1;
  *v4 = &off_1C5F510;
  sub_16744A0(v4 + 4, a1);
  *(_QWORD *)v13 = 0;
  sub_14B7810(v6, a1, (int)v13, v7, v8, v9, v12);
  sub_18572D0(v13);
  v10 = (_OWORD *)sub_186B270(0x80u);
  v5[9] = v10;
  *v10 = 0;
  v10[1] = 0;
  v10[2] = 0;
  v10[3] = 0;
  v10[4] = 0;
  v10[5] = 0;
  v10[6] = 0;
  v10[7] = 0;
  v5[10] = 8;
  *((_DWORD *)v5 + 22) = 0;
  *((_OWORD *)v5 + 6) = 0;
  return v5;
}

