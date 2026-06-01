_QWORD *__fastcall std::string::append(_QWORD *a1, _BYTE *a2, size_t a3)
{
  if ( a3 > 0x3FFFFFFFFFFFFFFFLL - a1[1] )
    std::__throw_length_error("basic_string::append");
  return std::string::_M_append(a1, a2, a3);
}

