/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_366E0
// Address: 0x000366E0

//----- (000366E0) --------------------------------------------------------
int __fastcall sub_366E0(int a1, int a2)
{
  if ( *(_DWORD *)(a1 + 12) )
    *(_DWORD *)(a2 + 8) = sub_7779C(*(const char **)(a1 + 8));
  else
    *(_DWORD *)(a2 + 8) = sub_7779C((const char *)&dword_8DA5C);
  return 0;
}
// 8DA5C: using guessed type int dword_8DA5C;
