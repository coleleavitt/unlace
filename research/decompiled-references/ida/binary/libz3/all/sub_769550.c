__int64 __fastcall sub_769550(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rbp
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d

  v4 = sub_186B270(0x28u);
  *(_DWORD *)(v4 + 8) = 0;
  v5 = v4;
  *(_QWORD *)v4 = &off_1C543D0;
  *(_QWORD *)(v4 + 24) = a2;
  sub_1858590(v4 + 32, a3);
  v6 = sub_186B270(0x18u);
  v7 = *(_QWORD *)(v5 + 24);
  v8 = v6;
  sub_FC1490(v6, a1, a3, v9, v10, v11);
  if ( !v7 )
    v7 = v8;
  *(_QWORD *)(v8 + 8) = v7;
  sub_FC0660(v7, a3);
  *(_BYTE *)(v8 + 20) = sub_1859610(a3, "blast_quant", 0);
  *(_QWORD *)(v5 + 16) = v8;
  return sub_EE8D70(v5);
}

