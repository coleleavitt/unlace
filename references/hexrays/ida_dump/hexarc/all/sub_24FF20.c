__int64 **__fastcall sub_24FF20(__int64 **a1, __int64 a2)
{
  __int64 *v2; // r12

  if ( a2 )
  {
    v2 = (__int64 *)j__qalloc_or_throw(224);
    sub_24FC40(v2, a2);
    *a1 = v2;
  }
  else
  {
    *a1 = nullptr;
  }
  return a1;
}
