unsigned __int64 __fastcall sub_22400(__int64 a1, int a2, __int64 a3, __int64 a4, int a5)
{
  unsigned __int64 v7; // [rsp+28h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  if ( ((a2 & 0x600) == 0
     || (a2 & 0x600) == 0x400
     && (((a2 & 0xF0000000) - 1342177280LL) & 0xFFFFFFFFE0000000LL) != 0
     && (((unsigned int)get_dtype_flag() ^ a2) & 0xF0000000) != 0)
    && (!(unsigned __int8)get_fixup() || a5 == (unsigned int)calc_fixup_size()) )
  {
    insn_create_op_data();
  }
  return v7 - __readfsqword(0x28u);
}
