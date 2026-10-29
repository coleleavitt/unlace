__int64 __fastcall sub_22B3E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  void *v13; // [rsp+0h] [rbp-38h]
  int v14[2]; // [rsp+8h] [rbp-30h] BYREF

  v6 = sub_186B270(0x40u);
  *(_QWORD *)v14 = 0;
  *(_QWORD *)(v6 + 16) = a4;
  v7 = v6;
  *(_QWORD *)(v6 + 24) = a4 + 104;
  v8 = v6 + 48;
  *(_QWORD *)(v6 + 8) = a2;
  *(_QWORD *)v6 = &off_1C4C570;
  *(_DWORD *)(v6 + 32) = 0;
  *(_QWORD *)(v6 + 40) = 0;
  sub_14B7810(v6 + 48, a2, (int)v14, v9, v10, v11, v13);
  sub_18572D0(v14);
  sub_1863170(v7 + 40, a3);
  sub_14B5FE0(v8, v7 + 40);
  return v7;
}

