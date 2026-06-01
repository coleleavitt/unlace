__int64 __fastcall sub_380040(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rbp

  v2 = sub_186B270(0x20u);
  *(_DWORD *)(v2 + 8) = 0;
  v3 = v2;
  *(_QWORD *)v2 = &off_1C4DB40;
  sub_1858590(v2 + 24, a2);
  v4 = sub_186B270(0x10u);
  *(_QWORD *)v4 = a1;
  *(_BYTE *)(v4 + 8) = 0;
  v5 = v4;
  *(_BYTE *)(v4 + 8) = sub_1859610(a2, "elim_and", 0);
  *(_QWORD *)(v3 + 16) = v5;
  return v3;
}

