__int64 __fastcall sub_C9F310(int a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rbp
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d

  v2 = sub_186B270(0x20u);
  *(_DWORD *)(v2 + 8) = 0;
  v3 = v2;
  *(_QWORD *)v2 = &off_1C591C0;
  sub_1858590(v2 + 24, a2);
  v4 = sub_186B270(0x480u);
  sub_CA2DB0(v4, a1, a2, v5, v6, v7);
  *(_QWORD *)(v3 + 16) = v4;
  return sub_EE8D70(v3);
}

