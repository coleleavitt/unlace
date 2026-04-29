_QWORD *__fastcall lsl::UniquePtr<dyld4::Atlas::Image>::UniquePtr<dyld4::Atlas::Image>(
        _QWORD *a1,
        lsl::AllocationMetadata *this)
{
  lsl::AllocationMetadata *v3; // x20

  *a1 = this;
  if ( this )
  {
    v3 = (lsl::AllocationMetadata *)lsl::AllocationMetadata::getForPointer(this, this);
    if ( (unsigned int)lsl::AllocationMetadata::type(v3) )
      lsl::UniquePtr<dyld4::Atlas::Image>::UniquePtr<dyld4::Atlas::Image>();
    lsl::AllocationMetadata::setType((unsigned __int64 *)v3, 1u);
  }
  return a1;
}
