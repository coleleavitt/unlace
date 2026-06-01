/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140047A70
// Address: 0x0000000140047A70

//----- (0000000140047A70) ----------------------------------------------------
_QWORD *__fastcall sub_140047A70(_QWORD *Block, char a2)
{
  _BYTE *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  *Block = &off_140097230;
  Block[24] = off_140097250;
  v4 = (_BYTE *)Block[55];
  if ( !v4[692] && v4 )
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v4 + 32LL))(v4, 1);
  sub_140054980((__int64)Block);
  Block[56] = 0;
  sub_140062880((__int64)(Block + 46));
  sub_140062880((__int64)(Block + 37));
  Block[24] = &off_140097200;
  v5 = (void *)Block[33];
  if ( v5 )
  {
    Block[34] = 0;
    j_free(v5);
    Block[33] = 0;
    Block[35] = 0;
  }
  v6 = (void *)Block[26];
  if ( v6 )
  {
    Block[27] = 0;
    j_free(v6);
    Block[26] = 0;
    Block[28] = 0;
  }
  sub_1400548A0(Block);
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}
// 140097200: using guessed type __int64 (__fastcall *off_140097200)(void *Block);
// 140097230: using guessed type __int64 (__fastcall *off_140097230)(void *Block);
// 140097250: using guessed type __int64 (__fastcall *off_140097250[3])();
