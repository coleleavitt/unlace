dyld4::FileManager *__usercall dyld4::FileManager::getPath@<X0>(
        dyld4::FileManager *this@<X0>,
        const UUID *a2@<X1>,
        uint64_t a3@<X2>,
        _QWORD *a4@<X8>)
{
  dyld4::FileManager *v5; // x21
  __int64 v7; // x8
  int v8; // w9
  bool v9; // zf
  unsigned __int64 v10; // x1
  __int64 _28; // [xsp+28h] [xbp+8h]

  v5 = this;
  v7 = 0;
  do
  {
    v8 = (*a2)[v7];
    if ( (*a2)[v7] )
      v9 = 1;
    else
      v9 = v7 == 15;
    ++v7;
  }
  while ( !v9 );
  if ( v8 )
  {
    v10 = dyld4::FileManager::fsidForUUID(this, a2);
    if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (dyld4::FileManager *)dyld4::FileManager::getPath(v5, v10, a3);
  }
  else
  {
    *a4 = 0;
  }
  return this;
}
