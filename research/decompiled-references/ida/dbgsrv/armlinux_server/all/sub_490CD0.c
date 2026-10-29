/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_490CD0
// Address: 0x0000000000490CD0

//----- (0000000000490CD0) ----------------------------------------------------
__int64 __fastcall sub_490CD0(FILE *a1)
{
  if ( a1 )
    return fgetc(a1);
  sub_4869C8(1);
  *__errno_location() = 9;
  sub_4869C8(1);
  return 0xFFFFFFFFLL;
}
