/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A0C28
// Address: 0x00000000004A0C28

//----- (00000000004A0C28) ----------------------------------------------------
__int64 *__fastcall sub_4A0C28(__int64 *result, __int64 *a2)
{
  __int64 v2; // x3
  __int64 v3; // x2

  v2 = *result;
  if ( (*(_DWORD *)(*result - 8) & 0x80000000) != 0 )
    *(_DWORD *)(v2 - 8) = 0;
  v3 = *a2;
  if ( (*(_DWORD *)(*a2 - 8) & 0x80000000) != 0 )
    *(_DWORD *)(v3 - 8) = 0;
  *result = v3;
  *a2 = v2;
  return result;
}
