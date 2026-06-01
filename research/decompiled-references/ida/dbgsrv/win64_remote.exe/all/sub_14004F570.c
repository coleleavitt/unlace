/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004F570
// Address: 0x000000014004F570

//----- (000000014004F570) ----------------------------------------------------
char __fastcall sub_14004F570(__int64 a1, __int64 a2)
{
  void *v4; // rbx
  unsigned __int64 v5; // r14
  int v6; // r15d
  const void *v7; // rbp
  size_t v8; // rax
  size_t v9; // rdi
  unsigned __int64 v10; // rbx
  void *v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int8 *v14; // rbx
  __int64 v15; // rdi
  int v16; // r8d
  int v17; // eax
  void *Block; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-40h]
  unsigned __int64 v21; // [rsp+40h] [rbp-38h]

  v4 = nullptr;
  Block = nullptr;
  v5 = 0;
  v21 = 0;
  v6 = *(_DWORD *)(a1 + 24);
  v20 = 0;
  if ( v6 == 25 )
  {
LABEL_17:
    v17 = -1;
    if ( v6 == 25 )
      goto LABEL_19;
    goto LABEL_18;
  }
  v7 = (const void *)(a1 + 1062);
  if ( a1 == -1062 || (v8 = strlen((const char *)(a1 + 1062)), (v9 = v8) == 0) )
  {
    v12 = 0;
    v20 = 0;
  }
  else
  {
    v10 = v8 + 1;
    v11 = nullptr;
    if ( v10 )
    {
      v11 = sub_14005ABE0((__int64)&Block, nullptr, v10, 1u);
      Block = v11;
    }
    v20 = v10;
    memcpy(v11, v7, v9);
    *((_BYTE *)Block + v9) = 0;
    v5 = v21;
    v12 = v20;
    v4 = Block;
  }
  v13 = v12 - 1;
  if ( !v12 )
    v13 = 0;
  if ( v13 + 2 > v5 )
  {
    v4 = sub_14005ABE0((__int64)&Block, v4, v13 + 2, 1u);
    Block = v4;
  }
  v20 = v13 + 2;
  *((_BYTE *)v4 + v13 + 1) = 0;
  *((_BYTE *)Block + v13) = 124;
  v14 = (unsigned __int8 *)(a1 + 38);
  if ( !*(_WORD *)(a1 + 36) )
  {
    v4 = Block;
    goto LABEL_17;
  }
  v15 = *(unsigned __int16 *)(a1 + 36);
  do
  {
    v16 = *v14++;
    sub_140024520((__int64)&Block, "%02X", v16);
    --v15;
  }
  while ( v15 );
  v4 = Block;
LABEL_18:
  v17 = *(_DWORD *)(a1 + 32);
LABEL_19:
  sub_140002FB0(a2, "%s|%d|%d|%s", *(const char **)a1, *(_DWORD *)(a1 + 24), v17, (const char *)v4);
  if ( Block )
  {
    v20 = 0;
    j_free(Block);
  }
  return 1;
}
