/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001D7A0
// Address: 0x000000014001D7A0

//----- (000000014001D7A0) ----------------------------------------------------
void __fastcall sub_14001D7A0(__int64 a1, __int64 a2)
{
  int v3; // eax
  const char *v4; // rsi
  size_t v5; // rax
  size_t v6; // rbp
  void *v7; // rax
  char *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rsi
  char *v11; // r14
  void *Block[2]; // [rsp+20h] [rbp-448h] BYREF
  __int64 v13; // [rsp+30h] [rbp-438h]
  char Src[1024]; // [rsp+40h] [rbp-428h] BYREF

  if ( (unsigned __int8)sub_14001E400(a2, Src, 1024) && !*(_DWORD *)(a2 + 32) )
    *(_DWORD *)(a2 + 32) = 8;
  v3 = *(_DWORD *)(a2 + 32);
  if ( v3 == 4 )
  {
    v4 = "[32]";
  }
  else
  {
    v4 = "[x]";
    if ( v3 == 8 )
      v4 = "[64]";
  }
  v5 = strlen(v4);
  if ( v5 )
    sub_140001810(a2 + 40, v4, v5);
  else
    *(_QWORD *)(a2 + 48) = 0;
  if ( *(_QWORD *)(a2 + 48) > 1u )
    sub_140004830(a2 + 40, 32);
  *(_OWORD *)Block = 0;
  v13 = 0;
  v6 = strlen(Src);
  v7 = nullptr;
  if ( v6 != -1 )
  {
    v7 = sub_14005ABE0((__int64)Block, nullptr, v6 + 1, 1u);
    Block[0] = v7;
  }
  Block[1] = (void *)(v6 + 1);
  memcpy(v7, Src, v6);
  *((_BYTE *)Block[0] + v6) = 0;
  v8 = (char *)Block[1] - 1;
  if ( !Block[1] )
    v8 = nullptr;
  if ( v8 )
  {
    v9 = *(_QWORD *)(a2 + 48);
    v10 = v9 - 1;
    if ( !v9 )
      v10 = 0;
    v11 = &v8[v10 + 1];
    if ( (unsigned __int64)v11 > *(_QWORD *)(a2 + 56) )
      *(_QWORD *)(a2 + 40) = sub_14005ABE0(a2 + 40, *(void **)(a2 + 40), (unsigned __int64)&v8[v10 + 1], 1u);
    *(_QWORD *)(a2 + 48) = v11;
    v8[v10 + *(_QWORD *)(a2 + 40)] = 0;
    memcpy((void *)(v10 + *(_QWORD *)(a2 + 40)), Block[0], (size_t)v8);
  }
  if ( Block[0] )
  {
    Block[1] = nullptr;
    j_free(Block[0]);
  }
}
