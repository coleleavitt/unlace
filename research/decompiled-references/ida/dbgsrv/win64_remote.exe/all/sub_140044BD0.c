/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140044BD0
// Address: 0x0000000140044BD0

//----- (0000000140044BD0) ----------------------------------------------------
void **__fastcall sub_140044BD0(void **Block, char a2)
{
  *Block = &off_140096F28;
  sub_14005D710(Block[2]);
  Block[2] = nullptr;
  Block[1] = nullptr;
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}
// 140096F28: using guessed type void (__fastcall __noreturn *off_140096F28)();
