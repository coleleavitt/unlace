/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5D210
// Address: 0x000000000005D210

//----- (000000000005D210) ----------------------------------------------------
__int64 __fastcall sub_5D210(__int64 a1, __int64 a2)
{
  __int64 v2; // x8
  __int64 result; // x0
  __int64 v4; // x8

  v2 = *(_QWORD *)(a1 + 16);
  result = 0;
  if ( v2 )
    v4 = v2 - 1;
  else
    v4 = 0;
  *(_QWORD *)(a2 + 8) = v4;
  return result;
}
