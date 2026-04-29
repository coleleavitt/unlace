bool __fastcall lsl::AllocationMetadata::decrementRefCount(atomic_uint *this)
{
  return atomic_fetch_add(this + 2, 0xFFFFFFFF) == 0;
}
