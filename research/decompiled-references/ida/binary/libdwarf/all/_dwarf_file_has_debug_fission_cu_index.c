_BOOL8 __fastcall dwarf_file_has_debug_fission_cu_index(_QWORD *a1)
{
  _BOOL8 result; // rax

  result = 0;
  if ( a1 )
  {
    if ( *a1 == 3959286781LL )
      return a1[1035] != 0;
  }
  return result;
}

