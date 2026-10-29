lsl::AllocationMetadata **__fastcall lsl::UniquePtr<dyld4::Atlas::SharedCache>::~UniquePtr(
        lsl::AllocationMetadata **a1,
        void *a2)
{
  lsl::AllocationMetadata *v3; // x0
  lsl::AllocationMetadata *v4; // x20
  lsl::AllocationMetadata *v5; // x21

  v3 = *a1;
  if ( v3 )
  {
    v4 = (lsl::AllocationMetadata *)lsl::AllocationMetadata::getForPointer(v3, a2);
    if ( (unsigned int)lsl::AllocationMetadata::type(v4) != 1 )
      lsl::UniquePtr<dyld4::Atlas::SharedCache>::~UniquePtr();
    v5 = *a1;
    lsl::SharedPtr<dyld4::Atlas::Mapper>::~SharedPtr((char *)*a1 + 144);
    dyld4::Atlas::Mapper::Pointer<dyld_cache_header>::~Pointer((__int64)v5 + 112);
    dyld4::FileRecord::~FileRecord((lsl::AllocationMetadata *)((char *)v5 + 8));
    lsl::AllocationMetadata::setType(v4, 0);
    lsl::AllocationMetadata::freeObject(v4);
  }
  return a1;
}
