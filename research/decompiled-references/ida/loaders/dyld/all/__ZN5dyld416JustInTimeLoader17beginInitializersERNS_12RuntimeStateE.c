unsigned __int64 __fastcall dyld4::JustInTimeLoader::beginInitializers(
        dyld4::JustInTimeLoader *this,
        dyld4::RuntimeState *a2)
{
  unsigned __int64 v2; // x8

  v2 = *((_QWORD *)this + 2);
  if ( (v2 & 0x40000) == 0 )
    *((_QWORD *)this + 2) = v2 | 0x40000;
  return (v2 >> 18) & 1;
}
