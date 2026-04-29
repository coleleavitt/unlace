__int64 __fastcall dyld4::PrebuiltLoader::unmap(__int64 this, dyld4::RuntimeState *a2)
{
  __int16 v2; // w8
  char *v3; // x9

  v2 = *(_WORD *)(this + 6);
  if ( v2 >= 0 )
    v3 = (char *)a2 + 664;
  else
    v3 = (char *)a2 + 688;
  *(_BYTE *)(*(_QWORD *)v3 + (v2 & 0x7FFF)) = 2;
  return this;
}
