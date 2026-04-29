unsigned __int64 __fastcall dyld4::PrebuiltLoader::BindTargetRef::offset(dyld4::PrebuiltLoader::BindTargetRef *this)
{
  __int64 v1; // x8
  __int64 v2; // x10
  unsigned __int64 v3; // x10

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)this >> 24;
  if ( (*(_QWORD *)this & 0x4000000000000000LL) != 0 )
    v2 |= 0xFFFF8000000000uLL;
  v3 = v2 & 0xFFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned __int8)BYTE2(*(_QWORD *)this) << 56);
  if ( v1 < 0 )
    return v1 & 0x7FFFFFFFFFFFFFFFLL;
  else
    return v3;
}
