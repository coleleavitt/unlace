dyld4::Atlas::Mapper **__fastcall lsl::SharedPtr<dyld4::Atlas::Mapper>::operator=(
        dyld4::Atlas::Mapper **a1,
        dyld4::Atlas::Mapper **a2)
{
  dyld4::Atlas::Mapper *v3; // x20
  __int64 v4; // x0
  dyld4::Atlas::Mapper *v5; // x8
  dyld4::Atlas::Mapper *v7; // [xsp+8h] [xbp-18h] BYREF

  v3 = *a2;
  v7 = v3;
  if ( v3 )
  {
    v4 = lsl::AllocationMetadata::getForPointer(v3, a2);
    lsl::AllocationMetadata::incrementRefCount(v4);
  }
  if ( &v7 != a1 )
  {
    v5 = *a1;
    *a1 = v3;
    v7 = v5;
  }
  lsl::SharedPtr<dyld4::Atlas::Mapper>::~SharedPtr(&v7, a2);
  return a1;
}
