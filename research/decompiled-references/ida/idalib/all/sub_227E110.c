__int64 __fastcall sub_227E110(unsigned int a1)
{
  unsigned __int16 v1; // dx
  __int64 result; // rax

  v1 = (*__ctype_b_loc())[(unsigned __int8)a1];
  if ( (v1 & 0x100) != 0 )
    return LOBYTE((*__ctype_tolower_loc())[(unsigned __int8)a1]);
  result = a1;
  if ( (v1 & 0x200) != 0 )
    return LOBYTE((*__ctype_toupper_loc())[(unsigned __int8)a1]);
  return result;
}
