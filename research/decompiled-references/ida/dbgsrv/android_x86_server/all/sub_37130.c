/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37130
// Address: 0x00037130

//----- (00037130) --------------------------------------------------------
int __cdecl sub_37130(int a1, int a2, unsigned int a3)
{
  int result; // eax

  result = a2;
  if ( *(_BYTE *)(a1 + 477) )
  {
    if ( *(_BYTE *)(a1 + 476) || *(_WORD *)(a1 + 402) != 8 )
    {
      *(_DWORD *)(a2 + 8) = a3;
      *(_DWORD *)(a2 + 12) = 0;
    }
    else
    {
      *(_DWORD *)(a2 + 12) = _byteswap_ulong(a3);
    }
  }
  else
  {
    *(_BYTE *)(a2 + 8) = a3;
  }
  return result;
}
