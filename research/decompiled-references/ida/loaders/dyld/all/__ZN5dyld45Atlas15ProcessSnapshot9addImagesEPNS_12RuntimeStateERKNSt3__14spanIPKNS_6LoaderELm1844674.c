lsl::AllocationMetadata **__fastcall dyld4::Atlas::ProcessSnapshot::addImages(
        lsl::AllocationMetadata **result,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // x8
  lsl::AllocationMetadata **v4; // x19
  __int64 v5; // x20
  lsl::AllocationMetadata **v6; // x21
  lsl::AllocationMetadata **v7; // x22
  __int64 v8; // x23
  void *v9; // x1
  lsl::AllocationMetadata *v10; // [xsp+8h] [xbp-B8h] BYREF
  __int64 v11; // [xsp+10h] [xbp-B0h] BYREF
  _QWORD v12[14]; // [xsp+18h] [xbp-A8h] BYREF

  v11 = a2;
  v3 = a3[1];
  if ( v3 )
  {
    v4 = result;
    v5 = *a3;
    v6 = result + 2;
    v7 = result + 9;
    v8 = 8 * v3;
    do
    {
      if ( v4[8] && (*(_WORD *)(*(_QWORD *)v5 + 4LL) & 2) != 0 )
      {
        *(_BYTE *)(*((_QWORD *)v4[7] + 1) + (((unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)v5 + 6LL) >> 3) & 0xFFF)) |= 1 << (*(_WORD *)(*(_QWORD *)v5 + 6LL) & 7);
      }
      else
      {
        lsl::Allocator::makeUnique<dyld4::Atlas::Image,dyld4::RuntimeState *&,lsl::Allocator&,lsl::SharedPtr<dyld4::Atlas::Mapper> &,dyld4::Loader const*&>(
          &v10,
          *v4,
          &v11,
          *v4,
          v7,
          v5);
        lsl::OrderedSet<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>>::insert(
          v12,
          v6,
          &v10);
        result = lsl::UniquePtr<dyld4::Atlas::Image>::~UniquePtr(&v10, v9);
      }
      v5 += 8;
      v8 -= 8;
    }
    while ( v8 );
  }
  return result;
}
