unsigned __int64 __fastcall dyld4::PrebuiltLoader::BindTargetRef::value(
        dyld4::PrebuiltLoader::BindTargetRef *this,
        dyld4::RuntimeState *a2)
{
  __int64 v3; // x0
  dyld4::PrebuiltLoader *v5; // x0
  __int64 Address; // x0
  __int64 v7; // x8
  __int64 v8; // x10
  unsigned __int64 v9; // x10
  __int64 v10; // x8
  __int16 v12; // [xsp+8h] [xbp-18h] BYREF

  v3 = *(_QWORD *)this;
  if ( v3 < 0 )
    return v3 & 0x7FFFFFFFFFFFFFFFLL | ((v3 & 0x7FFFFFFFFFFFFFFFuLL) >> 62 << 63);
  v12 = v3;
  v5 = (dyld4::PrebuiltLoader *)dyld4::Loader::LoaderRef::loader((dyld4::Loader::LoaderRef *)&v12, a2);
  Address = dyld4::PrebuiltLoader::loadAddress(v5, a2);
  v7 = *(_QWORD *)this;
  v8 = *(_QWORD *)this >> 24;
  if ( (*(_QWORD *)this & 0x4000000000000000LL) != 0 )
    v8 |= 0xFFFF8000000000uLL;
  v9 = v8 & 0xFFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned __int8)BYTE2(*(_QWORD *)this) << 56);
  if ( v7 < 0 )
    v10 = v7 & 0x7FFFFFFFFFFFFFFFLL;
  else
    v10 = v9;
  return v10 + Address;
}
