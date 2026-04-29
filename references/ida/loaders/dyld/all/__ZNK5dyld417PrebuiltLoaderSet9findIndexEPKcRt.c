bool __fastcall dyld4::PrebuiltLoaderSet::findIndex(
        dyld4::PrebuiltLoaderSet *this,
        const char *__s2,
        unsigned __int16 *a3)
{
  unsigned int v3; // w22
  int v7; // w24
  bool v8; // w23
  char *v9; // x8
  __int64 v10; // x9
  char *v11; // x8
  const char *v12; // x0

  v3 = *((_DWORD *)this + 3);
  if ( v3 )
  {
    v7 = 0;
    v8 = 1;
    while ( 1 )
    {
      if ( v3 <= (unsigned __int16)v7 )
        dyld4::PrebuiltLoaderSet::findIndex();
      v9 = (char *)this + *(unsigned int *)((char *)this + 4 * (unsigned __int16)v7 + *((unsigned int *)this + 4));
      v10 = *((unsigned __int16 *)v9 + 4);
      v11 = &v9[v10];
      v12 = (_DWORD)v10 ? v11 : nullptr;
      if ( !_platform_strcmp(v12, __s2) )
        break;
      v8 = ++v7 < v3;
      if ( v3 == v7 )
        return v8;
    }
    *a3 = v7;
  }
  else
  {
    return 0;
  }
  return v8;
}
