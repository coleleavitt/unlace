/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100022E74
// Address: 0x0000000100022E74

//----- (0000000100022E74) ----------------------------------------------------
__int64 __fastcall sub_100022E74(FILE *a1, int a2)
{
  if ( (unsigned int)qfputc(a2, a1) == -1 )
    return 0xFFFFFFFFLL;
  else
    return 0;
}
