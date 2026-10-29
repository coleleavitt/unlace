/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140044C20
// Address: 0x0000000140044C20

//----- (0000000140044C20) ----------------------------------------------------
_QWORD *__fastcall sub_140044C20(_QWORD *Block, char a2)
{
  sub_140044AA0(Block);
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}
