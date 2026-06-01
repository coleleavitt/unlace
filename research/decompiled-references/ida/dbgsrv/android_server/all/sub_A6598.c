/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A6598
// Address: 0x00000000000A6598

//----- (00000000000A6598) ----------------------------------------------------
__int64 __fastcall sub_A6598(__int64 a1, int a2)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 56);
  if ( result != -1 )
  {
    if ( (a2 & 0x80000000) == 0 )
    {
      shutdown(result, a2);
      result = *(_QWORD *)(a1 + 56);
    }
    result = close(result);
    *(_QWORD *)(a1 + 56) = -1;
  }
  return result;
}
