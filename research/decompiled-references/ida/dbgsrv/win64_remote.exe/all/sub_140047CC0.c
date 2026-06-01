/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140047CC0
// Address: 0x0000000140047CC0

//----- (0000000140047CC0) ----------------------------------------------------
_QWORD *__fastcall sub_140047CC0(_QWORD *Block, char a2)
{
  void *v4; // rcx
  void *v5; // rcx

  v4 = (void *)Block[7];
  if ( v4 )
  {
    Block[8] = 0;
    j_free(v4);
    Block[7] = 0;
    Block[9] = 0;
  }
  v5 = (void *)Block[4];
  if ( v5 )
  {
    Block[5] = 0;
    j_free(v5);
    Block[4] = 0;
    Block[6] = 0;
  }
  *Block = off_140092F00;
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}
// 140092F00: using guessed type __int64 (__fastcall *off_140092F00[4])();
