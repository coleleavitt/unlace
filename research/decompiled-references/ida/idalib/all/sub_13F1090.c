void __fastcall sub_13F1090(__int64 a1, int a2)
{
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_WORD *)(a1 + 36) &= 0xF800u;
}
