/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98A04
// Address: 0x00098A04

//----- (00098A04) --------------------------------------------------------
int __fastcall sub_98A04(int a1, int a2)
{
  int v4; // r0
  int result; // r0

  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 12) + 12))(*(_DWORD *)(a1 + 12), a2);
  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 << 31 )
  {
    sub_93B8C(a2, " const", "");
    v4 = *(_DWORD *)(a1 + 8);
  }
  if ( (v4 & 2) != 0 )
  {
    sub_93B8C(a2, " volatile", "");
    v4 = *(_DWORD *)(a1 + 8);
  }
  result = v4 << 29;
  if ( result < 0 )
    return sub_93B8C(a2, " restrict", "");
  return result;
}
