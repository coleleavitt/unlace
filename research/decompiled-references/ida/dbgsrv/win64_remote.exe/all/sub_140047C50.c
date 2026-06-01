/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140047C50
// Address: 0x0000000140047C50

//----- (0000000140047C50) ----------------------------------------------------
_QWORD *__fastcall sub_140047C50(_QWORD *Block, char a2)
{
  sub_1400477A0(Block);
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}
