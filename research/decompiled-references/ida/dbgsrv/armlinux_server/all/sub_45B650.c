/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45B650
// Address: 0x000000000045B650

//----- (000000000045B650) ----------------------------------------------------
_DWORD *__fastcall sub_45B650(__int64 a1, int a2)
{
  __int64 v2; // x3
  _DWORD *result; // x0
  _DWORD *v4; // x2

  v2 = *(_QWORD *)(a1 + 56);
  result = *(_DWORD **)(a1 + 48);
  v4 = &result[14 * v2];
  if ( result == v4 )
    return nullptr;
  while ( *result != a2 )
  {
    result += 14;
    if ( result == v4 )
      return nullptr;
  }
  return result;
}
