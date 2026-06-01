__int64 *__fastcall dyld4::Atlas::Bitmap::Bitmap(__int64 *a1, lsl::Allocator *a2, __int64 a3)
{
  lsl::AllocationMetadata **v6; // x23
  __int64 PVLEUInt64; // x0
  unsigned __int64 v8; // x24
  unsigned __int64 v9; // x21
  lsl::AllocationMetadata *v10; // x0
  void *v11; // x1
  lsl::AllocationMetadata *v12; // x8
  unsigned __int64 v13; // x10
  lsl::AllocationMetadata *v15; // [xsp+8h] [xbp-38h] BYREF

  a1[1] = 0;
  v6 = (lsl::AllocationMetadata **)(a1 + 1);
  *a1 = 0;
  PVLEUInt64 = lsl::readPVLEUInt64((unsigned __int8 **)a3);
  *a1 = PVLEUInt64;
  v8 = PVLEUInt64 + 7;
  v9 = (unsigned __int64)(PVLEUInt64 + 7) >> 3;
  v10 = (lsl::AllocationMetadata *)lsl::Allocator::malloc(a2, v9);
  lsl::UniquePtr<std::byte>::UniquePtr<std::byte>((int)&v15, v10);
  if ( &v15 != v6 )
  {
    v12 = *v6;
    *v6 = v15;
    v15 = v12;
  }
  lsl::UniquePtr<std::byte>::~UniquePtr(&v15, v11);
  if ( v8 >= 8 )
    _platform_memmove(*v6, *(const void **)a3, v9);
  v13 = *(_QWORD *)(a3 + 8) - v9;
  *(_QWORD *)a3 += v9;
  *(_QWORD *)(a3 + 8) = v13;
  return a1;
}
