/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003FD60
// Address: 0x000000014003FD60

//----- (000000014003FD60) ----------------------------------------------------
__int64 __fastcall sub_14003FD60(void *Src, unsigned __int64 a2)
{
  size_t v3; // rbx
  void *v4; // rax
  size_t v5; // rdx
  unsigned __int8 *v6; // rcx
  __int64 v7; // rbx
  void *Block; // [rsp+20h] [rbp-28h] BYREF
  size_t v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  if ( (unsigned __int64)Src > a2 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(1833);
  }
  v3 = a2 - (_QWORD)Src;
  v4 = nullptr;
  Block = nullptr;
  v5 = 0;
  v10 = 0;
  v11 = 0;
  if ( v3 )
  {
    if ( v3 != -1 )
    {
      v4 = sub_14005ABE0((__int64)&Block, nullptr, v3 + 1, 1u);
      Block = v4;
    }
    v10 = v3 + 1;
    memcpy(v4, Src, v3);
    *((_BYTE *)Block + v3) = 0;
    v5 = v10;
    v4 = Block;
  }
  v6 = (unsigned __int8 *)Str1;
  if ( v5 )
    v6 = (unsigned __int8 *)v4;
  v7 = sub_140061980(v6);
  if ( Block )
  {
    v10 = 0;
    j_free(Block);
  }
  return v7;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
