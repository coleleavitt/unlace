__int64 __fastcall std::_Vector_base<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::_M_deallocate(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  if ( a2 )
    return std::allocator_traits<google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::deallocate(a1, a2, a3);
  return result;
}

