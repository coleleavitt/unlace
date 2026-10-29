__int64 __fastcall sub_1EB08D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  bool v3; // bp
  int v4; // eax
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  int v7; // [rsp+8h] [rbp-20h]

  v2 = *(unsigned int *)(a2 + 24);
  *(_DWORD *)(a2 + 24) = v2 + 1;
  v3 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v2) != 0;
  sub_1EAEC10((__int64)&v6, a2);
  v4 = v7;
  *(_BYTE *)(a1 + 12) = v3;
  *(_DWORD *)(a1 + 8) = v4;
  *(_QWORD *)a1 = v6;
  return a1;
}
