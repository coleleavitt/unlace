/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140059C90
// Address: 0x0000000140059C90

//----- (0000000140059C90) ----------------------------------------------------
_BYTE *__fastcall sub_140059C90(_BYTE *a1, const char *a2, __int64 a3)
{
  char *v6; // rdx
  _BYTE *v7; // rbx
  void *Block; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  if ( a3 < 0 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(1225);
  }
  if ( !a3 )
    return a1;
  Block = nullptr;
  v9 = 0;
  v10 = 0;
  sub_140059960((__int64)&Block, a2, -1, a3);
  v6 = (char *)Str1;
  if ( v9 )
    v6 = (char *)Block;
  v7 = sub_1400621E0(a1, v6, a3);
  if ( Block )
  {
    v9 = 0;
    j_free(Block);
  }
  return v7;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
