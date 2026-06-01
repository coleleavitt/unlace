dyld4::Atlas::Mapper **__usercall dyld4::Atlas::Mapper::map<dyld_cache_header>@<X0>(
        lsl::AllocationMetadata *this@<X0>,
        char *a2@<X1>,
        __int64 a3@<X2>,
        __int64 a4@<X8>)
{
  dyld4::Atlas::Mapper *v7; // x0
  void *v8; // x1
  dyld4::Atlas::Mapper *v10; // [xsp+8h] [xbp-28h] BYREF

  lsl::SharedPtr<dyld4::Atlas::Mapper>::SharedPtr((int)&v10, this);
  *(_QWORD *)a4 = 0;
  if ( (dyld4::Atlas::Mapper **)a4 == &v10 )
  {
    v7 = nullptr;
  }
  else
  {
    v7 = v10;
    *(_QWORD *)a4 = v10;
    v10 = nullptr;
  }
  *(_QWORD *)(a4 + 8) = a3;
  *(_QWORD *)(a4 + 16) = 0;
  *(_BYTE *)(a4 + 24) = 0;
  *(_QWORD *)(a4 + 16) = dyld4::Atlas::Mapper::map(v7, a2, a3);
  *(_BYTE *)(a4 + 24) = (_BYTE)v8;
  return lsl::SharedPtr<dyld4::Atlas::Mapper>::~SharedPtr(&v10, v8);
}
