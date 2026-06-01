/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002BE90
// Address: 0x000000014002BE90

//----- (000000014002BE90) ----------------------------------------------------
void *__fastcall sub_14002BE90(void *Block, char a2)
{
  sub_14002BDD0((__int64)Block);
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}
