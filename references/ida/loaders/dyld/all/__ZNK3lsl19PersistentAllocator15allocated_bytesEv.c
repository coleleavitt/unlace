unsigned __int64 __fastcall lsl::PersistentAllocator::allocated_bytes(lsl::PersistentAllocator *this)
{
  return atomic_load((unsigned __int64 *)this + 27);
}
