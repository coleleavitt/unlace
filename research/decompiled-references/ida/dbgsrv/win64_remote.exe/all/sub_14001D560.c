/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001D560
// Address: 0x000000014001D560

//----- (000000014001D560) ----------------------------------------------------
_QWORD *__fastcall sub_14001D560(_QWORD *Block, char a2)
{
  void *v4; // rcx

  v4 = (void *)Block[101];
  if ( v4 )
  {
    Block[102] = 0;
    j_free(v4);
    Block[101] = 0;
    Block[103] = 0;
  }
  sub_14000B140((__int64)Block);
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}
