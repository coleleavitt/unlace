/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400038A0
// Address: 0x00000001400038A0

//----- (00000001400038A0) ----------------------------------------------------
_QWORD *__fastcall sub_1400038A0(_QWORD *Block, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  *Block = &off_140092028;
  v4 = Block[7];
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    Block[7] = 0;
  }
  v5 = Block[6];
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    Block[6] = 0;
  }
  v6 = Block[5];
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    Block[5] = 0;
  }
  *((_DWORD *)Block + 8) = -1;
  *Block = &off_140091F80;
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}
// 140091F80: using guessed type __int64 (__fastcall *off_140091F80)();
// 140092028: using guessed type __int64 (__fastcall *off_140092028)(void *Block);
