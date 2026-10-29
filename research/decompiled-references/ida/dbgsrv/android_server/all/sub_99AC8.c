/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_99AC8
// Address: 0x0000000000099AC8

//----- (0000000000099AC8) ----------------------------------------------------
_DWORD *__fastcall sub_99AC8(__int64 a1, int a2)
{
  __int64 v2; // x8
  _DWORD *result; // x0
  __int64 v4; // x8

  v2 = *(_QWORD *)(a1 + 56);
  if ( !(56 * v2) )
    return nullptr;
  result = *(_DWORD **)(a1 + 48);
  v4 = 56 * v2;
  while ( *result != a2 )
  {
    v4 -= 56;
    result += 14;
    if ( !v4 )
      return nullptr;
  }
  return result;
}
