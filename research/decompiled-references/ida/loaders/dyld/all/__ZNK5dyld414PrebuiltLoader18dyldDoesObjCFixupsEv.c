bool __fastcall dyld4::PrebuiltLoader::dyldDoesObjCFixups(dyld4::PrebuiltLoader *this)
{
  __int64 v1; // x8

  if ( this && (v1 = *((unsigned int *)this + 8), (_DWORD)v1) )
    return *(_QWORD *)((char *)this + v1) != 0;
  else
    return (*((unsigned __int16 *)this + 2) >> 1) & 1;
}
