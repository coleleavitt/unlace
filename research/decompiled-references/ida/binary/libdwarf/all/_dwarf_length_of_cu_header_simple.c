__int64 __fastcall dwarf_length_of_cu_header_simple(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  v2 = *(unsigned __int8 *)(a1 + 232);
  result = 2 * (int)v2 + 3;
  if ( !a2 )
    result += v2 + 8;
  return result;
}

