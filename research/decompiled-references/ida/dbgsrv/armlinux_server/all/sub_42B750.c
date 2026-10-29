/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42B750
// Address: 0x000000000042B750

//----- (000000000042B750) ----------------------------------------------------
__int64 __fastcall sub_42B750(__int64 *a1, __int64 a2, unsigned int *a3)
{
  __int64 result; // x0

  if ( !a3 || a1[22] <= 0 )
    return 0;
  result = 0;
  if ( a1[24] )
    return sub_42AA98(a1[20], a2, a1 + 22, *a3);
  return result;
}
