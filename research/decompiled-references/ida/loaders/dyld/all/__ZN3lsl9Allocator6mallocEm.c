__int64 __fastcall lsl::Allocator::malloc(lsl::Allocator *this, unsigned __int64 a2)
{
  return lsl::Allocator::aligned_alloc(this, 0x10u, a2);
}
