/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BB190
// Address: 0x000BB190

//----- (000BB190) --------------------------------------------------------
unsigned int __cdecl sub_BB190(int a1)
{
  unsigned int result; // eax
  unsigned int i; // edi

  result = *(_DWORD *)(a1 + 4);
  if ( result )
  {
    for ( i = 0; i < result; ++i )
    {
      if ( *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4 * i) != -1 )
      {
        close(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 4 * i));
        *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4 * i) = -1;
        result = *(_DWORD *)(a1 + 4);
      }
    }
  }
  return result;
}
