/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000F9D0
// Address: 0x000000010000F9D0

//----- (000000010000F9D0) ----------------------------------------------------
__int64 __fastcall sub_10000F9D0(__int64 a1, __int64 a2)
{
  bool v2; // cl
  __int64 result; // rax

  v2 = sub_10001B3B0(a1, a2);
  result = -1;
  if ( v2 && !*(_BYTE *)(a1 + 2) && !*(_BYTE *)(a1 + 1) && *(_BYTE *)a1 == 4 )
    return *(unsigned int *)(a1 + 8);
  return result;
}
