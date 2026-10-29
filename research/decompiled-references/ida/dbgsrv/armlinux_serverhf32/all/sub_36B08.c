/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36B08
// Address: 0x00036B08

//----- (00036B08) --------------------------------------------------------
int __fastcall sub_36B08(int a1, int a2)
{
  if ( *(_DWORD *)(a1 + 12) )
    *(_DWORD *)(a2 + 8) = sub_7EBBC(*(_DWORD *)(a1 + 8));
  else
    *(_DWORD *)(a2 + 8) = sub_7EBBC((int)&dword_8DA5C);
  return 0;
}
// 8DA5C: using guessed type int dword_8DA5C;
