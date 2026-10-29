/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000BC80
// Address: 0x000000014000BC80

//----- (000000014000BC80) ----------------------------------------------------
void **__fastcall sub_14000BC80(void **Block, char a2)
{
  void *v4; // rcx

  v4 = *Block;
  if ( v4 )
  {
    Block[1] = nullptr;
    j_free(v4);
    *Block = nullptr;
    Block[2] = nullptr;
  }
  if ( (a2 & 1) == 0 || (a2 & 4) != 0 )
    return Block;
  j_free(Block);
  return Block;
}
// 140001790: using guessed type __int64 __fastcall guard_check_icall_nop();
