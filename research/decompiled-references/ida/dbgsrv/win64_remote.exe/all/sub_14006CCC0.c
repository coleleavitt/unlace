/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006CCC0
// Address: 0x000000014006CCC0

//----- (000000014006CCC0) ----------------------------------------------------
int __fastcall sub_14006CCC0(__int64 a1, __int64 a2)
{
  if ( a1 == a2 )
    return 0;
  else
    return strcmp((const char *)(a1 + 9), (const char *)(a2 + 9));
}
