/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140034290
// Address: 0x0000000140034290

//----- (0000000140034290) ----------------------------------------------------
void __fastcall sub_140034290(__int64 a1, const char *a2, unsigned int a3)
{
  __int64 v6; // r14
  size_t v7; // rsi
  void *v8; // rax
  void *Block[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h]

  v6 = *(_QWORD *)(a1 + 184);
  if ( v6 )
  {
    *(_OWORD *)Block = 0;
    v10 = 0;
    if ( a2 )
    {
      v7 = strlen(a2);
      v8 = nullptr;
      if ( v7 != -1 )
      {
        v8 = sub_14005ABE0((__int64)Block, nullptr, v7 + 1, 1u);
        Block[0] = v8;
      }
      Block[1] = (void *)(v7 + 1);
      memcpy(v8, a2, v7);
      *((_BYTE *)Block[0] + v7) = 0;
    }
    sub_14002C810(v6, *(_DWORD *)(a1 + 200), (__int64)Block);
    if ( Block[0] )
    {
      Block[1] = nullptr;
      j_free(Block[0]);
    }
    sub_14002C360(*(_QWORD *)(a1 + 184), *(_DWORD *)(a1 + 200), a3);
  }
}
