_QWORD *__fastcall lsl::UniquePtr<char const>::UniquePtr<char>(_QWORD *a1, lsl::AllocationMetadata *this)
{
  lsl::AllocationMetadata *v3; // x20

  *a1 = this;
  if ( this )
  {
    v3 = (lsl::AllocationMetadata *)lsl::AllocationMetadata::getForPointer(this, this);
    if ( (unsigned int)lsl::AllocationMetadata::type(v3) )
      lsl::UniquePtr<char const>::UniquePtr<char>();
    lsl::AllocationMetadata::setType(v3, 1);
  }
  return a1;
}
