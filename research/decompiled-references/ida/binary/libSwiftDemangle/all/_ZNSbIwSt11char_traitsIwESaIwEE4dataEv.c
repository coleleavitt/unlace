__int64 __fastcall std::wstring::data(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *(int *)(*a1 - 8) >= 0 )
  {
    std::wstring::_M_leak_hard();
    return *a1;
  }
  return result;
}

