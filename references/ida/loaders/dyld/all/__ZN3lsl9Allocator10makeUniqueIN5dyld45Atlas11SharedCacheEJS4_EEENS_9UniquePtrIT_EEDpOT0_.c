__int64 __usercall lsl::Allocator::makeUnique<dyld4::Atlas::SharedCache,dyld4::Atlas::SharedCache>@<X0>(
        lsl::Allocator *a1@<X0>,
        __int64 a2@<X1>,
        int a3@<W8>)
{
  __int64 v5; // x21
  __int128 v6; // q0
  __int128 v7; // q0
  __int64 _28; // [xsp+28h] [xbp+8h]

  v5 = lsl::Allocator::aligned_alloc(a1, 8u, 0xB0u);
  *(_QWORD *)v5 = *(_QWORD *)a2;
  dyld4::FileRecord::FileRecord(v5 + 8, (dyld4::FileRecord *)(a2 + 8));
  v6 = *(_OWORD *)(a2 + 88);
  *(_QWORD *)(v5 + 104) = *(_QWORD *)(a2 + 104);
  *(_OWORD *)(v5 + 88) = v6;
  *(_QWORD *)(v5 + 120) = 0;
  *(_QWORD *)(v5 + 128) = 0;
  *(_BYTE *)(v5 + 136) = 0;
  *(_QWORD *)(v5 + 112) = 0;
  dyld4::Atlas::Mapper::Pointer<dyld_cache_header>::swap(v5 + 112, a2 + 112);
  *(_QWORD *)(v5 + 144) = 0;
  if ( v5 != a2 )
  {
    *(_QWORD *)(v5 + 144) = *(_QWORD *)(a2 + 144);
    *(_QWORD *)(a2 + 144) = 0;
  }
  v7 = *(_OWORD *)(a2 + 152);
  *(_BYTE *)(v5 + 168) = *(_BYTE *)(a2 + 168);
  *(_OWORD *)(v5 + 152) = v7;
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return lsl::UniquePtr<dyld4::Atlas::SharedCache>::UniquePtr<dyld4::Atlas::SharedCache>(
           a3,
           (lsl::AllocationMetadata *)v5);
}
