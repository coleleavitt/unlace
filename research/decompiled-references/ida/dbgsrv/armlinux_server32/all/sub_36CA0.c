/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36CA0
// Address: 0x00036CA0

//----- (00036CA0) --------------------------------------------------------
int __fastcall sub_36CA0(int a1, int a2)
{
  if ( *(_DWORD *)(a1 + 12) )
    *(_DWORD *)(a2 + 8) = sub_7ED24(*(_DWORD *)(a1 + 8));
  else
    *(_DWORD *)(a2 + 8) = sub_7ED24((int)&dword_8DB98);
  return 0;
}
// 8DB98: using guessed type int dword_8DB98;
