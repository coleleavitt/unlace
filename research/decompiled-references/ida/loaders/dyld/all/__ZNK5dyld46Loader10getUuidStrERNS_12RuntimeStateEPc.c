unsigned __int8 *__fastcall dyld4::Loader::getUuidStr(dyld4::Loader *this, dyld4::RuntimeState *a2, char *a3)
{
  dyld3::MachOFile *v4; // x0
  unsigned __int8 *result; // x0
  char *v6; // x2
  unsigned __int8 v7[8]; // [xsp+8h] [xbp-28h] BYREF
  __int64 v8; // [xsp+10h] [xbp-20h]

  *(_QWORD *)v7 = 0;
  v8 = 0;
  v4 = (dyld3::MachOFile *)dyld4::Loader::mf(this, a2);
  result = (unsigned __int8 *)dyld3::MachOFile::getUuid(v4, v7);
  if ( (_DWORD)result )
    return dyld4::Loader::uuidToStr(v7, (unsigned __int8 *)a3, v6);
  *(_QWORD *)a3 = 0x64697575206F6ELL;
  return result;
}
