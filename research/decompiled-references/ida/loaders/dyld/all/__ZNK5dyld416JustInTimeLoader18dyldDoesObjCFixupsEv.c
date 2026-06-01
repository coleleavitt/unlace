__int64 __fastcall dyld4::JustInTimeLoader::dyldDoesObjCFixups(dyld4::JustInTimeLoader *this)
{
  return (*((unsigned __int16 *)this + 2) >> 1) & 1;
}
