/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E334
// Address: 0x000000000005E334

//----- (000000000005E334) ----------------------------------------------------
__int64 __fastcall sub_5E334(FILE *a1, unsigned __int8 a2)
{
  if ( (unsigned int)qfputc(a2, a1) == -1 )
    return 0xFFFFFFFFLL;
  else
    return 0;
}
