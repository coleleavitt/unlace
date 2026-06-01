char __fastcall std::string::_Rep::_M_dispose(volatile signed __int32 *a1, __int64 a2)
{
  char result; // al

  result = a1 != (volatile signed __int32 *)std::string::_Rep::_S_empty_rep((std::string::_Rep *)a1);
  if ( result )
  {
    result = (int)sub_1A36EA(a1 + 4, 0xFFFFFFFF) <= 0;
    if ( result )
      return std::string::_Rep::_M_destroy(a1, a2);
  }
  return result;
}

