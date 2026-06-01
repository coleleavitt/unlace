__int64 __fastcall sub_769490(int a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rbp
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d

  v2 = sub_186B270(0x28u);
  *(_DWORD *)(v2 + 8) = 0;
  v3 = v2;
  *(_QWORD *)v2 = &off_1C543D0;
  *(_QWORD *)(v2 + 24) = 0;
  sub_1858590(v2 + 32, a2);
  v4 = sub_186B270(0x18u);
  v5 = *(_QWORD *)(v3 + 24);
  v6 = v4;
  sub_FC1490(v4, a1, a2, v7, v8, v9);
  if ( !v5 )
    v5 = v6;
  *(_QWORD *)(v6 + 8) = v5;
  sub_FC0660(v5, a2);
  *(_BYTE *)(v6 + 20) = sub_1859610(a2, "blast_quant", 0);
  *(_QWORD *)(v3 + 16) = v6;
  return sub_EE8D70(v3);
}

