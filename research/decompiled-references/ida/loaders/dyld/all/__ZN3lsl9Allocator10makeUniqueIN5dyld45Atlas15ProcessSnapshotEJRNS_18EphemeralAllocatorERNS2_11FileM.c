__int64 __usercall lsl::Allocator::makeUnique<dyld4::Atlas::ProcessSnapshot,lsl::EphemeralAllocator &,dyld4::FileManager &,bool,std::span<std::byte,18446744073709551615ul> const&>@<X0>(
        lsl::Allocator *a1@<X0>,
        __int64 a2@<X1>,
        __int64 a3@<X2>,
        unsigned __int8 *a4@<X3>,
        _QWORD *a5@<X4>,
        int a6@<W8>)
{
  lsl::AllocationMetadata *v11; // x24
  __int64 _38; // [xsp+38h] [xbp+8h]

  v11 = (lsl::AllocationMetadata *)lsl::Allocator::aligned_alloc(a1, 8u, 0x70u);
  dyld4::Atlas::ProcessSnapshot::ProcessSnapshot(v11, a2, a3, *a4, *a5, a5[1]);
  if ( ((_38 ^ (2 * _38)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return lsl::UniquePtr<dyld4::Atlas::ProcessSnapshot>::UniquePtr<dyld4::Atlas::ProcessSnapshot>(a6, v11);
}
