_DWORD *__fastcall dyld3::FatFile::isFatFile(_DWORD *this, const void *a2)
{
  if ( (*this | 0x1000000) != 0xBFBAFECA )
    return nullptr;
  return this;
}
