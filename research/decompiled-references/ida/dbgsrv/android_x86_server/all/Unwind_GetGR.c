/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_GetGR
// Address: 0x000D91E1

//----- (000D91E1) --------------------------------------------------------
int __cdecl Unwind_GetGR(int a1, int a2)
{
  int result; // eax

  if ( a2 > 17 )
LABEL_2:
    abort();
  result = *(_DWORD *)(a1 + 4 * a2);
  if ( (*(_BYTE *)(a1 + 99) & 0x40) == 0 || !*(_BYTE *)(a1 + a2 + 108) )
  {
    if ( byte_13E5D4[a2] != 4 )
      goto LABEL_2;
    return *(_DWORD *)result;
  }
  return result;
}
