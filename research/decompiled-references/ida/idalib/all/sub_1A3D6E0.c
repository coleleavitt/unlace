__int64 __fastcall sub_1A3D6E0(__int64 a1, __int64 a2)
{
  void **v3; // rdi
  char **v5; // rsi

  v3 = (void **)(a1 + 16);
  v5 = (char **)(a2 + 16);
  *(v3 - 2) = *(v5 - 2);
  *(v3 - 1) = *(v5 - 1);
  sub_1747DA0(v3, v5);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 52) = *(_QWORD *)(a2 + 52);
  *(_BYTE *)(a1 + 60) = *(_BYTE *)(a2 + 60);
  *(_BYTE *)(a1 + 61) = *(_BYTE *)(a2 + 61);
  sub_1A3BEA0(a1 + 64, (__int64 **)(a2 + 64));
  return a1;
}
