__int64 __fastcall dyld4::Loader::LoaderRef::loader(dyld4::Loader::LoaderRef *this, const dyld4::RuntimeState *a2)
{
  int v2; // w8
  unsigned int v3; // w10
  __int64 v4; // x9

  v2 = *(__int16 *)this;
  v3 = *(unsigned __int16 *)this;
  if ( v2 < 0 )
  {
    v4 = *((_QWORD *)a2 + 85);
    LOWORD(v2) = v3 & 0x7FFF;
    if ( *(_DWORD *)(v4 + 12) <= (v3 & 0x7FFF) )
      dyld4::Loader::LoaderRef::loader();
  }
  else
  {
    v4 = *((_QWORD *)a2 + 82);
    if ( *(_DWORD *)(v4 + 12) <= v3 )
      dyld4::Loader::LoaderRef::loader();
  }
  return v4 + *(unsigned int *)(v4 + *(unsigned int *)(v4 + 16) + 4LL * (unsigned __int16)v2);
}
