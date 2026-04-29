__int64 __fastcall dyld4::PrebuiltLoader::beginInitializers(dyld4::PrebuiltLoader *this, dyld4::RuntimeState *a2)
{
  __int16 v2; // w9
  char *v3; // x8
  __int64 v4; // x8
  __int64 v5; // x9
  int v6; // w10
  __int64 result; // x0

  v2 = *((_WORD *)this + 3);
  if ( v2 >= 0 )
    v3 = (char *)a2 + 664;
  else
    v3 = (char *)a2 + 688;
  v4 = *(_QWORD *)v3;
  v5 = v2 & 0x7FFF;
  v6 = *(unsigned __int8 *)(v4 + v5);
  if ( (unsigned int)(v6 - 7) < 2 )
    return 1;
  if ( v6 != 6 )
    dyld4::PrebuiltLoader::beginInitializers(this, a2);
  result = 0;
  *(_BYTE *)(v4 + v5) = 7;
  return result;
}
