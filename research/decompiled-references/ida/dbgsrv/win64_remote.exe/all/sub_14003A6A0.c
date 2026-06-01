/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003A6A0
// Address: 0x000000014003A6A0

//----- (000000014003A6A0) ----------------------------------------------------
void __fastcall sub_14003A6A0(void *Block)
{
  if ( Block )
  {
    sub_14000A670((__int64)Block + 24);
    sub_1400363A0((__int64)Block + 8, *((_QWORD ***)Block + 1));
    j_j_free(*((void **)Block + 1));
    j_j_free(Block);
  }
}
