dyld4::Atlas::Mapper **__usercall dyld4::Atlas::Mapper::map<dyld3::MachOLoaded>@<X0>(
        dyld4::Atlas::Mapper **__return_ptr a1@<X8>,
        lsl::AllocationMetadata *this@<X0>,
        char *a3@<X1>,
        __int64 a4@<X2>)
{
  dyld4::Atlas::Mapper *v7; // x0
  void *v8; // x1
  dyld4::Atlas::Mapper *v10; // [xsp+8h] [xbp-28h] BYREF

  lsl::SharedPtr<dyld4::Atlas::Mapper>::SharedPtr((int)&v10, this);
  *a1 = nullptr;
  if ( a1 == &v10 )
  {
    v7 = nullptr;
  }
  else
  {
    v7 = v10;
    *a1 = v10;
    v10 = nullptr;
  }
  a1[1] = (dyld4::Atlas::Mapper *)a4;
  a1[2] = nullptr;
  *((_BYTE *)a1 + 24) = 0;
  a1[2] = (dyld4::Atlas::Mapper *)dyld4::Atlas::Mapper::map(v7, a3, a4);
  *((_BYTE *)a1 + 24) = (_BYTE)v8;
  return lsl::SharedPtr<dyld4::Atlas::Mapper>::~SharedPtr(&v10, v8);
}
