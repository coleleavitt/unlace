/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003E570
// Address: 0x000000014003E570

//----- (000000014003E570) ----------------------------------------------------
void __fastcall sub_14003E570(void **Block)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  if ( Block )
  {
    sub_14003C1E0((__int64)Block, 1);
    sub_14003E470((__int64)Block);
    sub_14000A670((__int64)(Block + 85));
    sub_140037360(Block + 83);
    v2 = Block[40];
    if ( v2 )
    {
      Block[41] = nullptr;
      j_free(v2);
      Block[40] = nullptr;
      Block[42] = nullptr;
    }
    v3 = Block[34];
    if ( v3 )
    {
      Block[35] = nullptr;
      j_free(v3);
      Block[34] = nullptr;
      Block[36] = nullptr;
    }
    if ( Block[31] )
    {
      sub_14001A6C0(Block + 31, 0);
      j_free(Block[31]);
      Block[31] = nullptr;
      Block[33] = nullptr;
    }
    sub_14000A670((__int64)(Block + 14));
    sub_1400372B0(Block + 12);
    sub_1400373E0((__int64)(Block + 7));
    v4 = Block[4];
    if ( v4 )
    {
      Block[5] = nullptr;
      j_free(v4);
      Block[4] = nullptr;
      Block[6] = nullptr;
    }
    j_j_free(Block);
  }
}
