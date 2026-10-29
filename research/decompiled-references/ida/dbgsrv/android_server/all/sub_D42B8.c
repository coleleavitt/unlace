/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D42B8
// Address: 0x00000000000D42B8

//----- (00000000000D42B8) ----------------------------------------------------
char *__fastcall sub_D42B8(int a1)
{
  int v1; // w8

  if ( (unsigned int)(a1 + 6) <= 8 )
    v1 = 2 - a1;
  else
    v1 = 9;
  return off_1605B0[v1];
}
// 1605B0: using guessed type char *off_1605B0[2];
