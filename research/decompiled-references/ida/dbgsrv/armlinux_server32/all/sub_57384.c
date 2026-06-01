/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57384
// Address: 0x00057384

//----- (00057384) --------------------------------------------------------
int __fastcall sub_57384(int a1, int a2, int a3)
{
  int v6; // r0

  v6 = sub_5725C();
  return (*(int (__fastcall **)(int, int, int, int, _DWORD))(*(_DWORD *)v6 + 144))(v6, a1, a2, a3, 0);
}
