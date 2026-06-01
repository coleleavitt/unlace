_QWORD *__fastcall lsl::SharedPtr<dyld4::Atlas::Mapper>::SharedPtr(_QWORD *a1, lsl::AllocationMetadata *this)
{
  unsigned __int64 *v3; // x20

  *a1 = this;
  if ( this )
  {
    v3 = (unsigned __int64 *)lsl::AllocationMetadata::getForPointer(this, this);
    if ( (unsigned int)lsl::AllocationMetadata::type((lsl::AllocationMetadata *)v3) )
      lsl::AllocationMetadata::incrementRefCount((__int64)v3);
    else
      lsl::AllocationMetadata::setType(v3, 2u);
  }
  return a1;
}
