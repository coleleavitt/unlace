bool __fastcall std::string::_M_disjunct(unsigned __int64 *a1, unsigned __int64 a2)
{
  bool result; // al

  result = 1;
  if ( *a1 <= a2 )
    return a2 > a1[1] + *a1;
  return result;
}

