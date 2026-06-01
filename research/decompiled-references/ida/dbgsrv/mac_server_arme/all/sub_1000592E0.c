/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000592E0
// Address: 0x00000001000592E0

//----- (00000001000592E0) ----------------------------------------------------
_DWORD *__fastcall sub_1000592E0(__int64 a1, int a2)
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
