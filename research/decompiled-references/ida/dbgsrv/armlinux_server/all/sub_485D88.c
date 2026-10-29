/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_485D88
// Address: 0x0000000000485D88

//----- (0000000000485D88) ----------------------------------------------------
__int64 __fastcall sub_485D88(unsigned __int8 *a1)
{
  unsigned __int8 *v2; // [xsp+18h] [xbp-8h] BYREF

  v2 = a1;
  do
  {
    if ( !*v2 )
      return 1;
  }
  while ( (unsigned int)sub_485C28(&v2) != -1 );
  return 0;
}
