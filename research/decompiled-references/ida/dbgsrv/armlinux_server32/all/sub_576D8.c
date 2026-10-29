/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_576D8
// Address: 0x000576D8

//----- (000576D8) --------------------------------------------------------
int __fastcall sub_576D8(int a1, int a2)
{
  int v3; // r8
  int v4; // r0
  char v6; // [sp+Bh] [bp-5h] BYREF

  v6 = *(_DWORD *)(a1 + 32);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = sub_5725C();
  *(_DWORD *)(a2 + 8) = (*(int (__fastcall **)(int, int, char *, int, _DWORD))(*(_DWORD *)v4 + 148))(v4, v3, &v6, 1, 0);
  return 0;
}
