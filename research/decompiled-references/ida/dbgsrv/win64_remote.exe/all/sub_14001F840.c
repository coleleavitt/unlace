/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001F840
// Address: 0x000000014001F840

//----- (000000014001F840) ----------------------------------------------------
__int64 __fastcall sub_14001F840(__int64 a1, __int64 a2)
{
  const char *v3; // rdi
  char *v4; // r8
  char *v5; // r15
  __int64 v6; // rbx
  void *v7; // rax
  void *v8; // rbx
  size_t v9; // rax
  void *Block; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+28h] [rbp-28h]
  unsigned __int64 v13; // [rsp+30h] [rbp-20h]
  void *Src[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15; // [rsp+48h] [rbp-8h]

  *(_OWORD *)Src = 0;
  v15 = 0;
  v3 = Str1;
  v4 = (char *)Str1;
  if ( *(_QWORD *)(a1 + 16) )
    v4 = *(char **)(a1 + 8);
  if ( !sub_14002EB30(a2, -1, v4, Src) )
  {
    Block = nullptr;
    v12 = 0;
    v13 = 0;
    Block = sub_14005ABE0((__int64)&Block, nullptr, 0xEu, 1u);
    v12 = 14;
    strcpy((char *)Block, "IDC_FAILURE: ");
    v5 = (char *)Src[1] - 1;
    if ( !Src[1] )
      v5 = nullptr;
    if ( v5 )
    {
      if ( v12 )
        v6 = v12 - 1;
      else
        v6 = 0;
      if ( (unsigned __int64)&v5[v6 + 1] <= v13 )
      {
        v7 = Block;
      }
      else
      {
        v7 = sub_14005ABE0((__int64)&Block, Block, (unsigned __int64)&v5[v6 + 1], 1u);
        Block = v7;
      }
      v12 = (__int64)&v5[v6 + 1];
      v5[(_QWORD)v7 + v6] = 0;
      memcpy((char *)Block + v6, Src[0], (size_t)v5);
    }
    v8 = Block;
    if ( !v12 || (v3 = (const char *)Block) != nullptr )
      v9 = strlen(v3);
    else
      v9 = 0;
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    if ( v9 )
    {
      sub_140001810(a2 + 8, v3, v9);
      v8 = Block;
    }
    if ( v8 )
    {
      v12 = 0;
      j_free(v8);
    }
  }
  if ( Src[0] )
  {
    Src[1] = nullptr;
    j_free(Src[0]);
  }
  return 0;
}
