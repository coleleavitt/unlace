__int64 __fastcall sub_18BD020(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  int v3; // r14d
  __int64 v4; // r15
  unsigned __int8 v5; // bl
  unsigned __int64 v6; // r13
  __int64 v7; // r12
  int v9; // [rsp+Ch] [rbp-3Ch]

  v2 = *a1;
  v3 = *(_DWORD *)(a2 + 20);
  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_BYTE *)(a2 + 2);
  v6 = *(_QWORD *)(*a1 + 544);
  v9 = *(_DWORD *)(a2 + 16);
  v7 = sub_EEE9A0(32, *(_QWORD **)(*a1 + 248), 8u);
  sub_BFAD80(v7, *(_QWORD *)(v2 + 248), (v5 >> 3) & 7, v4, v9, v3, v6);
  return v7;
}
