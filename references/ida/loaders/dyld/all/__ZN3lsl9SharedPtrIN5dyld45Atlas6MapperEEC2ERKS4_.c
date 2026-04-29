lsl::AllocationMetadata **__fastcall lsl::SharedPtr<dyld4::Atlas::Mapper>::SharedPtr(
        lsl::AllocationMetadata **a1,
        lsl::AllocationMetadata **a2)
{
  lsl::AllocationMetadata *v3; // x0
  __int64 v4; // x0

  v3 = *a2;
  *a1 = *a2;
  if ( v3 )
  {
    v4 = lsl::AllocationMetadata::getForPointer(v3, a2);
    lsl::AllocationMetadata::incrementRefCount(v4);
  }
  return a1;
}
