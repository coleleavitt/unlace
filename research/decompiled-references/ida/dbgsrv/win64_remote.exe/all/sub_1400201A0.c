/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400201A0
// Address: 0x00000001400201A0

//----- (00000001400201A0) ----------------------------------------------------
__int64 __fastcall sub_1400201A0(__int64 a1, __int64 a2)
{
  char *v3; // rbp
  const char *v4; // rbx
  __int8 *v5; // rax
  __int8 *v6; // rsi
  bool v7; // zf
  size_t v8; // rdi
  void *v9; // rax
  size_t v10; // rcx
  void *Block; // [rsp+20h] [rbp-38h] BYREF
  size_t v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+30h] [rbp-28h]

  v3 = (char *)Str1;
  v4 = Str1;
  if ( *(_QWORD *)(a1 + 16) )
    v4 = *(const char **)(a1 + 8);
  v5 = sub_14006CA14((__int64)v4, 0x3Du);
  v6 = v5;
  if ( v5 )
  {
    v8 = v5 - v4;
    v7 = v5 == v4;
    v9 = nullptr;
    Block = nullptr;
    v10 = 0;
    v13 = 0;
    v14 = 0;
    if ( !v7 )
    {
      if ( v8 != -1 )
      {
        v9 = sub_14005ABE0((__int64)&Block, nullptr, v8 + 1, 1u);
        Block = v9;
      }
      v13 = v8 + 1;
      memcpy(v9, v4, v8);
      *((_BYTE *)Block + v8) = 0;
      v10 = v13;
      v9 = Block;
    }
    if ( v10 )
      v3 = (char *)v9;
    *(_QWORD *)(a2 + 8) = sub_14005D770(v3, v6 + 1);
    if ( Block )
    {
      v13 = 0;
      j_free(Block);
    }
  }
  return 0;
}
