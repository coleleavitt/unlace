/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140030610
// Address: 0x0000000140030610

//----- (0000000140030610) ----------------------------------------------------
__int64 __fastcall sub_140030610(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rsi
  const char *v5; // rdi
  __int64 v6; // r14
  const char *v7; // rdx
  const char *v8; // rcx
  size_t v9; // rax
  void *Block; // [rsp+20h] [rbp-58h] BYREF
  __int64 v12; // [rsp+28h] [rbp-50h]
  __int64 v13; // [rsp+30h] [rbp-48h]
  char v14[8]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v15; // [rsp+40h] [rbp-38h]
  __int64 v16; // [rsp+50h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 96);
  v2 = *(_QWORD *)(v1 + 88);
  v3 = v2 + 56LL * *(_QWORD *)(v1 + 96);
  v4 = a1 + 32;
  v5 = Str1;
  if ( v2 == v3 )
  {
LABEL_9:
    if ( *(_QWORD *)(v4 + 8) )
      v5 = *(const char **)v4;
    Block = nullptr;
    v12 = 0;
    v13 = 0;
    if ( v5 )
    {
      v9 = strlen(v5);
      sub_140001810((__int64)&Block, v5, v9);
    }
    v14[0] = 2;
    v16 = 0;
    v15 = 0u;
    sub_140034A40(v1 + 88, (unsigned __int64)&Block);
    sub_140029390((__int64)v14);
    if ( Block )
    {
      v12 = 0;
      j_free(Block);
    }
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 40);
    while ( 1 )
    {
      v7 = Str1;
      if ( v6 )
        v7 = *(const char **)v4;
      v8 = Str1;
      if ( *(_QWORD *)(v2 + 8) )
        v8 = *(const char **)v2;
      if ( !strcmp(v8, v7) )
        break;
      v2 += 56;
      if ( v2 == v3 )
        goto LABEL_9;
    }
  }
  return 0;
}
