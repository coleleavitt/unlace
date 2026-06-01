_BOOL8 __fastcall dwarf_file_has_debug_fission_index(_QWORD *a1)
{
  _BOOL8 result; // rax

  result = 0;
  if ( a1 && *a1 == 3959286781LL )
  {
    result = 1;
    if ( !a1[1035] )
      return a1[1036] != 0;
  }
  return result;
}

