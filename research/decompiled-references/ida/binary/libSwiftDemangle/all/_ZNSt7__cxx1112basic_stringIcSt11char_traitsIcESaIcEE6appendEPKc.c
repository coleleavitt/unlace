_QWORD *__fastcall std::string::append(_QWORD *a1, char *a2)
{
  unsigned __int64 v2; // rdx

  v2 = strlen(a2);
  if ( 0x3FFFFFFFFFFFFFFFLL - a1[1] < v2 )
    std::__throw_length_error("basic_string::append");
  return std::string::_M_append(a1, a2, v2);
}

