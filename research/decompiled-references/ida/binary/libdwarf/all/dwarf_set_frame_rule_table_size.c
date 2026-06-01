__int64 __fastcall dwarf_set_frame_rule_table_size(__int64 a1, unsigned __int16 a2)
{
  __int64 result; // rax

  if ( a2 < 0xBDu )
    a2 = 189;
  result = *(unsigned __int16 *)(a1 + 8320);
  *(_QWORD *)(a1 + 8320) = a2;
  return result;
}

