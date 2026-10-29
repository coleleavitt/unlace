__int64 __fastcall dwarf_update_chain_list(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 result; // rax

  if ( *a2 )
  {
    result = *a3;
    *(_QWORD *)(*a3 + 16) = a1;
  }
  else
  {
    *a2 = a1;
  }
  *a3 = a1;
  return result;
}

