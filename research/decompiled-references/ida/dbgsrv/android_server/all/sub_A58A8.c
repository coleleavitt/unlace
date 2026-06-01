/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A58A8
// Address: 0x00000000000A58A8

//----- (00000000000A58A8) ----------------------------------------------------
unsigned __int8 *__fastcall sub_A58A8(__int64 a1, int a2)
{
  unsigned __int64 v2; // x8
  unsigned __int8 *result; // x0
  unsigned __int64 v4; // x9

  v2 = *(_QWORD *)(a1 + 80);
  if ( !v2 )
    return nullptr;
  result = *(unsigned __int8 **)(a1 + 72);
  v4 = 0;
  while ( *result != a2 )
  {
    ++v4;
    result += 24;
    if ( v4 >= v2 )
      return nullptr;
  }
  return result;
}
