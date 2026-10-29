/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481120
// Address: 0x0000000000481120

//----- (0000000000481120) ----------------------------------------------------
int __fastcall sub_481120(const char *a1, FILE *a2)
{
  if ( a2 )
    return fputs(a1, a2);
  sub_479EB0(1u);
  *__errno_location() = 9;
  sub_479EB0(1u);
  return -1;
}
