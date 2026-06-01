__int64 __usercall lsl::Allocator::makeUnique<dyld4::Atlas::Image,dyld4::Atlas::Image>@<X0>(
        lsl::Allocator *a1@<X0>,
        _QWORD *a2@<X1>,
        int a3@<W8>)
{
  __int64 v5; // x21
  __int64 _28; // [xsp+28h] [xbp+8h]

  v5 = lsl::Allocator::aligned_alloc(a1, 8u, 0xC0u);
  *(_QWORD *)v5 = *a2;
  *(_OWORD *)(v5 + 56) = 0u;
  *(_OWORD *)(v5 + 40) = 0u;
  *(_OWORD *)(v5 + 24) = 0u;
  *(_OWORD *)(v5 + 8) = 0u;
  *(_QWORD *)(v5 + 72) = 0x1FFFFFFFFLL;
  *(_WORD *)(v5 + 80) = 0;
  *(_BYTE *)(v5 + 82) = 1;
  *(_BYTE *)(v5 + 144) = 0;
  *(_BYTE *)(v5 + 152) = 0;
  *(_BYTE *)(v5 + 136) = 0;
  *(_OWORD *)(v5 + 120) = 0u;
  *(_OWORD *)(v5 + 104) = 0u;
  *(_OWORD *)(v5 + 88) = 0u;
  *(_DWORD *)(v5 + 183) = 0;
  *(_QWORD *)(v5 + 168) = 0;
  *(_QWORD *)(v5 + 176) = 0;
  *(_QWORD *)(v5 + 160) = 0;
  dyld4::Atlas::Image::swap(v5, (__int64)a2);
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return lsl::UniquePtr<dyld4::Atlas::Image>::UniquePtr<dyld4::Atlas::Image>(a3, (lsl::AllocationMetadata *)v5);
}
