/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140032B60
// Address: 0x0000000140032B60

//----- (0000000140032B60) ----------------------------------------------------
void __fastcall sub_140032B60(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // r8d
  unsigned __int8 *v5; // rdx
  int *v6; // rdx
  size_t v7; // r8
  void *Block; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  if ( *(_BYTE *)(a2 + 40) )
  {
    Block = nullptr;
    v9 = 0;
    v10 = 0;
    v3 = *(_QWORD *)(a2 + 8);
    v4 = v3 - 1;
    if ( v3 )
    {
      v5 = *(unsigned __int8 **)a2;
    }
    else
    {
      v4 = 0;
      v5 = (unsigned __int8 *)Str1;
    }
    if ( !sub_140061F60((__int64)&Block, v5, v4) )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(274);
    }
    v6 = &dword_140092834;
    if ( v9 )
      v6 = (int *)Block;
    v7 = 2 * v9 - 2;
    if ( !v9 )
      v7 = 0;
    sub_1400048F0(a1, v6, v7);
    if ( Block )
    {
      v9 = 0;
      j_free(Block);
    }
  }
  else
  {
    sub_14000E160(a1, a2);
  }
}
// 140092834: using guessed type int dword_140092834;
// 1400CB61C: using guessed type char byte_1400CB61C;
