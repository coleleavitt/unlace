__int64 __fastcall lsl::Allocator::persistentAllocator(lsl::MemoryManager *a1)
{
  __int64 v2; // x1
  __int64 v4[2]; // [xsp+0h] [xbp-20h] BYREF

  v4[0] = lsl::MemoryManager::vm_allocate_bytes(a1, 0x40000u);
  v4[1] = v2;
  return lsl::PersistentAllocator::PersistentAllocator(v4[0], v4, (__int64)a1);
}
