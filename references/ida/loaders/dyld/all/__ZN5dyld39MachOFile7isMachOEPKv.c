_DWORD *__fastcall dyld3::MachOFile::isMachO(_DWORD *this, const void *a2)
{
  if ( *this >> 1 != 2138504551 )
    return nullptr;
  return this;
}
