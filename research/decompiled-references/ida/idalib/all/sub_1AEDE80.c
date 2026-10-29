__int64 __fastcall sub_1AEDE80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rbx
  int v9; // r12d

  v6 = (int)a3;
  v7 = sub_C00A40(a5, a2, a3, a4, a5);
  v8 = *(_QWORD *)(a2 + 8 * v6);
  v9 = v7;
  *(_BYTE *)(v8 + 29) |= 8u;
  sub_B8C4D0(v8, *(_QWORD *)(a1 + 248));
  return sub_C09130(*(_QWORD **)(a1 + 248), 0, 0, 0, v8, 0, v9, a4, 1, 0, 0, 0);
}
