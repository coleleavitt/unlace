__int64 __fastcall dyld4::Loader::logLoad(dyld4::Loader *this, dyld4::RuntimeState *a2, const char *a3)
{
  char v6[64]; // [xsp+18h] [xbp-68h] BYREF

  dyld4::Loader::getUuidStr(this, a2, v6);
  return dyld4::RuntimeState::log(a2, "<%s> %s\n", v6, a3);
}
