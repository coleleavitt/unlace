__int64 __fastcall lsl::AllocationMetadata::incrementRefCount(__int64 this)
{
  atomic_fetch_add_explicit((atomic_uint *volatile)(this + 8), 1u, memory_order_relaxed);
  return this;
}
