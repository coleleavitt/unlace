/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001C7B0
// Address: 0x000000014001C7B0

//----- (000000014001C7B0) ----------------------------------------------------
__int64 __fastcall sub_14001C7B0(_BYTE *a1, unsigned __int64 a2, unsigned __int16 *a3)
{
  char *v5; // rdx
  unsigned __int64 v6; // rbx
  void *Block; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  Block = nullptr;
  v9 = 0;
  v10 = 0;
  sub_140061D80((__int64)&Block, a3, -1);
  v5 = (char *)Str1;
  if ( v9 )
    v5 = (char *)Block;
  sub_1400621E0(a1, v5, a2);
  v6 = v9 - 1;
  if ( !v9 )
    v6 = 0;
  if ( v6 > a2 )
    LODWORD(v6) = a2;
  if ( Block )
  {
    v9 = 0;
    j_free(Block);
  }
  return (unsigned int)v6;
}
