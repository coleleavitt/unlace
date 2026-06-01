_QWORD *__fastcall sub_A4B8A0(_QWORD *a1, _BYTE *a2, size_t a3)
{
  if ( a3 > 0x7FFFFFFFFFFFFFFFLL - a1[1] )
    std::__throw_length_error("basic_string::append");
  return sub_9CA820(a1, a2, a3);
}

