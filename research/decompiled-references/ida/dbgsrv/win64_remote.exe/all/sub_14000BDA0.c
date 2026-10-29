/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000BDA0
// Address: 0x000000014000BDA0

//----- (000000014000BDA0) ----------------------------------------------------
_QWORD *__fastcall sub_14000BDA0(_QWORD *Block, char a2)
{
  void *v4; // rcx

  *Block = &off_140092F30;
  v4 = (void *)Block[1];
  if ( v4 )
  {
    Block[2] = 0;
    j_free(v4);
    Block[1] = 0;
    Block[3] = 0;
  }
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}
// 140092F30: using guessed type __int64 (__fastcall *off_140092F30)();
