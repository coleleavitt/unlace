__int64 __fastcall dyld4::PrebuiltLoaderSet::forEachCachePatch(__int64 result, __int64 a2)
{
  __int64 v3; // x20
  unsigned __int64 v4; // x22
  __int64 v5; // x21

  if ( *(_DWORD *)(result + 20) )
  {
    v3 = result;
    v4 = 0;
    v5 = result + *(unsigned int *)(result + 24);
    do
    {
      result = (*(__int64 (__fastcall **)(__int64, __int64))(a2 + 16))(a2, v5);
      ++v4;
      v5 += 16;
    }
    while ( v4 < *(unsigned int *)(v3 + 20) );
  }
  return result;
}
