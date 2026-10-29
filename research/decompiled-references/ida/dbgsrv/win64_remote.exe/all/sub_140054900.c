/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140054900
// Address: 0x0000000140054900

//----- (0000000140054900) ----------------------------------------------------
_QWORD *__fastcall sub_140054900(_QWORD *Block, char a2)
{
  void *v4; // rcx

  *Block = &off_140099638;
  sub_1400545F0(Block + 17);
  v4 = (void *)Block[18];
  if ( v4 )
  {
    Block[19] = 0;
    j_free(v4);
    Block[18] = 0;
    Block[20] = 0;
  }
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}
// 140099638: using guessed type __int64 (__fastcall *off_140099638)(void *Block);
