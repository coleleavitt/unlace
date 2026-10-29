__int64 __fastcall lsl::AllocationMetadata::freeObject(lsl::AllocationMetadata *this)
{
  return lsl::Allocator::free(this, (char *)this + 16);
}
