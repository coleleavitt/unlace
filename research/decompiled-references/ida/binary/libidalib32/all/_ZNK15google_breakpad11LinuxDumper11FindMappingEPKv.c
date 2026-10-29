__int64 __fastcall google_breakpad::LinuxDumper::FindMapping(google_breakpad::LinuxDumper *this, char *a2)
{
  unsigned __int64 v4; // [rsp+18h] [rbp-28h]
  unsigned __int64 i; // [rsp+28h] [rbp-18h]

  for ( i = 0;
        i < std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::size((char *)this + 160);
        ++i )
  {
    v4 = **(_QWORD **)std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::operator[](
                        (char *)this + 160,
                        i);
    if ( (unsigned __int64)a2 >= v4
      && (unsigned __int64)&a2[-v4] < *(_QWORD *)(*(_QWORD *)std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::operator[](
                                                               (char *)this + 160,
                                                               i)
                                                + 8LL) )
    {
      return *(_QWORD *)std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::operator[](
                          (char *)this + 160,
                          i);
    }
  }
  return 0;
}

