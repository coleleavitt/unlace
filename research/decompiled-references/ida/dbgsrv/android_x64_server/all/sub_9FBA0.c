/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9FBA0
// Address: 0x000000000009FBA0

//----- (000000000009FBA0) ----------------------------------------------------
_DWORD *__fastcall sub_9FBA0(__int64 a1, int a2)
{
  __int64 v2; // rcx
  _DWORD *result; // rax

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
