char *__fastcall DyldSharedCache::objcProtocolHashTable(DyldSharedCache *this)
{
  __int64 v1; // x8
  char *v2; // x9
  bool v3; // zf
  char *result; // x0
  __int64 v5; // x8

  if ( this && *((_DWORD *)this + 4) >= 0x1D9u )
  {
    v1 = *(_QWORD *)((char *)this + *((_QWORD *)this + 58) + 40);
    v2 = (char *)this + v1;
    v3 = v1 == 0;
  }
  else
  {
    result = (char *)DyldSharedCache::oldObjcOpt(this);
    if ( !result )
      return result;
    v5 = *((int *)result + 9);
    v2 = &result[v5];
    v3 = (_DWORD)v5 == 0;
  }
  if ( v3 )
    return nullptr;
  else
    return v2;
}
