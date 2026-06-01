__int64 __fastcall dyld4::getUuidFromFd(
        dyld4::SyscallDelegate **this,
        dyld4::RuntimeState *a2,
        off_t a3,
        unsigned __int8 *a4,
        char *a5)
{
  int v7; // w21
  __int64 result; // x0
  size_t v10; // x24
  __int64 v11; // x8
  _BYTE *v12; // x23
  char *v13; // x2
  _BYTE __buf[20]; // [xsp+8h] [xbp-78h] BYREF
  unsigned int v16; // [xsp+1Ch] [xbp-64h]
  unsigned __int8 v17[8]; // [xsp+28h] [xbp-58h] BYREF
  __int64 v18; // [xsp+30h] [xbp-50h]

  v7 = (int)a2;
  *(_QWORD *)a4 = 0x64697575206F6ELL;
  result = dyld4::SyscallDelegate::pread(*(this + 1), (int)a2, __buf, 0x1Cu, a3);
  if ( result == 28 )
  {
    result = dyld3::MachOFile::hasMachOMagic((dyld3::MachOFile *)__buf);
    if ( (_DWORD)result )
    {
      v10 = v16 + 32LL;
      __chkstk_darwin();
      v12 = &__buf[-((v11 + 47) & 0x1FFFFFFF0LL) - 8];
      result = dyld4::SyscallDelegate::pread(*(this + 1), v7, v12, v10, a3);
      if ( result == v10 )
      {
        *(_QWORD *)v17 = 0;
        v18 = 0;
        result = dyld3::MachOFile::getUuid((dyld3::MachOFile *)v12, v17);
        if ( (_DWORD)result )
          return (__int64)dyld4::Loader::uuidToStr(v17, a4, v13);
      }
    }
  }
  return result;
}
