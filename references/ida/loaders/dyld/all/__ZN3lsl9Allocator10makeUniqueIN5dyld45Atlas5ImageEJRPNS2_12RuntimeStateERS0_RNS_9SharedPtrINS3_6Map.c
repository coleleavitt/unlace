__int64 __usercall lsl::Allocator::makeUnique<dyld4::Atlas::Image,dyld4::RuntimeState *&,lsl::Allocator&,lsl::SharedPtr<dyld4::Atlas::Mapper> &,dyld4::Loader const*&>@<X0>(
        lsl::Allocator *a1@<X0>,
        dyld4::RuntimeState **a2@<X1>,
        lsl::Allocator *a3@<X2>,
        __int64 a4@<X3>,
        dyld4::Loader **a5@<X4>,
        int a6@<W8>)
{
  lsl::AllocationMetadata *v11; // x24
  __int64 _38; // [xsp+38h] [xbp+8h]

  v11 = (lsl::AllocationMetadata *)lsl::Allocator::aligned_alloc(a1, 8u, 0xC0u);
  dyld4::Atlas::Image::Image((__int64)v11, *a2, a3, a4, *a5);
  if ( ((_38 ^ (2 * _38)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return lsl::UniquePtr<dyld4::Atlas::Image>::UniquePtr<dyld4::Atlas::Image>(a6, v11);
}
