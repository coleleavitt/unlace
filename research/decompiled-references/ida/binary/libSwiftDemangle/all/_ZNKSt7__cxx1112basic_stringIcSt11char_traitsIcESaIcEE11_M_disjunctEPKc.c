__int64 __fastcall std::string::_M_disjunct(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned int v2; // r8d

  v2 = 1;
  if ( *a1 <= a2 )
    LOBYTE(v2) = a1[1] + *a1 < a2;
  return v2;
}

