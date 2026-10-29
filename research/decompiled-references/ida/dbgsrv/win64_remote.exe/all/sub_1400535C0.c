/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400535C0
// Address: 0x00000001400535C0

//----- (00000001400535C0) ----------------------------------------------------
void *__fastcall sub_1400535C0(void *Block, char a2)
{
  *(_QWORD *)Block = &off_140099258;
  sub_14005D670(*((struct _RTL_CRITICAL_SECTION **)Block + 3));
  *(_QWORD *)Block = &off_140099238;
  sub_14000A6E0((void **)Block + 1);
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}
// 140099238: using guessed type __int64 (__fastcall *off_140099238)(void *Block);
// 140099258: using guessed type __int64 (__fastcall *off_140099258)(void *Block);
