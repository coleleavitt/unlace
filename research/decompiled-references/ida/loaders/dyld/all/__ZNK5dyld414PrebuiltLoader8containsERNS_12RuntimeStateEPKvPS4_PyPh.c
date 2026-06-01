__int64 __fastcall dyld4::PrebuiltLoader::contains(
        dyld4::PrebuiltLoader *this,
        dyld4::RuntimeState *a2,
        char *a3,
        const void **a4,
        unsigned __int64 *a5,
        unsigned __int8 *a6)
{
  unsigned __int64 Address; // x0
  unsigned __int64 v12; // x8
  char *v13; // x10
  char *i; // x9
  unsigned __int64 v15; // x11
  unsigned __int64 v16; // x12

  Address = dyld4::PrebuiltLoader::loadAddress(this, a2);
  if ( Address > (unsigned __int64)a3 )
    return 0;
  v12 = 16 * ((unsigned __int64)*((unsigned __int16 *)this + 10) >> 4);
  if ( !v12 )
    return 0;
  v13 = &a3[-Address];
  for ( i = (char *)this + *((unsigned __int16 *)this + 11); ; i += 16 )
  {
    v15 = *(_QWORD *)i & 0x7FFFFFFFFFFFFFFLL;
    if ( (unsigned __int64)v13 >= v15 )
    {
      v16 = *((unsigned int *)i + 3);
      if ( (unsigned __int64)v13 < v15 + v16 )
        break;
    }
    v12 -= 16LL;
    if ( !v12 )
      return 0;
  }
  *a4 = (const void *)(Address + v15);
  *a5 = v16;
  *a6 = (*(_QWORD *)i >> 59) & 7;
  return 1;
}
