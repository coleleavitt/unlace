unsigned __int64 __fastcall sub_1837920(unsigned __int64 a1, unsigned __int64 a2, double a3)
{
  __int64 v4; // rsi
  __int64 v5; // r13
  unsigned int v6; // eax
  __int64 v7; // rsi
  unsigned int v8; // r12d
  __int64 *v9; // r13
  __int64 v10; // rax
  __int64 v12; // [rsp-8h] [rbp-30h]
  int v13; // [rsp+0h] [rbp-28h]

  v4 = *(_QWORD *)(a2 + 8);
  v5 = sub_1E70650(a1, v4, 0, 0, 0);
  v6 = sub_EEB7E0(a2, v4, a3);
  v7 = v5;
  v8 = v6;
  v9 = sub_A81910(*(_QWORD **)(a1 + 248), v5, v6);
  v10 = sub_EEC8C0(a2, v7, a3);
  return sub_16B28E0(a1, v8, 0x91u, v9, a2, v8 | ((unsigned __int64)v8 << 32), a3, v10, v12, v13) & 0xFFFFFFFFFFFFFFFELL;
}
