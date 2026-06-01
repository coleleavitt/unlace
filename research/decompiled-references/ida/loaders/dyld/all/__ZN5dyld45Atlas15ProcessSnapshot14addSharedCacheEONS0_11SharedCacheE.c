__int64 __fastcall dyld4::Atlas::ProcessSnapshot::addSharedCache(__int64 *a1)
{
  lsl::AllocationMetadata **v2; // x20
  void *v3; // x1
  lsl::AllocationMetadata *v4; // x8
  __int64 v5; // x0
  lsl::AllocationMetadata **v6; // x8
  lsl::AllocationMetadata *v7; // x9
  __int64 v9; // [xsp+0h] [xbp-30h] BYREF
  lsl::AllocationMetadata *v10; // [xsp+8h] [xbp-28h] BYREF

  v2 = (lsl::AllocationMetadata **)(a1 + 8);
  lsl::Allocator::makeUnique<dyld4::Atlas::SharedCache,dyld4::Atlas::SharedCache>(&v10, *a1);
  if ( &v10 != v2 )
  {
    v4 = *v2;
    *v2 = v10;
    v10 = v4;
  }
  lsl::UniquePtr<dyld4::Atlas::SharedCache>::~UniquePtr(&v10, v3);
  v5 = *a1;
  v9 = *(_QWORD *)(*(_QWORD *)(a1[8] + 128) + 144LL);
  lsl::Allocator::makeUnique<dyld4::Atlas::Bitmap,lsl::Allocator&,unsigned long>(&v10, v5, v5, &v9);
  v6 = (lsl::AllocationMetadata **)(a1 + 7);
  if ( &v10 != (lsl::AllocationMetadata **)(a1 + 7) )
  {
    v7 = *v6;
    *v6 = v10;
    v10 = v7;
  }
  return ((__int64 (__fastcall *)(lsl::AllocationMetadata **))lsl::UniquePtr<dyld4::Atlas::Bitmap>::~UniquePtr)(&v10);
}
