bool __fastcall std::string::_M_check_length(std::string *this, __int64 a2, unsigned __int64 a3, const char *a4)
{
  __int64 v4; // rbx
  bool result; // al

  v4 = std::string::max_size(this);
  result = a3 > v4 + a2 - std::string::size(this);
  if ( result )
    std::__throw_length_error(a4);
  return result;
}
