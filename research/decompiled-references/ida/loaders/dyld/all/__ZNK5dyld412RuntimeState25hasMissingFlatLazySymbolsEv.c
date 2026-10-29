bool __fastcall dyld4::RuntimeState::hasMissingFlatLazySymbols(dyld4::RuntimeState *this)
{
  return *((_QWORD *)this + 76) != 0;
}
