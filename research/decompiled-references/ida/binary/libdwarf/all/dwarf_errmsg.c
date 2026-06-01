const char *__fastcall dwarf_errmsg(_QWORD *a1, const char *a2)
{
  if ( !a1 )
    return "Dwarf_Error is NULL";
  if ( a1[1] )
    return (const char *)dwarfstring_string(a1[1], a2);
  return (const char *)dwarf_errmsg_by_number(*a1);
}

