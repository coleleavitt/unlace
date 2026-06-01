__int64 __fastcall sub_6A7840(__int64 a1, const char *a2)
{
  if ( 0x3FFFFFFFFFFFFFFFLL - *(_QWORD *)(a1 + 8) < strlen(a2) )
    std::__throw_length_error("basic_string::append");
  return std::string::_M_append();
}

