__int64 __usercall lsl::Allocator::makeUnique<dyld4::Atlas::Bitmap,lsl::Allocator&,std::span<std::byte,18446744073709551615ul> &>@<X0>(
        lsl::Allocator *a1@<X0>,
        lsl::Allocator *a2@<X1>,
        __int64 a3@<X2>,
        int a4@<W8>)
{
  __int64 *v7; // x22
  __int64 _28; // [xsp+28h] [xbp+8h]

  v7 = (__int64 *)lsl::Allocator::aligned_alloc(a1, 8u, 0x10u);
  dyld4::Atlas::Bitmap::Bitmap(v7, a2, a3);
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return lsl::UniquePtr<dyld4::Atlas::Bitmap>::UniquePtr<dyld4::Atlas::Bitmap>(a4, (lsl::AllocationMetadata *)v7);
}
