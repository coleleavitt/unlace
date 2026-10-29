bool __fastcall dyld4::PrebuiltLoader::hasBeenFixedUp(dyld4::PrebuiltLoader *this, dyld4::RuntimeState *a2)
{
  __int16 v2; // w8
  char *v3; // x9

  v2 = *((_WORD *)this + 3);
  if ( v2 >= 0 )
    v3 = (char *)a2 + 664;
  else
    v3 = (char *)a2 + 688;
  return *(unsigned __int8 *)(*(_QWORD *)v3 + (v2 & 0x7FFF)) > 5u;
}
