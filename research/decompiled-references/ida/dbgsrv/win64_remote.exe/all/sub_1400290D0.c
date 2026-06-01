/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400290D0
// Address: 0x00000001400290D0

//----- (00000001400290D0) ----------------------------------------------------
__int64 __fastcall sub_1400290D0(__int64 a1, char *a2)
{
  size_t v4; // rsi
  void *v5; // rax
  unsigned int v6; // ebx
  void *Block[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  if ( !a1 || *(_BYTE *)a1 != 5 )
    return sub_1400640B0(0x5FCu);
  *(_OWORD *)Block = 0;
  v9 = 0;
  if ( a2 )
  {
    v4 = strlen(a2);
    v5 = nullptr;
    if ( v4 != -1 )
    {
      v5 = sub_14005ABE0((__int64)Block, nullptr, v4 + 1, 1u);
      Block[0] = v5;
    }
    Block[1] = (void *)(v4 + 1);
    memcpy(v5, a2, v4);
    *((_BYTE *)Block[0] + v4) = 0;
  }
  if ( sub_140024EA0(*(__int64 **)(a1 + 8), (__int64)Block) )
  {
    v6 = 0;
  }
  else
  {
    sub_140063F70(0, a2);
    v6 = sub_1400640B0(0x602u);
  }
  if ( Block[0] )
  {
    Block[1] = nullptr;
    j_free(Block[0]);
  }
  return v6;
}
