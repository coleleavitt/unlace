/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140051E60
// Address: 0x0000000140051E60

//----- (0000000140051E60) ----------------------------------------------------
void *__fastcall sub_140051E60(void *Block, char a2)
{
  sub_14000B140((__int64)Block);
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}
