/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100055FA4
// Address: 0x0000000100055FA4

//----- (0000000100055FA4) ----------------------------------------------------
_DWORD *__fastcall sub_100055FA4(__int64 a1, int a2)
{
  __int64 v2; // x8
  _DWORD *result; // x0

  v2 = 56LL * *(_QWORD *)(a1 + 56);
  if ( !v2 )
    return nullptr;
  for ( result = *(_DWORD **)(a1 + 48); *result != a2; result += 14 )
  {
    v2 -= 56;
    if ( !v2 )
      return nullptr;
  }
  return result;
}
