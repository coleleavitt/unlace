_QWORD *__fastcall lsl::UniquePtr<std::byte>::UniquePtr<std::byte>(_QWORD *a1, lsl::AllocationMetadata *this)
{
  lsl::AllocationMetadata *v3; // x20

  *a1 = this;
  if ( this )
  {
    v3 = (lsl::AllocationMetadata *)lsl::AllocationMetadata::getForPointer(this, this);
    if ( (unsigned int)lsl::AllocationMetadata::type(v3) )
      lsl::UniquePtr<std::byte>::UniquePtr<std::byte>();
    lsl::AllocationMetadata::setType((unsigned __int64 *)v3, 1u);
  }
  return a1;
}
