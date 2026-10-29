/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_SetGR
// Address: 0x000D9315

//----- (000D9315) --------------------------------------------------------
_DWORD *__cdecl Unwind_SetGR(int a1, int a2, int a3)
{
  _DWORD *result; // eax

  result = (_DWORD *)a2;
  if ( a2 > 17 )
LABEL_2:
    abort();
  if ( (*(_BYTE *)(a1 + 99) & 0x40) != 0 && *(_BYTE *)(a1 + a2 + 108) )
  {
    *(_DWORD *)(a1 + 4 * a2) = a3;
  }
  else
  {
    result = *(_DWORD **)(a1 + 4 * a2);
    if ( byte_13E5D4[a2] != 4 )
      goto LABEL_2;
    *result = a3;
  }
  return result;
}
