__int64 __fastcall std::string::append(__int64 a1, const char *a2)
{
  size_t v2; // rax

  v2 = strlen(a2);
  if ( v2 > 0x7FFFFFFFFFFFFFFFLL - *(_QWORD *)(a1 + 8) )
    std::__throw_length_error("basic_string::append");
  return std::string::_M_append(a1, a2, v2);
}

