__int64 sub_21360()
{
  unsigned int v0; // ebp

  if ( (unsigned __int8)getinf_flag() )
  {
    if ( (unsigned __int8)get_byte() == 72 && (unsigned __int16)get_word() == 3387 && (unsigned __int8)get_byte() == 117 )
      return 1;
  }
  else if ( (unsigned __int16)get_word() == 3387 )
  {
    return 1;
  }
  v0 = 0;
  if ( get_ea_name() > 0 )
    LOBYTE(v0) = strstr(0, "security_check_cookie") != 0;
  return v0;
}
