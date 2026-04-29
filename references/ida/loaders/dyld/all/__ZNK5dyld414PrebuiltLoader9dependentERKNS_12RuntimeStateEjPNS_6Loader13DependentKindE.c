__int64 __fastcall dyld4::PrebuiltLoader::dependent(_WORD *a1, dyld4::RuntimeState *a2, unsigned int a3, _BYTE *a4)
{
  __int64 v6; // x8
  __int64 result; // x0
  int v8; // w8
  __int16 v9; // [xsp+0h] [xbp-20h] BYREF
  __int16 v10; // [xsp+8h] [xbp-18h] BYREF

  if ( (unsigned __int16)a1[12] <= a3 )
    dyld4::PrebuiltLoader::dependent();
  if ( a4 )
  {
    v6 = (unsigned __int16)a1[6];
    if ( a1[6] )
      LOBYTE(v6) = *((_BYTE *)a1 + v6 + a3);
    *a4 = v6;
  }
  v10 = *(_WORD *)((char *)&a1[a3] + (unsigned __int16)a1[5]);
  if ( v10 == 0x7FFF )
    return 0;
  result = dyld4::Loader::LoaderRef::loader((dyld4::Loader::LoaderRef *)&v10, a2);
  if ( (a1[2] & 2) != 0 && (*(_WORD *)(result + 20) & 4) == 0 && *(_BYTE *)(*((_QWORD *)a2 + 1) + 157LL) )
  {
    v8 = *(unsigned __int16 *)(result + 36);
    if ( v8 != 0xFFFF )
    {
      v9 = v8 & 0x7FFF;
      return dyld4::Loader::LoaderRef::loader((dyld4::Loader::LoaderRef *)&v9, a2);
    }
  }
  return result;
}
