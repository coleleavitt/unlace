/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42900
// Address: 0x00042900

//----- (00042900) --------------------------------------------------------
_DWORD *__fastcall sub_42900(int a1, int a2)
{
  int v3; // r1
  _DWORD *result; // r0

  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 < 0 )
    return (_DWORD *)sub_428A4(a2, ~v3);
  result = *(_DWORD **)a1;
  if ( result )
  {
    if ( *result == 289621065 && (unsigned int)v3 < result[4] )
      return (_DWORD *)(result[3] + 24 * v3);
    else
      return nullptr;
  }
  return result;
}
