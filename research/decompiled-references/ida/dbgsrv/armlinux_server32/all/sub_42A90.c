/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42A90
// Address: 0x00042A90

//----- (00042A90) --------------------------------------------------------
_DWORD *__fastcall sub_42A90(int a1, int a2)
{
  int v3; // r1
  _DWORD *result; // r0

  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 < 0 )
    return (_DWORD *)sub_42A34(a2, ~v3);
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
