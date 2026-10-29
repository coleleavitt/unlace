/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67EA4
// Address: 0x00067EA4

//----- (00067EA4) --------------------------------------------------------
int __fastcall sub_67EA4(int a1, int a2)
{
  int v2; // r0

  v2 = sub_6762C();
  *(_DWORD *)(a2 + 8) = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 148))(v2);
  return 0;
}
