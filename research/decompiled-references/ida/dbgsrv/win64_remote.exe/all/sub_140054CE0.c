/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140054CE0
// Address: 0x0000000140054CE0

//----- (0000000140054CE0) ----------------------------------------------------
_QWORD *__fastcall sub_140054CE0(_QWORD *Block, char a2)
{
  sub_140054C50(Block);
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}
