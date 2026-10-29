__int64 __fastcall std::string::data(std::string *this)
{
  __int64 result; // rax

  result = *(_QWORD *)this;
  if ( *(int *)(*(_QWORD *)this - 8LL) >= 0 )
  {
    std::string::_M_leak_hard(this);
    return *(_QWORD *)this;
  }
  return result;
}

