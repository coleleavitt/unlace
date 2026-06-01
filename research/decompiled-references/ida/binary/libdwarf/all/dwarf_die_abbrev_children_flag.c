__int64 __fastcall dwarf_die_abbrev_children_flag(__int64 a1, _WORD *a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  if ( !a1 )
    return 1;
  v2 = *(_QWORD *)(a1 + 8);
  result = 1;
  if ( v2 )
  {
    *a2 = *(_WORD *)(v2 + 10);
    return 0;
  }
  return result;
}

