__int64 __fastcall dwarf_get_version_of_die(__int64 a1, _WORD *a2, _WORD *a3)
{
  __int64 v3; // rax

  if ( !a1 )
    return 1;
  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 )
    return 1;
  *a2 = *(_WORD *)(v3 + 18);
  *a3 = *(unsigned __int8 *)(v3 + 16);
  return 0;
}

