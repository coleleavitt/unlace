__int64 __fastcall sub_14A70(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned __int16 v4; // cx
  __int64 result; // rax
  __int64 v6; // r13

  v4 = *(_WORD *)(a2 + 54);
  if ( *(_BYTE *)(a2 + 52) & 0xF | (*(_BYTE *)(a2 + 52) >> 4) || *(_QWORD *)(a2 + 72) )
  {
    if ( v4 == 0xFF03 )
    {
      *(_WORD *)(a2 + 54) = -14;
      return 0;
    }
    if ( v4 > 0xFF03u )
    {
      if ( v4 == 0xFF04 )
      {
        *(_WORD *)(a2 + 54) = 0;
        return 0;
      }
      return 0xFFFFFFFFLL;
    }
    if ( (unsigned __int16)(v4 + 256) > 2u )
      return 0xFFFFFFFFLL;
    v6 = *(_QWORD *)(a2 + 80);
    if ( !(unsigned __int8)is_mapped(v6) )
      return 0;
    if ( *a3 )
      set_name(v6, a3, 7168);
    if ( *(_WORD *)(a2 + 54) == 0xFF01 )
    {
      create_insn(v6, 0);
      auto_mark_range(v6, v6 + 1, 20);
      auto_mark_range(v6, v6 + 1, 30);
    }
    if ( (*(_BYTE *)(a1 + 346) & 0x20) != 0 )
      set_abits(v6, 1024);
    return 1;
  }
  result = 0xFFFFFFFFLL;
  if ( v4 > 0xFEFFu )
  {
    *(_BYTE *)(a2 + 93) = 3;
    return 1;
  }
  return result;
}

