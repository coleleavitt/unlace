// Alternative name is '_ZNSt12_Vector_baseI18MDMemoryDescriptorN15google_breakpad16PageStdAllocatorIS0_EEED2Ev'
__int64 __fastcall std::_Vector_base<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::~_Vector_base(
        __int64 a1)
{
  return std::_Vector_base<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::_M_deallocate(
           a1,
           *(_QWORD *)(a1 + 24),
           (__int64)(*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 24)) >> 4);
}

