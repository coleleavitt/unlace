/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140053470
// Address: 0x0000000140053470

//----- (0000000140053470) ----------------------------------------------------
_QWORD *__fastcall sub_140053470(_QWORD *Block, char a2)
{
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  *Block = &off_140099278;
  sub_1400545F0(Block + 10);
  v4 = (void (__fastcall ***)(_QWORD, __int64))Block[11];
  if ( v4 )
    (**v4)(v4, 1);
  v5 = (void *)Block[7];
  if ( v5 )
  {
    Block[8] = 0;
    j_free(v5);
    Block[7] = 0;
    Block[9] = 0;
  }
  v6 = (void *)Block[4];
  if ( v6 )
  {
    Block[5] = 0;
    j_free(v6);
    Block[4] = 0;
    Block[6] = 0;
  }
  v7 = (void *)Block[1];
  if ( v7 )
  {
    Block[2] = 0;
    j_free(v7);
    Block[1] = 0;
    Block[3] = 0;
  }
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}
// 140099278: using guessed type __int64 (__fastcall *off_140099278)(void *Block);
