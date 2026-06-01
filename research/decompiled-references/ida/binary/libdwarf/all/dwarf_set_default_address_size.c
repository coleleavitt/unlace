__int64 __fastcall dwarf_set_default_address_size(__int64 a1, char a2)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 280);
  if ( (unsigned __int8)(a2 - 1) <= 7u )
    *(_BYTE *)(a1 + 280) = a2;
  return result;
}

