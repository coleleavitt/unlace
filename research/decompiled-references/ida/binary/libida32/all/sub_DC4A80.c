__int64 __fastcall sub_DC4A80(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v3; // r13d
  __int64 v4; // rbp
  int v5; // r13d
  unsigned int v6; // ebp
  int v8; // r12d
  int v9; // [rsp+8h] [rbp-30h] BYREF
  _DWORD v10[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_DWORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v9 = v3;
  v5 = *(_DWORD *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  v10[0] = v5;
  v6 = sub_D13E00(a1, a2, v10, &v9);
  if ( (_BYTE)v6 )
  {
    v8 = v10[0] / v9;
    *(_DWORD *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = v8;
  }
  return v6;
}

