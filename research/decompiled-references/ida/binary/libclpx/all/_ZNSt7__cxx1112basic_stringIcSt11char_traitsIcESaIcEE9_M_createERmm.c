__int64 __fastcall std::string::_M_create(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx

  v3 = *a2;
  if ( *a2 < 0 )
    std::__throw_length_error("basic_string::_M_create");
  if ( v3 <= a3 )
    return operator new(v3 + 1);
  v4 = 2 * a3;
  if ( v3 >= v4 )
    return operator new(v3 + 1);
  if ( v4 < 0 )
  {
    *a2 = 0x7FFFFFFFFFFFFFFFLL;
    return operator new(0x8000000000000000LL);
  }
  else
  {
    *a2 = v4;
    return operator new(v4 + 1);
  }
}

