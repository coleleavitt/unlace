unsigned __int64 __fastcall std::string::_M_limit(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 result; // rax

  result = *(_QWORD *)(a1 + 8) - a2;
  if ( result > a3 )
    return a3;
  return result;
}

