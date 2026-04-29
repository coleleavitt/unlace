unsigned __int64 __fastcall dyld4::JustInTimeLoader::hiddenFromFlat(dyld4::JustInTimeLoader *this, int a2)
{
  unsigned __int64 v2; // x8

  v2 = *((_QWORD *)this + 2);
  if ( a2 )
  {
    v2 &= ~0x80000uLL;
    *((_QWORD *)this + 2) = v2;
  }
  return (v2 >> 19) & 1;
}
