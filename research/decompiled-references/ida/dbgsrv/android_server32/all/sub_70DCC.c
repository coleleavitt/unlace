/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70DCC
// Address: 0x00070DCC

//----- (00070DCC) --------------------------------------------------------
char *__fastcall sub_70DCC(int a1)
{
  int v1; // r1

  v1 = 0;
  if ( a1 <= 31 )
    v1 = a1;
  return off_DB0A4[v1];
}
// DB0A4: using guessed type char *off_DB0A4[32];
