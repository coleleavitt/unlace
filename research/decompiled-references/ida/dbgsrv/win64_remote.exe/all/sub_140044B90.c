/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140044B90
// Address: 0x0000000140044B90

//----- (0000000140044B90) ----------------------------------------------------
_QWORD *__fastcall sub_140044B90(_QWORD *Block, char a2)
{
  sub_140044AA0(Block);
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}
