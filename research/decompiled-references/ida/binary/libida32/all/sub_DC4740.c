__int64 __fastcall sub_DC4740(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  char v3; // r13
  __int64 v4; // rbp
  char v5; // r13
  unsigned int v6; // ebp
  char v8; // r12
  char v9; // [rsp+Eh] [rbp-2Ah] BYREF
  char v10[41]; // [rsp+Fh] [rbp-29h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_BYTE *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v9 = v3;
  v5 = *(_BYTE *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  v10[0] = v5;
  v6 = sub_D13940(a1, a2, v10, &v9);
  if ( (_BYTE)v6 )
  {
    v8 = v10[0] / v9;
    *(_BYTE *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = v8;
  }
  return v6;
}

