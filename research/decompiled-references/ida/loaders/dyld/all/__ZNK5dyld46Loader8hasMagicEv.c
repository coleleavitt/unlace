bool __fastcall dyld4::Loader::hasMagic(dyld4::Loader *this)
{
  return *(_DWORD *)this == 1815378276;
}
