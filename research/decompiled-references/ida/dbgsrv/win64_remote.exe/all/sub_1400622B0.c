/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400622B0
// Address: 0x00000001400622B0

//----- (00000001400622B0) ----------------------------------------------------
char *__fastcall sub_1400622B0(char *a1, __int64 a2)
{
  char *i; // r9
  char v3; // r8

  for ( i = a1; a2 > 1; a2 -= 2 )
  {
    v3 = *i;
    *i = i[a2 - 1];
    (i++)[a2 - 1] = v3;
  }
  return a1;
}
