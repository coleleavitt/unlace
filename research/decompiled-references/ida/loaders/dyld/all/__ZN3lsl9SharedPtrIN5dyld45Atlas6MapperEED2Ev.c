dyld4::Atlas::Mapper **__fastcall lsl::SharedPtr<dyld4::Atlas::Mapper>::~SharedPtr(dyld4::Atlas::Mapper **a1, void *a2)
{
  lsl::AllocationMetadata *v3; // x0
  lsl::AllocationMetadata *v4; // x20

  v3 = *a1;
  if ( v3 )
  {
    v4 = (lsl::AllocationMetadata *)lsl::AllocationMetadata::getForPointer(v3, a2);
    if ( lsl::AllocationMetadata::decrementRefCount((atomic_uint *)v4) )
    {
      dyld4::Atlas::Mapper::~Mapper(*a1);
      lsl::AllocationMetadata::freeObject(v4);
    }
  }
  return a1;
}
