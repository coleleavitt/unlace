bool __fastcall std::operator==<google_breakpad::MappingInfo **>(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = std::move_iterator<google_breakpad::MappingInfo **>::base(a1);
  return v2 == std::move_iterator<google_breakpad::MappingInfo **>::base(a2);
}

