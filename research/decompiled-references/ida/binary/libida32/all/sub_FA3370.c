__int64 __fastcall sub_FA3370(__int64 a1, __int64 a2, int a3, int a4)
{
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = a2 + 264;
  *(_QWORD *)(a1 + 32) = a1 + 48;
  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 24) = a3;
  *(_DWORD *)(a1 + 28) = a4;
  *(_QWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 48) = 0;
  *(_WORD *)(a1 + 64) = 1;
  return 1;
}

