__int64 *__usercall dyld4::Loader::fileID@<X0>(
        __int64 *__return_ptr a1@<X8>,
        dyld4::Loader *this@<X0>,
        const dyld4::FileManager *a3@<X1>)
{
  __int64 _8; // [xsp+8h] [xbp+8h]

  if ( *(_DWORD *)this != 1815378276 )
    dyld4::Loader::fileID();
  if ( (*((_WORD *)this + 2) & 1) != 0 )
  {
    if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return dyld4::PrebuiltLoader::fileID(a1, this, a3);
  }
  else
  {
    if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return dyld4::JustInTimeLoader::fileID();
  }
}
