/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000BEA0
// Address: 0x000000014000BEA0

//----- (000000014000BEA0) ----------------------------------------------------
_QWORD *__fastcall sub_14000BEA0(_QWORD *Block, char a2)
{
  void *v4; // rcx
  void *v5; // rcx

  v4 = (void *)Block[15];
  if ( v4 )
  {
    Block[16] = 0;
    j_free(v4);
    Block[15] = 0;
    Block[17] = 0;
  }
  *Block = &off_1400929C8;
  sub_14000A610((__int64)(Block + 5));
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
// 1400929C8: using guessed type __int64 (__fastcall *off_1400929C8)(void *Block);
