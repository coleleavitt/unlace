__int64 __usercall lsl::Allocator::makeUnique<dyld4::Atlas::Bitmap,lsl::Allocator&,unsigned long>@<X0>(
        lsl::Allocator *a1@<X0>,
        lsl::Allocator *a2@<X1>,
        __int64 *a3@<X2>,
        int a4@<W8>)
{
  lsl::AllocationMetadata *v7; // x22
  __int64 v8; // x8
  lsl::AllocationMetadata *v9; // x0
  __int64 _28; // [xsp+28h] [xbp+8h]

  v7 = (lsl::AllocationMetadata *)lsl::Allocator::aligned_alloc(a1, 8u, 0x10u);
  v8 = *a3;
  *(_QWORD *)v7 = *a3;
  v9 = (lsl::AllocationMetadata *)lsl::Allocator::malloc(a2, (unsigned __int64)(v8 + 7) >> 3);
  lsl::UniquePtr<std::byte>::UniquePtr<std::byte>((_DWORD)v7 + 8, v9);
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return lsl::UniquePtr<dyld4::Atlas::Bitmap>::UniquePtr<dyld4::Atlas::Bitmap>(a4, v7);
}
