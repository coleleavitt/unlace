/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98170
// Address: 0x00098170

//----- (00098170) --------------------------------------------------------
int __fastcall sub_98170(int a1, _DWORD *a2)
{
  int v4; // r0

  sub_93B8C((int)a2, "<", "");
  sub_96CC0((_DWORD *)(a1 + 8), (int)a2);
  v4 = a2[1];
  if ( v4 && *(_BYTE *)(v4 + *a2 - 1) == 62 )
    sub_93B8C((int)a2, " ", "");
  return sub_93B8C((int)a2, ">", "");
}
