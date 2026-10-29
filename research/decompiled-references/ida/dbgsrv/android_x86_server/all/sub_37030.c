/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37030
// Address: 0x00037030

//----- (00037030) --------------------------------------------------------
int __cdecl sub_37030(int a1, int a2)
{
  if ( !*(_BYTE *)(a1 + 477) )
    return *(_QWORD *)(a2 + 8) >> 8;
  if ( *(_BYTE *)(a1 + 476) || *(_WORD *)(a1 + 402) != 8 )
    return *(_DWORD *)(a2 + 12);
  return *(_DWORD *)(a2 + 8);
}
