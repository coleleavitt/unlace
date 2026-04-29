lsl::AllocationMetadata **__fastcall dyld4::Atlas::ProcessSnapshot::addImage(_QWORD *a1, __int64 a2)
{
  __int64 v2; // x19
  void *v3; // x1
  lsl::AllocationMetadata *v5; // [xsp+0h] [xbp-90h] BYREF
  _BYTE v6[112]; // [xsp+8h] [xbp-88h] BYREF

  v2 = (__int64)(a1 + 2);
  lsl::Allocator::makeUnique<dyld4::Atlas::Image,dyld4::Atlas::Image>(&v5, *a1, a2);
  lsl::OrderedSet<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>>::insert(
    v2,
    (__int64)&v5,
    (__int64)v6);
  return lsl::UniquePtr<dyld4::Atlas::Image>::~UniquePtr(&v5, v3);
}
