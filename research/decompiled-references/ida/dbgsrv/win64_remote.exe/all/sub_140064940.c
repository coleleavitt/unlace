/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140064940
// Address: 0x0000000140064940

//----- (0000000140064940) ----------------------------------------------------
int __fastcall sub_140064940(int a1, FILE *a2)
{
  if ( a2 )
    return fputc(a1, a2);
  sub_1400640B0(1u);
  *errno() = 9;
  sub_1400640B0(1u);
  return -1;
}
