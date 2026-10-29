/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481030
// Address: 0x0000000000481030

//----- (0000000000481030) ----------------------------------------------------
int __fastcall sub_481030(FILE *a1)
{
  if ( a1 )
    return fgetc(a1);
  sub_479EB0(1u);
  *__errno_location() = 9;
  sub_479EB0(1u);
  return -1;
}
