__int64 __fastcall sub_6A7B40(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  if ( 0x3FFFFFFFFFFFFFFFLL - *(_QWORD *)(a1 + 8) < a3 )
    std::__throw_length_error("basic_string::append");
  return std::string::_M_append();
}

