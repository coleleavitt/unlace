/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2E344
// Address: 0x0002E344

//----- (0002E344) --------------------------------------------------------
int __fastcall sub_2E344(int a1, int a2)
{
  if ( !*(_BYTE *)(a1 + 481) )
    return (*(_DWORD *)(a2 + 8) >> 8) + (*(_DWORD *)(a2 + 12) << 24);
  if ( *(_BYTE *)(a1 + 480) || *(_WORD *)(a1 + 406) != 8 )
    return *(_DWORD *)(a2 + 12);
  return *(_DWORD *)(a2 + 8);
}
