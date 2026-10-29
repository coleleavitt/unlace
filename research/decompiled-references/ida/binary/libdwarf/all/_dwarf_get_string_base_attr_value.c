__int64 __fastcall dwarf_get_string_base_attr_value(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax

  v3 = 0;
  if ( *(_DWORD *)(a2 + 464) )
    v3 = *(_QWORD *)(a2 + 472);
  *a3 = v3;
  return 0;
}

