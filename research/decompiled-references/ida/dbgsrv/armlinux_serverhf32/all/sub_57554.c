/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57554
// Address: 0x00057554

//----- (00057554) --------------------------------------------------------
int __fastcall sub_57554(int a1, int a2)
{
  int v3; // r8
  int v4; // r0
  char v6; // [sp+Bh] [bp-5h] BYREF

  v6 = *(_DWORD *)(a1 + 32);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = sub_570D8();
  *(_DWORD *)(a2 + 8) = (*(int (__fastcall **)(int, int, char *, int, _DWORD))(*(_DWORD *)v4 + 148))(v4, v3, &v6, 1, 0);
  return 0;
}
