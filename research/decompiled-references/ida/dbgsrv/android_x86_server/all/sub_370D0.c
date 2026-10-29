/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_370D0
// Address: 0x000370D0

//----- (000370D0) --------------------------------------------------------
int __cdecl sub_370D0(int a1, int a2, unsigned int a3)
{
  int result; // eax
  unsigned __int64 v4; // kr00_8
  int v5; // esi

  result = a2;
  if ( *(_BYTE *)(a1 + 477) )
  {
    if ( *(_BYTE *)(a1 + 476) || *(_WORD *)(a1 + 402) != 8 )
    {
      *(_DWORD *)(a2 + 8) |= a3;
      *(_DWORD *)(a2 + 12) = 0;
    }
    else
    {
      *(_DWORD *)(a2 + 12) = a3;
      *(_DWORD *)(a2 + 8) = 0;
    }
  }
  else
  {
    v4 = (unsigned __int64)a3 << 8;
    v5 = v4 | *(unsigned __int8 *)(a2 + 8);
    *(_DWORD *)(a2 + 12) = HIDWORD(v4);
    *(_DWORD *)(a2 + 8) = v5;
  }
  return result;
}
