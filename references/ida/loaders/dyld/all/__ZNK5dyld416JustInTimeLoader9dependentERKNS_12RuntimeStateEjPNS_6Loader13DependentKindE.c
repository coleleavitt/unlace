__int64 __fastcall dyld4::JustInTimeLoader::dependent(
        dyld4::JustInTimeLoader *this,
        int a2,
        unsigned int a3,
        _BYTE *a4)
{
  unsigned __int64 v4; // x8
  char v8; // w8

  v4 = *((_QWORD *)this + 2);
  if ( a3 >= (unsigned __int16)(v4 >> 39) )
    dyld4::JustInTimeLoader::dependent();
  if ( a4 )
  {
    if ( (v4 & 0x800000) != 0 )
      v8 = 0;
    else
      v8 = *(_BYTE *)dyld4::JustInTimeLoader::dependentKind(this, a3);
    *a4 = v8;
  }
  return *((_QWORD *)this + a3 + 11);
}
