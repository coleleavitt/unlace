bool __fastcall dyld4::APIs::_dyld_get_image_uuid(dyld4::APIs *this, mach_header *a2, unsigned __int8 *a3)
{
  _BOOL8 result; // x0
  __int64 _28; // [xsp+28h] [xbp+8h]

  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
    dyld4::RuntimeState::log(this, "_dyld_get_image_uuid(%p, %p)\n", a2, a3);
  result = dyld3::MachOFile::hasMachOMagic((dyld3::MachOFile *)a2);
  if ( (_DWORD)result )
  {
    if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return dyld3::MachOFile::getUuid((dyld3::MachOFile *)a2, a3);
  }
  return result;
}
