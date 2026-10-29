/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ABD88
// Address: 0x00000000000ABD88

//----- (00000000000ABD88) ----------------------------------------------------
char *__fastcall sub_ABD88(int a1)
{
  int v1; // w8

  if ( a1 <= 31 )
    v1 = a1;
  else
    v1 = 0;
  return off_160090[v1];
}
// 160090: using guessed type char *off_160090[33];
