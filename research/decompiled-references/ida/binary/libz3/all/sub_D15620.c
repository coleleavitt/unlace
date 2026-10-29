__int64 __fastcall sub_D15620(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r13d
  _QWORD *v4; // rax
  _QWORD *v5; // rbp
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 result; // rax
  void *v10; // [rsp+0h] [rbp-28h]

  v3 = a3;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &off_1C5A268;
  *(_BYTE *)(a1 + 12) = 1;
  sub_1858590(a1 + 24, a3);
  v4 = (_QWORD *)sub_186B270(0x20u);
  *v4 = a2;
  v5 = v4;
  result = sub_14B7810((int)v4 + 8, a2, v3, v6, v7, v8, v10);
  *((_DWORD *)v5 + 6) = 0;
  *(_QWORD *)(a1 + 16) = v5;
  return result;
}

