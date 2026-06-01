__int64 __fastcall std::string::_M_check_length(__int64 a1, __int64 a2, unsigned __int64 a3, const char *a4)
{
  __int64 result; // rax

  result = 0x3FFFFFFFFFFFFFFFLL;
  if ( a2 + 0x3FFFFFFFFFFFFFFFLL - *(_QWORD *)(a1 + 8) < a3 )
    std::__throw_length_error(a4);
  return result;
}
