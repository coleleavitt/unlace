/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B8BD4
// Address: 0x00000000000B8BD4

//----- (00000000000B8BD4) ----------------------------------------------------
__int64 __fastcall sub_B8BD4(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  if ( a4 > 2 )
    return -1;
  if ( qlseek(a2, a3, a4) == -1 )
    return -1;
  return 0;
}
