/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2AE04
// Address: 0x0002AE04

//----- (0002AE04) --------------------------------------------------------
unsigned int __fastcall sub_2AE04(unsigned int result, int a2, unsigned int a3)
{
  if ( *(_BYTE *)(result + 481) )
  {
    if ( !*(_BYTE *)(result + 480) && *(_WORD *)(result + 406) == 8 )
      *(_DWORD *)(a2 + 12) = bswap32(a3);
    else
      *(_QWORD *)(a2 + 8) = a3;
  }
  else
  {
    result = (*(_DWORD *)(a2 + 8) & 0xFFFFFF00) + (unsigned __int8)a3;
    *(_QWORD *)(a2 + 8) = __PAIR64__(*(_DWORD *)(a2 + 12), *(_DWORD *)(a2 + 8) & 0xFFFFFF00) + (unsigned __int8)a3;
  }
  return result;
}
