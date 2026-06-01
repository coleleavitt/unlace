/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36878
// Address: 0x00036878

//----- (00036878) --------------------------------------------------------
int __fastcall sub_36878(int a1, int a2)
{
  if ( *(_DWORD *)(a1 + 12) )
    *(_DWORD *)(a2 + 8) = sub_77904(*(const char **)(a1 + 8));
  else
    *(_DWORD *)(a2 + 8) = sub_77904((const char *)&dword_8DB98);
  return 0;
}
// 8DB98: using guessed type int dword_8DB98;
