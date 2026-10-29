char __fastcall std::vector<int,google_breakpad::PageStdAllocator<int>>::resize(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  char result; // al

  if ( a2 <= std::vector<int,google_breakpad::PageStdAllocator<int>>::size(a1) )
  {
    result = a2 < std::vector<int,google_breakpad::PageStdAllocator<int>>::size(a1);
    if ( result )
      return std::vector<int,google_breakpad::PageStdAllocator<int>>::_M_erase_at_end(a1, *(_QWORD *)(a1 + 24) + 4 * a2);
  }
  else
  {
    v2 = std::vector<int,google_breakpad::PageStdAllocator<int>>::size(a1);
    return std::vector<int,google_breakpad::PageStdAllocator<int>>::_M_default_append(a1, a2 - v2);
  }
  return result;
}

