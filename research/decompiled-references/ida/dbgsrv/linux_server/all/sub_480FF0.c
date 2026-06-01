/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480FF0
// Address: 0x0000000000480FF0

//----- (0000000000480FF0) ----------------------------------------------------
int __fastcall sub_480FF0(int a1, FILE *a2)
{
  if ( a2 )
    return fputc(a1, a2);
  sub_479EB0(1u);
  *__errno_location() = 9;
  sub_479EB0(1u);
  return -1;
}
