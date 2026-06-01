/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140047BB0
// Address: 0x0000000140047BB0

//----- (0000000140047BB0) ----------------------------------------------------
_QWORD *__fastcall sub_140047BB0(_QWORD *Block, char a2)
{
  void *v4; // rcx

  *Block = &off_1400972A8;
  v4 = (void *)Block[2];
  if ( v4 )
  {
    Block[3] = 0;
    j_free(v4);
    Block[2] = 0;
    Block[4] = 0;
  }
  *Block = &off_140097290;
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}
// 140097290: using guessed type __int64 (__fastcall *off_140097290)();
// 1400972A8: using guessed type __int64 (__fastcall *off_1400972A8)(void *Block);
