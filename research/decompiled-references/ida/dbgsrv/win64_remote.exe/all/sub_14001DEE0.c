/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001DEE0
// Address: 0x000000014001DEE0

//----- (000000014001DEE0) ----------------------------------------------------
__int64 __fastcall sub_14001DEE0(__int64 a1, int a2, _BYTE *a3, __int64 a4)
{
  unsigned __int8 v4; // bl
  int v6; // [rsp+20h] [rbp-48h] BYREF
  void *v7; // [rsp+28h] [rbp-40h]
  __int64 v8; // [rsp+30h] [rbp-38h]
  __int64 v9; // [rsp+38h] [rbp-30h]
  void *Block; // [rsp+48h] [rbp-20h]
  __int128 v11; // [rsp+50h] [rbp-18h]

  v7 = nullptr;
  v9 = 0;
  Block = nullptr;
  v11 = 0;
  v6 = a2;
  v8 = 0;
  v4 = sub_14001E400((__int64)&v6, a3, a4);
  if ( Block )
    j_free(Block);
  if ( v7 )
    j_free(v7);
  return v4;
}
