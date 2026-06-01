__int64 __fastcall sub_D15740(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // r12
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rax
  __int64 v9; // rbx
  void *v11; // [rsp+0h] [rbp-38h]
  int v12[12]; // [rsp+8h] [rbp-30h] BYREF

  sub_1858590(v12, a2);
  sub_1862300(v12, "elim_and", 1);
  v2 = sub_186B270(0x20u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = &off_1C5A268;
  *(_BYTE *)(v2 + 12) = 1;
  sub_1858590(v2 + 24, v12);
  v3 = (_QWORD *)sub_186B270(0x20u);
  *v3 = a1;
  v4 = v3;
  sub_14B7810((_DWORD)v3 + 8, a1, (int)v12, v5, v6, v7, v11);
  *((_DWORD *)v4 + 6) = 0;
  *(_QWORD *)(v2 + 16) = v4;
  v8 = sub_EE8D70(v2);
  v9 = sub_EE8E00(v8, v12);
  sub_18572D0(v12);
  return v9;
}

