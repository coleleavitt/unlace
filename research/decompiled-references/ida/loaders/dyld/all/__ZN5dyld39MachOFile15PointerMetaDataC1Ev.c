_DWORD *__fastcall dyld3::MachOFile::PointerMetaData::PointerMetaData(_DWORD *this)
{
  *this &= 0xF0000000;
  return this;
}
