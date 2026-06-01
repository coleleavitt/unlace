__int64 __fastcall sub_C88A90(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  void *v10; // [rsp+0h] [rbp-38h]

  v2 = sub_186B270(0x20u);
  *(_DWORD *)(v2 + 8) = 0;
  v3 = v2;
  *(_QWORD *)v2 = &off_1C58CE8;
  sub_1858590(v2 + 24, a2);
  v4 = (_QWORD *)sub_186B270(0xB0u);
  *v4 = a1;
  v5 = v4;
  sub_F735C0(v4 + 1, a1);
  sub_16669D0(v5 + 17, *v5);
  sub_14B7810((_DWORD)v5 + 152, *v5, a2, v6, v7, v8, v10);
  sub_14B5FE0(v5 + 19, a2);
  *((_BYTE *)v5 + 168) = sub_1859610(a2, "norm_int_only", 1);
  *(_QWORD *)(v3 + 16) = v5;
  return sub_EE8D70(v3);
}

