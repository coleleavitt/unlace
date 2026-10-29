/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000BF30
// Address: 0x000000014000BF30

//----- (000000014000BF30) ----------------------------------------------------
void *__fastcall sub_14000BF30(void *Block, char a2)
{
  sub_14000BA00((__int64)Block);
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}
