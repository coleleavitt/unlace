__int64 __fastcall dwarf_get_dwp_extra_offset(_QWORD *a1, unsigned int a2, _QWORD *a3)
{
  __int64 result; // rax

  if ( !*a1 )
    return 0;
  result = a1[a2 + 3];
  *a3 = a1[a2 + 15];
  return result;
}

