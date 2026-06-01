lsl::AllocationMetadata **__fastcall lsl::UniquePtr<dyld4::Atlas::ProcessSnapshot>::~UniquePtr(
        lsl::AllocationMetadata **a1,
        void *a2)
{
  lsl::AllocationMetadata *v3; // x0
  lsl::AllocationMetadata *v4; // x20
  lsl::AllocationMetadata *v5; // x21
  __int64 v6; // x0

  v3 = *a1;
  if ( v3 )
  {
    v4 = (lsl::AllocationMetadata *)lsl::AllocationMetadata::getForPointer(v3, a2);
    if ( (unsigned int)lsl::AllocationMetadata::type(v4) != 1 )
      lsl::UniquePtr<dyld4::Atlas::ProcessSnapshot>::~UniquePtr();
    v5 = *a1;
    lsl::SharedPtr<dyld4::Atlas::Mapper>::~SharedPtr((char *)*a1 + 72);
    lsl::UniquePtr<dyld4::Atlas::SharedCache>::~UniquePtr((char *)v5 + 64);
    ((void (__fastcall *)(char *))lsl::UniquePtr<dyld4::Atlas::Bitmap>::~UniquePtr)((char *)v5 + 56);
    v6 = *((_QWORD *)v5 + 2);
    if ( v6 )
    {
      lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::deallocate(
        v6,
        *((_QWORD *)v5 + 3));
      *((_QWORD *)v5 + 2) = 0;
    }
    *((_QWORD *)v5 + 5) = 0;
    *((_BYTE *)v5 + 48) = 0;
    lsl::AllocationMetadata::setType(v4, 0);
    lsl::AllocationMetadata::freeObject(v4);
  }
  return a1;
}
