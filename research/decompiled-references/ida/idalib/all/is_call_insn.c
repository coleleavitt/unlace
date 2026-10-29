char __fastcall is_call_insn(__int64 a1)
{
  int v1; // eax

  v1 = sub_3792E0(0x22u, a1);
  if ( v1 )
    return v1 > 0;
  else
    return has_insn_feature(*(unsigned __int16 *)(a1 + 24), (_BYTE *)&dword_0 + 2);
}
