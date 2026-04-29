__int64 __usercall lsl::Allocator::makeUnique<dyld4::Atlas::SharedCache,lsl::Allocator&,dyld4::FileRecord,lsl::SharedPtr<dyld4::Atlas::Mapper> &,unsigned long long &,unsigned long long>@<X0>(
        lsl::Allocator *a1@<X0>,
        __int64 a2@<X1>,
        dyld4::FileRecord *a3@<X2>,
        __int64 a4@<X3>,
        char **a5@<X4>,
        _QWORD *a6@<X5>,
        int a7@<W8>)
{
  lsl::AllocationMetadata *v13; // x25
  __int64 _48; // [xsp+48h] [xbp+8h]

  v13 = (lsl::AllocationMetadata *)lsl::Allocator::aligned_alloc(a1, 8u, 0xB0u);
  dyld4::Atlas::SharedCache::SharedCache((__int64)v13, a2, a3, a4, *a5, *a6 != 0);
  if ( ((_48 ^ (2 * _48)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return lsl::UniquePtr<dyld4::Atlas::SharedCache>::UniquePtr<dyld4::Atlas::SharedCache>(a7, v13);
}
