std::string *__fastcall std::string::_M_replace_safe(
        std::string *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char *a4,
        const char *a5)
{
  __int64 v5; // rax

  std::string::_M_mutate(this, a2, a3, (unsigned __int64)a5);
  if ( a5 )
  {
    v5 = std::string::_M_data(this);
    std::string::_M_copy((std::string *)(v5 + a2), a4, a5);
  }
  return this;
}
