__int64 __fastcall std::list<google_breakpad::MappingEntry>::push_back(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = std::list<google_breakpad::MappingEntry>::end(a1);
  return std::list<google_breakpad::MappingEntry>::_M_insert<google_breakpad::MappingEntry const&>(a1, v2, a2);
}

