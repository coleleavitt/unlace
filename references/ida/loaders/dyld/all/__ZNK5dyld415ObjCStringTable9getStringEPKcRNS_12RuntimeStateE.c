const char *__fastcall dyld4::ObjCStringTable::getString(
        dyld4::ObjCStringTable *this,
        const char *a2,
        dyld4::RuntimeState *a3)
{
  __int64 PotentialTarget; // x0
  unsigned __int64 v6; // x1
  __int64 v7; // x21
  unsigned __int64 Absolute; // x8
  const char *result; // x0
  const char *v10; // x20
  _QWORD v11[2]; // [xsp+8h] [xbp-38h] BYREF

  PotentialTarget = dyld4::ObjCStringTable::getPotentialTarget(this, a2);
  v11[0] = PotentialTarget;
  v11[1] = v6;
  if ( !(_BYTE)v6 )
    return nullptr;
  v7 = PotentialTarget;
  Absolute = dyld4::PrebuiltLoader::BindTargetRef::makeAbsolute(nullptr, v6);
  result = nullptr;
  if ( v7 != Absolute )
  {
    v10 = (const char *)dyld4::PrebuiltLoader::BindTargetRef::value((dyld4::PrebuiltLoader::BindTargetRef *)v11, a3);
    if ( _platform_strcmp(a2, v10) )
      return nullptr;
    else
      return v10;
  }
  return result;
}
