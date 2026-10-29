/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_15A34
// Address: 0x00015A34

//----- (00015A34) --------------------------------------------------------
int __fastcall sub_15A34(int a1, int a2)
{
  if ( *(_DWORD *)(a2 + 1068) != *(_DWORD *)(a1 + 4) )
    return 0;
  *(_DWORD *)(a1 + 8) = a2;
  return 1;
}
