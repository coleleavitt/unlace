/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004EE50
// Address: 0x000000014004EE50

//----- (000000014004EE50) ----------------------------------------------------
__int64 __fastcall sub_14004EE50(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rsi
  size_t v6; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  char *v10; // rcx
  __int64 result; // rax
  unsigned int v12; // ebx
  void *Block; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]
  unsigned __int64 v15; // [rsp+30h] [rbp-38h]
  _BYTE Src[5]; // [rsp+38h] [rbp-30h] BYREF
  char v17[3]; // [rsp+3Dh] [rbp-2Bh] BYREF

  v5 = *(_QWORD *)(a1 + 376);
  sub_140054B30((__int64 *)&Block, 55);
  sub_140050870(&Block, a2);
  v6 = sub_14005B4D0(Src, (unsigned __int64)v17, a3) - Src;
  if ( v6 )
  {
    v7 = v14;
    v8 = v14;
    v9 = v6 + v14;
    if ( v6 + v14 < v14 )
      v9 = 0x7FFFFFFFFFFFFFFFLL;
    if ( v9 <= v14 )
    {
      if ( v9 != v14 )
      {
        if ( v9 < v14 )
          v7 = v9;
        v14 = v7;
      }
    }
    else
    {
      if ( v9 <= v15 )
      {
        v10 = (char *)Block;
      }
      else
      {
        v10 = (char *)sub_14005ABE0((__int64)&Block, Block, v9, 1u);
        Block = v10;
        v7 = v14;
      }
      memset(&v10[v7], 0, v9 - v7);
      v14 = v9;
    }
    memcpy((char *)Block + v8, Src, v6);
  }
  if ( !v5 )
    v5 = 192;
  result = sub_140051AF0(v5, (__int64)&Block, 0xFFFFFFFF, 0);
  v12 = result;
  if ( Block )
  {
    v14 = 0;
    j_free(Block);
    return v12;
  }
  return result;
}
