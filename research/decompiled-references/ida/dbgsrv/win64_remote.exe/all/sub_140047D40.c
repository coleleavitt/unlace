/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140047D40
// Address: 0x0000000140047D40

//----- (0000000140047D40) ----------------------------------------------------
_QWORD *__fastcall sub_140047D40(_QWORD *Block, char a2)
{
  void *v4; // rcx
  void *v5; // rcx

  *Block = &off_140097200;
  v4 = (void *)Block[9];
  if ( v4 )
  {
    Block[10] = 0;
    j_free(v4);
    Block[9] = 0;
    Block[11] = 0;
  }
  v5 = (void *)Block[2];
  if ( v5 )
  {
    Block[3] = 0;
    j_free(v5);
    Block[2] = 0;
    Block[4] = 0;
  }
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}
// 140097200: using guessed type __int64 (__fastcall *off_140097200)(void *Block);
