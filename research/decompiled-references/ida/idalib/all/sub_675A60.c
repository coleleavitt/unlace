__int64 __fastcall sub_675A60(char *s, __int64 a2, size_t a3)
{
  size_t v4; // rbx
  __int64 result; // rax

  if ( !a2 )
  {
    v4 = a3;
    if ( a3 >= strlen(s) )
      return 0;
    return is_valid_cp((unsigned __int8)s[v4], 2, 0);
  }
  result = is_valid_cp((unsigned __int8)s[a2 - 1], 2, 0);
  if ( !(_BYTE)result )
  {
    v4 = a3 + a2;
    if ( a3 + a2 >= strlen(s) )
      return 0;
    return is_valid_cp((unsigned __int8)s[v4], 2, 0);
  }
  return result;
}
