/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140054200
// Address: 0x0000000140054200

//----- (0000000140054200) ----------------------------------------------------
__int64 __fastcall sub_140054200(void *Block)
{
  sub_14005D750(*((void **)Block + 2), 0xFFFFFFFF);
  sub_140053EF0(*(_QWORD *)Block, *((__int64 **)Block + 1));
  *(_QWORD *)Block = 0;
  *((_QWORD *)Block + 1) = 0;
  sub_14005D710(*((void **)Block + 2));
  *((_QWORD *)Block + 2) = 0;
  j_j_free(Block);
  return 0;
}
