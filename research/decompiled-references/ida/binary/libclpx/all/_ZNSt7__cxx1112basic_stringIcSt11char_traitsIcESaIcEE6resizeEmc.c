unsigned __int64 __fastcall std::string::resize(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  result = a1[1];
  if ( result < a2 )
    return std::string::_M_replace_aux();
  if ( result > a2 )
  {
    result = *a1;
    a1[1] = a2;
    *(_BYTE *)(result + a2) = 0;
  }
  return result;
}

