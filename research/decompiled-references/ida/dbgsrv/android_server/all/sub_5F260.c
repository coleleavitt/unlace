/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F260
// Address: 0x000000000005F260

//----- (000000000005F260) ----------------------------------------------------
__int64 __fastcall sub_5F260(__int64 a1)
{
  int v1; // w8
  __int64 result; // x0

  v1 = *(unsigned __int8 *)(a1 + 212);
  result = 1;
  if ( v1 != 168 && v1 != 191 )
    return 0;
  return result;
}
