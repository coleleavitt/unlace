/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005A1B0
// Address: 0x000000014005A1B0

//----- (000000014005A1B0) ----------------------------------------------------
void **__fastcall sub_14005A1B0(void **Block, char a2)
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
