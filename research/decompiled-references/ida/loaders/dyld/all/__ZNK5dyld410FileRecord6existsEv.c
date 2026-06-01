bool __fastcall dyld4::FileRecord::exists(dyld4::FileRecord *this)
{
  dyld4::FileRecord::stat(this);
  return *((_DWORD *)this + 17) == 0;
}
