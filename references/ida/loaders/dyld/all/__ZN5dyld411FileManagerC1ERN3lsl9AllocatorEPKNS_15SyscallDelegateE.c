dyld4::FileManager *__fastcall dyld4::FileManager::FileManager(
        dyld4::FileManager *this,
        lsl::Allocator *a2,
        const dyld4::SyscallDelegate *a3)
{
  int v5; // w21
  __int64 v6; // x0

  *(_QWORD *)this = a3;
  *((_QWORD *)this + 1) = a2;
  v5 = (_DWORD)this + 16;
  v6 = lsl::Allocator::aligned_alloc(a2, 8u, 0x28u);
  *(_QWORD *)v6 = 0;
  *(_QWORD *)(v6 + 8) = a2;
  *(_QWORD *)(v6 + 24) = 0;
  *(_BYTE *)(v6 + 32) = 0;
  lsl::UniquePtr<lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>>::UniquePtr<lsl::OrderedMap<unsigned long long,lsl::UUID,std::less<unsigned long long>>>(
    v5,
    (lsl::AllocationMetadata *)v6);
  return this;
}
