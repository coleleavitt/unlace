/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140031750
// Address: 0x0000000140031750

//----- (0000000140031750) ----------------------------------------------------
__int64 __fastcall sub_140031750(__int64 a1)
{
  size_t v3; // r8
  const char *v4; // rdx
  void *Block; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  if ( *(_WORD *)(a1 + 56) == 3 )
    goto LABEL_15;
  if ( *(_WORD *)(a1 + 56) != 4 )
  {
    if ( *(_WORD *)(a1 + 56) != 5 )
    {
      if ( *(_WORD *)(a1 + 56) == 7 )
      {
        sub_1400347C0(a1, 210);
        sub_14002CB40(*(void ***)(a1 + 192), (const void *)(a1 + 80), 0x10u);
        *(_DWORD *)(a1 + 200) += 16;
        return 0;
      }
      else
      {
        if ( *(_WORD *)(a1 + 56) != 8 )
        {
          if ( byte_1400CB61C )
            __debugbreak();
          sub_14005A480(275);
        }
        sub_1400347C0(a1, 211);
        sub_140034490(a1, *(_QWORD *)(a1 + 80));
        return 0;
      }
    }
LABEL_15:
    sub_140034550(a1, *(_QWORD *)(a1 + 64));
    return 0;
  }
  Block = nullptr;
  v6 = 0;
  v7 = 0;
  sub_140032B60((__int64)&Block, a1 + 32);
  v3 = v6 - 1;
  if ( !v6 )
    v3 = 0;
  v4 = Str1;
  if ( v6 )
    v4 = (const char *)Block;
  sub_140034980(a1, v4, v3);
  if ( Block )
  {
    v6 = 0;
    j_free(Block);
  }
  return 0;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
