bool __fastcall std::operator==<google_breakpad::ElfSegment *>(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = std::move_iterator<google_breakpad::ElfSegment *>::base(a1);
  return v2 == std::move_iterator<google_breakpad::ElfSegment *>::base(a2);
}

