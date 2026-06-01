/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140054F30
// Address: 0x0000000140054F30

//----- (0000000140054F30) ----------------------------------------------------
_QWORD *__fastcall sub_140054F30(_QWORD *Block, char a2)
{
  void *v4; // rcx
  void *v5; // rcx

  *Block = &off_140099780;
  v4 = (void *)Block[8];
  if ( v4 )
  {
    Block[9] = 0;
    j_free(v4);
    Block[8] = 0;
    Block[10] = 0;
  }
  v5 = (void *)Block[4];
  if ( v5 )
  {
    Block[5] = 0;
    j_free(v5);
    Block[4] = 0;
    Block[6] = 0;
  }
  *Block = &off_1400996E8;
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}
// 1400996E8: using guessed type __int64 (__fastcall *off_1400996E8)();
// 140099780: using guessed type __int64 (__fastcall *off_140099780)(void *Block);
