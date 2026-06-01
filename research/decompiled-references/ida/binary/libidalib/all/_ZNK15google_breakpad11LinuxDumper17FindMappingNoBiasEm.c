__int64 __fastcall google_breakpad::LinuxDumper::FindMappingNoBias(
        google_breakpad::LinuxDumper *this,
        unsigned __int64 a2)
{
  unsigned __int64 i; // [rsp+18h] [rbp-8h]

  for ( i = 0;
        i < std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::size((char *)this + 160);
        ++i )
  {
    if ( a2 >= *(_QWORD *)(*(_QWORD *)std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::operator[](
                                        (char *)this + 160,
                                        i)
                         + 16LL)
      && a2 < *(_QWORD *)(*(_QWORD *)std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::operator[](
                                       (char *)this + 160,
                                       i)
                        + 24LL) )
    {
      return *(_QWORD *)std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::operator[](
                          (char *)this + 160,
                          i);
    }
  }
  return 0;
}

