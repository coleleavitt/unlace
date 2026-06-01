/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BAE60
// Address: 0x000BAE60

//----- (000BAE60) --------------------------------------------------------
void __cdecl sub_BAE60(int a1)
{
  unsigned int v1; // edi

  if ( *(_DWORD *)(a1 + 4) )
  {
    v1 = 0;
    do
    {
      if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v1) != -1 )
        close(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v1));
      if ( *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4 * v1) != -1 )
        close(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 4 * v1));
      ++v1;
    }
    while ( v1 < *(_DWORD *)(a1 + 4) );
  }
  qfree(*(void **)(a1 + 8));
  *(_DWORD *)(a1 + 8) = 0;
  qfree(*(void **)(a1 + 12));
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 4) = 0;
}
