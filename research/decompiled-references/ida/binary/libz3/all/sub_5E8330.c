__int64 __fastcall sub_5E8330(__int64 a1, unsigned __int64 *a2, int a3)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rsi
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  _OWORD *v11; // rax
  void *v13; // [rsp+0h] [rbp-28h]

  v5 = a1 + 40;
  *(_QWORD *)(v5 - 16) = a2;
  v6 = *a2;
  *(_DWORD *)(v5 - 32) = a3;
  *(_QWORD *)(v5 - 40) = &off_1C52668;
  *(_QWORD *)(v5 - 8) = v6;
  *(_BYTE *)(v5 - 28) = 0;
  *(_QWORD *)(v5 - 24) = 0;
  sub_1684300(v5, v6);
  v7 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 56) = a2 + 82;
  sub_14B7810(a1 + 72, v7, a1 + 64, v8, v9, v10, v13);
  sub_5C8F60(a1 + 88, a2, 40000);
  v11 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 512) = v11;
  *v11 = 0;
  *(_QWORD *)(a1 + 520) = 8;
  *(_DWORD *)(a1 + 528) = 0;
  *(_DWORD *)(a1 + 536) = 0;
  v11[1] = 0;
  v11[2] = 0;
  v11[3] = 0;
  v11[4] = 0;
  v11[5] = 0;
  v11[6] = 0;
  v11[7] = 0;
  sub_1862300(a1 + 64, "expand_select_store", 1);
  return sub_14B5FE0(a1 + 72, a1 + 64);
}

