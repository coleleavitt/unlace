/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001F770
// Address: 0x000000014001F770

//----- (000000014001F770) ----------------------------------------------------
__int64 __fastcall sub_14001F770(__int64 a1, __int64 a2)
{
  const char *v3; // rbx
  const char *v4; // rcx
  void *v5; // rdi
  size_t v6; // rax
  void *Block; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  Block = nullptr;
  v9 = 0;
  v10 = 0;
  v3 = Str1;
  if ( *(_QWORD *)(a1 + 16) )
    v4 = *(const char **)(a1 + 8);
  else
    v4 = Str1;
  sub_140035620((__int64)v4, &Block, 0, 0);
  v5 = Block;
  if ( !v9 || (v3 = (const char *)Block) != nullptr )
    v6 = strlen(v3);
  else
    v6 = 0;
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  if ( v6 )
  {
    sub_140001810(a2 + 8, v3, v6);
    v5 = Block;
  }
  if ( v5 )
  {
    v9 = 0;
    j_free(v5);
  }
  return 0;
}
