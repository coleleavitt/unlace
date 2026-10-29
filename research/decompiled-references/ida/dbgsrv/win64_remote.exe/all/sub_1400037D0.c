/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400037D0
// Address: 0x00000001400037D0

//----- (00000001400037D0) ----------------------------------------------------
_QWORD *__fastcall sub_1400037D0(_QWORD *Block, char a2)
{
  __int64 v4; // rcx

  *Block = off_140091E48;
  v4 = Block[2];
  if ( v4 && *((_BYTE *)Block + 24) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    Block[2] = 0;
  }
  Block[1] = 0;
  *Block = off_140091D20;
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}
// 140091D20: using guessed type void (__fastcall __noreturn *off_140091D20[36])();
// 140091E48: using guessed type __int64 (__fastcall *off_140091E48[32])();
