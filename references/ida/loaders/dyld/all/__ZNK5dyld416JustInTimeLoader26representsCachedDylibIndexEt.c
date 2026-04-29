bool __fastcall dyld4::JustInTimeLoader::representsCachedDylibIndex(dyld4::JustInTimeLoader *this, int a2)
{
  unsigned __int64 v2; // x8

  v2 = *((_QWORD *)this + 2);
  return (v2 & 0x400000) != 0 && ((v2 >> 24) & 0x7FFF) == a2
      || (*((_WORD *)this + 2) & 2) != 0 && (*((_WORD *)this + 3) & 0x7FFF) == a2;
}
