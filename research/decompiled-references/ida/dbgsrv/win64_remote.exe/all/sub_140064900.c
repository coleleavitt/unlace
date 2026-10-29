/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140064900
// Address: 0x0000000140064900

//----- (0000000140064900) ----------------------------------------------------
int __fastcall sub_140064900(FILE *a1)
{
  if ( a1 )
    return fgetc(a1);
  sub_1400640B0(1u);
  *errno() = 9;
  sub_1400640B0(1u);
  return -1;
}
