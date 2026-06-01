int dwarf_get_address_size(Dwarf_Debug a1, Dwarf_Half *a2, Dwarf_Error *a3)
{
  if ( a2 )
    return *(unsigned __int8 *)(*((_QWORD *)a2 + 2) + 32LL);
  else
    return *((unsigned __int8 *)a1 + 280);
}

