/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_473918
// Address: 0x0000000000473918

//----- (0000000000473918) ----------------------------------------------------
__int64 __fastcall sub_473918(__int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 result; // x0

  result = *a2;
  if ( (*a2 & 1) != 0 )
  {
    *a2 = result - 1;
    *a3 = 2;
    return 2;
  }
  return result;
}
