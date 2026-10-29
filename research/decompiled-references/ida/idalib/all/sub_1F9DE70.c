__int64 __fastcall sub_1F9DE70(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // r12
  __int64 v8; // r13
  int v9; // r14d

  sub_9B9C90(a1[2], *(_BYTE *)(a2 + 12) & 1);
  sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 12) & 2) != 0);
  sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 12) >> 2) & 3);
  sub_9B9C90(a1[2], (*(_BYTE *)(a2 + 12) & 0x10) != 0);
  sub_1F9A760(a1, *(__int64 **)(a2 + 16), v3, v4, v5, v6);
  v7 = (_QWORD *)a1[1];
  v8 = a1[2];
  v9 = *(_DWORD *)(a2 + 4);
  sub_1F6F570((_QWORD *)a1[1], *(_DWORD *)a2, a1[2]);
  sub_1F6F570(v7, v9, v8);
  return sub_1F6F570((_QWORD *)a1[1], *(_DWORD *)(a2 + 8), a1[2]);
}
