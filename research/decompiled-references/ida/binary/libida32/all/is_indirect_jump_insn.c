__int64 __fastcall is_indirect_jump_insn(__int64 a1)
{
  __int64 v1; // rax

  v1 = sub_375980(0x26u, a1);
  if ( v1 == 1 )
    return 0;
  if ( v1 == 2 )
    return 1;
  return has_insn_feature(*(unsigned __int16 *)(a1 + 12), 0x4000);
}

