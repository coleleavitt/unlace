__int64 __usercall lsl::Allocator::makeShared<dyld4::Atlas::Mapper,lsl::Allocator&,lsl::Vector<dyld4::Atlas::Mapper::Mapping> &>@<X0>(
        lsl::Allocator *a1@<X0>,
        __int64 a2@<X1>,
        __int64 a3@<X2>,
        int a4@<W8>)
{
  lsl::AllocationMetadata *v7; // x22
  __int64 v8; // x0
  __int64 _28; // [xsp+28h] [xbp+8h]

  v7 = (lsl::AllocationMetadata *)lsl::Allocator::aligned_alloc(a1, 8u, 0x30u);
  v8 = lsl::Vector<dyld4::Atlas::Mapper::Mapping>::Vector(v7, a3, a2);
  *(_QWORD *)(v8 + 32) = 0;
  *(_QWORD *)(v8 + 40) = a2;
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return lsl::SharedPtr<dyld4::Atlas::Mapper>::SharedPtr(a4, v7);
}
