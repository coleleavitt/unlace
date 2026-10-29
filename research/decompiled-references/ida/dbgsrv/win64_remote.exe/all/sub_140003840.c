/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140003840
// Address: 0x0000000140003840

//----- (0000000140003840) ----------------------------------------------------
_QWORD *__fastcall sub_140003840(_QWORD *Block, char a2)
{
  void *v4; // rcx

  *Block = &off_140092150;
  v4 = (void *)Block[2];
  if ( v4 != (void *)-1LL )
    CloseHandle(v4);
  *Block = &off_140092138;
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}
// 140092138: using guessed type __int64 (__fastcall *off_140092138)();
// 140092150: using guessed type __int64 (__fastcall *off_140092150)(void *Block);
