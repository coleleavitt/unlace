/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2E3FE
// Address: 0x0002E3FE

//----- (0002E3FE) --------------------------------------------------------
int __fastcall sub_2E3FE(int result, int a2, unsigned int a3)
{
  if ( *(_BYTE *)(result + 481) )
  {
    if ( *(_BYTE *)(result + 480) || *(_WORD *)(result + 406) != 8 )
    {
      *(_DWORD *)(a2 + 8) = a3;
      *(_DWORD *)(a2 + 12) = 0;
      return 0;
    }
    else
    {
      result = (a3 << 24) + ((a3 << 8) & 0xFF0000) + ((a3 >> 8) & 0xFF00) + HIBYTE(a3);
      *(_DWORD *)(a2 + 12) = result;
    }
  }
  else
  {
    *(_BYTE *)(a2 + 8) = a3;
  }
  return result;
}
