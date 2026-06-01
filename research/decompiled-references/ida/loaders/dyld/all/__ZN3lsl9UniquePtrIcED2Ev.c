lsl::AllocationMetadata **__fastcall lsl::UniquePtr<char>::~UniquePtr(lsl::AllocationMetadata **a1, void *a2)
{
  lsl::AllocationMetadata *v3; // x0
  lsl::AllocationMetadata *v4; // x20

  v3 = *a1;
  if ( v3 )
  {
    v4 = (lsl::AllocationMetadata *)lsl::AllocationMetadata::getForPointer(v3, a2);
    if ( (unsigned int)lsl::AllocationMetadata::type(v4) != 1 )
      lsl::UniquePtr<char>::~UniquePtr();
    lsl::AllocationMetadata::setType(v4, 0);
    lsl::AllocationMetadata::freeObject(v4);
  }
  return a1;
}
