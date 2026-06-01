__int64 __fastcall dyld3::deallocateExistingSharedCache(dyld3 *this)
{
  __int64 result; // x0
  __int64 v2; // [xsp+8h] [xbp-8h] BYREF

  v2 = 0;
  result = __shared_region_check_np(&v2);
  if ( !(_DWORD)result )
    return __shared_region_check_np(0);
  return result;
}
