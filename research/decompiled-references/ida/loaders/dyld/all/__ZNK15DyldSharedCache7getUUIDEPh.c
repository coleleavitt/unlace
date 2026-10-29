__n128 __fastcall DyldSharedCache::getUUID(DyldSharedCache *this, __n128 *a2)
{
  __n128 result; // q0

  result = *(__n128 *)((char *)this + 88);
  *a2 = result;
  return result;
}
