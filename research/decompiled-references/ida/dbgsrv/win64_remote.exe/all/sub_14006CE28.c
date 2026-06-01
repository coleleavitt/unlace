/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006CE28
// Address: 0x000000014006CE28

//----- (000000014006CE28) ----------------------------------------------------
char sub_14006CE28()
{
  if ( dwTlsIndex != -1 )
  {
    _vcrt_FlsFree();
    dwTlsIndex = -1;
  }
  return 1;
}
// 14006F078: using guessed type __int64 _vcrt_FlsFree(void);
