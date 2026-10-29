/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_490DF0
// Address: 0x0000000000490DF0

//----- (0000000000490DF0) ----------------------------------------------------
__int64 __fastcall sub_490DF0(const char *a1, FILE *a2)
{
  if ( a2 )
    return fputs(a1, a2);
  sub_4869C8(1);
  *__errno_location() = 9;
  sub_4869C8(1);
  return 0xFFFFFFFFLL;
}
