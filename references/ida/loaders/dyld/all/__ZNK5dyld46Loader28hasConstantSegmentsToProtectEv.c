bool __fastcall dyld4::Loader::hasConstantSegmentsToProtect(dyld4::Loader *this)
{
  return (*((_WORD *)this + 2) & 0x12) == 16;
}
