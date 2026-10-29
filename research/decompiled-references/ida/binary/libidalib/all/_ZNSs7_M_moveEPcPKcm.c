__int64 __fastcall std::string::_M_move(std::string *this, char *a2, const char *a3)
{
  if ( a3 == (_BYTE *)&dword_0 + 1 )
    return std::char_traits<char>::assign(this, a2);
  else
    return std::char_traits<char>::move(this, a2, a3);
}

