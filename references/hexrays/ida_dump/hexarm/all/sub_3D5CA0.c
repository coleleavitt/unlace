unsigned __int64 __fastcall sub_3D5CA0(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdi

  v4 = a1 + 16;
  *(_DWORD *)(v4 - 8) = a3;
  *(_QWORD *)(v4 - 16) = 0;
  *(_DWORD *)(v4 - 4) = a4;
  *(_QWORD *)v4 = 0;
  *(_DWORD *)(v4 + 24) = 0;
  *(_QWORD *)(v4 + 32) = a2;
  *(_DWORD *)(v4 + 40) = 3;
  *(_OWORD *)(v4 + 8) = 0;
  *(_OWORD *)(v4 + 48) = 0;
  *(_OWORD *)(v4 + 64) = 0;
  return sub_390C80((__int64 *)v4, a3, "Microcode-");
}
