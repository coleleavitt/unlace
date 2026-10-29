/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140040000
// Address: 0x0000000140040000

//----- (0000000140040000) ----------------------------------------------------
_QWORD *__fastcall sub_140040000(_QWORD *Block, char a2)
{
  void *v4; // rcx

  v4 = (void *)Block[14];
  if ( v4 )
  {
    Block[15] = 0;
    j_free(v4);
    Block[14] = 0;
    Block[16] = 0;
  }
  sub_140053340(Block);
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}
