/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_490C98
// Address: 0x0000000000490C98

//----- (0000000000490C98) ----------------------------------------------------
__int64 __fastcall sub_490C98(int a1, FILE *a2)
{
  if ( a2 )
    return fputc(a1, a2);
  sub_4869C8(1);
  *__errno_location() = 9;
  sub_4869C8(1);
  return 0xFFFFFFFFLL;
}
