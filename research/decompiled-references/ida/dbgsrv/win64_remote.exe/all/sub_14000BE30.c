/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000BE30
// Address: 0x000000014000BE30

//----- (000000014000BE30) ----------------------------------------------------
_QWORD *__fastcall sub_14000BE30(_QWORD *Block, char a2)
{
  void *v4; // rcx

  *Block = &off_1400929C8;
  sub_14000A610((__int64)(Block + 5));
  v4 = (void *)Block[2];
  if ( v4 )
  {
    Block[3] = 0;
    j_free(v4);
    Block[2] = 0;
    Block[4] = 0;
  }
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}
// 1400929C8: using guessed type __int64 (__fastcall *off_1400929C8)(void *Block);
