__int64 __fastcall dyld4::RuntimeState::add(dyld4::RuntimeState *this, const dyld4::Loader *a2)
{
  __int64 result; // x0
  __int64 v5; // x8
  __int64 v6; // x9
  dyld3::MachOFile *v7; // x21
  const char *v8; // x21
  const char *v9; // x1

  result = lsl::Vector<dyld4::AuthenticatedValue<dyld4::Loader const*>>::reserve(
             (char *)this + 32,
             *((_QWORD *)this + 6) + 1LL);
  v5 = *((_QWORD *)this + 5);
  v6 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = v6 + 1;
  *(_QWORD *)(v5 + 8 * v6) = a2;
  if ( !*((_QWORD *)this + 9) || !*((_QWORD *)this + 8) )
  {
    if ( (~*((_WORD *)a2 + 2) & 3) != 0 )
    {
      v7 = (dyld3::MachOFile *)dyld4::Loader::mf(a2, this);
      result = dyld3::MachOFile::isDylib(v7);
      if ( !(_DWORD)result )
        return result;
      result = dyld3::MachOFile::installName(v7);
    }
    else
    {
      result = dyld4::Loader::path(a2);
    }
    v8 = (const char *)result;
    if ( result )
    {
      if ( *(_DWORD *)(*((_QWORD *)this + 1) + 68LL) == 10 )
      {
        if ( _platform_strcmp((const char *)result, "/System/DriverKit/usr/lib/system/libdyld.dylib") )
        {
          v9 = "/System/DriverKit/usr/lib/libSystem.dylib";
          goto LABEL_13;
        }
      }
      else if ( _platform_strcmp((const char *)result, "/usr/lib/system/libdyld.dylib") )
      {
        v9 = "/usr/lib/libSystem.B.dylib";
LABEL_13:
        result = _platform_strcmp(v8, v9);
        if ( !(_DWORD)result )
          *((_QWORD *)this + 8) = a2;
        return result;
      }
      return dyld4::RuntimeState::setDyldLoader(this, a2);
    }
  }
  return result;
}
