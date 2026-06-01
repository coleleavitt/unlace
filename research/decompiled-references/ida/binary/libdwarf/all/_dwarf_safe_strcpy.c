__int64 __fastcall dwarf_safe_strcpy(_BYTE *a1, unsigned __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // rcx

  result = a4 + 1;
  if ( a4 + 1 < a2 )
  {
    v5 = (unsigned __int64)&a3[a4];
  }
  else
  {
    v5 = (unsigned __int64)&a3[a2 - 1];
    if ( !a2 )
      return result;
  }
  for ( result = *a3; (unsigned __int64)a3 < v5; result = *a3 )
  {
    if ( !(_BYTE)result )
      break;
    ++a3;
    *a1++ = result;
  }
  *a1 = 0;
  return result;
}

