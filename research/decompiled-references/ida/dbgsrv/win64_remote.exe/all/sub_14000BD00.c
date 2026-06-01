/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000BD00
// Address: 0x000000014000BD00

//----- (000000014000BD00) ----------------------------------------------------
void *__fastcall sub_14000BD00(void *Block, char a2)
{
  sub_14000B140((__int64)Block);
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}
